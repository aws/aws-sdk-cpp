/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/cognito-identity/CognitoIdentityErrorMarshaller.h>
#include <aws/cognito-identity/CognitoIdentityEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CognitoIdentityClient::SERVICE_NAME = "cognito-identity";
const char* CognitoIdentityClient::ALLOCATION_TAG = "CognitoIdentityClient";

CognitoIdentityClient::CognitoIdentityClient(const CognitoIdentity::CognitoIdentityClientConfiguration& clientConfiguration,
                                             std::shared_ptr<CognitoIdentityEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const AWSCredentials& credentials,
                                             std::shared_ptr<CognitoIdentityEndpointProviderBase> endpointProvider,
                                             const CognitoIdentity::CognitoIdentityClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<CognitoIdentityEndpointProviderBase> endpointProvider,
                                             const CognitoIdentity::CognitoIdentityClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CognitoIdentityClient::CognitoIdentityClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CognitoIdentityClient::~CognitoIdentityClient()
{
}

std::shared_ptr<CognitoIdentityEndpointProviderBase>& CognitoIdentityClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CognitoIdentityClient::init(const CognitoIdentity::CognitoIdentityClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Cognito Identity");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CognitoIdentityClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateIdentityPoolOutcome CognitoIdentityClient::CreateIdentityPool(const CreateIdentityPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIdentityPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIdentityPoolOutcomeCallable CognitoIdentityClient::CreateIdentityPoolCallable(const CreateIdentityPoolRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateIdentityPool, request, m_executor.get());
}

void CognitoIdentityClient::CreateIdentityPoolAsync(const CreateIdentityPoolRequest& request, const CreateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateIdentityPool, request, handler, context, m_executor.get());
}

DeleteIdentitiesOutcome CognitoIdentityClient::DeleteIdentities(const DeleteIdentitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIdentitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIdentitiesOutcomeCallable CognitoIdentityClient::DeleteIdentitiesCallable(const DeleteIdentitiesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteIdentities, request, m_executor.get());
}

void CognitoIdentityClient::DeleteIdentitiesAsync(const DeleteIdentitiesRequest& request, const DeleteIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteIdentities, request, handler, context, m_executor.get());
}

DeleteIdentityPoolOutcome CognitoIdentityClient::DeleteIdentityPool(const DeleteIdentityPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIdentityPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIdentityPoolOutcomeCallable CognitoIdentityClient::DeleteIdentityPoolCallable(const DeleteIdentityPoolRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteIdentityPool, request, m_executor.get());
}

void CognitoIdentityClient::DeleteIdentityPoolAsync(const DeleteIdentityPoolRequest& request, const DeleteIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteIdentityPool, request, handler, context, m_executor.get());
}

DescribeIdentityOutcome CognitoIdentityClient::DescribeIdentity(const DescribeIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIdentityOutcomeCallable CognitoIdentityClient::DescribeIdentityCallable(const DescribeIdentityRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeIdentity, request, m_executor.get());
}

void CognitoIdentityClient::DescribeIdentityAsync(const DescribeIdentityRequest& request, const DescribeIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeIdentity, request, handler, context, m_executor.get());
}

DescribeIdentityPoolOutcome CognitoIdentityClient::DescribeIdentityPool(const DescribeIdentityPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIdentityPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIdentityPoolOutcomeCallable CognitoIdentityClient::DescribeIdentityPoolCallable(const DescribeIdentityPoolRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeIdentityPool, request, m_executor.get());
}

void CognitoIdentityClient::DescribeIdentityPoolAsync(const DescribeIdentityPoolRequest& request, const DescribeIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeIdentityPool, request, handler, context, m_executor.get());
}

GetCredentialsForIdentityOutcome CognitoIdentityClient::GetCredentialsForIdentity(const GetCredentialsForIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCredentialsForIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCredentialsForIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCredentialsForIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetCredentialsForIdentityOutcomeCallable CognitoIdentityClient::GetCredentialsForIdentityCallable(const GetCredentialsForIdentityRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetCredentialsForIdentity, request, m_executor.get());
}

void CognitoIdentityClient::GetCredentialsForIdentityAsync(const GetCredentialsForIdentityRequest& request, const GetCredentialsForIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetCredentialsForIdentity, request, handler, context, m_executor.get());
}

GetIdOutcome CognitoIdentityClient::GetId(const GetIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetIdOutcomeCallable CognitoIdentityClient::GetIdCallable(const GetIdRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetId, request, m_executor.get());
}

