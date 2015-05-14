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
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/cognito-identity/CognitoIdentityEndpoint.h>
#include <aws/cognito-identity/CognitoIdentityErrorMarshaller.h>
#include <aws/cognito-identity/model/CreateIdentityPoolRequest.h>
#include <aws/cognito-identity/model/DeleteIdentityPoolRequest.h>
#include <aws/cognito-identity/model/DescribeIdentityRequest.h>
#include <aws/cognito-identity/model/DescribeIdentityPoolRequest.h>
#include <aws/cognito-identity/model/GetCredentialsForIdentityRequest.h>
#include <aws/cognito-identity/model/GetIdRequest.h>
#include <aws/cognito-identity/model/GetIdentityPoolRolesRequest.h>
#include <aws/cognito-identity/model/GetOpenIdTokenRequest.h>
#include <aws/cognito-identity/model/GetOpenIdTokenForDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/ListIdentitiesRequest.h>
#include <aws/cognito-identity/model/ListIdentityPoolsRequest.h>
#include <aws/cognito-identity/model/LookupDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/MergeDeveloperIdentitiesRequest.h>
#include <aws/cognito-identity/model/SetIdentityPoolRolesRequest.h>
#include <aws/cognito-identity/model/UnlinkDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/UnlinkIdentityRequest.h>
#include <aws/cognito-identity/model/UpdateIdentityPoolRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CognitoIdentity;
using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "cognito-identity";
static const char* ALLOCATION_TAG = "CognitoIdentityClient";

CognitoIdentityClient::CognitoIdentityClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoIdentityClient::~CognitoIdentityClient()
{
}

void CognitoIdentityClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << CognitoIdentityEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateIdentityPoolOutcome CognitoIdentityClient::CreateIdentityPool(const CreateIdentityPoolRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateIdentityPoolOutcome(CreateIdentityPoolResult(outcome.GetResult()));
  }
  else
  {
    return CreateIdentityPoolOutcome(outcome.GetError());
  }
}

CreateIdentityPoolOutcomeCallable CognitoIdentityClient::CreateIdentityPoolCallable(const CreateIdentityPoolRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::CreateIdentityPool, this, request);
}

void CognitoIdentityClient::CreateIdentityPoolAsync(const CreateIdentityPoolRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::CreateIdentityPoolAsyncHelper, this, request);
}

void CognitoIdentityClient::CreateIdentityPoolAsyncHelper(const CreateIdentityPoolRequest& request) const
{
  m_onCreateIdentityPoolOutcomeReceived(this, request, CreateIdentityPool(request));
}

DeleteIdentityPoolOutcome CognitoIdentityClient::DeleteIdentityPool(const DeleteIdentityPoolRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteIdentityPoolOutcome(NoResult());
  }
  else
  {
    return DeleteIdentityPoolOutcome(outcome.GetError());
  }
}

DeleteIdentityPoolOutcomeCallable CognitoIdentityClient::DeleteIdentityPoolCallable(const DeleteIdentityPoolRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::DeleteIdentityPool, this, request);
}

void CognitoIdentityClient::DeleteIdentityPoolAsync(const DeleteIdentityPoolRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::DeleteIdentityPoolAsyncHelper, this, request);
}

void CognitoIdentityClient::DeleteIdentityPoolAsyncHelper(const DeleteIdentityPoolRequest& request) const
{
  m_onDeleteIdentityPoolOutcomeReceived(this, request, DeleteIdentityPool(request));
}

DescribeIdentityOutcome CognitoIdentityClient::DescribeIdentity(const DescribeIdentityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeIdentityOutcome(DescribeIdentityResult(outcome.GetResult()));
  }
  else
  {
    return DescribeIdentityOutcome(outcome.GetError());
  }
}

DescribeIdentityOutcomeCallable CognitoIdentityClient::DescribeIdentityCallable(const DescribeIdentityRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::DescribeIdentity, this, request);
}

void CognitoIdentityClient::DescribeIdentityAsync(const DescribeIdentityRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::DescribeIdentityAsyncHelper, this, request);
}

void CognitoIdentityClient::DescribeIdentityAsyncHelper(const DescribeIdentityRequest& request) const
{
  m_onDescribeIdentityOutcomeReceived(this, request, DescribeIdentity(request));
}

