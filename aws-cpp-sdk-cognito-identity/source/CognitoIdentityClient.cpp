/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/cognito-identity/CognitoIdentityEndpoint.h>
#include <aws/cognito-identity/CognitoIdentityErrorMarshaller.h>
#include <aws/cognito-identity/model/CreateIdentityPoolRequest.h>
#include <aws/cognito-identity/model/DeleteIdentitiesRequest.h>
#include <aws/cognito-identity/model/DeleteIdentityPoolRequest.h>
#include <aws/cognito-identity/model/DescribeIdentityRequest.h>
#include <aws/cognito-identity/model/DescribeIdentityPoolRequest.h>
#include <aws/cognito-identity/model/GetCredentialsForIdentityRequest.h>
#include <aws/cognito-identity/model/GetIdRequest.h>
#include <aws/cognito-identity/model/GetIdentityPoolRolesRequest.h>
#include <aws/cognito-identity/model/GetOpenIdTokenRequest.h>
#include <aws/cognito-identity/model/GetOpenIdTokenForDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/GetPrincipalTagAttributeMapRequest.h>
#include <aws/cognito-identity/model/ListIdentitiesRequest.h>
#include <aws/cognito-identity/model/ListIdentityPoolsRequest.h>
#include <aws/cognito-identity/model/ListTagsForResourceRequest.h>
#include <aws/cognito-identity/model/LookupDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/MergeDeveloperIdentitiesRequest.h>
#include <aws/cognito-identity/model/SetIdentityPoolRolesRequest.h>
#include <aws/cognito-identity/model/SetPrincipalTagAttributeMapRequest.h>
#include <aws/cognito-identity/model/TagResourceRequest.h>
#include <aws/cognito-identity/model/UnlinkDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/UnlinkIdentityRequest.h>
#include <aws/cognito-identity/model/UntagResourceRequest.h>
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
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoIdentityClient::~CognitoIdentityClient()
{
}

void CognitoIdentityClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Cognito Identity");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CognitoIdentityEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CognitoIdentityClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CreateIdentityPoolOutcome CognitoIdentityClient::CreateIdentityPool(const CreateIdentityPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateIdentityPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIdentityPoolOutcomeCallable CognitoIdentityClient::CreateIdentityPoolCallable(const CreateIdentityPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIdentityPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIdentityPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientCreateIdentityPoolAsyncHelper(CognitoIdentityClient const * const clientThis, const CreateIdentityPoolRequest& request, const CreateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIdentityPool(request), context);
}

void CognitoIdentityClient::CreateIdentityPoolAsync(const CreateIdentityPoolRequest& request, const CreateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientCreateIdentityPoolAsyncHelper( this, request, handler, context ); } );
}

DeleteIdentitiesOutcome CognitoIdentityClient::DeleteIdentities(const DeleteIdentitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteIdentitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIdentitiesOutcomeCallable CognitoIdentityClient::DeleteIdentitiesCallable(const DeleteIdentitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIdentitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIdentities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientDeleteIdentitiesAsyncHelper(CognitoIdentityClient const * const clientThis, const DeleteIdentitiesRequest& request, const DeleteIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIdentities(request), context);
}

void CognitoIdentityClient::DeleteIdentitiesAsync(const DeleteIdentitiesRequest& request, const DeleteIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientDeleteIdentitiesAsyncHelper( this, request, handler, context ); } );
}

DeleteIdentityPoolOutcome CognitoIdentityClient::DeleteIdentityPool(const DeleteIdentityPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteIdentityPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIdentityPoolOutcomeCallable CognitoIdentityClient::DeleteIdentityPoolCallable(const DeleteIdentityPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIdentityPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIdentityPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientDeleteIdentityPoolAsyncHelper(CognitoIdentityClient const * const clientThis, const DeleteIdentityPoolRequest& request, const DeleteIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIdentityPool(request), context);
}

void CognitoIdentityClient::DeleteIdentityPoolAsync(const DeleteIdentityPoolRequest& request, const DeleteIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientDeleteIdentityPoolAsyncHelper( this, request, handler, context ); } );
}