void CognitoIdentityClient::GetIdAsync(const GetIdRequest& request, const GetIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetId, request, handler, context, m_executor.get());
}

GetIdentityPoolRolesOutcome CognitoIdentityClient::GetIdentityPoolRoles(const GetIdentityPoolRolesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIdentityPoolRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIdentityPoolRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIdentityPoolRolesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIdentityPoolRolesOutcomeCallable CognitoIdentityClient::GetIdentityPoolRolesCallable(const GetIdentityPoolRolesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetIdentityPoolRoles, request, m_executor.get());
}

void CognitoIdentityClient::GetIdentityPoolRolesAsync(const GetIdentityPoolRolesRequest& request, const GetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetIdentityPoolRoles, request, handler, context, m_executor.get());
}

GetOpenIdTokenOutcome CognitoIdentityClient::GetOpenIdToken(const GetOpenIdTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOpenIdToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOpenIdToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOpenIdTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetOpenIdTokenOutcomeCallable CognitoIdentityClient::GetOpenIdTokenCallable(const GetOpenIdTokenRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetOpenIdToken, request, m_executor.get());
}

void CognitoIdentityClient::GetOpenIdTokenAsync(const GetOpenIdTokenRequest& request, const GetOpenIdTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetOpenIdToken, request, handler, context, m_executor.get());
}

GetOpenIdTokenForDeveloperIdentityOutcome CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentity(const GetOpenIdTokenForDeveloperIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOpenIdTokenForDeveloperIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOpenIdTokenForDeveloperIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOpenIdTokenForDeveloperIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOpenIdTokenForDeveloperIdentityOutcomeCallable CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentityCallable(const GetOpenIdTokenForDeveloperIdentityRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetOpenIdTokenForDeveloperIdentity, request, m_executor.get());
}

void CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentityAsync(const GetOpenIdTokenForDeveloperIdentityRequest& request, const GetOpenIdTokenForDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetOpenIdTokenForDeveloperIdentity, request, handler, context, m_executor.get());
}

GetPrincipalTagAttributeMapOutcome CognitoIdentityClient::GetPrincipalTagAttributeMap(const GetPrincipalTagAttributeMapRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPrincipalTagAttributeMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPrincipalTagAttributeMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPrincipalTagAttributeMapOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPrincipalTagAttributeMapOutcomeCallable CognitoIdentityClient::GetPrincipalTagAttributeMapCallable(const GetPrincipalTagAttributeMapRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetPrincipalTagAttributeMap, request, m_executor.get());
}

void CognitoIdentityClient::GetPrincipalTagAttributeMapAsync(const GetPrincipalTagAttributeMapRequest& request, const GetPrincipalTagAttributeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetPrincipalTagAttributeMap, request, handler, context, m_executor.get());
}

ListIdentitiesOutcome CognitoIdentityClient::ListIdentities(const ListIdentitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListIdentitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIdentitiesOutcomeCallable CognitoIdentityClient::ListIdentitiesCallable(const ListIdentitiesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListIdentities, request, m_executor.get());
}

void CognitoIdentityClient::ListIdentitiesAsync(const ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListIdentities, request, handler, context, m_executor.get());
}

ListIdentityPoolsOutcome CognitoIdentityClient::ListIdentityPools(const ListIdentityPoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentityPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIdentityPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListIdentityPoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityPoolsOutcomeCallable CognitoIdentityClient::ListIdentityPoolsCallable(const ListIdentityPoolsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListIdentityPools, request, m_executor.get());
}

void CognitoIdentityClient::ListIdentityPoolsAsync(const ListIdentityPoolsRequest& request, const ListIdentityPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListIdentityPools, request, handler, context, m_executor.get());
}

ListTagsForResourceOutcome CognitoIdentityClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CognitoIdentityClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTagsForResource, request, m_executor.get());
}

void CognitoIdentityClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTagsForResource, request, handler, context, m_executor.get());
}