DescribeIdentityPoolOutcome CognitoIdentityClient::DescribeIdentityPool(const DescribeIdentityPoolRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeIdentityPoolOutcome(DescribeIdentityPoolResult(outcome.GetResult()));
  }
  else
  {
    return DescribeIdentityPoolOutcome(outcome.GetError());
  }
}

DescribeIdentityPoolOutcomeCallable CognitoIdentityClient::DescribeIdentityPoolCallable(const DescribeIdentityPoolRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::DescribeIdentityPool, this, request);
}

void CognitoIdentityClient::DescribeIdentityPoolAsync(const DescribeIdentityPoolRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::DescribeIdentityPoolAsyncHelper, this, request);
}

void CognitoIdentityClient::DescribeIdentityPoolAsyncHelper(const DescribeIdentityPoolRequest& request) const
{
  m_onDescribeIdentityPoolOutcomeReceived(this, request, DescribeIdentityPool(request));
}

GetCredentialsForIdentityOutcome CognitoIdentityClient::GetCredentialsForIdentity(const GetCredentialsForIdentityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetCredentialsForIdentityOutcome(GetCredentialsForIdentityResult(outcome.GetResult()));
  }
  else
  {
    return GetCredentialsForIdentityOutcome(outcome.GetError());
  }
}

GetCredentialsForIdentityOutcomeCallable CognitoIdentityClient::GetCredentialsForIdentityCallable(const GetCredentialsForIdentityRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::GetCredentialsForIdentity, this, request);
}

void CognitoIdentityClient::GetCredentialsForIdentityAsync(const GetCredentialsForIdentityRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::GetCredentialsForIdentityAsyncHelper, this, request);
}

void CognitoIdentityClient::GetCredentialsForIdentityAsyncHelper(const GetCredentialsForIdentityRequest& request) const
{
  m_onGetCredentialsForIdentityOutcomeReceived(this, request, GetCredentialsForIdentity(request));
}

GetIdOutcome CognitoIdentityClient::GetId(const GetIdRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetIdOutcome(GetIdResult(outcome.GetResult()));
  }
  else
  {
    return GetIdOutcome(outcome.GetError());
  }
}

GetIdOutcomeCallable CognitoIdentityClient::GetIdCallable(const GetIdRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::GetId, this, request);
}

void CognitoIdentityClient::GetIdAsync(const GetIdRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::GetIdAsyncHelper, this, request);
}

void CognitoIdentityClient::GetIdAsyncHelper(const GetIdRequest& request) const
{
  m_onGetIdOutcomeReceived(this, request, GetId(request));
}

GetIdentityPoolRolesOutcome CognitoIdentityClient::GetIdentityPoolRoles(const GetIdentityPoolRolesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetIdentityPoolRolesOutcome(GetIdentityPoolRolesResult(outcome.GetResult()));
  }
  else
  {
    return GetIdentityPoolRolesOutcome(outcome.GetError());
  }
}

GetIdentityPoolRolesOutcomeCallable CognitoIdentityClient::GetIdentityPoolRolesCallable(const GetIdentityPoolRolesRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::GetIdentityPoolRoles, this, request);
}

void CognitoIdentityClient::GetIdentityPoolRolesAsync(const GetIdentityPoolRolesRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::GetIdentityPoolRolesAsyncHelper, this, request);
}

void CognitoIdentityClient::GetIdentityPoolRolesAsyncHelper(const GetIdentityPoolRolesRequest& request) const
{
  m_onGetIdentityPoolRolesOutcomeReceived(this, request, GetIdentityPoolRoles(request));
}

GetOpenIdTokenOutcome CognitoIdentityClient::GetOpenIdToken(const GetOpenIdTokenRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetOpenIdTokenOutcome(GetOpenIdTokenResult(outcome.GetResult()));
  }
  else
  {
    return GetOpenIdTokenOutcome(outcome.GetError());
  }
}

GetOpenIdTokenOutcomeCallable CognitoIdentityClient::GetOpenIdTokenCallable(const GetOpenIdTokenRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::GetOpenIdToken, this, request);
}

void CognitoIdentityClient::GetOpenIdTokenAsync(const GetOpenIdTokenRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::GetOpenIdTokenAsyncHelper, this, request);
}

void CognitoIdentityClient::GetOpenIdTokenAsyncHelper(const GetOpenIdTokenRequest& request) const
{
  m_onGetOpenIdTokenOutcomeReceived(this, request, GetOpenIdToken(request));
}