DescribeIdentityOutcome CognitoIdentityClient::DescribeIdentity(const DescribeIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIdentityOutcomeCallable CognitoIdentityClient::DescribeIdentityCallable(const DescribeIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientDescribeIdentityAsyncHelper(CognitoIdentityClient const * const clientThis, const DescribeIdentityRequest& request, const DescribeIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeIdentity(request), context);
}

void CognitoIdentityClient::DescribeIdentityAsync(const DescribeIdentityRequest& request, const DescribeIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientDescribeIdentityAsyncHelper( this, request, handler, context ); } );
}

DescribeIdentityPoolOutcome CognitoIdentityClient::DescribeIdentityPool(const DescribeIdentityPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeIdentityPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIdentityPoolOutcomeCallable CognitoIdentityClient::DescribeIdentityPoolCallable(const DescribeIdentityPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIdentityPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientDescribeIdentityPoolAsyncHelper(CognitoIdentityClient const * const clientThis, const DescribeIdentityPoolRequest& request, const DescribeIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeIdentityPool(request), context);
}

void CognitoIdentityClient::DescribeIdentityPoolAsync(const DescribeIdentityPoolRequest& request, const DescribeIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientDescribeIdentityPoolAsyncHelper( this, request, handler, context ); } );
}

GetCredentialsForIdentityOutcome CognitoIdentityClient::GetCredentialsForIdentity(const GetCredentialsForIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCredentialsForIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetCredentialsForIdentityOutcomeCallable CognitoIdentityClient::GetCredentialsForIdentityCallable(const GetCredentialsForIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCredentialsForIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCredentialsForIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientGetCredentialsForIdentityAsyncHelper(CognitoIdentityClient const * const clientThis, const GetCredentialsForIdentityRequest& request, const GetCredentialsForIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCredentialsForIdentity(request), context);
}

void CognitoIdentityClient::GetCredentialsForIdentityAsync(const GetCredentialsForIdentityRequest& request, const GetCredentialsForIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientGetCredentialsForIdentityAsyncHelper( this, request, handler, context ); } );
}

GetIdOutcome CognitoIdentityClient::GetId(const GetIdRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetIdOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetIdOutcomeCallable CognitoIdentityClient::GetIdCallable(const GetIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientGetIdAsyncHelper(CognitoIdentityClient const * const clientThis, const GetIdRequest& request, const GetIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetId(request), context);
}

void CognitoIdentityClient::GetIdAsync(const GetIdRequest& request, const GetIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientGetIdAsyncHelper( this, request, handler, context ); } );
}

GetIdentityPoolRolesOutcome CognitoIdentityClient::GetIdentityPoolRoles(const GetIdentityPoolRolesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetIdentityPoolRolesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIdentityPoolRolesOutcomeCallable CognitoIdentityClient::GetIdentityPoolRolesCallable(const GetIdentityPoolRolesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityPoolRolesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityPoolRoles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientGetIdentityPoolRolesAsyncHelper(CognitoIdentityClient const * const clientThis, const GetIdentityPoolRolesRequest& request, const GetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIdentityPoolRoles(request), context);
}

void CognitoIdentityClient::GetIdentityPoolRolesAsync(const GetIdentityPoolRolesRequest& request, const GetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientGetIdentityPoolRolesAsyncHelper( this, request, handler, context ); } );
}

GetOpenIdTokenOutcome CognitoIdentityClient::GetOpenIdToken(const GetOpenIdTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOpenIdTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetOpenIdTokenOutcomeCallable CognitoIdentityClient::GetOpenIdTokenCallable(const GetOpenIdTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOpenIdTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOpenIdToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientGetOpenIdTokenAsyncHelper(CognitoIdentityClient const * const clientThis, const GetOpenIdTokenRequest& request, const GetOpenIdTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOpenIdToken(request), context);
}

void CognitoIdentityClient::GetOpenIdTokenAsync(const GetOpenIdTokenRequest& request, const GetOpenIdTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientGetOpenIdTokenAsyncHelper( this, request, handler, context ); } );
}

GetOpenIdTokenForDeveloperIdentityOutcome CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentity(const GetOpenIdTokenForDeveloperIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOpenIdTokenForDeveloperIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOpenIdTokenForDeveloperIdentityOutcomeCallable CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentityCallable(const GetOpenIdTokenForDeveloperIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOpenIdTokenForDeveloperIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOpenIdTokenForDeveloperIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientGetOpenIdTokenForDeveloperIdentityAsyncHelper(CognitoIdentityClient const * const clientThis, const GetOpenIdTokenForDeveloperIdentityRequest& request, const GetOpenIdTokenForDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOpenIdTokenForDeveloperIdentity(request), context);
}

void CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentityAsync(const GetOpenIdTokenForDeveloperIdentityRequest& request, const GetOpenIdTokenForDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientGetOpenIdTokenForDeveloperIdentityAsyncHelper( this, request, handler, context ); } );
}

