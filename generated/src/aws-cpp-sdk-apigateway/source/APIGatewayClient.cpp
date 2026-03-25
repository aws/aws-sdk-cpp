/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/APIGatewayClient.h>
#include <aws/apigateway/APIGatewayEndpointProvider.h>
#include <aws/apigateway/APIGatewayErrorMarshaller.h>
#include <aws/apigateway/model/CreateApiKeyRequest.h>
#include <aws/apigateway/model/CreateAuthorizerRequest.h>
#include <aws/apigateway/model/CreateBasePathMappingRequest.h>
#include <aws/apigateway/model/CreateDeploymentRequest.h>
#include <aws/apigateway/model/CreateDocumentationPartRequest.h>
#include <aws/apigateway/model/CreateDocumentationVersionRequest.h>
#include <aws/apigateway/model/CreateDomainNameAccessAssociationRequest.h>
#include <aws/apigateway/model/CreateDomainNameRequest.h>
#include <aws/apigateway/model/CreateModelRequest.h>
#include <aws/apigateway/model/CreateRequestValidatorRequest.h>
#include <aws/apigateway/model/CreateResourceRequest.h>
#include <aws/apigateway/model/CreateRestApiRequest.h>
#include <aws/apigateway/model/CreateStageRequest.h>
#include <aws/apigateway/model/CreateUsagePlanKeyRequest.h>
#include <aws/apigateway/model/CreateUsagePlanRequest.h>
#include <aws/apigateway/model/CreateVpcLinkRequest.h>
#include <aws/apigateway/model/DeleteApiKeyRequest.h>
#include <aws/apigateway/model/DeleteAuthorizerRequest.h>
#include <aws/apigateway/model/DeleteBasePathMappingRequest.h>
#include <aws/apigateway/model/DeleteClientCertificateRequest.h>
#include <aws/apigateway/model/DeleteDeploymentRequest.h>
#include <aws/apigateway/model/DeleteDocumentationPartRequest.h>
#include <aws/apigateway/model/DeleteDocumentationVersionRequest.h>
#include <aws/apigateway/model/DeleteDomainNameAccessAssociationRequest.h>
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
#include <aws/apigateway/model/DeleteUsagePlanKeyRequest.h>
#include <aws/apigateway/model/DeleteUsagePlanRequest.h>
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
#include <aws/apigateway/model/GetDomainNameAccessAssociationsRequest.h>
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
#include <aws/apigateway/model/GetUsagePlanKeyRequest.h>
#include <aws/apigateway/model/GetUsagePlanKeysRequest.h>
#include <aws/apigateway/model/GetUsagePlanRequest.h>
#include <aws/apigateway/model/GetUsagePlansRequest.h>
#include <aws/apigateway/model/GetUsageRequest.h>
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
#include <aws/apigateway/model/RejectDomainNameAccessAssociationRequest.h>
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
#include <aws/apigateway/model/UpdateUsagePlanRequest.h>
#include <aws/apigateway/model/UpdateUsageRequest.h>
#include <aws/apigateway/model/UpdateVpcLinkRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
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

namespace Aws {
namespace APIGateway {
const char SERVICE_NAME[] = "apigateway";
const char ALLOCATION_TAG[] = "APIGatewayClient";
}  // namespace APIGateway
}  // namespace Aws
const char* APIGatewayClient::GetServiceName() { return SERVICE_NAME; }
const char* APIGatewayClient::GetAllocationTag() { return ALLOCATION_TAG; }

