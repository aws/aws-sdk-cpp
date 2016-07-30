/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/external/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/s3-encryption/modules/CryptoModuleFactory.h>
#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/s3-encryption/CryptoConfiguration.h>
#include <aws/s3-encryption/handlers/InstructionFileHandler.h>
#include <aws/s3-encryption/ContentCryptoScheme.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>

#include <aws/kms/KMSClient.h>
#include <aws/kms/model/EncryptRequest.h>
#include <aws/kms/model/DecryptRequest.h>
#include <aws/core/utils/HashingUtils.h>

namespace
{
    static const char* const Allocation_Tag = "CryptoModuleTests";
	static const char* const BUCKET_TEST_NAME = "testbucket";
	static const char* const KEY_TEST_NAME = "testKey";
	static const char* const INSTRUCTION_KEY_NAME = "testKey.instruction";
	static const char* const BODY_STREAM_TEST = "This is a test message for encryption and decryption. Is this always six characters? maybe more";
	static Aws::String TEST_CMK_ID = "ARN:SOME_COMBINATION_OF_LETTERS_AND_NUMBERS";
	//For debugging only
	static const char* const LIVE_BUCKET_NAME = "conors-test";

    using namespace Aws::Auth;
    using namespace Aws::Client;
	using namespace Aws::S3Encryption;
	using namespace Aws::S3Encryption::ContentCryptoSchemeMapper;
	using namespace Aws::S3Encryption::KeyWrapAlgorithmMapper;
    using namespace Aws::S3Encryption::Modules;
    using namespace Aws::S3Encryption::Materials;
    using namespace Aws::S3::Model;
    using namespace Aws::S3;

    class CryptoModulesTest : public ::testing::Test {};

	TEST_F(CryptoModulesTest, EOModuleLiveTestWithKMS)
	{
		KMSEncryptionMaterials materials("arn:aws:kms:us-east-1:413075755375:key/2752fae8-2cb4-4b30-aed0-6267e6c9607f");
		CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);

		ClientConfiguration config;
		config.region = Aws::Region::US_EAST_1;
		config.scheme = Aws::Http::Scheme::HTTPS;

		ProfileConfigFileAWSCredentialsProvider credentials;
		S3Client client(credentials.GetAWSCredentials(), config);