GetPrincipalTagAttributeMapOutcome CognitoIdentityClient::GetPrincipalTagAttributeMap(const GetPrincipalTagAttributeMapRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPrincipalTagAttributeMapOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPrincipalTagAttributeMapOutcomeCallable CognitoIdentityClient::GetPrincipalTagAttributeMapCallable(const GetPrincipalTagAttributeMapRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPrincipalTagAttributeMapOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPrincipalTagAttributeMap(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientGetPrincipalTagAttributeMapAsyncHelper(CognitoIdentityClient const * const clientThis, const GetPrincipalTagAttributeMapRequest& request, const GetPrincipalTagAttributeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPrincipalTagAttributeMap(request), context);
}

void CognitoIdentityClient::GetPrincipalTagAttributeMapAsync(const GetPrincipalTagAttributeMapRequest& request, const GetPrincipalTagAttributeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientGetPrincipalTagAttributeMapAsyncHelper( this, request, handler, context ); } );
}

ListIdentitiesOutcome CognitoIdentityClient::ListIdentities(const ListIdentitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListIdentitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIdentitiesOutcomeCallable CognitoIdentityClient::ListIdentitiesCallable(const ListIdentitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientListIdentitiesAsyncHelper(CognitoIdentityClient const * const clientThis, const ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIdentities(request), context);
}

void CognitoIdentityClient::ListIdentitiesAsync(const ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientListIdentitiesAsyncHelper( this, request, handler, context ); } );
}

