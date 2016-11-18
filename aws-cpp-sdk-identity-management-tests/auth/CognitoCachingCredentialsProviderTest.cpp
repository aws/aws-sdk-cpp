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
#include <aws/identity-management/auth/PersistentCognitoIdentityProvider.h>
#include <aws/identity-management/auth/CognitoCachingCredentialsProvider.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/testing/mocks/http/MockHttpClient.h>

#include <fstream>

using namespace Aws::Auth;
using namespace Aws::CognitoIdentity;
using namespace Aws::Utils;
using namespace Aws::Utils::Json;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;

static const char* ALLOCATION_TAG = "CognitoCachingCredentialsProviderTest";
static const char* A_HUNDRED_YEARS_FROM_THE_MOMENT_I_WROTE_THIS = "4587757514";
static const char* IDENTITY_1 = "SomeIdentity1";
static const char* ACCESS_KEY_ID_1 = "SomeAccessKeyId1";
static const char* SECRET_KEY_ID_1 = "SomeSecretKeyId1";
static const char* LOGIN_KEY = "LoginOpenIdProvider";
static const char* LOGIN_ID = "OpenIdSample";

class MockPersistentCognitoIdentityProvider : public PersistentCognitoIdentityProvider
{
public:
    MockPersistentCognitoIdentityProvider() : m_identityIdPersisted(false), m_loginsPersisted(false) {}
    bool HasIdentityId() const override { return !m_identityId.empty(); }
    bool HasLogins() const override { return !m_logins.empty(); }
    Aws::String GetIdentityId() const override { return m_identityId; }
    void SetIdentityId(const Aws::String& identityId) { m_identityId = identityId; }
    Aws::Map<Aws::String, LoginAccessTokens> GetLogins() override { return m_logins; }
    void SetLogins(const Aws::Map<Aws::String, LoginAccessTokens>& logins) { m_logins = logins; }
    Aws::String GetAccountId() const override { return m_accountId; }
    void SetAccountId(const Aws::String& accountId) { m_accountId = accountId; }
    Aws::String GetIdentityPoolId() const override { return m_identityPoolId; }
    void SetIdentityPoolId(const Aws::String& identityPoolId) { m_identityPoolId = identityPoolId; }
    void PersistIdentityId(const Aws::String& identityId) override 
    { 
        SetIdentityId(identityId); 
        m_identityIdPersisted = !identityId.empty();

        if (m_identityIdUpdatedCallback)
        {
            m_identityIdUpdatedCallback(*this);
        }
    }

    void PersistLogins(const Aws::Map<Aws::String, LoginAccessTokens>& logins) override
    { 
        SetLogins(logins); 
        m_loginsPersisted = !logins.empty();

        if (m_loginsUpdatedCallback)
        {
            m_loginsUpdatedCallback(*this);
        }
    }

    bool IsIdentityIdPersisted() { return m_identityIdPersisted; }
    bool IsLoginsPersisted() { return m_loginsPersisted; }

private:
    Aws::String m_identityId;
    Aws::Map<Aws::String, LoginAccessTokens> m_logins;
    Aws::String m_accountId;
    Aws::String m_identityPoolId;
    bool m_identityIdPersisted;
    bool m_loginsPersisted;
};

namespace
{
    class CognitoCachingCredentialsProviderTest : public ::testing::Test
    {

    protected:
        std::shared_ptr<CognitoIdentityClient> cognitoIdentityClient;
        std::shared_ptr<MockHttpClient> mockHttpClient;
        std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
        std::shared_ptr<MockPersistentCognitoIdentityProvider> mockIdentityRepository;