GetOpenIdTokenForDeveloperIdentityOutcome CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentity(const GetOpenIdTokenForDeveloperIdentityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetOpenIdTokenForDeveloperIdentityOutcome(GetOpenIdTokenForDeveloperIdentityResult(outcome.GetResult()));
  }
  else
  {
    return GetOpenIdTokenForDeveloperIdentityOutcome(outcome.GetError());
  }
}

GetOpenIdTokenForDeveloperIdentityOutcomeCallable CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentityCallable(const GetOpenIdTokenForDeveloperIdentityRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentity, this, request);
}

void CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentityAsync(const GetOpenIdTokenForDeveloperIdentityRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentityAsyncHelper, this, request);
}

void CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentityAsyncHelper(const GetOpenIdTokenForDeveloperIdentityRequest& request) const
{
  m_onGetOpenIdTokenForDeveloperIdentityOutcomeReceived(this, request, GetOpenIdTokenForDeveloperIdentity(request));
}

ListIdentitiesOutcome CognitoIdentityClient::ListIdentities(const ListIdentitiesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListIdentitiesOutcome(ListIdentitiesResult(outcome.GetResult()));
  }
  else
  {
    return ListIdentitiesOutcome(outcome.GetError());
  }
}

ListIdentitiesOutcomeCallable CognitoIdentityClient::ListIdentitiesCallable(const ListIdentitiesRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::ListIdentities, this, request);
}

void CognitoIdentityClient::ListIdentitiesAsync(const ListIdentitiesRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::ListIdentitiesAsyncHelper, this, request);
}

void CognitoIdentityClient::ListIdentitiesAsyncHelper(const ListIdentitiesRequest& request) const
{
  m_onListIdentitiesOutcomeReceived(this, request, ListIdentities(request));
}

ListIdentityPoolsOutcome CognitoIdentityClient::ListIdentityPools(const ListIdentityPoolsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListIdentityPoolsOutcome(ListIdentityPoolsResult(outcome.GetResult()));
  }
  else
  {
    return ListIdentityPoolsOutcome(outcome.GetError());
  }
}

ListIdentityPoolsOutcomeCallable CognitoIdentityClient::ListIdentityPoolsCallable(const ListIdentityPoolsRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::ListIdentityPools, this, request);
}

void CognitoIdentityClient::ListIdentityPoolsAsync(const ListIdentityPoolsRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::ListIdentityPoolsAsyncHelper, this, request);
}

void CognitoIdentityClient::ListIdentityPoolsAsyncHelper(const ListIdentityPoolsRequest& request) const
{
  m_onListIdentityPoolsOutcomeReceived(this, request, ListIdentityPools(request));
}

LookupDeveloperIdentityOutcome CognitoIdentityClient::LookupDeveloperIdentity(const LookupDeveloperIdentityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return LookupDeveloperIdentityOutcome(LookupDeveloperIdentityResult(outcome.GetResult()));
  }
  else
  {
    return LookupDeveloperIdentityOutcome(outcome.GetError());
  }
}

LookupDeveloperIdentityOutcomeCallable CognitoIdentityClient::LookupDeveloperIdentityCallable(const LookupDeveloperIdentityRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::LookupDeveloperIdentity, this, request);
}

void CognitoIdentityClient::LookupDeveloperIdentityAsync(const LookupDeveloperIdentityRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::LookupDeveloperIdentityAsyncHelper, this, request);
}

void CognitoIdentityClient::LookupDeveloperIdentityAsyncHelper(const LookupDeveloperIdentityRequest& request) const
{
  m_onLookupDeveloperIdentityOutcomeReceived(this, request, LookupDeveloperIdentity(request));
}

MergeDeveloperIdentitiesOutcome CognitoIdentityClient::MergeDeveloperIdentities(const MergeDeveloperIdentitiesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return MergeDeveloperIdentitiesOutcome(MergeDeveloperIdentitiesResult(outcome.GetResult()));
  }
  else
  {
    return MergeDeveloperIdentitiesOutcome(outcome.GetError());
  }
}

MergeDeveloperIdentitiesOutcomeCallable CognitoIdentityClient::MergeDeveloperIdentitiesCallable(const MergeDeveloperIdentitiesRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::MergeDeveloperIdentities, this, request);
}