ListIdentityPoolsOutcome CognitoIdentityClient::ListIdentityPools(const ListIdentityPoolsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListIdentityPoolsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityPoolsOutcomeCallable CognitoIdentityClient::ListIdentityPoolsCallable(const ListIdentityPoolsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityPoolsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityPools(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientListIdentityPoolsAsyncHelper(CognitoIdentityClient const * const clientThis, const ListIdentityPoolsRequest& request, const ListIdentityPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIdentityPools(request), context);
}

void CognitoIdentityClient::ListIdentityPoolsAsync(const ListIdentityPoolsRequest& request, const ListIdentityPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientListIdentityPoolsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome CognitoIdentityClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CognitoIdentityClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientListTagsForResourceAsyncHelper(CognitoIdentityClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void CognitoIdentityClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

LookupDeveloperIdentityOutcome CognitoIdentityClient::LookupDeveloperIdentity(const LookupDeveloperIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return LookupDeveloperIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

LookupDeveloperIdentityOutcomeCallable CognitoIdentityClient::LookupDeveloperIdentityCallable(const LookupDeveloperIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< LookupDeveloperIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->LookupDeveloperIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientLookupDeveloperIdentityAsyncHelper(CognitoIdentityClient const * const clientThis, const LookupDeveloperIdentityRequest& request, const LookupDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->LookupDeveloperIdentity(request), context);
}

void CognitoIdentityClient::LookupDeveloperIdentityAsync(const LookupDeveloperIdentityRequest& request, const LookupDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientLookupDeveloperIdentityAsyncHelper( this, request, handler, context ); } );
}

MergeDeveloperIdentitiesOutcome CognitoIdentityClient::MergeDeveloperIdentities(const MergeDeveloperIdentitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return MergeDeveloperIdentitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeDeveloperIdentitiesOutcomeCallable CognitoIdentityClient::MergeDeveloperIdentitiesCallable(const MergeDeveloperIdentitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergeDeveloperIdentitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergeDeveloperIdentities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientMergeDeveloperIdentitiesAsyncHelper(CognitoIdentityClient const * const clientThis, const MergeDeveloperIdentitiesRequest& request, const MergeDeveloperIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->MergeDeveloperIdentities(request), context);
}

void CognitoIdentityClient::MergeDeveloperIdentitiesAsync(const MergeDeveloperIdentitiesRequest& request, const MergeDeveloperIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientMergeDeveloperIdentitiesAsyncHelper( this, request, handler, context ); } );
}

SetIdentityPoolRolesOutcome CognitoIdentityClient::SetIdentityPoolRoles(const SetIdentityPoolRolesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetIdentityPoolRolesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetIdentityPoolRolesOutcomeCallable CognitoIdentityClient::SetIdentityPoolRolesCallable(const SetIdentityPoolRolesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityPoolRolesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityPoolRoles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientSetIdentityPoolRolesAsyncHelper(CognitoIdentityClient const * const clientThis, const SetIdentityPoolRolesRequest& request, const SetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetIdentityPoolRoles(request), context);
}

void CognitoIdentityClient::SetIdentityPoolRolesAsync(const SetIdentityPoolRolesRequest& request, const SetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientSetIdentityPoolRolesAsyncHelper( this, request, handler, context ); } );
}

SetPrincipalTagAttributeMapOutcome CognitoIdentityClient::SetPrincipalTagAttributeMap(const SetPrincipalTagAttributeMapRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetPrincipalTagAttributeMapOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetPrincipalTagAttributeMapOutcomeCallable CognitoIdentityClient::SetPrincipalTagAttributeMapCallable(const SetPrincipalTagAttributeMapRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetPrincipalTagAttributeMapOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetPrincipalTagAttributeMap(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientSetPrincipalTagAttributeMapAsyncHelper(CognitoIdentityClient const * const clientThis, const SetPrincipalTagAttributeMapRequest& request, const SetPrincipalTagAttributeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetPrincipalTagAttributeMap(request), context);
}

void CognitoIdentityClient::SetPrincipalTagAttributeMapAsync(const SetPrincipalTagAttributeMapRequest& request, const SetPrincipalTagAttributeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientSetPrincipalTagAttributeMapAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome CognitoIdentityClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CognitoIdentityClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientTagResourceAsyncHelper(CognitoIdentityClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void CognitoIdentityClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UnlinkDeveloperIdentityOutcome CognitoIdentityClient::UnlinkDeveloperIdentity(const UnlinkDeveloperIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UnlinkDeveloperIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnlinkDeveloperIdentityOutcomeCallable CognitoIdentityClient::UnlinkDeveloperIdentityCallable(const UnlinkDeveloperIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnlinkDeveloperIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnlinkDeveloperIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientUnlinkDeveloperIdentityAsyncHelper(CognitoIdentityClient const * const clientThis, const UnlinkDeveloperIdentityRequest& request, const UnlinkDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UnlinkDeveloperIdentity(request), context);
}

void CognitoIdentityClient::UnlinkDeveloperIdentityAsync(const UnlinkDeveloperIdentityRequest& request, const UnlinkDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientUnlinkDeveloperIdentityAsyncHelper( this, request, handler, context ); } );
}

UnlinkIdentityOutcome CognitoIdentityClient::UnlinkIdentity(const UnlinkIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UnlinkIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

UnlinkIdentityOutcomeCallable CognitoIdentityClient::UnlinkIdentityCallable(const UnlinkIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnlinkIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnlinkIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientUnlinkIdentityAsyncHelper(CognitoIdentityClient const * const clientThis, const UnlinkIdentityRequest& request, const UnlinkIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UnlinkIdentity(request), context);
}

void CognitoIdentityClient::UnlinkIdentityAsync(const UnlinkIdentityRequest& request, const UnlinkIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientUnlinkIdentityAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome CognitoIdentityClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CognitoIdentityClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientUntagResourceAsyncHelper(CognitoIdentityClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void CognitoIdentityClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateIdentityPoolOutcome CognitoIdentityClient::UpdateIdentityPool(const UpdateIdentityPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateIdentityPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIdentityPoolOutcomeCallable CognitoIdentityClient::UpdateIdentityPoolCallable(const UpdateIdentityPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIdentityPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIdentityPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClientUpdateIdentityPoolAsyncHelper(CognitoIdentityClient const * const clientThis, const UpdateIdentityPoolRequest& request, const UpdateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateIdentityPool(request), context);
}

void CognitoIdentityClient::UpdateIdentityPoolAsync(const UpdateIdentityPoolRequest& request, const UpdateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CognitoIdentityClientUpdateIdentityPoolAsyncHelper( this, request, handler, context ); } );
}

