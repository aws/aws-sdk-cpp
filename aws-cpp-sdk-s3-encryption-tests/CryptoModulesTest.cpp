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
#include <aws/core/client/ClientConfiguration.h>
#include <aws/s3-encryption/modules/CryptoModuleFactory.h>
#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/s3-encryption/CryptoConfiguration.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/s3/model/DeleteObjectRequest.h>

class MockS3Client : public Aws::S3::S3Client
{
public:
	MockS3Client(Aws::Client::ClientConfiguration clientConfiguration = Aws::Client::ClientConfiguration()) :
		S3Client(clientConfiguration), m_putObjectCalled(0), m_getObjectCalled(0), m_body(nullptr)
	{
	}

	Aws::S3::Model::PutObjectOutcome PutObject(const Aws::S3::Model::PutObjectRequest& request) const
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
		if (m_body != nullptr)
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
};

namespace
{
    static const char* ALLOCATION_TAG = "CryptoModuleTests";

    using namespace Aws::Auth;
    using namespace Aws::Client;
    using namespace Aws::S3Encryption;
    using namespace Aws::S3Encryption::Modules;
    using namespace Aws::S3Encryption::Materials;
    using namespace Aws::S3::Model;
    using namespace Aws::S3;
    class CryptoModulesTest : public ::testing::Test
    {
    protected:
    };

	//not actual tests, this is just for debugging. Will not be pushed to master.
    TEST_F(CryptoModulesTest, CryptoFactoryInitializationTest)
    {
		
        SimpleEncryptionMaterials simpleMaterials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
        CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);

        ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        config.scheme = Aws::Http::Scheme::HTTPS;


        ProfileConfigFileAWSCredentialsProvider credentials;
        S3Client client(credentials.GetAWSCredentials(), config);

        CryptoModuleFactory factory;
        auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>("Some Tag", simpleMaterials), cryptoConfig, client);
       
        PutObjectRequest request;
        request.SetBucket("conors-test");
        std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("CryptoModuleTest");
		Aws::String body = "This is a test message for encryption and decryption. It doesn't actually matter if it is encrypted or not.";
		*objectStream << body;
        objectStream->flush();
        request.SetBody(objectStream);
        request.SetContentLength(static_cast<long>(request.GetBody()->tellp()));
        request.SetContentType("text/plain");
        request.SetKey("object-key");
        
        PutObjectOutcome putOutcome = module->PutObjectSecurely(request);



		//use a different module to decrypt
		auto decryptionModule = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>("Some Tag", simpleMaterials), cryptoConfig, client);
		GetObjectRequest getRequest;
		getRequest.SetBucket("conors-test");
		getRequest.SetKey("object-key");
		Aws::IOStreamFactory myFactory;
		getRequest.SetResponseStreamFactory(myFactory);

		GetObjectOutcome getOutcome = decryptionModule->GetObjectSecurely(getRequest);
		/*Aws::StringStream& bodyOutcome = getOutcome.GetResult().GetBody();
		Aws::StringStream stringStreamBody(bodyOutcome);
		ASSERT_EQ(getOutcome.GetResult().GetBody().rdbuf(), body);*/

        DeleteObjectRequest deleteRequest;
        deleteRequest.WithBucket("conors-test");
        deleteRequest.WithKey("object-key");
        DeleteObjectOutcome outcomeObject = client.DeleteObject(deleteRequest);
    }

	TEST_F(CryptoModulesTest, PutObjectSecurelyTest)
	{

		SimpleEncryptionMaterials simpleMaterials(Aws::Utils::Crypto::SymmetricCipher::GenerateKey());
		CryptoConfiguration cryptoConfig(StorageMethod::METADATA, CryptoMode::ENCRYPTION_ONLY);
		MockS3Client client;

		CryptoModuleFactory factory;
		auto module = factory.FetchCryptoModule(Aws::MakeShared<SimpleEncryptionMaterials>("Some Tag", simpleMaterials), cryptoConfig, client);

		PutObjectRequest request;
		request.SetBucket("conors-test");
		std::shared_ptr<Aws::IOStream> objectStream = Aws::MakeShared<Aws::StringStream>("CryptoModuleTest");
		Aws::String body = "This is a test message for encryption and decryption. It doesn't actually matter if it is encrypted or not.";
		*objectStream << body;
		objectStream->flush();
		request.SetBody(objectStream);
		request.SetContentLength(static_cast<long>(request.GetBody()->tellp()));
		request.SetContentType("text/plain");
		request.SetKey("object-key");

		PutObjectOutcome putOutcome = module->PutObjectSecurely(request);
	}
}