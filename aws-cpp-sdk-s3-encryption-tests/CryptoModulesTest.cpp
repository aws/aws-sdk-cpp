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

namespace
{
    static const char* const Allocation_Tag = "CryptoModuleTests";
	static const char* const BUCKET_TEST_NAME = "testbucket";
	static const char* const KEY_TEST_NAME = "testkey";
	static const char* const INSTRUCTION_KEY_NAME = "testkey.instruction";
	static const char* const BODY_STREAM_TEST = "This is a test message for encryption and decryption.";
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

	class MockS3Client : public Aws::S3::S3Client
	{
	public:
		MockS3Client(Aws::Client::ClientConfiguration clientConfiguration = Aws::Client::ClientConfiguration()) :
			S3Client(clientConfiguration), m_putObjectCalled(0), m_getObjectCalled(0), m_body(nullptr)
		{
		}

		Aws::S3::Model::PutObjectOutcome PutObject(const Aws::S3::Model::PutObjectRequest& request) const override
		{
			m_putObjectCalled++;
			m_metadata = request.GetMetadata();
			m_body = request.GetBody();
			Aws::S3::Model::PutObjectOutcome outcome;
			Aws::S3::Model::PutObjectResult result(outcome.GetResultWithOwnership());
			return result;
		}

		Aws::S3::Model::GetObjectOutcome GetObject(const Aws::S3::Model::GetObjectRequest& request) const override
		{
			m_getObjectCalled++;
			auto factory = request.GetResponseStreamFactory();
			Aws::Utils::Stream::ResponseStream responseStream(factory);
			if (m_body != nullptr || m_instructionBody != nullptr)
			{
				responseStream.GetUnderlyingStream() << m_body->rdbuf();
			}
			Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream> awsStream(std::move(responseStream), Aws::Http::HeaderValueCollection());
			Aws::S3::Model::GetObjectResult getObjectResult(std::move(awsStream));
			getObjectResult.SetMetadata(m_metadata);
			return Aws::S3::Model::GetObjectOutcome(std::move(getObjectResult));
		}

		mutable size_t m_putObjectCalled;
		mutable size_t m_getObjectCalled;
		mutable Aws::Map<Aws::String, Aws::String> m_metadata;
		mutable std::shared_ptr<Aws::IOStream> m_body;
		mutable std::shared_ptr<Aws::IOStream> m_instructionBody;
	};

	//class MockKMSClient : public Aws::KMS::KMSClient
	//{
	//public:
	//	MockKMSClient(Aws::Client::ClientConfiguration clientConfiguration = Aws::Client::ClientConfiguration()) :
	//		Aws::KMS::KMSClient(clientConfiguration), m_encryptCalledCount(0), m_decryptCalledCount(0)
	//	{
	//	}

	//	Aws::KMS::Model::EncryptOutcome Encrypt(const Aws::KMS::Model::EncryptRequest&) const override
	//	{
	//		m_encryptCalledCount++;
	//		return PopulateSuccessfulEncryptOutcome();
	//	}
	//	Aws::KMS::Model::DecryptOutcome Decrypt(const Aws::KMS::Model::DecryptRequest&) const override
	//	{
	//		m_decryptCalledCount++;
	//		return PopulateSuccessfulDecryptOutcome();
	//	}

	//	void PopulateFields(const Aws::String& customerMasterKeyID, const Aws::Utils::CryptoBuffer& encryptedKey, const Aws::Utils::CryptoBuffer& decryptedKey)
	//	{
	//		m_customerMasterKeyID = customerMasterKeyID;
	//		m_encryptedKey = encryptedKey;
	//		m_decryptedKey = decryptedKey;
	//	}

	//	//member varibles need to be mutable since Encrypt and Decrypt are const functions
	//	mutable size_t m_encryptCalledCount;
	//	mutable size_t m_decryptCalledCount;
	//	Aws::String m_customerMasterKeyID;
	//	Aws::Utils::CryptoBuffer m_encryptedKey;
	//	Aws::Utils::CryptoBuffer m_decryptedKey;

	//private:
	//	Aws::KMS::Model::EncryptOutcome PopulateSuccessfulEncryptOutcome() const
	//	{
	//		Aws::KMS::Model::EncryptOutcome outcome;
	//		Aws::KMS::Model::EncryptResult result(outcome.GetResult());
	//		result.SetCiphertextBlob(m_encryptedKey);
	//		result.SetKeyId(m_customerMasterKeyID);
	//		return result;
	//	}

	//	Aws::KMS::Model::DecryptOutcome PopulateSuccessfulDecryptOutcome() const
	//	{
	//		Aws::KMS::Model::DecryptOutcome outcome;
	//		Aws::KMS::Model::DecryptResult result(outcome.GetResult());
	//		result.SetPlaintext(m_decryptedKey);
	//		result.SetKeyId(m_customerMasterKeyID);
	//		return result;
	//	}
	//};