void CognitoIdentityClient::MergeDeveloperIdentitiesAsync(const MergeDeveloperIdentitiesRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::MergeDeveloperIdentitiesAsyncHelper, this, request);
}

void CognitoIdentityClient::MergeDeveloperIdentitiesAsyncHelper(const MergeDeveloperIdentitiesRequest& request) const
{
  m_onMergeDeveloperIdentitiesOutcomeReceived(this, request, MergeDeveloperIdentities(request));
}

SetIdentityPoolRolesOutcome CognitoIdentityClient::SetIdentityPoolRoles(const SetIdentityPoolRolesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetIdentityPoolRolesOutcome(NoResult());
  }
  else
  {
    return SetIdentityPoolRolesOutcome(outcome.GetError());
  }
}

SetIdentityPoolRolesOutcomeCallable CognitoIdentityClient::SetIdentityPoolRolesCallable(const SetIdentityPoolRolesRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::SetIdentityPoolRoles, this, request);
}

void CognitoIdentityClient::SetIdentityPoolRolesAsync(const SetIdentityPoolRolesRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::SetIdentityPoolRolesAsyncHelper, this, request);
}

void CognitoIdentityClient::SetIdentityPoolRolesAsyncHelper(const SetIdentityPoolRolesRequest& request) const
{
  m_onSetIdentityPoolRolesOutcomeReceived(this, request, SetIdentityPoolRoles(request));
}

UnlinkDeveloperIdentityOutcome CognitoIdentityClient::UnlinkDeveloperIdentity(const UnlinkDeveloperIdentityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UnlinkDeveloperIdentityOutcome(NoResult());
  }
  else
  {
    return UnlinkDeveloperIdentityOutcome(outcome.GetError());
  }
}

UnlinkDeveloperIdentityOutcomeCallable CognitoIdentityClient::UnlinkDeveloperIdentityCallable(const UnlinkDeveloperIdentityRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::UnlinkDeveloperIdentity, this, request);
}

void CognitoIdentityClient::UnlinkDeveloperIdentityAsync(const UnlinkDeveloperIdentityRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::UnlinkDeveloperIdentityAsyncHelper, this, request);
}

void CognitoIdentityClient::UnlinkDeveloperIdentityAsyncHelper(const UnlinkDeveloperIdentityRequest& request) const
{
  m_onUnlinkDeveloperIdentityOutcomeReceived(this, request, UnlinkDeveloperIdentity(request));
}

UnlinkIdentityOutcome CognitoIdentityClient::UnlinkIdentity(const UnlinkIdentityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UnlinkIdentityOutcome(NoResult());
  }
  else
  {
    return UnlinkIdentityOutcome(outcome.GetError());
  }
}

UnlinkIdentityOutcomeCallable CognitoIdentityClient::UnlinkIdentityCallable(const UnlinkIdentityRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::UnlinkIdentity, this, request);
}

void CognitoIdentityClient::UnlinkIdentityAsync(const UnlinkIdentityRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::UnlinkIdentityAsyncHelper, this, request);
}

void CognitoIdentityClient::UnlinkIdentityAsyncHelper(const UnlinkIdentityRequest& request) const
{
  m_onUnlinkIdentityOutcomeReceived(this, request, UnlinkIdentity(request));
}

UpdateIdentityPoolOutcome CognitoIdentityClient::UpdateIdentityPool(const UpdateIdentityPoolRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateIdentityPoolOutcome(UpdateIdentityPoolResult(outcome.GetResult()));
  }
  else
  {
    return UpdateIdentityPoolOutcome(outcome.GetError());
  }
}

UpdateIdentityPoolOutcomeCallable CognitoIdentityClient::UpdateIdentityPoolCallable(const UpdateIdentityPoolRequest& request) const
{
  return std::async(std::launch::async, &CognitoIdentityClient::UpdateIdentityPool, this, request);
}

void CognitoIdentityClient::UpdateIdentityPoolAsync(const UpdateIdentityPoolRequest& request) const
{
  m_executor->Submit(&CognitoIdentityClient::UpdateIdentityPoolAsyncHelper, this, request);
}

void CognitoIdentityClient::UpdateIdentityPoolAsyncHelper(const UpdateIdentityPoolRequest& request) const
{
  m_onUpdateIdentityPoolOutcomeReceived(this, request, UpdateIdentityPool(request));
}

