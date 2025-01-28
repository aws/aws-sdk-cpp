/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
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

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ApiGatewayManagementApi;
using namespace Aws::ApiGatewayManagementApi::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace ApiGatewayManagementApi
  {
    const char ALLOCATION_TAG[] = "ApiGatewayManagementApiClient";
    const char SERVICE_NAME[] = "execute-api";
  }
}
const char* ApiGatewayManagementApiClient::GetServiceName() {return SERVICE_NAME;}
const char* ApiGatewayManagementApiClient::GetAllocationTag() {return ALLOCATION_TAG;}

ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(const ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration& clientConfiguration,
                           std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "ApiGatewayManagementApi",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ApiGatewayManagementApiErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<ApiGatewayManagementApiEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(const AWSCredentials& credentials,
                           std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> endpointProvider,
                           const ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "ApiGatewayManagementApi",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ApiGatewayManagementApiErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<ApiGatewayManagementApiEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> endpointProvider,
                           const ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "ApiGatewayManagementApi",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ApiGatewayManagementApiErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<ApiGatewayManagementApiEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "ApiGatewayManagementApi",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<ApiGatewayManagementApiErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<ApiGatewayManagementApiEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "ApiGatewayManagementApi",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ApiGatewayManagementApiErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<ApiGatewayManagementApiEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "ApiGatewayManagementApi",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ApiGatewayManagementApiErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<ApiGatewayManagementApiEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

ApiGatewayManagementApiClient::~ApiGatewayManagementApiClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase>& ApiGatewayManagementApiClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ApiGatewayManagementApiClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
DeleteConnectionOutcome ApiGatewayManagementApiClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConnection", "Required field: ConnectionId, is not set");
    return DeleteConnectionOutcome(Aws::Client::AWSError<ApiGatewayManagementApiErrors>(ApiGatewayManagementApiErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConnectionOutcome>(
    [&]()-> DeleteConnectionOutcome {
      return DeleteConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/@connections/");
      resolvedEndpoint.AddPathSegment(request.GetConnectionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConnectionOutcome ApiGatewayManagementApiClient::GetConnection(const GetConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(GetConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnection", "Required field: ConnectionId, is not set");
    return GetConnectionOutcome(Aws::Client::AWSError<ApiGatewayManagementApiErrors>(ApiGatewayManagementApiErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConnectionOutcome>(
    [&]()-> GetConnectionOutcome {
      return GetConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/@connections/");
      resolvedEndpoint.AddPathSegment(request.GetConnectionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PostToConnectionOutcome ApiGatewayManagementApiClient::PostToConnection(const PostToConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(PostToConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostToConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostToConnection", "Required field: ConnectionId, is not set");
    return PostToConnectionOutcome(Aws::Client::AWSError<ApiGatewayManagementApiErrors>(ApiGatewayManagementApiErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PostToConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PostToConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PostToConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PostToConnectionOutcome>(
    [&]()-> PostToConnectionOutcome {
      return PostToConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/@connections/");
      resolvedEndpoint.AddPathSegment(request.GetConnectionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