	//static void InitMockKMSClient(std::shared_ptr<MockKMSClient>& client)
	//{
	//	client->PopulateFields(TEST_CMK_ID, Aws::Utils::Crypto::SymmetricCipher::GenerateKey(), Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
	//}

    class CryptoModulesTest : public ::testing::Test {};

	//not actual tests, this is just for debugging. Will not be pushed to master.
	TEST_F(CryptoModulesTest, EOModulePutGetSecurelyOperationsLiveTestMetadata)
	{
		SimpleEncryptionMaterials simpleMaterials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
		CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);

		ClientConfiguration config;
		config.region = Aws::Region::US_EAST_1;
		config.scheme = Aws::Http::Scheme::HTTPS;

		ProfileConfigFileAWSCredentialsProvider credentials;
		S3Client client(credentials.GetAWSCredentials(), config);

		CryptoModuleFactory factory;
		auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(Allocation_Tag, simpleMaterials), cryptoConfig, client);

		PutObjectRequest request;
		request.SetBucket(LIVE_BUCKET_NAME);
		std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(Allocation_Tag);
		*objectStream << BODY_STREAM_TEST;
		objectStream->flush();
		request.SetBody(objectStream);
		request.SetKey(KEY_TEST_NAME);

		PutObjectOutcome putOutcome = module->PutObjectSecurely(request);

		//use a different module to decrypt
		auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(Allocation_Tag, simpleMaterials), cryptoConfig, client);
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

    TEST_F(CryptoModulesTest, EOModulePutGetSecurelyOperationsLiveTestInstructionFile)
    {	
        SimpleEncryptionMaterials simpleMaterials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);

        ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        config.scheme = Aws::Http::Scheme::HTTPS;

        ProfileConfigFileAWSCredentialsProvider credentials;
        S3Client client(credentials.GetAWSCredentials(), config);

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(Allocation_Tag, simpleMaterials), cryptoConfig, client);
       
        PutObjectRequest request;
        request.SetBucket(LIVE_BUCKET_NAME);
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(Allocation_Tag);
		*objectStream << BODY_STREAM_TEST;
        objectStream->flush();
		request.SetBody(objectStream);
        request.SetKey(KEY_TEST_NAME);
		
        PutObjectOutcome putOutcome = module->PutObjectSecurely(request);

		auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(Allocation_Tag, simpleMaterials), cryptoConfig, client);
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

		DeleteObjectRequest instructionDelete;
		instructionDelete.WithBucket(LIVE_BUCKET_NAME);
		instructionDelete.WithKey(INSTRUCTION_KEY_NAME);
		DeleteObjectOutcome instructionOutcome = client.DeleteObject(instructionDelete);
    }

	TEST_F(CryptoModulesTest, AEModulePutGetSecurelyOperationsLiveTestMetadata)
    {	
		SimpleEncryptionMaterials simpleMaterials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
		CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::AUTHENTICATED_ENCRYPTION);

		ClientConfiguration config;
		config.region = Aws::Region::US_EAST_1;
		config.scheme = Aws::Http::Scheme::HTTPS;

		ProfileConfigFileAWSCredentialsProvider credentials;
		S3Client client(credentials.GetAWSCredentials(), config);

		CryptoModuleFactory factory;
		auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(Allocation_Tag, simpleMaterials), cryptoConfig, client);

		PutObjectRequest request;
		request.SetBucket(LIVE_BUCKET_NAME);
		std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(Allocation_Tag);
		*objectStream << BODY_STREAM_TEST;
		objectStream->flush();
		request.SetBody(objectStream);
		request.SetKey(KEY_TEST_NAME);

		PutObjectOutcome putOutcome = module->PutObjectSecurely(request);

		//use a different module to decrypt
		auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>(Allocation_Tag, simpleMaterials), cryptoConfig, client);
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
	//Mock Clients currently not working because of wrapping the stream with the cipher. Need to change mocks
	//TO DO: Change Mocks
	//TEST_F(CryptoModulesTest, EOPutObjectSecurelyWithMetadataSuccessTest)
	//{
	//	SimpleEncryptionMaterials simpleMaterials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
	//	CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);
	//	MockS3Client s3Client;

	//	CryptoModuleFactory factory;
	//	auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>("Some Tag", simpleMaterials), cryptoConfig, s3Client);

	//	PutObjectRequest request;
	//	request.SetBucket(BUCKET_TEST_NAME);
	//	std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(Allocation_Tag);
	//	Aws::String body = BODY_STREAM_TEST;
	//	*objectStream << body;
	//	objectStream->flush();
	//	request.SetBody(objectStream);
	//	request.SetContentLength(static_cast<long>(request.GetBody()->tellp()));
	//	request.SetContentType("text/plain");
	//	request.SetKey(KEY_TEST_NAME);

	//	PutObjectOutcome putOutcome = module->PutObjectSecurely(request);

	//	//Get Object normaly to ensure decryption
	//	GetObjectRequest getRequest;
	//	getRequest.WithBucket(BUCKET_TEST_NAME);
	//	getRequest.WithKey(KEY_TEST_NAME);
	//	GetObjectOutcome getOutcome = s3Client.GetObject(getRequest);
	//	Aws::OStringStream stringResultBody;
	//	stringResultBody << getOutcome.GetResult().GetBody().rdbuf();

	//	ASSERT_STRNE(stringResultBody.str().c_str(), BODY_STREAM_TEST);
	//	ASSERT_EQ(s3Client.m_putObjectCalled, 1u);
	//	ASSERT_EQ(s3Client.m_getObjectCalled, 1u);
	//}

	//TEST_F(CryptoModulesTest, EOPutObjectSecurelyWithInstructionFileSuccessTest)
	//{
	//	SimpleEncryptionMaterials simpleMaterials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
	//	CryptoConfiguration cryptoConfig(StorageMethod::INSTRUCTION_FILE, CryptoMode::ENCRYPTION_ONLY);
	//	MockS3Client s3Client;

	//	CryptoModuleFactory factory;
	//	auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>("Some Tag", simpleMaterials), cryptoConfig, s3Client);

	//	PutObjectRequest request;
	//	request.SetBucket(BUCKET_TEST_NAME);
	//	std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(Allocation_Tag);
	//	Aws::String body = BODY_STREAM_TEST;
	//	*objectStream << body;
	//	objectStream->flush();
	//	request.SetBody(objectStream);
	//	request.SetContentLength(static_cast<long>(request.GetBody()->tellp()));
	//	request.SetContentType("text/plain");
	//	request.SetKey(KEY_TEST_NAME);

	//	PutObjectOutcome putOutcome = module->PutObjectSecurely(request);

	//	//Getting Object here using the mock client
	//	GetObjectRequest getRequest;
	//	getRequest.WithBucket(BUCKET_TEST_NAME);
	//	getRequest.WithKey(KEY_TEST_NAME);
	//	GetObjectOutcome getOutcome = s3Client.GetObject(getRequest);
	//	Aws::OStringStream stringResultBody;
	//	stringResultBody << getOutcome.GetResult().GetBody().rdbuf();

	//	ASSERT_STRNE(stringResultBody.str().c_str(), BODY_STREAM_TEST);
	//	ASSERT_EQ(s3Client.m_putObjectCalled, 2u);
	//	ASSERT_EQ(s3Client.m_getObjectCalled, 1u);
	//}

	//TEST_F(CryptoModulesTest, EOPutObjectSecurelyWithKMSEncryptionMaterials)
	//{
	//	auto kmsClient = Aws::MakeShared<MockKMSClient>(Allocation_Tag, ClientConfiguration());
	//	InitMockKMSClient(kmsClient);
	//	KMSEncryptionMaterials kmsMaterials(TEST_CMK_ID, kmsClient);
	//	
	//	CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);
	//	MockS3Client s3Client;

	//	CryptoModuleFactory factory;
	//	auto module = factory.FetchCryptoModule(Aws::MakeShared<KMSEncryptionMaterials>("Some Tag", kmsMaterials), cryptoConfig, s3Client);

	//	PutObjectRequest request;
	//	request.SetBucket(BUCKET_TEST_NAME);
	//	std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>(Allocation_Tag);
	//	Aws::String body = BODY_STREAM_TEST;
	//	*objectStream << body;
	//	objectStream->flush();
	//	request.SetBody(objectStream);
	//	request.SetContentLength(static_cast<long>(request.GetBody()->tellp()));
	//	request.SetContentType("text/plain");
	//	request.SetKey(KEY_TEST_NAME);

	//	PutObjectOutcome putOutcome = module->PutObjectSecurely(request);

	//	//Get Object normaly to ensure decryption
	//	GetObjectRequest getRequest;
	//	getRequest.WithBucket(BUCKET_TEST_NAME);
	//	getRequest.WithKey(KEY_TEST_NAME);
	//	GetObjectOutcome getOutcome = s3Client.GetObject(getRequest);
	//	Aws::OStringStream stringResultBody;
	//	stringResultBody << getOutcome.GetResult().GetBody().rdbuf();

	//	ASSERT_STRNE(stringResultBody.str().c_str(), BODY_STREAM_TEST);
	//	ASSERT_EQ(s3Client.m_putObjectCalled, 1u);
	//	ASSERT_EQ(s3Client.m_getObjectCalled, 1u);
	//}

	TEST_F(CryptoModulesTest, EOPutObjectSecurelyFailureTest)
	{
		SimpleEncryptionMaterials simpleMaterials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
		CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);
		S3Client s3Client;

		CryptoModuleFactory factory;
		auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>("Some Tag", simpleMaterials), cryptoConfig, s3Client);

		PutObjectRequest request;
		request.SetBucket(LIVE_BUCKET_NAME);
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