LookupDeveloperIdentityOutcome CognitoIdentityClient::LookupDeveloperIdentity(const LookupDeveloperIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, LookupDeveloperIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, LookupDeveloperIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return LookupDeveloperIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

LookupDeveloperIdentityOutcomeCallable CognitoIdentityClient::LookupDeveloperIdentityCallable(const LookupDeveloperIdentityRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(LookupDeveloperIdentity, request, m_executor.get());
}

void CognitoIdentityClient::LookupDeveloperIdentityAsync(const LookupDeveloperIdentityRequest& request, const LookupDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(LookupDeveloperIdentity, request, handler, context, m_executor.get());
}

MergeDeveloperIdentitiesOutcome CognitoIdentityClient::MergeDeveloperIdentities(const MergeDeveloperIdentitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergeDeveloperIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergeDeveloperIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergeDeveloperIdentitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeDeveloperIdentitiesOutcomeCallable CognitoIdentityClient::MergeDeveloperIdentitiesCallable(const MergeDeveloperIdentitiesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(MergeDeveloperIdentities, request, m_executor.get());
}

void CognitoIdentityClient::MergeDeveloperIdentitiesAsync(const MergeDeveloperIdentitiesRequest& request, const MergeDeveloperIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(MergeDeveloperIdentities, request, handler, context, m_executor.get());
}

SetIdentityPoolRolesOutcome CognitoIdentityClient::SetIdentityPoolRoles(const SetIdentityPoolRolesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetIdentityPoolRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetIdentityPoolRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetIdentityPoolRolesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetIdentityPoolRolesOutcomeCallable CognitoIdentityClient::SetIdentityPoolRolesCallable(const SetIdentityPoolRolesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(SetIdentityPoolRoles, request, m_executor.get());
}

void CognitoIdentityClient::SetIdentityPoolRolesAsync(const SetIdentityPoolRolesRequest& request, const SetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(SetIdentityPoolRoles, request, handler, context, m_executor.get());
}

SetPrincipalTagAttributeMapOutcome CognitoIdentityClient::SetPrincipalTagAttributeMap(const SetPrincipalTagAttributeMapRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetPrincipalTagAttributeMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetPrincipalTagAttributeMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetPrincipalTagAttributeMapOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetPrincipalTagAttributeMapOutcomeCallable CognitoIdentityClient::SetPrincipalTagAttributeMapCallable(const SetPrincipalTagAttributeMapRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(SetPrincipalTagAttributeMap, request, m_executor.get());
}

void CognitoIdentityClient::SetPrincipalTagAttributeMapAsync(const SetPrincipalTagAttributeMapRequest& request, const SetPrincipalTagAttributeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(SetPrincipalTagAttributeMap, request, handler, context, m_executor.get());
}

TagResourceOutcome CognitoIdentityClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CognitoIdentityClient::TagResourceCallable(const TagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TagResource, request, m_executor.get());
}

void CognitoIdentityClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TagResource, request, handler, context, m_executor.get());
}

UnlinkDeveloperIdentityOutcome CognitoIdentityClient::UnlinkDeveloperIdentity(const UnlinkDeveloperIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnlinkDeveloperIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnlinkDeveloperIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnlinkDeveloperIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnlinkDeveloperIdentityOutcomeCallable CognitoIdentityClient::UnlinkDeveloperIdentityCallable(const UnlinkDeveloperIdentityRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UnlinkDeveloperIdentity, request, m_executor.get());
}

void CognitoIdentityClient::UnlinkDeveloperIdentityAsync(const UnlinkDeveloperIdentityRequest& request, const UnlinkDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UnlinkDeveloperIdentity, request, handler, context, m_executor.get());
}

UnlinkIdentityOutcome CognitoIdentityClient::UnlinkIdentity(const UnlinkIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnlinkIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnlinkIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnlinkIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

UnlinkIdentityOutcomeCallable CognitoIdentityClient::UnlinkIdentityCallable(const UnlinkIdentityRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UnlinkIdentity, request, m_executor.get());
}

void CognitoIdentityClient::UnlinkIdentityAsync(const UnlinkIdentityRequest& request, const UnlinkIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UnlinkIdentity, request, handler, context, m_executor.get());
}

UntagResourceOutcome CognitoIdentityClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CognitoIdentityClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UntagResource, request, m_executor.get());
}

void CognitoIdentityClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UntagResource, request, handler, context, m_executor.get());
}

UpdateIdentityPoolOutcome CognitoIdentityClient::UpdateIdentityPool(const UpdateIdentityPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateIdentityPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIdentityPoolOutcomeCallable CognitoIdentityClient::UpdateIdentityPoolCallable(const UpdateIdentityPoolRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateIdentityPool, request, m_executor.get());
}

void CognitoIdentityClient::UpdateIdentityPoolAsync(const UpdateIdentityPoolRequest& request, const UpdateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateIdentityPool, request, handler, context, m_executor.get());
}