		CryptoModuleFactory factory;
		auto module = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(Allocation_Tag, materials), cryptoConfig, client);

		PutObjectRequest request;
		request.SetBucket(LIVE_BUCKET_NAME);
		std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(Allocation_Tag);
		*objectStream << BODY_STREAM_TEST;
		objectStream->flush();
		request.SetBody(objectStream);
		request.SetKey(KEY_TEST_NAME);

		PutObjectOutcome putOutcome = module->PutObjectSecurely(request);

		auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>(Allocation_Tag, materials), cryptoConfig, client);
		GetObjectRequest getRequest;
		getRequest.SetBucket(LIVE_BUCKET_NAME);
		getRequest.SetKey(KEY_TEST_NAME);

		GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest);
		Aws::OStream& ostream = getOutcome.GetResult().GetBody();
		Aws::OStringStream ss;
		ss << ostream.rdbuf();
		ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);

		DeleteObjectRequest deleteRequest;
		deleteRequest.WithBucket(LIVE_BUCKET_NAME);
		deleteRequest.WithKey(KEY_TEST_NAME);
		DeleteObjectOutcome outcomeObject = client.DeleteObject(deleteRequest);
	}

    TEST_F(CryptoModulesTest, EOModuleLiveTestWithSimpleEncryptionMaterialsAndInstructionFile)
    {	
		SimpleEncryptionMaterials materials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
		CryptoConfiguration cryptoConfig(StorageMethod::INSTRUCTION_FILE, CryptoMode::ENCRYPTION_ONLY);

		ClientConfiguration config;
		config.region = Aws::Region::US_EAST_1;
		config.scheme = Aws::Http::Scheme::HTTPS;

		ProfileConfigFileAWSCredentialsProvider credentials;
		S3Client client(credentials.GetAWSCredentials(), config);

		CryptoModuleFactory factory;
		auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(Allocation_Tag, materials), cryptoConfig, client);

		PutObjectRequest request;
		request.SetBucket(LIVE_BUCKET_NAME);
		std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(Allocation_Tag);
		*objectStream << BODY_STREAM_TEST;
		objectStream->flush();
		request.SetBody(objectStream);
		request.SetKey(KEY_TEST_NAME);

		PutObjectOutcome putOutcome = module->PutObjectSecurely(request);

		auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(Allocation_Tag, materials), cryptoConfig, client);
		GetObjectRequest getRequest;
		getRequest.SetBucket(LIVE_BUCKET_NAME);
		getRequest.SetKey(KEY_TEST_NAME);

		GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest);
		Aws::OStream& ostream = getOutcome.GetResult().GetBody();
		Aws::OStringStream ss;
		ss << ostream.rdbuf();
		ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);

		DeleteObjectRequest deleteRequest;
		deleteRequest.WithBucket(LIVE_BUCKET_NAME);
		deleteRequest.WithKey(KEY_TEST_NAME);
		DeleteObjectOutcome outcomeObject = client.DeleteObject(deleteRequest);

		DeleteObjectRequest deleteInstructionFile;
		deleteInstructionFile.WithBucket(LIVE_BUCKET_NAME);
		deleteInstructionFile.WithKey(INSTRUCTION_KEY_NAME);
		DeleteObjectOutcome deleteInstruction = client.DeleteObject(deleteInstructionFile);
    }

	//This test currently fails because the output does not match.
	TEST_F(CryptoModulesTest, AEModuleLiveTestWithKMS)
	{
		SimpleEncryptionMaterials materials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
		CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::AUTHENTICATED_ENCRYPTION);

		ClientConfiguration config;
		config.region = Aws::Region::US_EAST_1;
		config.scheme = Aws::Http::Scheme::HTTPS;

		ProfileConfigFileAWSCredentialsProvider credentials;
		S3Client client(credentials.GetAWSCredentials(), config);

		CryptoModuleFactory factory;
		auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(Allocation_Tag, materials), cryptoConfig, client);

		PutObjectRequest request;
		request.SetBucket(LIVE_BUCKET_NAME);
		std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(Allocation_Tag);
		*objectStream << BODY_STREAM_TEST;
		objectStream->flush();
		request.SetBody(objectStream);
		request.SetKey(KEY_TEST_NAME);

		PutObjectOutcome putOutcome = module->PutObjectSecurely(request);

		auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(Allocation_Tag, materials), cryptoConfig, client);
		GetObjectRequest getRequest;
		getRequest.SetBucket(LIVE_BUCKET_NAME);
		getRequest.SetKey(KEY_TEST_NAME);

		GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest);
		Aws::OStream& ostream = getOutcome.GetResult().GetBody();
		Aws::OStringStream ss;
		ss << ostream.rdbuf();
		ASSERT_STREQ(ss.str().c_str(), BODY_STREAM_TEST);

		DeleteObjectRequest deleteRequest;
		deleteRequest.WithBucket(LIVE_BUCKET_NAME);
		deleteRequest.WithKey(KEY_TEST_NAME);
		DeleteObjectOutcome outcomeObject = client.DeleteObject(deleteRequest);
	}

	TEST_F(CryptoModulesTest, EOPutObjectSecurelyFailureTest)
	{
		SimpleEncryptionMaterials simpleMaterials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
		CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);
		S3Client s3Client;

		CryptoModuleFactory factory;
		auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>("Some Tag", simpleMaterials), cryptoConfig, s3Client);

		PutObjectRequest request;
		request.SetBucket(BUCKET_TEST_NAME);
		std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(Allocation_Tag);
		Aws::String body = BODY_STREAM_TEST;
		*objectStream << body;
		objectStream->flush();
		request.SetBody(objectStream);
		request.SetContentLength(static_cast<long>(request.GetBody()->tellp()));
		request.SetContentType("text/plain");
		request.SetKey(KEY_TEST_NAME);

		PutObjectOutcome putOutcome = module->PutObjectSecurely(request);

		ASSERT_FALSE(putOutcome.IsSuccess());
	}
}