        void SetUp()
        {
            // Create a client
            ClientConfiguration config;
            config.scheme = Scheme::HTTP;
            config.connectTimeoutMs = 30000;
            config.requestTimeoutMs = 30000;           

            mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
            mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
            mockHttpClientFactory->SetClient(mockHttpClient);
            SetHttpClientFactory(mockHttpClientFactory);
            cognitoIdentityClient = Aws::MakeShared<CognitoIdentityClient>(ALLOCATION_TAG,
                                                                           Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, "", ""),
                                                                           config);
            mockIdentityRepository = Aws::MakeShared<MockPersistentCognitoIdentityProvider>(ALLOCATION_TAG);
            mockIdentityRepository->SetIdentityPoolId("TestIdentityPool");
            mockIdentityRepository->SetAccountId("598156584");
        }

        void TearDown()
        {
            cognitoIdentityClient = nullptr;
            mockHttpClient = nullptr;
            mockHttpClientFactory = nullptr;
            mockIdentityRepository = nullptr;
        }

        void AddMockGetIdResultToStream(Aws::IOStream& stream, const char* identity = IDENTITY_1)
        {
            stream << "{ \"IdentityId\" : \"" << identity << "\" }";
        }

        void AddMockGetCredentialsForIdentityToStream(Aws::IOStream& stream, const char* identityId = IDENTITY_1, 
            const char* accessKey = ACCESS_KEY_ID_1, const char* secretKey = SECRET_KEY_ID_1, const char* expiry = A_HUNDRED_YEARS_FROM_THE_MOMENT_I_WROTE_THIS)
        {
            stream << "{ \"IdentityId\" : \"" << identityId << "\", \"Credentials\" : { \"AccessKeyId\" : \"" << accessKey
                << "\", \"SecretKey\" : \"" << secretKey << "\", \"Expiration\" : " << expiry << " } }";
        }
    };

    TEST_F(CognitoCachingCredentialsProviderTest, TestAnonymousGetCredentialsNoIdentity)
    {
        std::shared_ptr<HttpRequest> getIdrequest =
                CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getIdResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*getIdrequest));

        getIdResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetIdResultToStream(getIdResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getIdResponse);

        std::shared_ptr<HttpRequest> getCredsrequest =
                CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getCredsResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*getCredsrequest));

        getCredsResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetCredentialsForIdentityToStream(getCredsResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getCredsResponse);

        CognitoCachingAnonymousCredentialsProvider cognitoCachingAnonymousCredentialsProvider(mockIdentityRepository, cognitoIdentityClient);
        AWSCredentials credentials = cognitoCachingAnonymousCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
        //now make sure the caching worked;
        credentials = cognitoCachingAnonymousCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        //this number should not have increased since we should not have made any additional requests.
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(CognitoCachingCredentialsProviderTest, TestAnonymousGetCredentialsHasIdentity)
    {
        std::shared_ptr<HttpRequest> getCredsrequest =
                mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getCredsResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*getCredsrequest));

        getCredsResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetCredentialsForIdentityToStream(getCredsResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getCredsResponse);
        mockIdentityRepository->SetIdentityId(IDENTITY_1);

        CognitoCachingAnonymousCredentialsProvider cognitoCachingAnonymousCredentialsProvider(mockIdentityRepository, cognitoIdentityClient);
        AWSCredentials credentials = cognitoCachingAnonymousCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_FALSE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
        //now make sure the caching worked;
        credentials = cognitoCachingAnonymousCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_FALSE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        //this number should not have increased since we should not have made any additional requests.
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(CognitoCachingCredentialsProviderTest, TestAnonymousGetCredentialsServiceCallsFail)
    {
        std::shared_ptr<HttpRequest> getIdrequest =
                mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getIdResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*getIdrequest));

        getIdResponse->SetResponseCode(HttpResponseCode::BAD_REQUEST);
        getIdResponse->GetResponseBody() << "{ \"_type\" : \"Unknown\" }";

        mockHttpClient->AddResponseToReturn(getIdResponse);

        CognitoCachingAnonymousCredentialsProvider cognitoCachingAnonymousCredentialsProvider(mockIdentityRepository, cognitoIdentityClient);
        AWSCredentials credentials = cognitoCachingAnonymousCredentialsProvider.GetAWSCredentials();
        ASSERT_TRUE(credentials.GetAWSAccessKeyId().empty());
        ASSERT_TRUE(credentials.GetAWSSecretKey().empty());
        ASSERT_TRUE(mockIdentityRepository->GetIdentityId().empty());
        ASSERT_FALSE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());

        //now make sure the caching failed;
        mockHttpClient->AddResponseToReturn(getIdResponse);
        credentials = cognitoCachingAnonymousCredentialsProvider.GetAWSCredentials();
        ASSERT_TRUE(credentials.GetAWSAccessKeyId().empty());
        ASSERT_TRUE(credentials.GetAWSSecretKey().empty());
        ASSERT_TRUE(mockIdentityRepository->GetIdentityId().empty());
        ASSERT_FALSE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        //this number should not have increased since we should not have made any additional requests.
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
    }

    //we only need to hit the happy path here since we already have full coverage from the other tests.
    TEST_F(CognitoCachingCredentialsProviderTest, TestAuthenticatedGetCredentialsNoIdentity)
    {
        std::shared_ptr<HttpRequest> getIdrequest =
                mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getIdResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*getIdrequest));

        getIdResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetIdResultToStream(getIdResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getIdResponse);

        std::shared_ptr<HttpRequest> getCredsrequest =
                mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getCredsResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*getCredsrequest));

        getCredsResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetCredentialsForIdentityToStream(getCredsResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getCredsResponse);
        Aws::Map<Aws::String, LoginAccessTokens> logins;
        LoginAccessTokens loginAccessTokens;
        loginAccessTokens.accessToken = LOGIN_ID;
        logins[LOGIN_KEY] = loginAccessTokens;
        mockIdentityRepository->PersistLogins(logins);

        CognitoCachingAuthenticatedCredentialsProvider cognitoCachingAuthenticatedCredentialsProvider(mockIdentityRepository, cognitoIdentityClient);
        AWSCredentials credentials = cognitoCachingAuthenticatedCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_EQ(1u, mockIdentityRepository->GetLogins().size());
        ASSERT_EQ(LOGIN_ID, mockIdentityRepository->GetLogins()[LOGIN_KEY].accessToken);
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_TRUE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());

        mockHttpClient->GetAllRequestsMade()[0].GetContentBody()->seekg(0, mockHttpClient->GetAllRequestsMade()[0].GetContentBody()->beg);
        JsonValue jsonValue(*mockHttpClient->GetAllRequestsMade()[0].GetContentBody());
        ASSERT_EQ(LOGIN_ID, jsonValue.GetObject("Logins").GetAllObjects()[LOGIN_KEY].AsString());

        //now make sure the caching worked;
        credentials = cognitoCachingAuthenticatedCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_EQ(1u, mockIdentityRepository->GetLogins().size());
        ASSERT_EQ(LOGIN_ID, mockIdentityRepository->GetLogins()[LOGIN_KEY].accessToken);
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_TRUE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
    }

    TEST_F(CognitoCachingCredentialsProviderTest, TestAuthenticatedGetCredentialsLoginCredentialsRefreshedAfterAnonymousIdentityAquired)
    {
        //do an anoymous auth run
        std::shared_ptr<HttpRequest> getIdrequest =
            mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getIdResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*getIdrequest));

        getIdResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetIdResultToStream(getIdResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getIdResponse);

        std::shared_ptr<HttpRequest> getCredsrequest =
            mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        std::shared_ptr<StandardHttpResponse> getCredsResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*getCredsrequest));

        getCredsResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetCredentialsForIdentityToStream(getCredsResponse->GetResponseBody());

        mockHttpClient->AddResponseToReturn(getCredsResponse);        

        CognitoCachingAuthenticatedCredentialsProvider cognitoCachingAuthenticatedCredentialsProvider(mockIdentityRepository, cognitoIdentityClient);
        AWSCredentials credentials = cognitoCachingAuthenticatedCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_EQ(0u, mockIdentityRepository->GetLogins().size());        
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());

        mockHttpClient->GetAllRequestsMade()[0].GetContentBody()->seekg(0, mockHttpClient->GetAllRequestsMade()[0].GetContentBody()->beg);
        JsonValue jsonValue(*mockHttpClient->GetAllRequestsMade()[0].GetContentBody());
        ASSERT_EQ(0u, jsonValue.GetObject("Logins").GetAllObjects().size());

        //make sure the caching worked;
        credentials = cognitoCachingAuthenticatedCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID_1, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID_1, credentials.GetAWSSecretKey());
        ASSERT_EQ(IDENTITY_1, mockIdentityRepository->GetIdentityId());
        ASSERT_EQ(0u, mockIdentityRepository->GetLogins().size());       
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_FALSE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(2u, mockHttpClient->GetAllRequestsMade().size());
        
        //now do an auth run and make sure two things happen.
        //1st make sure that when we pass a new identity, it gets updated in the cache.
        //2nd make sure that adding logins invalidates the credentials cache.
        mockHttpClient->Reset();       
        Aws::String PARENT_ID = "ANewParentIdentityId";
        Aws::String ACCESS_KEY_ID = "AccessKey2";
        Aws::String SECRET_KEY_ID = "SecretKey2";

        getCredsrequest =
            mockHttpClientFactory->CreateHttpRequest(URI("www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        getCredsResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, (*getCredsrequest));

        getCredsResponse->SetResponseCode(HttpResponseCode::OK);
        AddMockGetCredentialsForIdentityToStream(getCredsResponse->GetResponseBody(), PARENT_ID.c_str(), ACCESS_KEY_ID.c_str(), SECRET_KEY_ID.c_str());

        mockHttpClient->AddResponseToReturn(getCredsResponse);

        Aws::Map<Aws::String, LoginAccessTokens> logins;
        LoginAccessTokens loginAccessTokens;
        loginAccessTokens.accessToken = LOGIN_ID;
        logins[LOGIN_KEY] = loginAccessTokens;
        mockIdentityRepository->PersistLogins(logins);        
        credentials = cognitoCachingAuthenticatedCredentialsProvider.GetAWSCredentials();

        ASSERT_EQ(ACCESS_KEY_ID, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID, credentials.GetAWSSecretKey());
        ASSERT_EQ(PARENT_ID, mockIdentityRepository->GetIdentityId());
        ASSERT_EQ(1u, mockIdentityRepository->GetLogins().size());
        ASSERT_EQ(LOGIN_ID, mockIdentityRepository->GetLogins()[LOGIN_KEY].accessToken);
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_TRUE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());

        mockHttpClient->GetAllRequestsMade()[0].GetContentBody()->seekg(0, mockHttpClient->GetAllRequestsMade()[0].GetContentBody()->beg);
        jsonValue = JsonValue(*mockHttpClient->GetAllRequestsMade()[0].GetContentBody());
        ASSERT_EQ(LOGIN_ID, jsonValue.GetObject("Logins").GetAllObjects()[LOGIN_KEY].AsString());

        //now make sure the caching worked;
        credentials = cognitoCachingAuthenticatedCredentialsProvider.GetAWSCredentials();
        ASSERT_EQ(ACCESS_KEY_ID, credentials.GetAWSAccessKeyId());
        ASSERT_EQ(SECRET_KEY_ID, credentials.GetAWSSecretKey());
        ASSERT_EQ(PARENT_ID, mockIdentityRepository->GetIdentityId());
        ASSERT_EQ(1u, mockIdentityRepository->GetLogins().size());
        ASSERT_EQ(LOGIN_ID, mockIdentityRepository->GetLogins()[LOGIN_KEY].accessToken);
        ASSERT_TRUE(mockIdentityRepository->IsIdentityIdPersisted());
        ASSERT_TRUE(mockIdentityRepository->IsLoginsPersisted());
        ASSERT_EQ(1u, mockHttpClient->GetAllRequestsMade().size());

    }
}


