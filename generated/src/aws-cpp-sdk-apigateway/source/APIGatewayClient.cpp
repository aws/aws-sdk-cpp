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

#include <aws/apigateway/APIGatewayClient.h>
#include <aws/apigateway/APIGatewayErrorMarshaller.h>
#include <aws/apigateway/APIGatewayEndpointProvider.h>
#include <aws/apigateway/model/CreateApiKeyRequest.h>
#include <aws/apigateway/model/CreateAuthorizerRequest.h>
#include <aws/apigateway/model/CreateBasePathMappingRequest.h>
#include <aws/apigateway/model/CreateDeploymentRequest.h>
#include <aws/apigateway/model/CreateDocumentationPartRequest.h>
#include <aws/apigateway/model/CreateDocumentationVersionRequest.h>
#include <aws/apigateway/model/CreateDomainNameRequest.h>
#include <aws/apigateway/model/CreateModelRequest.h>
#include <aws/apigateway/model/CreateRequestValidatorRequest.h>
#include <aws/apigateway/model/CreateResourceRequest.h>
#include <aws/apigateway/model/CreateRestApiRequest.h>
#include <aws/apigateway/model/CreateStageRequest.h>
#include <aws/apigateway/model/CreateUsagePlanRequest.h>
#include <aws/apigateway/model/CreateUsagePlanKeyRequest.h>
#include <aws/apigateway/model/CreateVpcLinkRequest.h>
#include <aws/apigateway/model/DeleteApiKeyRequest.h>
#include <aws/apigateway/model/DeleteAuthorizerRequest.h>
#include <aws/apigateway/model/DeleteBasePathMappingRequest.h>
#include <aws/apigateway/model/DeleteClientCertificateRequest.h>
#include <aws/apigateway/model/DeleteDeploymentRequest.h>
#include <aws/apigateway/model/DeleteDocumentationPartRequest.h>
#include <aws/apigateway/model/DeleteDocumentationVersionRequest.h>
#include <aws/apigateway/model/DeleteDomainNameRequest.h>
#include <aws/apigateway/model/DeleteGatewayResponseRequest.h>
#include <aws/apigateway/model/DeleteIntegrationRequest.h>
#include <aws/apigateway/model/DeleteIntegrationResponseRequest.h>
#include <aws/apigateway/model/DeleteMethodRequest.h>
#include <aws/apigateway/model/DeleteMethodResponseRequest.h>
#include <aws/apigateway/model/DeleteModelRequest.h>
#include <aws/apigateway/model/DeleteRequestValidatorRequest.h>
#include <aws/apigateway/model/DeleteResourceRequest.h>
#include <aws/apigateway/model/DeleteRestApiRequest.h>
#include <aws/apigateway/model/DeleteStageRequest.h>
#include <aws/apigateway/model/DeleteUsagePlanRequest.h>
#include <aws/apigateway/model/DeleteUsagePlanKeyRequest.h>
#include <aws/apigateway/model/DeleteVpcLinkRequest.h>
#include <aws/apigateway/model/FlushStageAuthorizersCacheRequest.h>
#include <aws/apigateway/model/FlushStageCacheRequest.h>
#include <aws/apigateway/model/GenerateClientCertificateRequest.h>
#include <aws/apigateway/model/GetAccountRequest.h>
#include <aws/apigateway/model/GetApiKeyRequest.h>
#include <aws/apigateway/model/GetApiKeysRequest.h>
#include <aws/apigateway/model/GetAuthorizerRequest.h>
#include <aws/apigateway/model/GetAuthorizersRequest.h>
#include <aws/apigateway/model/GetBasePathMappingRequest.h>
#include <aws/apigateway/model/GetBasePathMappingsRequest.h>
#include <aws/apigateway/model/GetClientCertificateRequest.h>
#include <aws/apigateway/model/GetClientCertificatesRequest.h>
#include <aws/apigateway/model/GetDeploymentRequest.h>
#include <aws/apigateway/model/GetDeploymentsRequest.h>
#include <aws/apigateway/model/GetDocumentationPartRequest.h>
#include <aws/apigateway/model/GetDocumentationPartsRequest.h>
#include <aws/apigateway/model/GetDocumentationVersionRequest.h>
#include <aws/apigateway/model/GetDocumentationVersionsRequest.h>
#include <aws/apigateway/model/GetDomainNameRequest.h>
#include <aws/apigateway/model/GetDomainNamesRequest.h>
#include <aws/apigateway/model/GetExportRequest.h>
#include <aws/apigateway/model/GetGatewayResponseRequest.h>
#include <aws/apigateway/model/GetGatewayResponsesRequest.h>
#include <aws/apigateway/model/GetIntegrationRequest.h>
#include <aws/apigateway/model/GetIntegrationResponseRequest.h>
#include <aws/apigateway/model/GetMethodRequest.h>
#include <aws/apigateway/model/GetMethodResponseRequest.h>
#include <aws/apigateway/model/GetModelRequest.h>
#include <aws/apigateway/model/GetModelTemplateRequest.h>
#include <aws/apigateway/model/GetModelsRequest.h>
#include <aws/apigateway/model/GetRequestValidatorRequest.h>
#include <aws/apigateway/model/GetRequestValidatorsRequest.h>
#include <aws/apigateway/model/GetResourceRequest.h>
#include <aws/apigateway/model/GetResourcesRequest.h>
#include <aws/apigateway/model/GetRestApiRequest.h>
#include <aws/apigateway/model/GetRestApisRequest.h>
#include <aws/apigateway/model/GetSdkRequest.h>
#include <aws/apigateway/model/GetSdkTypeRequest.h>
#include <aws/apigateway/model/GetSdkTypesRequest.h>
#include <aws/apigateway/model/GetStageRequest.h>
#include <aws/apigateway/model/GetStagesRequest.h>
#include <aws/apigateway/model/GetTagsRequest.h>
#include <aws/apigateway/model/GetUsageRequest.h>
#include <aws/apigateway/model/GetUsagePlanRequest.h>
#include <aws/apigateway/model/GetUsagePlanKeyRequest.h>
#include <aws/apigateway/model/GetUsagePlanKeysRequest.h>
#include <aws/apigateway/model/GetUsagePlansRequest.h>
#include <aws/apigateway/model/GetVpcLinkRequest.h>
#include <aws/apigateway/model/GetVpcLinksRequest.h>
#include <aws/apigateway/model/ImportApiKeysRequest.h>
#include <aws/apigateway/model/ImportDocumentationPartsRequest.h>
#include <aws/apigateway/model/ImportRestApiRequest.h>
#include <aws/apigateway/model/PutGatewayResponseRequest.h>
#include <aws/apigateway/model/PutIntegrationRequest.h>
#include <aws/apigateway/model/PutIntegrationResponseRequest.h>
#include <aws/apigateway/model/PutMethodRequest.h>
#include <aws/apigateway/model/PutMethodResponseRequest.h>
#include <aws/apigateway/model/PutRestApiRequest.h>
#include <aws/apigateway/model/TagResourceRequest.h>
#include <aws/apigateway/model/TestInvokeAuthorizerRequest.h>
#include <aws/apigateway/model/TestInvokeMethodRequest.h>
#include <aws/apigateway/model/UntagResourceRequest.h>
#include <aws/apigateway/model/UpdateAccountRequest.h>
#include <aws/apigateway/model/UpdateApiKeyRequest.h>
#include <aws/apigateway/model/UpdateAuthorizerRequest.h>
#include <aws/apigateway/model/UpdateBasePathMappingRequest.h>
#include <aws/apigateway/model/UpdateClientCertificateRequest.h>
#include <aws/apigateway/model/UpdateDeploymentRequest.h>
#include <aws/apigateway/model/UpdateDocumentationPartRequest.h>
#include <aws/apigateway/model/UpdateDocumentationVersionRequest.h>
#include <aws/apigateway/model/UpdateDomainNameRequest.h>
#include <aws/apigateway/model/UpdateGatewayResponseRequest.h>
#include <aws/apigateway/model/UpdateIntegrationRequest.h>
#include <aws/apigateway/model/UpdateIntegrationResponseRequest.h>
#include <aws/apigateway/model/UpdateMethodRequest.h>
#include <aws/apigateway/model/UpdateMethodResponseRequest.h>
#include <aws/apigateway/model/UpdateModelRequest.h>
#include <aws/apigateway/model/UpdateRequestValidatorRequest.h>
#include <aws/apigateway/model/UpdateResourceRequest.h>
#include <aws/apigateway/model/UpdateRestApiRequest.h>
#include <aws/apigateway/model/UpdateStageRequest.h>
#include <aws/apigateway/model/UpdateUsageRequest.h>
#include <aws/apigateway/model/UpdateUsagePlanRequest.h>
#include <aws/apigateway/model/UpdateVpcLinkRequest.h>