APIGatewayClient::APIGatewayClient(const APIGateway::APIGatewayClientConfiguration& clientConfiguration,
                                   std::shared_ptr<APIGatewayEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

APIGatewayClient::APIGatewayClient(const AWSCredentials& credentials, std::shared_ptr<APIGatewayEndpointProviderBase> endpointProvider,
                                   const APIGateway::APIGatewayClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

APIGatewayClient::APIGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<APIGatewayEndpointProviderBase> endpointProvider,
                                   const APIGateway::APIGatewayClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
APIGatewayClient::APIGatewayClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

APIGatewayClient::APIGatewayClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

APIGatewayClient::APIGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<APIGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
APIGatewayClient::~APIGatewayClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<APIGatewayEndpointProviderBase>& APIGatewayClient::accessEndpointProvider() { return m_endpointProvider; }

void APIGatewayClient::init(const APIGateway::APIGatewayClientConfiguration& config) {
  AWSClient::SetServiceClientName("API Gateway");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "apigateway");
}

void APIGatewayClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
APIGatewayClient::InvokeOperationOutcome APIGatewayClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateApiKeyOutcome APIGatewayClient::CreateApiKey(const CreateApiKeyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys");
  };

  return CreateApiKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAuthorizerOutcome APIGatewayClient::CreateAuthorizer(const CreateAuthorizerRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAuthorizer", "Required field: RestApiId, is not set");
    return CreateAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers");
  };

  return CreateAuthorizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBasePathMappingOutcome APIGatewayClient::CreateBasePathMapping(const CreateBasePathMappingRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBasePathMapping", "Required field: DomainName, is not set");
    return CreateBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/basepathmappings");
  };

  return CreateBasePathMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeploymentOutcome APIGatewayClient::CreateDeployment(const CreateDeploymentRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: RestApiId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  return CreateDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDocumentationPartOutcome APIGatewayClient::CreateDocumentationPart(const CreateDocumentationPartRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDocumentationPart", "Required field: RestApiId, is not set");
    return CreateDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/parts");
  };

  return CreateDocumentationPartOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDocumentationVersionOutcome APIGatewayClient::CreateDocumentationVersion(const CreateDocumentationVersionRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDocumentationVersion", "Required field: RestApiId, is not set");
    return CreateDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/versions");
  };

  return CreateDocumentationVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainNameOutcome APIGatewayClient::CreateDomainName(const CreateDomainNameRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames");
  };

  return CreateDomainNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainNameAccessAssociationOutcome APIGatewayClient::CreateDomainNameAccessAssociation(
    const CreateDomainNameAccessAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnameaccessassociations");
  };

  return CreateDomainNameAccessAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelOutcome APIGatewayClient::CreateModel(const CreateModelRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateModel", "Required field: RestApiId, is not set");
    return CreateModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/models");
  };

  return CreateModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRequestValidatorOutcome APIGatewayClient::CreateRequestValidator(const CreateRequestValidatorRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRequestValidator", "Required field: RestApiId, is not set");
    return CreateRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/requestvalidators");
  };

  return CreateRequestValidatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceOutcome APIGatewayClient::CreateResource(const CreateResourceRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateResource", "Required field: RestApiId, is not set");
    return CreateResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [RestApiId]", false));
  }
  if (!request.ParentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateResource", "Required field: ParentId, is not set");
    return CreateResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ParentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetParentId());
  };

  return CreateResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRestApiOutcome APIGatewayClient::CreateRestApi(const CreateRestApiRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis");
  };

  return CreateRestApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStageOutcome APIGatewayClient::CreateStage(const CreateStageRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateStage", "Required field: RestApiId, is not set");
    return CreateStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages");
  };

  return CreateStageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUsagePlanOutcome APIGatewayClient::CreateUsagePlan(const CreateUsagePlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans");
  };

  return CreateUsagePlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUsagePlanKeyOutcome APIGatewayClient::CreateUsagePlanKey(const CreateUsagePlanKeyRequest& request) const {
  if (!request.UsagePlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUsagePlanKey", "Required field: UsagePlanId, is not set");
    return CreateUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [UsagePlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/keys");
  };

  return CreateUsagePlanKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVpcLinkOutcome APIGatewayClient::CreateVpcLink(const CreateVpcLinkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpclinks");
  };

  return CreateVpcLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApiKeyOutcome APIGatewayClient::DeleteApiKey(const DeleteApiKeyRequest& request) const {
  if (!request.ApiKeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApiKey", "Required field: ApiKey, is not set");
    return DeleteApiKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApiKey]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiKey());
  };

  return DeleteApiKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAuthorizerOutcome APIGatewayClient::DeleteAuthorizer(const DeleteAuthorizerRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAuthorizer", "Required field: RestApiId, is not set");
    return DeleteAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RestApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAuthorizer", "Required field: AuthorizerId, is not set");
    return DeleteAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AuthorizerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerId());
  };

  return DeleteAuthorizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteBasePathMappingOutcome APIGatewayClient::DeleteBasePathMapping(const DeleteBasePathMappingRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBasePathMapping", "Required field: DomainName, is not set");
    return DeleteBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainName]", false));
  }
  if (!request.BasePathHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBasePathMapping", "Required field: BasePath, is not set");
    return DeleteBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [BasePath]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/basepathmappings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBasePath());
  };

  return DeleteBasePathMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteClientCertificateOutcome APIGatewayClient::DeleteClientCertificate(const DeleteClientCertificateRequest& request) const {
  if (!request.ClientCertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteClientCertificate", "Required field: ClientCertificateId, is not set");
    return DeleteClientCertificateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ClientCertificateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clientcertificates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClientCertificateId());
  };

  return DeleteClientCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDeploymentOutcome APIGatewayClient::DeleteDeployment(const DeleteDeploymentRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: RestApiId, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RestApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: DeploymentId, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
  };

  return DeleteDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDocumentationPartOutcome APIGatewayClient::DeleteDocumentationPart(const DeleteDocumentationPartRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDocumentationPart", "Required field: RestApiId, is not set");
    return DeleteDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationPartIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDocumentationPart", "Required field: DocumentationPartId, is not set");
    return DeleteDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DocumentationPartId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/parts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentationPartId());
  };

  return DeleteDocumentationPartOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDocumentationVersionOutcome APIGatewayClient::DeleteDocumentationVersion(const DeleteDocumentationVersionRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDocumentationVersion", "Required field: RestApiId, is not set");
    return DeleteDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDocumentationVersion", "Required field: DocumentationVersion, is not set");
    return DeleteDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentationVersion());
  };

  return DeleteDocumentationVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainNameOutcome APIGatewayClient::DeleteDomainName(const DeleteDomainNameRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainName", "Required field: DomainName, is not set");
    return DeleteDomainNameOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return DeleteDomainNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainNameAccessAssociationOutcome APIGatewayClient::DeleteDomainNameAccessAssociation(
    const DeleteDomainNameAccessAssociationRequest& request) const {
  if (!request.DomainNameAccessAssociationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainNameAccessAssociation", "Required field: DomainNameAccessAssociationArn, is not set");
    return DeleteDomainNameAccessAssociationOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainNameAccessAssociationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnameaccessassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainNameAccessAssociationArn());
  };

  return DeleteDomainNameAccessAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGatewayResponseOutcome APIGatewayClient::DeleteGatewayResponse(const DeleteGatewayResponseRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGatewayResponse", "Required field: RestApiId, is not set");
    return DeleteGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RestApiId]", false));
  }
  if (!request.ResponseTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGatewayResponse", "Required field: ResponseType, is not set");
    return DeleteGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResponseType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayresponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType()));
  };

  return DeleteGatewayResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIntegrationOutcome APIGatewayClient::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: RestApiId, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: ResourceId, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: HttpMethod, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [HttpMethod]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration");
  };

  return DeleteIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIntegrationResponseOutcome APIGatewayClient::DeleteIntegrationResponse(const DeleteIntegrationResponseRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: RestApiId, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: ResourceId, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: HttpMethod, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: StatusCode, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration/responses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
  };

  return DeleteIntegrationResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMethodOutcome APIGatewayClient::DeleteMethod(const DeleteMethodRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMethod", "Required field: RestApiId, is not set");
    return DeleteMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMethod", "Required field: ResourceId, is not set");
    return DeleteMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMethod", "Required field: HttpMethod, is not set");
    return DeleteMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [HttpMethod]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
  };

  return DeleteMethodOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMethodResponseOutcome APIGatewayClient::DeleteMethodResponse(const DeleteMethodResponseRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMethodResponse", "Required field: RestApiId, is not set");
    return DeleteMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMethodResponse", "Required field: ResourceId, is not set");
    return DeleteMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMethodResponse", "Required field: HttpMethod, is not set");
    return DeleteMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMethodResponse", "Required field: StatusCode, is not set");
    return DeleteMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [StatusCode]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
    endpointResolutionOutcome.GetResult().AddPathSegments("/responses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
  };

  return DeleteMethodResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteModelOutcome APIGatewayClient::DeleteModel(const DeleteModelRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteModel", "Required field: RestApiId, is not set");
    return DeleteModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RestApiId]", false));
  }
  if (!request.ModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteModel", "Required field: ModelName, is not set");
    return DeleteModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelName());
  };

  return DeleteModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRequestValidatorOutcome APIGatewayClient::DeleteRequestValidator(const DeleteRequestValidatorRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRequestValidator", "Required field: RestApiId, is not set");
    return DeleteRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [RestApiId]", false));
  }
  if (!request.RequestValidatorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRequestValidator", "Required field: RequestValidatorId, is not set");
    return DeleteRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [RequestValidatorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/requestvalidators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRequestValidatorId());
  };

  return DeleteRequestValidatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourceOutcome APIGatewayClient::DeleteResource(const DeleteResourceRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResource", "Required field: RestApiId, is not set");
    return DeleteResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResource", "Required field: ResourceId, is not set");
    return DeleteResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  };

  return DeleteResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRestApiOutcome APIGatewayClient::DeleteRestApi(const DeleteRestApiRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRestApi", "Required field: RestApiId, is not set");
    return DeleteRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
  };

  return DeleteRestApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteStageOutcome APIGatewayClient::DeleteStage(const DeleteStageRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStage", "Required field: RestApiId, is not set");
    return DeleteStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStage", "Required field: StageName, is not set");
    return DeleteStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [StageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  };

  return DeleteStageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUsagePlanOutcome APIGatewayClient::DeleteUsagePlan(const DeleteUsagePlanRequest& request) const {
  if (!request.UsagePlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUsagePlan", "Required field: UsagePlanId, is not set");
    return DeleteUsagePlanOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [UsagePlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
  };

  return DeleteUsagePlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUsagePlanKeyOutcome APIGatewayClient::DeleteUsagePlanKey(const DeleteUsagePlanKeyRequest& request) const {
  if (!request.UsagePlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUsagePlanKey", "Required field: UsagePlanId, is not set");
    return DeleteUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [UsagePlanId]", false));
  }
  if (!request.KeyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUsagePlanKey", "Required field: KeyId, is not set");
    return DeleteUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [KeyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyId());
  };

  return DeleteUsagePlanKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVpcLinkOutcome APIGatewayClient::DeleteVpcLink(const DeleteVpcLinkRequest& request) const {
  if (!request.VpcLinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVpcLink", "Required field: VpcLinkId, is not set");
    return DeleteVpcLinkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [VpcLinkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpclinks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcLinkId());
  };

  return DeleteVpcLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

FlushStageAuthorizersCacheOutcome APIGatewayClient::FlushStageAuthorizersCache(const FlushStageAuthorizersCacheRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("FlushStageAuthorizersCache", "Required field: RestApiId, is not set");
    return FlushStageAuthorizersCacheOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("FlushStageAuthorizersCache", "Required field: StageName, is not set");
    return FlushStageAuthorizersCacheOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cache/authorizers");
  };

  return FlushStageAuthorizersCacheOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

FlushStageCacheOutcome APIGatewayClient::FlushStageCache(const FlushStageCacheRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("FlushStageCache", "Required field: RestApiId, is not set");
    return FlushStageCacheOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("FlushStageCache", "Required field: StageName, is not set");
    return FlushStageCacheOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [StageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cache/data");
  };

  return FlushStageCacheOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GenerateClientCertificateOutcome APIGatewayClient::GenerateClientCertificate(const GenerateClientCertificateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clientcertificates");
  };

  return GenerateClientCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccountOutcome APIGatewayClient::GetAccount(const GetAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account");
  };

  return GetAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApiKeyOutcome APIGatewayClient::GetApiKey(const GetApiKeyRequest& request) const {
  if (!request.ApiKeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApiKey", "Required field: ApiKey, is not set");
    return GetApiKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ApiKey]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiKey());
  };

  return GetApiKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApiKeysOutcome APIGatewayClient::GetApiKeys(const GetApiKeysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys");
  };

  return GetApiKeysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAuthorizerOutcome APIGatewayClient::GetAuthorizer(const GetAuthorizerRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAuthorizer", "Required field: RestApiId, is not set");
    return GetAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [RestApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAuthorizer", "Required field: AuthorizerId, is not set");
    return GetAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AuthorizerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerId());
  };

  return GetAuthorizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAuthorizersOutcome APIGatewayClient::GetAuthorizers(const GetAuthorizersRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAuthorizers", "Required field: RestApiId, is not set");
    return GetAuthorizersOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers");
  };

  return GetAuthorizersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBasePathMappingOutcome APIGatewayClient::GetBasePathMapping(const GetBasePathMappingRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBasePathMapping", "Required field: DomainName, is not set");
    return GetBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainName]", false));
  }
  if (!request.BasePathHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBasePathMapping", "Required field: BasePath, is not set");
    return GetBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [BasePath]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/basepathmappings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBasePath());
  };

  return GetBasePathMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBasePathMappingsOutcome APIGatewayClient::GetBasePathMappings(const GetBasePathMappingsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBasePathMappings", "Required field: DomainName, is not set");
    return GetBasePathMappingsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/basepathmappings");
  };

  return GetBasePathMappingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetClientCertificateOutcome APIGatewayClient::GetClientCertificate(const GetClientCertificateRequest& request) const {
  if (!request.ClientCertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetClientCertificate", "Required field: ClientCertificateId, is not set");
    return GetClientCertificateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ClientCertificateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clientcertificates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClientCertificateId());
  };

  return GetClientCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetClientCertificatesOutcome APIGatewayClient::GetClientCertificates(const GetClientCertificatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clientcertificates");
  };

  return GetClientCertificatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeploymentOutcome APIGatewayClient::GetDeployment(const GetDeploymentRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: RestApiId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [RestApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: DeploymentId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
  };

  return GetDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeploymentsOutcome APIGatewayClient::GetDeployments(const GetDeploymentsRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployments", "Required field: RestApiId, is not set");
    return GetDeploymentsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  return GetDeploymentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDocumentationPartOutcome APIGatewayClient::GetDocumentationPart(const GetDocumentationPartRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocumentationPart", "Required field: RestApiId, is not set");
    return GetDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationPartIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocumentationPart", "Required field: DocumentationPartId, is not set");
    return GetDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DocumentationPartId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/parts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentationPartId());
  };

  return GetDocumentationPartOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDocumentationPartsOutcome APIGatewayClient::GetDocumentationParts(const GetDocumentationPartsRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocumentationParts", "Required field: RestApiId, is not set");
    return GetDocumentationPartsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/parts");
  };

  return GetDocumentationPartsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDocumentationVersionOutcome APIGatewayClient::GetDocumentationVersion(const GetDocumentationVersionRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocumentationVersion", "Required field: RestApiId, is not set");
    return GetDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocumentationVersion", "Required field: DocumentationVersion, is not set");
    return GetDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DocumentationVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentationVersion());
  };

  return GetDocumentationVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDocumentationVersionsOutcome APIGatewayClient::GetDocumentationVersions(const GetDocumentationVersionsRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocumentationVersions", "Required field: RestApiId, is not set");
    return GetDocumentationVersionsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/versions");
  };

  return GetDocumentationVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainNameOutcome APIGatewayClient::GetDomainName(const GetDomainNameRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainName", "Required field: DomainName, is not set");
    return GetDomainNameOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return GetDomainNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainNameAccessAssociationsOutcome APIGatewayClient::GetDomainNameAccessAssociations(
    const GetDomainNameAccessAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnameaccessassociations");
  };

  return GetDomainNameAccessAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainNamesOutcome APIGatewayClient::GetDomainNames(const GetDomainNamesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames");
  };

  return GetDomainNamesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetExportOutcome APIGatewayClient::GetExport(const GetExportRequest& request) const {
  AWS_OPERATION_GUARD(GetExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: RestApiId, is not set");
    return GetExportOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: StageName, is not set");
    return GetExportOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [StageName]", false));
  }
  if (!request.ExportTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: ExportType, is not set");
    return GetExportOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ExportType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetExport",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetExportOutcome>(
      [&]() -> GetExportOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportType());
        return GetExportOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetGatewayResponseOutcome APIGatewayClient::GetGatewayResponse(const GetGatewayResponseRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGatewayResponse", "Required field: RestApiId, is not set");
    return GetGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [RestApiId]", false));
  }
  if (!request.ResponseTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGatewayResponse", "Required field: ResponseType, is not set");
    return GetGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResponseType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayresponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType()));
  };

  return GetGatewayResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGatewayResponsesOutcome APIGatewayClient::GetGatewayResponses(const GetGatewayResponsesRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGatewayResponses", "Required field: RestApiId, is not set");
    return GetGatewayResponsesOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayresponses");
  };

  return GetGatewayResponsesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIntegrationOutcome APIGatewayClient::GetIntegration(const GetIntegrationRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: RestApiId, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: ResourceId, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: HttpMethod, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [HttpMethod]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration");
  };

  return GetIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIntegrationResponseOutcome APIGatewayClient::GetIntegrationResponse(const GetIntegrationResponseRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: RestApiId, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: ResourceId, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: HttpMethod, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: StatusCode, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [StatusCode]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration/responses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
  };

  return GetIntegrationResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMethodOutcome APIGatewayClient::GetMethod(const GetMethodRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMethod", "Required field: RestApiId, is not set");
    return GetMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMethod", "Required field: ResourceId, is not set");
    return GetMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMethod", "Required field: HttpMethod, is not set");
    return GetMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [HttpMethod]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
  };

  return GetMethodOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMethodResponseOutcome APIGatewayClient::GetMethodResponse(const GetMethodResponseRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMethodResponse", "Required field: RestApiId, is not set");
    return GetMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMethodResponse", "Required field: ResourceId, is not set");
    return GetMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMethodResponse", "Required field: HttpMethod, is not set");
    return GetMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMethodResponse", "Required field: StatusCode, is not set");
    return GetMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [StatusCode]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
    endpointResolutionOutcome.GetResult().AddPathSegments("/responses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
  };

  return GetMethodResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetModelOutcome APIGatewayClient::GetModel(const GetModelRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModel", "Required field: RestApiId, is not set");
    return GetModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [RestApiId]", false));
  }
  if (!request.ModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModel", "Required field: ModelName, is not set");
    return GetModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelName());
  };

  return GetModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetModelTemplateOutcome APIGatewayClient::GetModelTemplate(const GetModelTemplateRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModelTemplate", "Required field: RestApiId, is not set");
    return GetModelTemplateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RestApiId]", false));
  }
  if (!request.ModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModelTemplate", "Required field: ModelName, is not set");
    return GetModelTemplateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/default_template");
  };

  return GetModelTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetModelsOutcome APIGatewayClient::GetModels(const GetModelsRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModels", "Required field: RestApiId, is not set");
    return GetModelsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/models");
  };

  return GetModelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRequestValidatorOutcome APIGatewayClient::GetRequestValidator(const GetRequestValidatorRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRequestValidator", "Required field: RestApiId, is not set");
    return GetRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [RestApiId]", false));
  }
  if (!request.RequestValidatorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRequestValidator", "Required field: RequestValidatorId, is not set");
    return GetRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [RequestValidatorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/requestvalidators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRequestValidatorId());
  };

  return GetRequestValidatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRequestValidatorsOutcome APIGatewayClient::GetRequestValidators(const GetRequestValidatorsRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRequestValidators", "Required field: RestApiId, is not set");
    return GetRequestValidatorsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/requestvalidators");
  };

  return GetRequestValidatorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourceOutcome APIGatewayClient::GetResource(const GetResourceRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResource", "Required field: RestApiId, is not set");
    return GetResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResource", "Required field: ResourceId, is not set");
    return GetResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  };

  return GetResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourcesOutcome APIGatewayClient::GetResources(const GetResourcesRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResources", "Required field: RestApiId, is not set");
    return GetResourcesOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources");
  };

  return GetResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRestApiOutcome APIGatewayClient::GetRestApi(const GetRestApiRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRestApi", "Required field: RestApiId, is not set");
    return GetRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
  };

  return GetRestApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRestApisOutcome APIGatewayClient::GetRestApis(const GetRestApisRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis");
  };

  return GetRestApisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSdkOutcome APIGatewayClient::GetSdk(const GetSdkRequest& request) const {
  AWS_OPERATION_GUARD(GetSdk);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSdk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSdk", "Required field: RestApiId, is not set");
    return GetSdkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSdk", "Required field: StageName, is not set");
    return GetSdkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [StageName]", false));
  }
  if (!request.SdkTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSdk", "Required field: SdkType, is not set");
    return GetSdkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [SdkType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSdk, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSdk, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSdk",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSdkOutcome>(
      [&]() -> GetSdkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSdk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sdks/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSdkType());
        return GetSdkOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSdkTypeOutcome APIGatewayClient::GetSdkType(const GetSdkTypeRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSdkType", "Required field: Id, is not set");
    return GetSdkTypeOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sdktypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetSdkTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSdkTypesOutcome APIGatewayClient::GetSdkTypes(const GetSdkTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sdktypes");
  };

  return GetSdkTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetStageOutcome APIGatewayClient::GetStage(const GetStageRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStage", "Required field: RestApiId, is not set");
    return GetStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStage", "Required field: StageName, is not set");
    return GetStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [StageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  };

  return GetStageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetStagesOutcome APIGatewayClient::GetStages(const GetStagesRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStages", "Required field: RestApiId, is not set");
    return GetStagesOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages");
  };

  return GetStagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTagsOutcome APIGatewayClient::GetTags(const GetTagsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTags", "Required field: ResourceArn, is not set");
    return GetTagsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return GetTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUsageOutcome APIGatewayClient::GetUsage(const GetUsageRequest& request) const {
  if (!request.UsagePlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUsage", "Required field: UsagePlanId, is not set");
    return GetUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [UsagePlanId]", false));
  }
  if (!request.StartDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUsage", "Required field: StartDate, is not set");
    return GetUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUsage", "Required field: EndDate, is not set");
    return GetUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [EndDate]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/usage");
  };

  return GetUsageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUsagePlanOutcome APIGatewayClient::GetUsagePlan(const GetUsagePlanRequest& request) const {
  if (!request.UsagePlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUsagePlan", "Required field: UsagePlanId, is not set");
    return GetUsagePlanOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [UsagePlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
  };

  return GetUsagePlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUsagePlanKeyOutcome APIGatewayClient::GetUsagePlanKey(const GetUsagePlanKeyRequest& request) const {
  if (!request.UsagePlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUsagePlanKey", "Required field: UsagePlanId, is not set");
    return GetUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [UsagePlanId]", false));
  }
  if (!request.KeyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUsagePlanKey", "Required field: KeyId, is not set");
    return GetUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [KeyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyId());
  };

  return GetUsagePlanKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUsagePlanKeysOutcome APIGatewayClient::GetUsagePlanKeys(const GetUsagePlanKeysRequest& request) const {
  if (!request.UsagePlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUsagePlanKeys", "Required field: UsagePlanId, is not set");
    return GetUsagePlanKeysOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [UsagePlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/keys");
  };

  return GetUsagePlanKeysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUsagePlansOutcome APIGatewayClient::GetUsagePlans(const GetUsagePlansRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans");
  };

  return GetUsagePlansOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVpcLinkOutcome APIGatewayClient::GetVpcLink(const GetVpcLinkRequest& request) const {
  if (!request.VpcLinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVpcLink", "Required field: VpcLinkId, is not set");
    return GetVpcLinkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [VpcLinkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpclinks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcLinkId());
  };

  return GetVpcLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVpcLinksOutcome APIGatewayClient::GetVpcLinks(const GetVpcLinksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpclinks");
  };

  return GetVpcLinksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ImportApiKeysOutcome APIGatewayClient::ImportApiKeys(const ImportApiKeysRequest& request) const {
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ImportApiKeys", "Required field: Format, is not set");
    return ImportApiKeysOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Format]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys");
    ss.str("?mode=import");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return ImportApiKeysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportDocumentationPartsOutcome APIGatewayClient::ImportDocumentationParts(const ImportDocumentationPartsRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ImportDocumentationParts", "Required field: RestApiId, is not set");
    return ImportDocumentationPartsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/parts");
  };

  return ImportDocumentationPartsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ImportRestApiOutcome APIGatewayClient::ImportRestApi(const ImportRestApiRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis");
    ss.str("?mode=import");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return ImportRestApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutGatewayResponseOutcome APIGatewayClient::PutGatewayResponse(const PutGatewayResponseRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutGatewayResponse", "Required field: RestApiId, is not set");
    return PutGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [RestApiId]", false));
  }
  if (!request.ResponseTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutGatewayResponse", "Required field: ResponseType, is not set");
    return PutGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResponseType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayresponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType()));
  };

  return PutGatewayResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutIntegrationOutcome APIGatewayClient::PutIntegration(const PutIntegrationRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: RestApiId, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: ResourceId, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: HttpMethod, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [HttpMethod]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration");
  };

  return PutIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutIntegrationResponseOutcome APIGatewayClient::PutIntegrationResponse(const PutIntegrationResponseRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutIntegrationResponse", "Required field: RestApiId, is not set");
    return PutIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutIntegrationResponse", "Required field: ResourceId, is not set");
    return PutIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutIntegrationResponse", "Required field: HttpMethod, is not set");
    return PutIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutIntegrationResponse", "Required field: StatusCode, is not set");
    return PutIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [StatusCode]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration/responses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
  };

  return PutIntegrationResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutMethodOutcome APIGatewayClient::PutMethod(const PutMethodRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMethod", "Required field: RestApiId, is not set");
    return PutMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMethod", "Required field: ResourceId, is not set");
    return PutMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMethod", "Required field: HttpMethod, is not set");
    return PutMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [HttpMethod]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
  };

  return PutMethodOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutMethodResponseOutcome APIGatewayClient::PutMethodResponse(const PutMethodResponseRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMethodResponse", "Required field: RestApiId, is not set");
    return PutMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMethodResponse", "Required field: ResourceId, is not set");
    return PutMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMethodResponse", "Required field: HttpMethod, is not set");
    return PutMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMethodResponse", "Required field: StatusCode, is not set");
    return PutMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [StatusCode]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
    endpointResolutionOutcome.GetResult().AddPathSegments("/responses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
  };

  return PutMethodResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutRestApiOutcome APIGatewayClient::PutRestApi(const PutRestApiRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRestApi", "Required field: RestApiId, is not set");
    return PutRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
  };

  return PutRestApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RejectDomainNameAccessAssociationOutcome APIGatewayClient::RejectDomainNameAccessAssociation(
    const RejectDomainNameAccessAssociationRequest& request) const {
  if (!request.DomainNameAccessAssociationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectDomainNameAccessAssociation", "Required field: DomainNameAccessAssociationArn, is not set");
    return RejectDomainNameAccessAssociationOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainNameAccessAssociationArn]", false));
  }
  if (!request.DomainNameArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectDomainNameAccessAssociation", "Required field: DomainNameArn, is not set");
    return RejectDomainNameAccessAssociationOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainNameArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rejectdomainnameaccessassociations");
  };

  return RejectDomainNameAccessAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome APIGatewayClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TestInvokeAuthorizerOutcome APIGatewayClient::TestInvokeAuthorizer(const TestInvokeAuthorizerRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestInvokeAuthorizer", "Required field: RestApiId, is not set");
    return TestInvokeAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [RestApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestInvokeAuthorizer", "Required field: AuthorizerId, is not set");
    return TestInvokeAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AuthorizerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerId());
  };

  return TestInvokeAuthorizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TestInvokeMethodOutcome APIGatewayClient::TestInvokeMethod(const TestInvokeMethodRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestInvokeMethod", "Required field: RestApiId, is not set");
    return TestInvokeMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestInvokeMethod", "Required field: ResourceId, is not set");
    return TestInvokeMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestInvokeMethod", "Required field: HttpMethod, is not set");
    return TestInvokeMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [HttpMethod]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
  };

  return TestInvokeMethodOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome APIGatewayClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAccountOutcome APIGatewayClient::UpdateAccount(const UpdateAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account");
  };

  return UpdateAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateApiKeyOutcome APIGatewayClient::UpdateApiKey(const UpdateApiKeyRequest& request) const {
  if (!request.ApiKeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApiKey", "Required field: ApiKey, is not set");
    return UpdateApiKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApiKey]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apikeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiKey());
  };

  return UpdateApiKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateAuthorizerOutcome APIGatewayClient::UpdateAuthorizer(const UpdateAuthorizerRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAuthorizer", "Required field: RestApiId, is not set");
    return UpdateAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RestApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAuthorizer", "Required field: AuthorizerId, is not set");
    return UpdateAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AuthorizerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerId());
  };

  return UpdateAuthorizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateBasePathMappingOutcome APIGatewayClient::UpdateBasePathMapping(const UpdateBasePathMappingRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBasePathMapping", "Required field: DomainName, is not set");
    return UpdateBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainName]", false));
  }
  if (!request.BasePathHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBasePathMapping", "Required field: BasePath, is not set");
    return UpdateBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [BasePath]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/basepathmappings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBasePath());
  };

  return UpdateBasePathMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateClientCertificateOutcome APIGatewayClient::UpdateClientCertificate(const UpdateClientCertificateRequest& request) const {
  if (!request.ClientCertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateClientCertificate", "Required field: ClientCertificateId, is not set");
    return UpdateClientCertificateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ClientCertificateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clientcertificates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClientCertificateId());
  };

  return UpdateClientCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDeploymentOutcome APIGatewayClient::UpdateDeployment(const UpdateDeploymentRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDeployment", "Required field: RestApiId, is not set");
    return UpdateDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RestApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDeployment", "Required field: DeploymentId, is not set");
    return UpdateDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
  };

  return UpdateDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDocumentationPartOutcome APIGatewayClient::UpdateDocumentationPart(const UpdateDocumentationPartRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDocumentationPart", "Required field: RestApiId, is not set");
    return UpdateDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationPartIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDocumentationPart", "Required field: DocumentationPartId, is not set");
    return UpdateDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DocumentationPartId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/parts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentationPartId());
  };

  return UpdateDocumentationPartOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDocumentationVersionOutcome APIGatewayClient::UpdateDocumentationVersion(const UpdateDocumentationVersionRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDocumentationVersion", "Required field: RestApiId, is not set");
    return UpdateDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDocumentationVersion", "Required field: DocumentationVersion, is not set");
    return UpdateDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documentation/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentationVersion());
  };

  return UpdateDocumentationVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDomainNameOutcome APIGatewayClient::UpdateDomainName(const UpdateDomainNameRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomainName", "Required field: DomainName, is not set");
    return UpdateDomainNameOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return UpdateDomainNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateGatewayResponseOutcome APIGatewayClient::UpdateGatewayResponse(const UpdateGatewayResponseRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGatewayResponse", "Required field: RestApiId, is not set");
    return UpdateGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RestApiId]", false));
  }
  if (!request.ResponseTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGatewayResponse", "Required field: ResponseType, is not set");
    return UpdateGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResponseType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayresponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType()));
  };

  return UpdateGatewayResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateIntegrationOutcome APIGatewayClient::UpdateIntegration(const UpdateIntegrationRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: RestApiId, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: ResourceId, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: HttpMethod, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [HttpMethod]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration");
  };

  return UpdateIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateIntegrationResponseOutcome APIGatewayClient::UpdateIntegrationResponse(const UpdateIntegrationResponseRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: RestApiId, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: ResourceId, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: HttpMethod, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: StatusCode, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(
        APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration/responses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
  };

  return UpdateIntegrationResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateMethodOutcome APIGatewayClient::UpdateMethod(const UpdateMethodRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMethod", "Required field: RestApiId, is not set");
    return UpdateMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMethod", "Required field: ResourceId, is not set");
    return UpdateMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMethod", "Required field: HttpMethod, is not set");
    return UpdateMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [HttpMethod]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
  };

  return UpdateMethodOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateMethodResponseOutcome APIGatewayClient::UpdateMethodResponse(const UpdateMethodResponseRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMethodResponse", "Required field: RestApiId, is not set");
    return UpdateMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMethodResponse", "Required field: ResourceId, is not set");
    return UpdateMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMethodResponse", "Required field: HttpMethod, is not set");
    return UpdateMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMethodResponse", "Required field: StatusCode, is not set");
    return UpdateMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [StatusCode]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/methods/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHttpMethod());
    endpointResolutionOutcome.GetResult().AddPathSegments("/responses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatusCode());
  };

  return UpdateMethodResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateModelOutcome APIGatewayClient::UpdateModel(const UpdateModelRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateModel", "Required field: RestApiId, is not set");
    return UpdateModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RestApiId]", false));
  }
  if (!request.ModelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateModel", "Required field: ModelName, is not set");
    return UpdateModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ModelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelName());
  };

  return UpdateModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateRequestValidatorOutcome APIGatewayClient::UpdateRequestValidator(const UpdateRequestValidatorRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRequestValidator", "Required field: RestApiId, is not set");
    return UpdateRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [RestApiId]", false));
  }
  if (!request.RequestValidatorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRequestValidator", "Required field: RequestValidatorId, is not set");
    return UpdateRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [RequestValidatorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/requestvalidators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRequestValidatorId());
  };

  return UpdateRequestValidatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateResourceOutcome APIGatewayClient::UpdateResource(const UpdateResourceRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResource", "Required field: RestApiId, is not set");
    return UpdateResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResource", "Required field: ResourceId, is not set");
    return UpdateResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  };

  return UpdateResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateRestApiOutcome APIGatewayClient::UpdateRestApi(const UpdateRestApiRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRestApi", "Required field: RestApiId, is not set");
    return UpdateRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [RestApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
  };

  return UpdateRestApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateStageOutcome APIGatewayClient::UpdateStage(const UpdateStageRequest& request) const {
  if (!request.RestApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStage", "Required field: RestApiId, is not set");
    return UpdateStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStage", "Required field: StageName, is not set");
    return UpdateStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [StageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restapis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  };

  return UpdateStageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateUsageOutcome APIGatewayClient::UpdateUsage(const UpdateUsageRequest& request) const {
  if (!request.UsagePlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUsage", "Required field: UsagePlanId, is not set");
    return UpdateUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [UsagePlanId]", false));
  }
  if (!request.KeyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUsage", "Required field: KeyId, is not set");
    return UpdateUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [KeyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/usage");
  };

  return UpdateUsageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateUsagePlanOutcome APIGatewayClient::UpdateUsagePlan(const UpdateUsagePlanRequest& request) const {
  if (!request.UsagePlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUsagePlan", "Required field: UsagePlanId, is not set");
    return UpdateUsagePlanOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [UsagePlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usageplans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsagePlanId());
  };

  return UpdateUsagePlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateVpcLinkOutcome APIGatewayClient::UpdateVpcLink(const UpdateVpcLinkRequest& request) const {
  if (!request.VpcLinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVpcLink", "Required field: VpcLinkId, is not set");
    return UpdateVpcLinkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [VpcLinkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpclinks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcLinkId());
  };

  return UpdateVpcLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
