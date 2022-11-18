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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiClient.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiErrorMarshaller.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiEndpointProvider.h>
#include <aws/apigatewaymanagementapi/model/DeleteConnectionRequest.h>
#include <aws/apigatewaymanagementapi/model/GetConnectionRequest.h>
#include <aws/apigatewaymanagementapi/model/PostToConnectionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ApiGatewayManagementApi;
using namespace Aws::ApiGatewayManagementApi::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ApiGatewayManagementApiClient::SERVICE_NAME = "execute-api";
const char* ApiGatewayManagementApiClient::ALLOCATION_TAG = "ApiGatewayManagementApiClient";

ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(const ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration& clientConfiguration,
                                                             std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApiGatewayManagementApiErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(const AWSCredentials& credentials,
                                                             std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> endpointProvider,
                                                             const ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApiGatewayManagementApiErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> endpointProvider,
                                                             const ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApiGatewayManagementApiErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApiGatewayManagementApiErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ApiGatewayManagementApiEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(const AWSCredentials& credentials,
                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApiGatewayManagementApiErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ApiGatewayManagementApiEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApiGatewayManagementApiErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ApiGatewayManagementApiEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ApiGatewayManagementApiClient::~ApiGatewayManagementApiClient()
{
}

std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase>& ApiGatewayManagementApiClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ApiGatewayManagementApiClient::init(const ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ApiGatewayManagementApi");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ApiGatewayManagementApiClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DeleteConnectionOutcome ApiGatewayManagementApiClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConnection", "Required field: ConnectionId, is not set");
    return DeleteConnectionOutcome(Aws::Client::AWSError<ApiGatewayManagementApiErrors>(ApiGatewayManagementApiErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/@connections/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  return DeleteConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionOutcomeCallable ApiGatewayManagementApiClient::DeleteConnectionCallable(const DeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayManagementApiClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteConnection(request), context);
    } );
}

GetConnectionOutcome ApiGatewayManagementApiClient::GetConnection(const GetConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnection", "Required field: ConnectionId, is not set");
    return GetConnectionOutcome(Aws::Client::AWSError<ApiGatewayManagementApiErrors>(ApiGatewayManagementApiErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/@connections/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  return GetConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConnectionOutcomeCallable ApiGatewayManagementApiClient::GetConnectionCallable(const GetConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayManagementApiClient::GetConnectionAsync(const GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetConnection(request), context);
    } );
}

PostToConnectionOutcome ApiGatewayManagementApiClient::PostToConnection(const PostToConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostToConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostToConnection", "Required field: ConnectionId, is not set");
    return PostToConnectionOutcome(Aws::Client::AWSError<ApiGatewayManagementApiErrors>(ApiGatewayManagementApiErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PostToConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/@connections/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  return PostToConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PostToConnectionOutcomeCallable ApiGatewayManagementApiClient::PostToConnectionCallable(const PostToConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PostToConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PostToConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayManagementApiClient::PostToConnectionAsync(const PostToConnectionRequest& request, const PostToConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PostToConnection(request), context);
    } );
}