#include <smithy/tracing/TracingUtils.h>


using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::APIGateway;
using namespace Aws::APIGateway::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace APIGateway
  {
    const char SERVICE_NAME[] = "apigateway";
    const char ALLOCATION_TAG[] = "APIGatewayClient";
  }
}
const char* APIGatewayClient::GetServiceName() {return SERVICE_NAME;}
const char* APIGatewayClient::GetAllocationTag() {return ALLOCATION_TAG;}

APIGatewayClient::APIGatewayClient(const APIGateway::APIGatewayClientConfiguration& clientConfiguration,
                                   std::shared_ptr<APIGatewayEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

APIGatewayClient::APIGatewayClient(const AWSCredentials& credentials,
                                   std::shared_ptr<APIGatewayEndpointProviderBase> endpointProvider,
                                   const APIGateway::APIGatewayClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

APIGatewayClient::APIGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<APIGatewayEndpointProviderBase> endpointProvider,
                                   const APIGateway::APIGatewayClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  APIGatewayClient::APIGatewayClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

APIGatewayClient::APIGatewayClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

APIGatewayClient::APIGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
APIGatewayClient::~APIGatewayClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<APIGatewayEndpointProviderBase>& APIGatewayClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void APIGatewayClient::init(const APIGateway::APIGatewayClientConfiguration& config)
{
  AWSClient::SetServiceClientName("API Gateway");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void APIGatewayClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateApiKeyOutcome APIGatewayClient::CreateApiKey(const CreateApiKeyRequest& request) const
{
  AWS_OPERATION_GUARD(CreateApiKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateApiKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateApiKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateApiKey",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateApiKeyOutcome>(
    [&]()-> CreateApiKeyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys");
      return CreateApiKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAuthorizerOutcome APIGatewayClient::CreateAuthorizer(const CreateAuthorizerRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAuthorizer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAuthorizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAuthorizer", "Required field: RestApiId, is not set");
    return CreateAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAuthorizer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAuthorizer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAuthorizer",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAuthorizerOutcome>(
    [&]()-> CreateAuthorizerOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAuthorizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers");
      return CreateAuthorizerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBasePathMappingOutcome APIGatewayClient::CreateBasePathMapping(const CreateBasePathMappingRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBasePathMapping);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBasePathMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBasePathMapping", "Required field: DomainName, is not set");
    return CreateBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBasePathMapping, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBasePathMapping, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBasePathMapping",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBasePathMappingOutcome>(
    [&]()-> CreateBasePathMappingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBasePathMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/basepathmappings");
      return CreateBasePathMappingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDeploymentOutcome APIGatewayClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDeployment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: RestApiId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDeployment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDeploymentOutcome>(
    [&]()-> CreateDeploymentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
      return CreateDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDocumentationPartOutcome APIGatewayClient::CreateDocumentationPart(const CreateDocumentationPartRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDocumentationPart);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDocumentationPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDocumentationPart", "Required field: RestApiId, is not set");
    return CreateDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateDocumentationPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDocumentationPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDocumentationPart",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDocumentationPartOutcome>(
    [&]()-> CreateDocumentationPartOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDocumentationPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/parts");
      return CreateDocumentationPartOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDocumentationVersionOutcome APIGatewayClient::CreateDocumentationVersion(const CreateDocumentationVersionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDocumentationVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDocumentationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDocumentationVersion", "Required field: RestApiId, is not set");
    return CreateDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateDocumentationVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDocumentationVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDocumentationVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDocumentationVersionOutcome>(
    [&]()-> CreateDocumentationVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDocumentationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/versions");
      return CreateDocumentationVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDomainNameOutcome APIGatewayClient::CreateDomainName(const CreateDomainNameRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDomainName);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomainName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateDomainName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDomainName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDomainName",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDomainNameOutcome>(
    [&]()-> CreateDomainNameOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomainName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames");
      return CreateDomainNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateModelOutcome APIGatewayClient::CreateModel(const CreateModelRequest& request) const
{
  AWS_OPERATION_GUARD(CreateModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateModel", "Required field: RestApiId, is not set");
    return CreateModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateModelOutcome>(
    [&]()-> CreateModelOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/models");
      return CreateModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRequestValidatorOutcome APIGatewayClient::CreateRequestValidator(const CreateRequestValidatorRequest& request) const
{
  AWS_OPERATION_GUARD(CreateRequestValidator);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRequestValidator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRequestValidator", "Required field: RestApiId, is not set");
    return CreateRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateRequestValidator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRequestValidator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRequestValidator",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRequestValidatorOutcome>(
    [&]()-> CreateRequestValidatorOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRequestValidator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/requestvalidators");
      return CreateRequestValidatorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateResourceOutcome APIGatewayClient::CreateResource(const CreateResourceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResource", "Required field: RestApiId, is not set");
    return CreateResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ParentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResource", "Required field: ParentId, is not set");
    return CreateResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ParentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateResourceOutcome>(
    [&]()-> CreateResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetParentId());
      return CreateResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRestApiOutcome APIGatewayClient::CreateRestApi(const CreateRestApiRequest& request) const
{
  AWS_OPERATION_GUARD(CreateRestApi);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRestApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateRestApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRestApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRestApi",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRestApiOutcome>(
    [&]()-> CreateRestApiOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRestApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis");
      return CreateRestApiOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateStageOutcome APIGatewayClient::CreateStage(const CreateStageRequest& request) const
{
  AWS_OPERATION_GUARD(CreateStage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStage", "Required field: RestApiId, is not set");
    return CreateStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateStage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateStageOutcome>(
    [&]()-> CreateStageOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/stages");
      return CreateStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateUsagePlanOutcome APIGatewayClient::CreateUsagePlan(const CreateUsagePlanRequest& request) const
{
  AWS_OPERATION_GUARD(CreateUsagePlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUsagePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateUsagePlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateUsagePlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateUsagePlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateUsagePlanOutcome>(
    [&]()-> CreateUsagePlanOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUsagePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans");
      return CreateUsagePlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateUsagePlanKeyOutcome APIGatewayClient::CreateUsagePlanKey(const CreateUsagePlanKeyRequest& request) const
{
  AWS_OPERATION_GUARD(CreateUsagePlanKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUsagePlanKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUsagePlanKey", "Required field: UsagePlanId, is not set");
    return CreateUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateUsagePlanKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateUsagePlanKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateUsagePlanKey",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateUsagePlanKeyOutcome>(
    [&]()-> CreateUsagePlanKeyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUsagePlanKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/keys");
      return CreateUsagePlanKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpcLinkOutcome APIGatewayClient::CreateVpcLink(const CreateVpcLinkRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVpcLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateVpcLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateVpcLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateVpcLink",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateVpcLinkOutcome>(
    [&]()-> CreateVpcLinkOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vpclinks");
      return CreateVpcLinkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteApiKeyOutcome APIGatewayClient::DeleteApiKey(const DeleteApiKeyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteApiKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApiKeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApiKey", "Required field: ApiKey, is not set");
    return DeleteApiKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiKey]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteApiKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteApiKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteApiKey",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteApiKeyOutcome>(
    [&]()-> DeleteApiKeyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiKey());
      return DeleteApiKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAuthorizerOutcome APIGatewayClient::DeleteAuthorizer(const DeleteAuthorizerRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAuthorizer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAuthorizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAuthorizer", "Required field: RestApiId, is not set");
    return DeleteAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAuthorizer", "Required field: AuthorizerId, is not set");
    return DeleteAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAuthorizer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAuthorizer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAuthorizer",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAuthorizerOutcome>(
    [&]()-> DeleteAuthorizerOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAuthorizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerId());
      return DeleteAuthorizerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBasePathMappingOutcome APIGatewayClient::DeleteBasePathMapping(const DeleteBasePathMappingRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBasePathMapping);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBasePathMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBasePathMapping", "Required field: DomainName, is not set");
    return DeleteBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.BasePathHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBasePathMapping", "Required field: BasePath, is not set");
    return DeleteBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BasePath]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBasePathMapping, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBasePathMapping, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBasePathMapping",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBasePathMappingOutcome>(
    [&]()-> DeleteBasePathMappingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBasePathMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/basepathmappings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBasePath());
      return DeleteBasePathMappingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteClientCertificateOutcome APIGatewayClient::DeleteClientCertificate(const DeleteClientCertificateRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteClientCertificate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteClientCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClientCertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteClientCertificate", "Required field: ClientCertificateId, is not set");
    return DeleteClientCertificateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientCertificateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteClientCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteClientCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteClientCertificate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteClientCertificateOutcome>(
    [&]()-> DeleteClientCertificateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteClientCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/clientcertificates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClientCertificateId());
      return DeleteClientCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDeploymentOutcome APIGatewayClient::DeleteDeployment(const DeleteDeploymentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDeployment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: RestApiId, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: DeploymentId, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDeployment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDeploymentOutcome>(
    [&]()-> DeleteDeploymentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
      return DeleteDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDocumentationPartOutcome APIGatewayClient::DeleteDocumentationPart(const DeleteDocumentationPartRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDocumentationPart);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDocumentationPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocumentationPart", "Required field: RestApiId, is not set");
    return DeleteDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationPartIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocumentationPart", "Required field: DocumentationPartId, is not set");
    return DeleteDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationPartId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteDocumentationPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDocumentationPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDocumentationPart",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDocumentationPartOutcome>(
    [&]()-> DeleteDocumentationPartOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDocumentationPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/parts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentationPartId());
      return DeleteDocumentationPartOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDocumentationVersionOutcome APIGatewayClient::DeleteDocumentationVersion(const DeleteDocumentationVersionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDocumentationVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDocumentationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocumentationVersion", "Required field: RestApiId, is not set");
    return DeleteDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocumentationVersion", "Required field: DocumentationVersion, is not set");
    return DeleteDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteDocumentationVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDocumentationVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDocumentationVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDocumentationVersionOutcome>(
    [&]()-> DeleteDocumentationVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDocumentationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/versions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentationVersion());
      return DeleteDocumentationVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDomainNameOutcome APIGatewayClient::DeleteDomainName(const DeleteDomainNameRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDomainName);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomainName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainName", "Required field: DomainName, is not set");
    return DeleteDomainNameOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteDomainName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDomainName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDomainName",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDomainNameOutcome>(
    [&]()-> DeleteDomainNameOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomainName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
      return DeleteDomainNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteGatewayResponseOutcome APIGatewayClient::DeleteGatewayResponse(const DeleteGatewayResponseRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteGatewayResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGatewayResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGatewayResponse", "Required field: RestApiId, is not set");
    return DeleteGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResponseTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGatewayResponse", "Required field: ResponseType, is not set");
    return DeleteGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResponseType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteGatewayResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteGatewayResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteGatewayResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteGatewayResponseOutcome>(
    [&]()-> DeleteGatewayResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGatewayResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayresponses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType()));
      return DeleteGatewayResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIntegrationOutcome APIGatewayClient::DeleteIntegration(const DeleteIntegrationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteIntegration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: RestApiId, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: ResourceId, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: HttpMethod, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteIntegration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteIntegration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteIntegration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteIntegrationOutcome>(
    [&]()-> DeleteIntegrationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      endpointResolutionOutcome.GetResult().AddPathSegments("/integration");
      return DeleteIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIntegrationResponseOutcome APIGatewayClient::DeleteIntegrationResponse(const DeleteIntegrationResponseRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteIntegrationResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIntegrationResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: RestApiId, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: ResourceId, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: HttpMethod, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: StatusCode, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteIntegrationResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteIntegrationResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteIntegrationResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteIntegrationResponseOutcome>(
    [&]()-> DeleteIntegrationResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIntegrationResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      endpointResolutionOutcome.GetResult().AddPathSegments("/integration/responses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
      return DeleteIntegrationResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMethodOutcome APIGatewayClient::DeleteMethod(const DeleteMethodRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMethod);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethod", "Required field: RestApiId, is not set");
    return DeleteMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethod", "Required field: ResourceId, is not set");
    return DeleteMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethod", "Required field: HttpMethod, is not set");
    return DeleteMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteMethod, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMethod, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMethod",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMethodOutcome>(
    [&]()-> DeleteMethodOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      return DeleteMethodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMethodResponseOutcome APIGatewayClient::DeleteMethodResponse(const DeleteMethodResponseRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMethodResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMethodResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethodResponse", "Required field: RestApiId, is not set");
    return DeleteMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethodResponse", "Required field: ResourceId, is not set");
    return DeleteMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethodResponse", "Required field: HttpMethod, is not set");
    return DeleteMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethodResponse", "Required field: StatusCode, is not set");
    return DeleteMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteMethodResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMethodResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMethodResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMethodResponseOutcome>(
    [&]()-> DeleteMethodResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMethodResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      endpointResolutionOutcome.GetResult().AddPathSegments("/responses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
      return DeleteMethodResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteModelOutcome APIGatewayClient::DeleteModel(const DeleteModelRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteModel", "Required field: RestApiId, is not set");
    return DeleteModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteModel", "Required field: ModelName, is not set");
    return DeleteModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteModelOutcome>(
    [&]()-> DeleteModelOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/models/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelName());
      return DeleteModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRequestValidatorOutcome APIGatewayClient::DeleteRequestValidator(const DeleteRequestValidatorRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRequestValidator);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRequestValidator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRequestValidator", "Required field: RestApiId, is not set");
    return DeleteRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.RequestValidatorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRequestValidator", "Required field: RequestValidatorId, is not set");
    return DeleteRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestValidatorId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteRequestValidator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRequestValidator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRequestValidator",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRequestValidatorOutcome>(
    [&]()-> DeleteRequestValidatorOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRequestValidator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/requestvalidators/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRequestValidatorId());
      return DeleteRequestValidatorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteResourceOutcome APIGatewayClient::DeleteResource(const DeleteResourceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResource", "Required field: RestApiId, is not set");
    return DeleteResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResource", "Required field: ResourceId, is not set");
    return DeleteResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteResourceOutcome>(
    [&]()-> DeleteResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      return DeleteResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRestApiOutcome APIGatewayClient::DeleteRestApi(const DeleteRestApiRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRestApi);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRestApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRestApi", "Required field: RestApiId, is not set");
    return DeleteRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteRestApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRestApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRestApi",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRestApiOutcome>(
    [&]()-> DeleteRestApiOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRestApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      return DeleteRestApiOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteStageOutcome APIGatewayClient::DeleteStage(const DeleteStageRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteStage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStage", "Required field: RestApiId, is not set");
    return DeleteStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStage", "Required field: StageName, is not set");
    return DeleteStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteStage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteStageOutcome>(
    [&]()-> DeleteStageOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
      return DeleteStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteUsagePlanOutcome APIGatewayClient::DeleteUsagePlan(const DeleteUsagePlanRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteUsagePlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUsagePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUsagePlan", "Required field: UsagePlanId, is not set");
    return DeleteUsagePlanOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteUsagePlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteUsagePlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteUsagePlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteUsagePlanOutcome>(
    [&]()-> DeleteUsagePlanOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUsagePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
      return DeleteUsagePlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteUsagePlanKeyOutcome APIGatewayClient::DeleteUsagePlanKey(const DeleteUsagePlanKeyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteUsagePlanKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUsagePlanKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUsagePlanKey", "Required field: UsagePlanId, is not set");
    return DeleteUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  if (!request.KeyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUsagePlanKey", "Required field: KeyId, is not set");
    return DeleteUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteUsagePlanKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteUsagePlanKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteUsagePlanKey",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteUsagePlanKeyOutcome>(
    [&]()-> DeleteUsagePlanKeyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUsagePlanKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyId());
      return DeleteUsagePlanKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpcLinkOutcome APIGatewayClient::DeleteVpcLink(const DeleteVpcLinkRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVpcLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VpcLinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVpcLink", "Required field: VpcLinkId, is not set");
    return DeleteVpcLinkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcLinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteVpcLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVpcLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVpcLink",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVpcLinkOutcome>(
    [&]()-> DeleteVpcLinkOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vpclinks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcLinkId());
      return DeleteVpcLinkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

FlushStageAuthorizersCacheOutcome APIGatewayClient::FlushStageAuthorizersCache(const FlushStageAuthorizersCacheRequest& request) const
{
  AWS_OPERATION_GUARD(FlushStageAuthorizersCache);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, FlushStageAuthorizersCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("FlushStageAuthorizersCache", "Required field: RestApiId, is not set");
    return FlushStageAuthorizersCacheOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("FlushStageAuthorizersCache", "Required field: StageName, is not set");
    return FlushStageAuthorizersCacheOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, FlushStageAuthorizersCache, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, FlushStageAuthorizersCache, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".FlushStageAuthorizersCache",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<FlushStageAuthorizersCacheOutcome>(
    [&]()-> FlushStageAuthorizersCacheOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, FlushStageAuthorizersCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/cache/authorizers");
      return FlushStageAuthorizersCacheOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

FlushStageCacheOutcome APIGatewayClient::FlushStageCache(const FlushStageCacheRequest& request) const
{
  AWS_OPERATION_GUARD(FlushStageCache);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, FlushStageCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("FlushStageCache", "Required field: RestApiId, is not set");
    return FlushStageCacheOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("FlushStageCache", "Required field: StageName, is not set");
    return FlushStageCacheOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, FlushStageCache, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, FlushStageCache, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".FlushStageCache",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<FlushStageCacheOutcome>(
    [&]()-> FlushStageCacheOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, FlushStageCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/cache/data");
      return FlushStageCacheOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GenerateClientCertificateOutcome APIGatewayClient::GenerateClientCertificate(const GenerateClientCertificateRequest& request) const
{
  AWS_OPERATION_GUARD(GenerateClientCertificate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateClientCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GenerateClientCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GenerateClientCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GenerateClientCertificate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GenerateClientCertificateOutcome>(
    [&]()-> GenerateClientCertificateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateClientCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/clientcertificates");
      return GenerateClientCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAccountOutcome APIGatewayClient::GetAccount(const GetAccountRequest& request) const
{
  AWS_OPERATION_GUARD(GetAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAccount",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAccountOutcome>(
    [&]()-> GetAccountOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/account");
      return GetAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetApiKeyOutcome APIGatewayClient::GetApiKey(const GetApiKeyRequest& request) const
{
  AWS_OPERATION_GUARD(GetApiKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApiKeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApiKey", "Required field: ApiKey, is not set");
    return GetApiKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiKey]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetApiKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetApiKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetApiKey",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetApiKeyOutcome>(
    [&]()-> GetApiKeyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiKey());
      return GetApiKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetApiKeysOutcome APIGatewayClient::GetApiKeys(const GetApiKeysRequest& request) const
{
  AWS_OPERATION_GUARD(GetApiKeys);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApiKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetApiKeys, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetApiKeys, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetApiKeys",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetApiKeysOutcome>(
    [&]()-> GetApiKeysOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApiKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys");
      return GetApiKeysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAuthorizerOutcome APIGatewayClient::GetAuthorizer(const GetAuthorizerRequest& request) const
{
  AWS_OPERATION_GUARD(GetAuthorizer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAuthorizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAuthorizer", "Required field: RestApiId, is not set");
    return GetAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAuthorizer", "Required field: AuthorizerId, is not set");
    return GetAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAuthorizer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAuthorizer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAuthorizer",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAuthorizerOutcome>(
    [&]()-> GetAuthorizerOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAuthorizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerId());
      return GetAuthorizerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAuthorizersOutcome APIGatewayClient::GetAuthorizers(const GetAuthorizersRequest& request) const
{
  AWS_OPERATION_GUARD(GetAuthorizers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAuthorizers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAuthorizers", "Required field: RestApiId, is not set");
    return GetAuthorizersOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAuthorizers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAuthorizers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAuthorizers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAuthorizersOutcome>(
    [&]()-> GetAuthorizersOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAuthorizers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers");
      return GetAuthorizersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBasePathMappingOutcome APIGatewayClient::GetBasePathMapping(const GetBasePathMappingRequest& request) const
{
  AWS_OPERATION_GUARD(GetBasePathMapping);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBasePathMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBasePathMapping", "Required field: DomainName, is not set");
    return GetBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.BasePathHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBasePathMapping", "Required field: BasePath, is not set");
    return GetBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BasePath]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBasePathMapping, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBasePathMapping, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBasePathMapping",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBasePathMappingOutcome>(
    [&]()-> GetBasePathMappingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBasePathMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/basepathmappings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBasePath());
      return GetBasePathMappingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBasePathMappingsOutcome APIGatewayClient::GetBasePathMappings(const GetBasePathMappingsRequest& request) const
{
  AWS_OPERATION_GUARD(GetBasePathMappings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBasePathMappings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBasePathMappings", "Required field: DomainName, is not set");
    return GetBasePathMappingsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBasePathMappings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBasePathMappings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBasePathMappings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBasePathMappingsOutcome>(
    [&]()-> GetBasePathMappingsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBasePathMappings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/basepathmappings");
      return GetBasePathMappingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetClientCertificateOutcome APIGatewayClient::GetClientCertificate(const GetClientCertificateRequest& request) const
{
  AWS_OPERATION_GUARD(GetClientCertificate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetClientCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClientCertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetClientCertificate", "Required field: ClientCertificateId, is not set");
    return GetClientCertificateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientCertificateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetClientCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetClientCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetClientCertificate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetClientCertificateOutcome>(
    [&]()-> GetClientCertificateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetClientCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/clientcertificates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClientCertificateId());
      return GetClientCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetClientCertificatesOutcome APIGatewayClient::GetClientCertificates(const GetClientCertificatesRequest& request) const
{
  AWS_OPERATION_GUARD(GetClientCertificates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetClientCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetClientCertificates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetClientCertificates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetClientCertificates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetClientCertificatesOutcome>(
    [&]()-> GetClientCertificatesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetClientCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/clientcertificates");
      return GetClientCertificatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDeploymentOutcome APIGatewayClient::GetDeployment(const GetDeploymentRequest& request) const
{
  AWS_OPERATION_GUARD(GetDeployment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: RestApiId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: DeploymentId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDeployment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDeploymentOutcome>(
    [&]()-> GetDeploymentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
      return GetDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDeploymentsOutcome APIGatewayClient::GetDeployments(const GetDeploymentsRequest& request) const
{
  AWS_OPERATION_GUARD(GetDeployments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployments", "Required field: RestApiId, is not set");
    return GetDeploymentsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDeployments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDeployments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDeployments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDeploymentsOutcome>(
    [&]()-> GetDeploymentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
      return GetDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDocumentationPartOutcome APIGatewayClient::GetDocumentationPart(const GetDocumentationPartRequest& request) const
{
  AWS_OPERATION_GUARD(GetDocumentationPart);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDocumentationPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationPart", "Required field: RestApiId, is not set");
    return GetDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationPartIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationPart", "Required field: DocumentationPartId, is not set");
    return GetDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationPartId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDocumentationPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDocumentationPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDocumentationPart",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDocumentationPartOutcome>(
    [&]()-> GetDocumentationPartOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDocumentationPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/parts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentationPartId());
      return GetDocumentationPartOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDocumentationPartsOutcome APIGatewayClient::GetDocumentationParts(const GetDocumentationPartsRequest& request) const
{
  AWS_OPERATION_GUARD(GetDocumentationParts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDocumentationParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationParts", "Required field: RestApiId, is not set");
    return GetDocumentationPartsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDocumentationParts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDocumentationParts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDocumentationParts",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDocumentationPartsOutcome>(
    [&]()-> GetDocumentationPartsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDocumentationParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/parts");
      return GetDocumentationPartsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDocumentationVersionOutcome APIGatewayClient::GetDocumentationVersion(const GetDocumentationVersionRequest& request) const
{
  AWS_OPERATION_GUARD(GetDocumentationVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDocumentationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationVersion", "Required field: RestApiId, is not set");
    return GetDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationVersion", "Required field: DocumentationVersion, is not set");
    return GetDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDocumentationVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDocumentationVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDocumentationVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDocumentationVersionOutcome>(
    [&]()-> GetDocumentationVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDocumentationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/versions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentationVersion());
      return GetDocumentationVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDocumentationVersionsOutcome APIGatewayClient::GetDocumentationVersions(const GetDocumentationVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(GetDocumentationVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDocumentationVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationVersions", "Required field: RestApiId, is not set");
    return GetDocumentationVersionsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDocumentationVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDocumentationVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDocumentationVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDocumentationVersionsOutcome>(
    [&]()-> GetDocumentationVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDocumentationVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/versions");
      return GetDocumentationVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDomainNameOutcome APIGatewayClient::GetDomainName(const GetDomainNameRequest& request) const
{
  AWS_OPERATION_GUARD(GetDomainName);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomainName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainName", "Required field: DomainName, is not set");
    return GetDomainNameOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDomainName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDomainName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDomainName",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDomainNameOutcome>(
    [&]()-> GetDomainNameOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomainName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
      return GetDomainNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDomainNamesOutcome APIGatewayClient::GetDomainNames(const GetDomainNamesRequest& request) const
{
  AWS_OPERATION_GUARD(GetDomainNames);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomainNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDomainNames, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDomainNames, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDomainNames",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDomainNamesOutcome>(
    [&]()-> GetDomainNamesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomainNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames");
      return GetDomainNamesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetExportOutcome APIGatewayClient::GetExport(const GetExportRequest& request) const
{
  AWS_OPERATION_GUARD(GetExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: RestApiId, is not set");
    return GetExportOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: StageName, is not set");
    return GetExportOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  if (!request.ExportTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: ExportType, is not set");
    return GetExportOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetExport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetExportOutcome>(
    [&]()-> GetExportOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportType());
      return GetExportOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetGatewayResponseOutcome APIGatewayClient::GetGatewayResponse(const GetGatewayResponseRequest& request) const
{
  AWS_OPERATION_GUARD(GetGatewayResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGatewayResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGatewayResponse", "Required field: RestApiId, is not set");
    return GetGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResponseTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGatewayResponse", "Required field: ResponseType, is not set");
    return GetGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResponseType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetGatewayResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetGatewayResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetGatewayResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetGatewayResponseOutcome>(
    [&]()-> GetGatewayResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGatewayResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayresponses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType()));
      return GetGatewayResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetGatewayResponsesOutcome APIGatewayClient::GetGatewayResponses(const GetGatewayResponsesRequest& request) const
{
  AWS_OPERATION_GUARD(GetGatewayResponses);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGatewayResponses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGatewayResponses", "Required field: RestApiId, is not set");
    return GetGatewayResponsesOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetGatewayResponses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetGatewayResponses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetGatewayResponses",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetGatewayResponsesOutcome>(
    [&]()-> GetGatewayResponsesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGatewayResponses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayresponses");
      return GetGatewayResponsesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIntegrationOutcome APIGatewayClient::GetIntegration(const GetIntegrationRequest& request) const
{
  AWS_OPERATION_GUARD(GetIntegration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: RestApiId, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: ResourceId, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: HttpMethod, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetIntegration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIntegration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIntegration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIntegrationOutcome>(
    [&]()-> GetIntegrationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      endpointResolutionOutcome.GetResult().AddPathSegments("/integration");
      return GetIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIntegrationResponseOutcome APIGatewayClient::GetIntegrationResponse(const GetIntegrationResponseRequest& request) const
{
  AWS_OPERATION_GUARD(GetIntegrationResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIntegrationResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: RestApiId, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: ResourceId, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: HttpMethod, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: StatusCode, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetIntegrationResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIntegrationResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIntegrationResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIntegrationResponseOutcome>(
    [&]()-> GetIntegrationResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIntegrationResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      endpointResolutionOutcome.GetResult().AddPathSegments("/integration/responses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
      return GetIntegrationResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMethodOutcome APIGatewayClient::GetMethod(const GetMethodRequest& request) const
{
  AWS_OPERATION_GUARD(GetMethod);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethod", "Required field: RestApiId, is not set");
    return GetMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethod", "Required field: ResourceId, is not set");
    return GetMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethod", "Required field: HttpMethod, is not set");
    return GetMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetMethod, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMethod, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMethod",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMethodOutcome>(
    [&]()-> GetMethodOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      return GetMethodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMethodResponseOutcome APIGatewayClient::GetMethodResponse(const GetMethodResponseRequest& request) const
{
  AWS_OPERATION_GUARD(GetMethodResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMethodResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethodResponse", "Required field: RestApiId, is not set");
    return GetMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethodResponse", "Required field: ResourceId, is not set");
    return GetMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethodResponse", "Required field: HttpMethod, is not set");
    return GetMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethodResponse", "Required field: StatusCode, is not set");
    return GetMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetMethodResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMethodResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMethodResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMethodResponseOutcome>(
    [&]()-> GetMethodResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMethodResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      endpointResolutionOutcome.GetResult().AddPathSegments("/responses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
      return GetMethodResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetModelOutcome APIGatewayClient::GetModel(const GetModelRequest& request) const
{
  AWS_OPERATION_GUARD(GetModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModel", "Required field: RestApiId, is not set");
    return GetModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModel", "Required field: ModelName, is not set");
    return GetModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetModelOutcome>(
    [&]()-> GetModelOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/models/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelName());
      return GetModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetModelTemplateOutcome APIGatewayClient::GetModelTemplate(const GetModelTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(GetModelTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetModelTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModelTemplate", "Required field: RestApiId, is not set");
    return GetModelTemplateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModelTemplate", "Required field: ModelName, is not set");
    return GetModelTemplateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetModelTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetModelTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetModelTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetModelTemplateOutcome>(
    [&]()-> GetModelTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetModelTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/models/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/default_template");
      return GetModelTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetModelsOutcome APIGatewayClient::GetModels(const GetModelsRequest& request) const
{
  AWS_OPERATION_GUARD(GetModels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModels", "Required field: RestApiId, is not set");
    return GetModelsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetModels",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetModelsOutcome>(
    [&]()-> GetModelsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/models");
      return GetModelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRequestValidatorOutcome APIGatewayClient::GetRequestValidator(const GetRequestValidatorRequest& request) const
{
  AWS_OPERATION_GUARD(GetRequestValidator);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRequestValidator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRequestValidator", "Required field: RestApiId, is not set");
    return GetRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.RequestValidatorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRequestValidator", "Required field: RequestValidatorId, is not set");
    return GetRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestValidatorId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRequestValidator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRequestValidator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRequestValidator",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRequestValidatorOutcome>(
    [&]()-> GetRequestValidatorOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRequestValidator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/requestvalidators/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRequestValidatorId());
      return GetRequestValidatorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRequestValidatorsOutcome APIGatewayClient::GetRequestValidators(const GetRequestValidatorsRequest& request) const
{
  AWS_OPERATION_GUARD(GetRequestValidators);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRequestValidators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRequestValidators", "Required field: RestApiId, is not set");
    return GetRequestValidatorsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRequestValidators, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRequestValidators, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRequestValidators",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRequestValidatorsOutcome>(
    [&]()-> GetRequestValidatorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRequestValidators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/requestvalidators");
      return GetRequestValidatorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetResourceOutcome APIGatewayClient::GetResource(const GetResourceRequest& request) const
{
  AWS_OPERATION_GUARD(GetResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResource", "Required field: RestApiId, is not set");
    return GetResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResource", "Required field: ResourceId, is not set");
    return GetResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetResourceOutcome>(
    [&]()-> GetResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      return GetResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetResourcesOutcome APIGatewayClient::GetResources(const GetResourcesRequest& request) const
{
  AWS_OPERATION_GUARD(GetResources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResources", "Required field: RestApiId, is not set");
    return GetResourcesOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetResources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetResources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetResources",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetResourcesOutcome>(
    [&]()-> GetResourcesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources");
      return GetResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRestApiOutcome APIGatewayClient::GetRestApi(const GetRestApiRequest& request) const
{
  AWS_OPERATION_GUARD(GetRestApi);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRestApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRestApi", "Required field: RestApiId, is not set");
    return GetRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRestApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRestApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRestApi",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRestApiOutcome>(
    [&]()-> GetRestApiOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRestApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      return GetRestApiOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRestApisOutcome APIGatewayClient::GetRestApis(const GetRestApisRequest& request) const
{
  AWS_OPERATION_GUARD(GetRestApis);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRestApis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRestApis, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRestApis, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRestApis",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRestApisOutcome>(
    [&]()-> GetRestApisOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRestApis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis");
      return GetRestApisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSdkOutcome APIGatewayClient::GetSdk(const GetSdkRequest& request) const
{
  AWS_OPERATION_GUARD(GetSdk);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSdk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSdk", "Required field: RestApiId, is not set");
    return GetSdkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSdk", "Required field: StageName, is not set");
    return GetSdkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  if (!request.SdkTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSdk", "Required field: SdkType, is not set");
    return GetSdkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SdkType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSdk, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSdk, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSdk",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSdkOutcome>(
    [&]()-> GetSdkOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSdk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sdks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSdkType());
      return GetSdkOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSdkTypeOutcome APIGatewayClient::GetSdkType(const GetSdkTypeRequest& request) const
{
  AWS_OPERATION_GUARD(GetSdkType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSdkType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSdkType", "Required field: Id, is not set");
    return GetSdkTypeOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSdkType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSdkType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSdkType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSdkTypeOutcome>(
    [&]()-> GetSdkTypeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSdkType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sdktypes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
      return GetSdkTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSdkTypesOutcome APIGatewayClient::GetSdkTypes(const GetSdkTypesRequest& request) const
{
  AWS_OPERATION_GUARD(GetSdkTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSdkTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSdkTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSdkTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSdkTypes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSdkTypesOutcome>(
    [&]()-> GetSdkTypesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSdkTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sdktypes");
      return GetSdkTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStageOutcome APIGatewayClient::GetStage(const GetStageRequest& request) const
{
  AWS_OPERATION_GUARD(GetStage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStage", "Required field: RestApiId, is not set");
    return GetStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStage", "Required field: StageName, is not set");
    return GetStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStageOutcome>(
    [&]()-> GetStageOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
      return GetStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStagesOutcome APIGatewayClient::GetStages(const GetStagesRequest& request) const
{
  AWS_OPERATION_GUARD(GetStages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStages", "Required field: RestApiId, is not set");
    return GetStagesOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetStages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStagesOutcome>(
    [&]()-> GetStagesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/stages");
      return GetStagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTagsOutcome APIGatewayClient::GetTags(const GetTagsRequest& request) const
{
  AWS_OPERATION_GUARD(GetTags);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTags", "Required field: ResourceArn, is not set");
    return GetTagsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTags",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTagsOutcome>(
    [&]()-> GetTagsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return GetTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUsageOutcome APIGatewayClient::GetUsage(const GetUsageRequest& request) const
{
  AWS_OPERATION_GUARD(GetUsage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsage", "Required field: UsagePlanId, is not set");
    return GetUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  if (!request.StartDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsage", "Required field: StartDate, is not set");
    return GetUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsage", "Required field: EndDate, is not set");
    return GetUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUsage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUsageOutcome>(
    [&]()-> GetUsageOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usage");
      return GetUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUsagePlanOutcome APIGatewayClient::GetUsagePlan(const GetUsagePlanRequest& request) const
{
  AWS_OPERATION_GUARD(GetUsagePlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUsagePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsagePlan", "Required field: UsagePlanId, is not set");
    return GetUsagePlanOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetUsagePlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUsagePlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUsagePlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUsagePlanOutcome>(
    [&]()-> GetUsagePlanOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUsagePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
      return GetUsagePlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUsagePlanKeyOutcome APIGatewayClient::GetUsagePlanKey(const GetUsagePlanKeyRequest& request) const
{
  AWS_OPERATION_GUARD(GetUsagePlanKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUsagePlanKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsagePlanKey", "Required field: UsagePlanId, is not set");
    return GetUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  if (!request.KeyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsagePlanKey", "Required field: KeyId, is not set");
    return GetUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetUsagePlanKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUsagePlanKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUsagePlanKey",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUsagePlanKeyOutcome>(
    [&]()-> GetUsagePlanKeyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUsagePlanKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyId());
      return GetUsagePlanKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUsagePlanKeysOutcome APIGatewayClient::GetUsagePlanKeys(const GetUsagePlanKeysRequest& request) const
{
  AWS_OPERATION_GUARD(GetUsagePlanKeys);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUsagePlanKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsagePlanKeys", "Required field: UsagePlanId, is not set");
    return GetUsagePlanKeysOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetUsagePlanKeys, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUsagePlanKeys, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUsagePlanKeys",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUsagePlanKeysOutcome>(
    [&]()-> GetUsagePlanKeysOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUsagePlanKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/keys");
      return GetUsagePlanKeysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUsagePlansOutcome APIGatewayClient::GetUsagePlans(const GetUsagePlansRequest& request) const
{
  AWS_OPERATION_GUARD(GetUsagePlans);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUsagePlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetUsagePlans, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUsagePlans, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUsagePlans",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUsagePlansOutcome>(
    [&]()-> GetUsagePlansOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUsagePlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans");
      return GetUsagePlansOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVpcLinkOutcome APIGatewayClient::GetVpcLink(const GetVpcLinkRequest& request) const
{
  AWS_OPERATION_GUARD(GetVpcLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVpcLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VpcLinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVpcLink", "Required field: VpcLinkId, is not set");
    return GetVpcLinkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcLinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetVpcLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetVpcLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetVpcLink",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetVpcLinkOutcome>(
    [&]()-> GetVpcLinkOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVpcLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vpclinks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcLinkId());
      return GetVpcLinkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVpcLinksOutcome APIGatewayClient::GetVpcLinks(const GetVpcLinksRequest& request) const
{
  AWS_OPERATION_GUARD(GetVpcLinks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVpcLinks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetVpcLinks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetVpcLinks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetVpcLinks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetVpcLinksOutcome>(
    [&]()-> GetVpcLinksOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVpcLinks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vpclinks");
      return GetVpcLinksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportApiKeysOutcome APIGatewayClient::ImportApiKeys(const ImportApiKeysRequest& request) const
{
  AWS_OPERATION_GUARD(ImportApiKeys);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportApiKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportApiKeys", "Required field: Format, is not set");
    return ImportApiKeysOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ImportApiKeys, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ImportApiKeys, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ImportApiKeys",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ImportApiKeysOutcome>(
    [&]()-> ImportApiKeysOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportApiKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys");
      ss.str("?mode=import");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      return ImportApiKeysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportDocumentationPartsOutcome APIGatewayClient::ImportDocumentationParts(const ImportDocumentationPartsRequest& request) const
{
  AWS_OPERATION_GUARD(ImportDocumentationParts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportDocumentationParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportDocumentationParts", "Required field: RestApiId, is not set");
    return ImportDocumentationPartsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ImportDocumentationParts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ImportDocumentationParts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ImportDocumentationParts",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ImportDocumentationPartsOutcome>(
    [&]()-> ImportDocumentationPartsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportDocumentationParts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/parts");
      return ImportDocumentationPartsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportRestApiOutcome APIGatewayClient::ImportRestApi(const ImportRestApiRequest& request) const
{
  AWS_OPERATION_GUARD(ImportRestApi);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportRestApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ImportRestApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ImportRestApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ImportRestApi",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ImportRestApiOutcome>(
    [&]()-> ImportRestApiOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportRestApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      Aws::StringStream ss;
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis");
      ss.str("?mode=import");
      endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
      return ImportRestApiOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutGatewayResponseOutcome APIGatewayClient::PutGatewayResponse(const PutGatewayResponseRequest& request) const
{
  AWS_OPERATION_GUARD(PutGatewayResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutGatewayResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutGatewayResponse", "Required field: RestApiId, is not set");
    return PutGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResponseTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutGatewayResponse", "Required field: ResponseType, is not set");
    return PutGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResponseType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutGatewayResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutGatewayResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutGatewayResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutGatewayResponseOutcome>(
    [&]()-> PutGatewayResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutGatewayResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayresponses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType()));
      return PutGatewayResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutIntegrationOutcome APIGatewayClient::PutIntegration(const PutIntegrationRequest& request) const
{
  AWS_OPERATION_GUARD(PutIntegration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: RestApiId, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: ResourceId, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: HttpMethod, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutIntegration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutIntegration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutIntegration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutIntegrationOutcome>(
    [&]()-> PutIntegrationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      endpointResolutionOutcome.GetResult().AddPathSegments("/integration");
      return PutIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutIntegrationResponseOutcome APIGatewayClient::PutIntegrationResponse(const PutIntegrationResponseRequest& request) const
{
  AWS_OPERATION_GUARD(PutIntegrationResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutIntegrationResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegrationResponse", "Required field: RestApiId, is not set");
    return PutIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegrationResponse", "Required field: ResourceId, is not set");
    return PutIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegrationResponse", "Required field: HttpMethod, is not set");
    return PutIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegrationResponse", "Required field: StatusCode, is not set");
    return PutIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutIntegrationResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutIntegrationResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutIntegrationResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutIntegrationResponseOutcome>(
    [&]()-> PutIntegrationResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutIntegrationResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      endpointResolutionOutcome.GetResult().AddPathSegments("/integration/responses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
      return PutIntegrationResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutMethodOutcome APIGatewayClient::PutMethod(const PutMethodRequest& request) const
{
  AWS_OPERATION_GUARD(PutMethod);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethod", "Required field: RestApiId, is not set");
    return PutMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethod", "Required field: ResourceId, is not set");
    return PutMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethod", "Required field: HttpMethod, is not set");
    return PutMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutMethod, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutMethod, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutMethod",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutMethodOutcome>(
    [&]()-> PutMethodOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      return PutMethodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutMethodResponseOutcome APIGatewayClient::PutMethodResponse(const PutMethodResponseRequest& request) const
{
  AWS_OPERATION_GUARD(PutMethodResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutMethodResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethodResponse", "Required field: RestApiId, is not set");
    return PutMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethodResponse", "Required field: ResourceId, is not set");
    return PutMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethodResponse", "Required field: HttpMethod, is not set");
    return PutMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethodResponse", "Required field: StatusCode, is not set");
    return PutMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutMethodResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutMethodResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutMethodResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutMethodResponseOutcome>(
    [&]()-> PutMethodResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutMethodResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      endpointResolutionOutcome.GetResult().AddPathSegments("/responses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
      return PutMethodResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutRestApiOutcome APIGatewayClient::PutRestApi(const PutRestApiRequest& request) const
{
  AWS_OPERATION_GUARD(PutRestApi);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRestApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRestApi", "Required field: RestApiId, is not set");
    return PutRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutRestApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutRestApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutRestApi",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutRestApiOutcome>(
    [&]()-> PutRestApiOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRestApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      return PutRestApiOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome APIGatewayClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TestInvokeAuthorizerOutcome APIGatewayClient::TestInvokeAuthorizer(const TestInvokeAuthorizerRequest& request) const
{
  AWS_OPERATION_GUARD(TestInvokeAuthorizer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestInvokeAuthorizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestInvokeAuthorizer", "Required field: RestApiId, is not set");
    return TestInvokeAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestInvokeAuthorizer", "Required field: AuthorizerId, is not set");
    return TestInvokeAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TestInvokeAuthorizer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TestInvokeAuthorizer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TestInvokeAuthorizer",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TestInvokeAuthorizerOutcome>(
    [&]()-> TestInvokeAuthorizerOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestInvokeAuthorizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerId());
      return TestInvokeAuthorizerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TestInvokeMethodOutcome APIGatewayClient::TestInvokeMethod(const TestInvokeMethodRequest& request) const
{
  AWS_OPERATION_GUARD(TestInvokeMethod);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestInvokeMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestInvokeMethod", "Required field: RestApiId, is not set");
    return TestInvokeMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestInvokeMethod", "Required field: ResourceId, is not set");
    return TestInvokeMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestInvokeMethod", "Required field: HttpMethod, is not set");
    return TestInvokeMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TestInvokeMethod, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TestInvokeMethod, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TestInvokeMethod",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TestInvokeMethodOutcome>(
    [&]()-> TestInvokeMethodOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestInvokeMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      return TestInvokeMethodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome APIGatewayClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAccountOutcome APIGatewayClient::UpdateAccount(const UpdateAccountRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAccount",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAccountOutcome>(
    [&]()-> UpdateAccountOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/account");
      return UpdateAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateApiKeyOutcome APIGatewayClient::UpdateApiKey(const UpdateApiKeyRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateApiKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApiKeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApiKey", "Required field: ApiKey, is not set");
    return UpdateApiKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiKey]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateApiKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateApiKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateApiKey",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateApiKeyOutcome>(
    [&]()-> UpdateApiKeyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApiKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiKey());
      return UpdateApiKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAuthorizerOutcome APIGatewayClient::UpdateAuthorizer(const UpdateAuthorizerRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAuthorizer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAuthorizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAuthorizer", "Required field: RestApiId, is not set");
    return UpdateAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAuthorizer", "Required field: AuthorizerId, is not set");
    return UpdateAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAuthorizer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAuthorizer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAuthorizer",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAuthorizerOutcome>(
    [&]()-> UpdateAuthorizerOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAuthorizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerId());
      return UpdateAuthorizerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBasePathMappingOutcome APIGatewayClient::UpdateBasePathMapping(const UpdateBasePathMappingRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateBasePathMapping);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBasePathMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBasePathMapping", "Required field: DomainName, is not set");
    return UpdateBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.BasePathHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBasePathMapping", "Required field: BasePath, is not set");
    return UpdateBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BasePath]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBasePathMapping, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBasePathMapping, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBasePathMapping",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBasePathMappingOutcome>(
    [&]()-> UpdateBasePathMappingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBasePathMapping, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/basepathmappings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBasePath());
      return UpdateBasePathMappingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateClientCertificateOutcome APIGatewayClient::UpdateClientCertificate(const UpdateClientCertificateRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateClientCertificate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateClientCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClientCertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClientCertificate", "Required field: ClientCertificateId, is not set");
    return UpdateClientCertificateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientCertificateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateClientCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateClientCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateClientCertificate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateClientCertificateOutcome>(
    [&]()-> UpdateClientCertificateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateClientCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/clientcertificates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClientCertificateId());
      return UpdateClientCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDeploymentOutcome APIGatewayClient::UpdateDeployment(const UpdateDeploymentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDeployment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeployment", "Required field: RestApiId, is not set");
    return UpdateDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeployment", "Required field: DeploymentId, is not set");
    return UpdateDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDeployment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDeploymentOutcome>(
    [&]()-> UpdateDeploymentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
      return UpdateDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDocumentationPartOutcome APIGatewayClient::UpdateDocumentationPart(const UpdateDocumentationPartRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDocumentationPart);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDocumentationPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDocumentationPart", "Required field: RestApiId, is not set");
    return UpdateDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationPartIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDocumentationPart", "Required field: DocumentationPartId, is not set");
    return UpdateDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationPartId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDocumentationPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDocumentationPart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDocumentationPart",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDocumentationPartOutcome>(
    [&]()-> UpdateDocumentationPartOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDocumentationPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/parts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentationPartId());
      return UpdateDocumentationPartOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDocumentationVersionOutcome APIGatewayClient::UpdateDocumentationVersion(const UpdateDocumentationVersionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDocumentationVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDocumentationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDocumentationVersion", "Required field: RestApiId, is not set");
    return UpdateDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDocumentationVersion", "Required field: DocumentationVersion, is not set");
    return UpdateDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDocumentationVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDocumentationVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDocumentationVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDocumentationVersionOutcome>(
    [&]()-> UpdateDocumentationVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDocumentationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/versions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentationVersion());
      return UpdateDocumentationVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDomainNameOutcome APIGatewayClient::UpdateDomainName(const UpdateDomainNameRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDomainName);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomainName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainName", "Required field: DomainName, is not set");
    return UpdateDomainNameOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDomainName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDomainName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDomainName",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDomainNameOutcome>(
    [&]()-> UpdateDomainNameOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomainName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
      return UpdateDomainNameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGatewayResponseOutcome APIGatewayClient::UpdateGatewayResponse(const UpdateGatewayResponseRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGatewayResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGatewayResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGatewayResponse", "Required field: RestApiId, is not set");
    return UpdateGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResponseTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGatewayResponse", "Required field: ResponseType, is not set");
    return UpdateGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResponseType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateGatewayResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGatewayResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGatewayResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGatewayResponseOutcome>(
    [&]()-> UpdateGatewayResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGatewayResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayresponses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType()));
      return UpdateGatewayResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateIntegrationOutcome APIGatewayClient::UpdateIntegration(const UpdateIntegrationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateIntegration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: RestApiId, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: ResourceId, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: HttpMethod, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateIntegration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateIntegration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateIntegration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateIntegrationOutcome>(
    [&]()-> UpdateIntegrationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      endpointResolutionOutcome.GetResult().AddPathSegments("/integration");
      return UpdateIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateIntegrationResponseOutcome APIGatewayClient::UpdateIntegrationResponse(const UpdateIntegrationResponseRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateIntegrationResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIntegrationResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: RestApiId, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: ResourceId, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: HttpMethod, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: StatusCode, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateIntegrationResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateIntegrationResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateIntegrationResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateIntegrationResponseOutcome>(
    [&]()-> UpdateIntegrationResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIntegrationResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      endpointResolutionOutcome.GetResult().AddPathSegments("/integration/responses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
      return UpdateIntegrationResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMethodOutcome APIGatewayClient::UpdateMethod(const UpdateMethodRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMethod);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethod", "Required field: RestApiId, is not set");
    return UpdateMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethod", "Required field: ResourceId, is not set");
    return UpdateMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethod", "Required field: HttpMethod, is not set");
    return UpdateMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateMethod, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMethod, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMethod",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMethodOutcome>(
    [&]()-> UpdateMethodOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      return UpdateMethodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMethodResponseOutcome APIGatewayClient::UpdateMethodResponse(const UpdateMethodResponseRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMethodResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMethodResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethodResponse", "Required field: RestApiId, is not set");
    return UpdateMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethodResponse", "Required field: ResourceId, is not set");
    return UpdateMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethodResponse", "Required field: HttpMethod, is not set");
    return UpdateMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethodResponse", "Required field: StatusCode, is not set");
    return UpdateMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateMethodResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMethodResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMethodResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMethodResponseOutcome>(
    [&]()-> UpdateMethodResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMethodResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
      endpointResolutionOutcome.GetResult().AddPathSegments("/responses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
      return UpdateMethodResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateModelOutcome APIGatewayClient::UpdateModel(const UpdateModelRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateModel", "Required field: RestApiId, is not set");
    return UpdateModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateModel", "Required field: ModelName, is not set");
    return UpdateModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateModelOutcome>(
    [&]()-> UpdateModelOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/models/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelName());
      return UpdateModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRequestValidatorOutcome APIGatewayClient::UpdateRequestValidator(const UpdateRequestValidatorRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRequestValidator);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRequestValidator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRequestValidator", "Required field: RestApiId, is not set");
    return UpdateRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.RequestValidatorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRequestValidator", "Required field: RequestValidatorId, is not set");
    return UpdateRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestValidatorId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateRequestValidator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRequestValidator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRequestValidator",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRequestValidatorOutcome>(
    [&]()-> UpdateRequestValidatorOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRequestValidator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/requestvalidators/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRequestValidatorId());
      return UpdateRequestValidatorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateResourceOutcome APIGatewayClient::UpdateResource(const UpdateResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResource", "Required field: RestApiId, is not set");
    return UpdateResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResource", "Required field: ResourceId, is not set");
    return UpdateResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateResourceOutcome>(
    [&]()-> UpdateResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
      return UpdateResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRestApiOutcome APIGatewayClient::UpdateRestApi(const UpdateRestApiRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRestApi);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRestApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRestApi", "Required field: RestApiId, is not set");
    return UpdateRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateRestApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRestApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRestApi",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRestApiOutcome>(
    [&]()-> UpdateRestApiOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRestApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      return UpdateRestApiOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateStageOutcome APIGatewayClient::UpdateStage(const UpdateStageRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateStage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStage", "Required field: RestApiId, is not set");
    return UpdateStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStage", "Required field: StageName, is not set");
    return UpdateStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateStage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateStageOutcome>(
    [&]()-> UpdateStageOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
      return UpdateStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateUsageOutcome APIGatewayClient::UpdateUsage(const UpdateUsageRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateUsage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUsage", "Required field: UsagePlanId, is not set");
    return UpdateUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  if (!request.KeyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUsage", "Required field: KeyId, is not set");
    return UpdateUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateUsage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateUsageOutcome>(
    [&]()-> UpdateUsageOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usage");
      return UpdateUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateUsagePlanOutcome APIGatewayClient::UpdateUsagePlan(const UpdateUsagePlanRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateUsagePlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUsagePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUsagePlan", "Required field: UsagePlanId, is not set");
    return UpdateUsagePlanOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateUsagePlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateUsagePlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateUsagePlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateUsagePlanOutcome>(
    [&]()-> UpdateUsagePlanOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUsagePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
      return UpdateUsagePlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateVpcLinkOutcome APIGatewayClient::UpdateVpcLink(const UpdateVpcLinkRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVpcLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVpcLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VpcLinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVpcLink", "Required field: VpcLinkId, is not set");
    return UpdateVpcLinkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcLinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateVpcLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateVpcLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateVpcLink",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateVpcLinkOutcome>(
    [&]()-> UpdateVpcLinkOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVpcLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vpclinks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcLinkId());
      return UpdateVpcLinkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

