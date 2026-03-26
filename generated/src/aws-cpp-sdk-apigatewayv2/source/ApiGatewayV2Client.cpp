/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/ApiGatewayV2Client.h>
#include <aws/apigatewayv2/ApiGatewayV2EndpointProvider.h>
#include <aws/apigatewayv2/ApiGatewayV2ErrorMarshaller.h>
#include <aws/apigatewayv2/model/CreateApiMappingRequest.h>
#include <aws/apigatewayv2/model/CreateApiRequest.h>
#include <aws/apigatewayv2/model/CreateAuthorizerRequest.h>
#include <aws/apigatewayv2/model/CreateDeploymentRequest.h>
#include <aws/apigatewayv2/model/CreateDomainNameRequest.h>
#include <aws/apigatewayv2/model/CreateIntegrationRequest.h>
#include <aws/apigatewayv2/model/CreateIntegrationResponseRequest.h>
#include <aws/apigatewayv2/model/CreateModelRequest.h>
#include <aws/apigatewayv2/model/CreatePortalProductRequest.h>
#include <aws/apigatewayv2/model/CreatePortalRequest.h>
#include <aws/apigatewayv2/model/CreateProductPageRequest.h>
#include <aws/apigatewayv2/model/CreateProductRestEndpointPageRequest.h>
#include <aws/apigatewayv2/model/CreateRouteRequest.h>
#include <aws/apigatewayv2/model/CreateRouteResponseRequest.h>
#include <aws/apigatewayv2/model/CreateRoutingRuleRequest.h>
#include <aws/apigatewayv2/model/CreateStageRequest.h>
#include <aws/apigatewayv2/model/CreateVpcLinkRequest.h>
#include <aws/apigatewayv2/model/DeleteAccessLogSettingsRequest.h>
#include <aws/apigatewayv2/model/DeleteApiMappingRequest.h>
#include <aws/apigatewayv2/model/DeleteApiRequest.h>
#include <aws/apigatewayv2/model/DeleteAuthorizerRequest.h>
#include <aws/apigatewayv2/model/DeleteCorsConfigurationRequest.h>
#include <aws/apigatewayv2/model/DeleteDeploymentRequest.h>
#include <aws/apigatewayv2/model/DeleteDomainNameRequest.h>
#include <aws/apigatewayv2/model/DeleteIntegrationRequest.h>
#include <aws/apigatewayv2/model/DeleteIntegrationResponseRequest.h>
#include <aws/apigatewayv2/model/DeleteModelRequest.h>
#include <aws/apigatewayv2/model/DeletePortalProductRequest.h>
#include <aws/apigatewayv2/model/DeletePortalProductSharingPolicyRequest.h>
#include <aws/apigatewayv2/model/DeletePortalRequest.h>
#include <aws/apigatewayv2/model/DeleteProductPageRequest.h>
#include <aws/apigatewayv2/model/DeleteProductRestEndpointPageRequest.h>
#include <aws/apigatewayv2/model/DeleteRouteRequest.h>
#include <aws/apigatewayv2/model/DeleteRouteRequestParameterRequest.h>
#include <aws/apigatewayv2/model/DeleteRouteResponseRequest.h>
#include <aws/apigatewayv2/model/DeleteRouteSettingsRequest.h>
#include <aws/apigatewayv2/model/DeleteRoutingRuleRequest.h>
#include <aws/apigatewayv2/model/DeleteStageRequest.h>
#include <aws/apigatewayv2/model/DeleteVpcLinkRequest.h>
#include <aws/apigatewayv2/model/DisablePortalRequest.h>
#include <aws/apigatewayv2/model/ExportApiRequest.h>
#include <aws/apigatewayv2/model/GetApiMappingRequest.h>
#include <aws/apigatewayv2/model/GetApiMappingsRequest.h>
#include <aws/apigatewayv2/model/GetApiRequest.h>
#include <aws/apigatewayv2/model/GetApisRequest.h>
#include <aws/apigatewayv2/model/GetAuthorizerRequest.h>
#include <aws/apigatewayv2/model/GetAuthorizersRequest.h>
#include <aws/apigatewayv2/model/GetDeploymentRequest.h>
#include <aws/apigatewayv2/model/GetDeploymentsRequest.h>
#include <aws/apigatewayv2/model/GetDomainNameRequest.h>
#include <aws/apigatewayv2/model/GetDomainNamesRequest.h>
#include <aws/apigatewayv2/model/GetIntegrationRequest.h>
#include <aws/apigatewayv2/model/GetIntegrationResponseRequest.h>
#include <aws/apigatewayv2/model/GetIntegrationResponsesRequest.h>
#include <aws/apigatewayv2/model/GetIntegrationsRequest.h>
#include <aws/apigatewayv2/model/GetModelRequest.h>
#include <aws/apigatewayv2/model/GetModelTemplateRequest.h>
#include <aws/apigatewayv2/model/GetModelsRequest.h>
#include <aws/apigatewayv2/model/GetPortalProductRequest.h>
#include <aws/apigatewayv2/model/GetPortalProductSharingPolicyRequest.h>
#include <aws/apigatewayv2/model/GetPortalRequest.h>
#include <aws/apigatewayv2/model/GetProductPageRequest.h>
#include <aws/apigatewayv2/model/GetProductRestEndpointPageRequest.h>
#include <aws/apigatewayv2/model/GetRouteRequest.h>
#include <aws/apigatewayv2/model/GetRouteResponseRequest.h>
#include <aws/apigatewayv2/model/GetRouteResponsesRequest.h>
#include <aws/apigatewayv2/model/GetRoutesRequest.h>
#include <aws/apigatewayv2/model/GetRoutingRuleRequest.h>
#include <aws/apigatewayv2/model/GetStageRequest.h>
#include <aws/apigatewayv2/model/GetStagesRequest.h>
#include <aws/apigatewayv2/model/GetTagsRequest.h>
#include <aws/apigatewayv2/model/GetVpcLinkRequest.h>
#include <aws/apigatewayv2/model/GetVpcLinksRequest.h>
#include <aws/apigatewayv2/model/ImportApiRequest.h>
#include <aws/apigatewayv2/model/ListPortalProductsRequest.h>
#include <aws/apigatewayv2/model/ListPortalsRequest.h>
#include <aws/apigatewayv2/model/ListProductPagesRequest.h>
#include <aws/apigatewayv2/model/ListProductRestEndpointPagesRequest.h>
#include <aws/apigatewayv2/model/ListRoutingRulesRequest.h>
#include <aws/apigatewayv2/model/PreviewPortalRequest.h>
#include <aws/apigatewayv2/model/PublishPortalRequest.h>
#include <aws/apigatewayv2/model/PutPortalProductSharingPolicyRequest.h>
#include <aws/apigatewayv2/model/PutRoutingRuleRequest.h>
#include <aws/apigatewayv2/model/ReimportApiRequest.h>
#include <aws/apigatewayv2/model/ResetAuthorizersCacheRequest.h>
#include <aws/apigatewayv2/model/TagResourceRequest.h>
#include <aws/apigatewayv2/model/UntagResourceRequest.h>
#include <aws/apigatewayv2/model/UpdateApiMappingRequest.h>
#include <aws/apigatewayv2/model/UpdateApiRequest.h>
#include <aws/apigatewayv2/model/UpdateAuthorizerRequest.h>
#include <aws/apigatewayv2/model/UpdateDeploymentRequest.h>
#include <aws/apigatewayv2/model/UpdateDomainNameRequest.h>
#include <aws/apigatewayv2/model/UpdateIntegrationRequest.h>
#include <aws/apigatewayv2/model/UpdateIntegrationResponseRequest.h>
#include <aws/apigatewayv2/model/UpdateModelRequest.h>
#include <aws/apigatewayv2/model/UpdatePortalProductRequest.h>
#include <aws/apigatewayv2/model/UpdatePortalRequest.h>
#include <aws/apigatewayv2/model/UpdateProductPageRequest.h>
#include <aws/apigatewayv2/model/UpdateProductRestEndpointPageRequest.h>
#include <aws/apigatewayv2/model/UpdateRouteRequest.h>
#include <aws/apigatewayv2/model/UpdateRouteResponseRequest.h>
#include <aws/apigatewayv2/model/UpdateStageRequest.h>
#include <aws/apigatewayv2/model/UpdateVpcLinkRequest.h>
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
using namespace Aws::ApiGatewayV2;
using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ApiGatewayV2 {
const char SERVICE_NAME[] = "apigateway";
const char ALLOCATION_TAG[] = "ApiGatewayV2Client";
}  // namespace ApiGatewayV2
}  // namespace Aws
const char* ApiGatewayV2Client::GetServiceName() { return SERVICE_NAME; }
const char* ApiGatewayV2Client::GetAllocationTag() { return ALLOCATION_TAG; }

ApiGatewayV2Client::ApiGatewayV2Client(const ApiGatewayV2::ApiGatewayV2ClientConfiguration& clientConfiguration,
                                       std::shared_ptr<ApiGatewayV2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApiGatewayV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ApiGatewayV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApiGatewayV2Client::ApiGatewayV2Client(const AWSCredentials& credentials,
                                       std::shared_ptr<ApiGatewayV2EndpointProviderBase> endpointProvider,
                                       const ApiGatewayV2::ApiGatewayV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApiGatewayV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ApiGatewayV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApiGatewayV2Client::ApiGatewayV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<ApiGatewayV2EndpointProviderBase> endpointProvider,
                                       const ApiGatewayV2::ApiGatewayV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApiGatewayV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ApiGatewayV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ApiGatewayV2Client::ApiGatewayV2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApiGatewayV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApiGatewayV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApiGatewayV2Client::ApiGatewayV2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApiGatewayV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApiGatewayV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApiGatewayV2Client::ApiGatewayV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApiGatewayV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApiGatewayV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ApiGatewayV2Client::~ApiGatewayV2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ApiGatewayV2EndpointProviderBase>& ApiGatewayV2Client::accessEndpointProvider() { return m_endpointProvider; }

void ApiGatewayV2Client::init(const ApiGatewayV2::ApiGatewayV2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("ApiGatewayV2");
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

void ApiGatewayV2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ApiGatewayV2Client::InvokeOperationOutcome ApiGatewayV2Client::InvokeServiceOperation(
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

CreateApiOutcome ApiGatewayV2Client::CreateApi(const CreateApiRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis");
  };

  return CreateApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApiMappingOutcome ApiGatewayV2Client::CreateApiMapping(const CreateApiMappingRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateApiMapping", "Required field: DomainName, is not set");
    return CreateApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apimappings");
  };

  return CreateApiMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAuthorizerOutcome ApiGatewayV2Client::CreateAuthorizer(const CreateAuthorizerRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAuthorizer", "Required field: ApiId, is not set");
    return CreateAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers");
  };

  return CreateAuthorizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeploymentOutcome ApiGatewayV2Client::CreateDeployment(const CreateDeploymentRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: ApiId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  return CreateDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainNameOutcome ApiGatewayV2Client::CreateDomainName(const CreateDomainNameRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames");
  };

  return CreateDomainNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIntegrationOutcome ApiGatewayV2Client::CreateIntegration(const CreateIntegrationRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIntegration", "Required field: ApiId, is not set");
    return CreateIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  };

  return CreateIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIntegrationResponseOutcome ApiGatewayV2Client::CreateIntegrationResponse(const CreateIntegrationResponseRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIntegrationResponse", "Required field: ApiId, is not set");
    return CreateIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIntegrationResponse", "Required field: IntegrationId, is not set");
    return CreateIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrationresponses");
  };

  return CreateIntegrationResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelOutcome ApiGatewayV2Client::CreateModel(const CreateModelRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateModel", "Required field: ApiId, is not set");
    return CreateModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/models");
  };

  return CreateModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePortalOutcome ApiGatewayV2Client::CreatePortal(const CreatePortalRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portals");
  };

  return CreatePortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePortalProductOutcome ApiGatewayV2Client::CreatePortalProduct(const CreatePortalProductRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts");
  };

  return CreatePortalProductOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProductPageOutcome ApiGatewayV2Client::CreateProductPage(const CreateProductPageRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProductPage", "Required field: PortalProductId, is not set");
    return CreateProductPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [PortalProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productpages");
  };

  return CreateProductPageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProductRestEndpointPageOutcome ApiGatewayV2Client::CreateProductRestEndpointPage(
    const CreateProductRestEndpointPageRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProductRestEndpointPage", "Required field: PortalProductId, is not set");
    return CreateProductRestEndpointPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productrestendpointpages");
  };

  return CreateProductRestEndpointPageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRouteOutcome ApiGatewayV2Client::CreateRoute(const CreateRouteRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoute", "Required field: ApiId, is not set");
    return CreateRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
  };

  return CreateRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRouteResponseOutcome ApiGatewayV2Client::CreateRouteResponse(const CreateRouteResponseRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRouteResponse", "Required field: ApiId, is not set");
    return CreateRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRouteResponse", "Required field: RouteId, is not set");
    return CreateRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RouteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routeresponses");
  };

  return CreateRouteResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRoutingRuleOutcome ApiGatewayV2Client::CreateRoutingRule(const CreateRoutingRuleRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoutingRule", "Required field: DomainName, is not set");
    return CreateRoutingRuleOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routingrules");
  };

  return CreateRoutingRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStageOutcome ApiGatewayV2Client::CreateStage(const CreateStageRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateStage", "Required field: ApiId, is not set");
    return CreateStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages");
  };

  return CreateStageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVpcLinkOutcome ApiGatewayV2Client::CreateVpcLink(const CreateVpcLinkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/vpclinks");
  };

  return CreateVpcLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccessLogSettingsOutcome ApiGatewayV2Client::DeleteAccessLogSettings(const DeleteAccessLogSettingsRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessLogSettings", "Required field: ApiId, is not set");
    return DeleteAccessLogSettingsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessLogSettings", "Required field: StageName, is not set");
    return DeleteAccessLogSettingsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogsettings");
  };

  return DeleteAccessLogSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteApiOutcome ApiGatewayV2Client::DeleteApi(const DeleteApiRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApi", "Required field: ApiId, is not set");
    return DeleteApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
  };

  return DeleteApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteApiMappingOutcome ApiGatewayV2Client::DeleteApiMapping(const DeleteApiMappingRequest& request) const {
  if (!request.ApiMappingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApiMapping", "Required field: ApiMappingId, is not set");
    return DeleteApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApiMappingId]", false));
  }
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApiMapping", "Required field: DomainName, is not set");
    return DeleteApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apimappings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiMappingId());
  };

  return DeleteApiMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAuthorizerOutcome ApiGatewayV2Client::DeleteAuthorizer(const DeleteAuthorizerRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAuthorizer", "Required field: ApiId, is not set");
    return DeleteAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAuthorizer", "Required field: AuthorizerId, is not set");
    return DeleteAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AuthorizerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerId());
  };

  return DeleteAuthorizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCorsConfigurationOutcome ApiGatewayV2Client::DeleteCorsConfiguration(const DeleteCorsConfigurationRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCorsConfiguration", "Required field: ApiId, is not set");
    return DeleteCorsConfigurationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cors");
  };

  return DeleteCorsConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDeploymentOutcome ApiGatewayV2Client::DeleteDeployment(const DeleteDeploymentRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: ApiId, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: DeploymentId, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
  };

  return DeleteDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainNameOutcome ApiGatewayV2Client::DeleteDomainName(const DeleteDomainNameRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainName", "Required field: DomainName, is not set");
    return DeleteDomainNameOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return DeleteDomainNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIntegrationOutcome ApiGatewayV2Client::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: ApiId, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: IntegrationId, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [IntegrationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationId());
  };

  return DeleteIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIntegrationResponseOutcome ApiGatewayV2Client::DeleteIntegrationResponse(const DeleteIntegrationResponseRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: ApiId, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: IntegrationId, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }
  if (!request.IntegrationResponseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: IntegrationResponseId, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationResponseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrationresponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationResponseId());
  };

  return DeleteIntegrationResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteModelOutcome ApiGatewayV2Client::DeleteModel(const DeleteModelRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteModel", "Required field: ApiId, is not set");
    return DeleteModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }
  if (!request.ModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteModel", "Required field: ModelId, is not set");
    return DeleteModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelId());
  };

  return DeleteModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePortalOutcome ApiGatewayV2Client::DeletePortal(const DeletePortalRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePortal", "Required field: PortalId, is not set");
    return DeletePortalOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
  };

  return DeletePortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePortalProductOutcome ApiGatewayV2Client::DeletePortalProduct(const DeletePortalProductRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePortalProduct", "Required field: PortalProductId, is not set");
    return DeletePortalProductOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [PortalProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
  };

  return DeletePortalProductOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePortalProductSharingPolicyOutcome ApiGatewayV2Client::DeletePortalProductSharingPolicy(
    const DeletePortalProductSharingPolicyRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePortalProductSharingPolicy", "Required field: PortalProductId, is not set");
    return DeletePortalProductSharingPolicyOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sharingpolicy");
  };

  return DeletePortalProductSharingPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteProductPageOutcome ApiGatewayV2Client::DeleteProductPage(const DeleteProductPageRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProductPage", "Required field: PortalProductId, is not set");
    return DeleteProductPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [PortalProductId]", false));
  }
  if (!request.ProductPageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProductPage", "Required field: ProductPageId, is not set");
    return DeleteProductPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ProductPageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productpages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductPageId());
  };

  return DeleteProductPageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteProductRestEndpointPageOutcome ApiGatewayV2Client::DeleteProductRestEndpointPage(
    const DeleteProductRestEndpointPageRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProductRestEndpointPage", "Required field: PortalProductId, is not set");
    return DeleteProductRestEndpointPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalProductId]", false));
  }
  if (!request.ProductRestEndpointPageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProductRestEndpointPage", "Required field: ProductRestEndpointPageId, is not set");
    return DeleteProductRestEndpointPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProductRestEndpointPageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productrestendpointpages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductRestEndpointPageId());
  };

  return DeleteProductRestEndpointPageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRouteOutcome ApiGatewayV2Client::DeleteRoute(const DeleteRouteRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: ApiId, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: RouteId, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [RouteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteId());
  };

  return DeleteRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRouteRequestParameterOutcome ApiGatewayV2Client::DeleteRouteRequestParameter(
    const DeleteRouteRequestParameterRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouteRequestParameter", "Required field: ApiId, is not set");
    return DeleteRouteRequestParameterOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.RequestParameterKeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouteRequestParameter", "Required field: RequestParameterKey, is not set");
    return DeleteRouteRequestParameterOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestParameterKey]", false));
  }
  if (!request.RouteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouteRequestParameter", "Required field: RouteId, is not set");
    return DeleteRouteRequestParameterOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/requestparameters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRequestParameterKey());
  };

  return DeleteRouteRequestParameterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRouteResponseOutcome ApiGatewayV2Client::DeleteRouteResponse(const DeleteRouteResponseRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouteResponse", "Required field: ApiId, is not set");
    return DeleteRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouteResponse", "Required field: RouteId, is not set");
    return DeleteRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RouteId]", false));
  }
  if (!request.RouteResponseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouteResponse", "Required field: RouteResponseId, is not set");
    return DeleteRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RouteResponseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routeresponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteResponseId());
  };

  return DeleteRouteResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRouteSettingsOutcome ApiGatewayV2Client::DeleteRouteSettings(const DeleteRouteSettingsRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouteSettings", "Required field: ApiId, is not set");
    return DeleteRouteSettingsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ApiId]", false));
  }
  if (!request.RouteKeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouteSettings", "Required field: RouteKey, is not set");
    return DeleteRouteSettingsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RouteKey]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouteSettings", "Required field: StageName, is not set");
    return DeleteRouteSettingsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [StageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routesettings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteKey());
  };

  return DeleteRouteSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRoutingRuleOutcome ApiGatewayV2Client::DeleteRoutingRule(const DeleteRoutingRuleRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoutingRule", "Required field: DomainName, is not set");
    return DeleteRoutingRuleOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DomainName]", false));
  }
  if (!request.RoutingRuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoutingRule", "Required field: RoutingRuleId, is not set");
    return DeleteRoutingRuleOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [RoutingRuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routingrules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingRuleId());
  };

  return DeleteRoutingRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteStageOutcome ApiGatewayV2Client::DeleteStage(const DeleteStageRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStage", "Required field: ApiId, is not set");
    return DeleteStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStage", "Required field: StageName, is not set");
    return DeleteStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [StageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  };

  return DeleteStageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVpcLinkOutcome ApiGatewayV2Client::DeleteVpcLink(const DeleteVpcLinkRequest& request) const {
  if (!request.VpcLinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVpcLink", "Required field: VpcLinkId, is not set");
    return DeleteVpcLinkOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [VpcLinkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/vpclinks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcLinkId());
  };

  return DeleteVpcLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisablePortalOutcome ApiGatewayV2Client::DisablePortal(const DisablePortalRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisablePortal", "Required field: PortalId, is not set");
    return DisablePortalOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/publish");
  };

  return DisablePortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

ExportApiOutcome ApiGatewayV2Client::ExportApi(const ExportApiRequest& request) const {
  AWS_OPERATION_GUARD(ExportApi);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportApi", "Required field: ApiId, is not set");
    return ExportApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }
  if (!request.OutputTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportApi", "Required field: OutputType, is not set");
    return ExportApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [OutputType]", false));
  }
  if (!request.SpecificationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportApi", "Required field: Specification, is not set");
    return ExportApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Specification]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ExportApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExportApi, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExportApi",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExportApiOutcome>(
      [&]() -> ExportApiOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportApi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/exports/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpecification());
        return ExportApiOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetApiOutcome ApiGatewayV2Client::GetApi(const GetApiRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApi", "Required field: ApiId, is not set");
    return GetApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
  };

  return GetApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApiMappingOutcome ApiGatewayV2Client::GetApiMapping(const GetApiMappingRequest& request) const {
  if (!request.ApiMappingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApiMapping", "Required field: ApiMappingId, is not set");
    return GetApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApiMappingId]", false));
  }
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApiMapping", "Required field: DomainName, is not set");
    return GetApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apimappings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiMappingId());
  };

  return GetApiMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApiMappingsOutcome ApiGatewayV2Client::GetApiMappings(const GetApiMappingsRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApiMappings", "Required field: DomainName, is not set");
    return GetApiMappingsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apimappings");
  };

  return GetApiMappingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApisOutcome ApiGatewayV2Client::GetApis(const GetApisRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis");
  };

  return GetApisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAuthorizerOutcome ApiGatewayV2Client::GetAuthorizer(const GetAuthorizerRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAuthorizer", "Required field: ApiId, is not set");
    return GetAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAuthorizer", "Required field: AuthorizerId, is not set");
    return GetAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AuthorizerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerId());
  };

  return GetAuthorizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAuthorizersOutcome ApiGatewayV2Client::GetAuthorizers(const GetAuthorizersRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAuthorizers", "Required field: ApiId, is not set");
    return GetAuthorizersOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers");
  };

  return GetAuthorizersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeploymentOutcome ApiGatewayV2Client::GetDeployment(const GetDeploymentRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: ApiId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: DeploymentId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
  };

  return GetDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeploymentsOutcome ApiGatewayV2Client::GetDeployments(const GetDeploymentsRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployments", "Required field: ApiId, is not set");
    return GetDeploymentsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  return GetDeploymentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainNameOutcome ApiGatewayV2Client::GetDomainName(const GetDomainNameRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainName", "Required field: DomainName, is not set");
    return GetDomainNameOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return GetDomainNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainNamesOutcome ApiGatewayV2Client::GetDomainNames(const GetDomainNamesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames");
  };

  return GetDomainNamesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIntegrationOutcome ApiGatewayV2Client::GetIntegration(const GetIntegrationRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: ApiId, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: IntegrationId, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [IntegrationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationId());
  };

  return GetIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIntegrationResponseOutcome ApiGatewayV2Client::GetIntegrationResponse(const GetIntegrationResponseRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: ApiId, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: IntegrationId, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }
  if (!request.IntegrationResponseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: IntegrationResponseId, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationResponseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrationresponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationResponseId());
  };

  return GetIntegrationResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIntegrationResponsesOutcome ApiGatewayV2Client::GetIntegrationResponses(const GetIntegrationResponsesRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponses", "Required field: ApiId, is not set");
    return GetIntegrationResponsesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponses", "Required field: IntegrationId, is not set");
    return GetIntegrationResponsesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrationresponses");
  };

  return GetIntegrationResponsesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIntegrationsOutcome ApiGatewayV2Client::GetIntegrations(const GetIntegrationsRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIntegrations", "Required field: ApiId, is not set");
    return GetIntegrationsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations");
  };

  return GetIntegrationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetModelOutcome ApiGatewayV2Client::GetModel(const GetModelRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModel", "Required field: ApiId, is not set");
    return GetModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApiId]", false));
  }
  if (!request.ModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModel", "Required field: ModelId, is not set");
    return GetModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelId());
  };

  return GetModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetModelTemplateOutcome ApiGatewayV2Client::GetModelTemplate(const GetModelTemplateRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModelTemplate", "Required field: ApiId, is not set");
    return GetModelTemplateOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApiId]", false));
  }
  if (!request.ModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModelTemplate", "Required field: ModelId, is not set");
    return GetModelTemplateOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/template");
  };

  return GetModelTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetModelsOutcome ApiGatewayV2Client::GetModels(const GetModelsRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModels", "Required field: ApiId, is not set");
    return GetModelsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/models");
  };

  return GetModelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPortalOutcome ApiGatewayV2Client::GetPortal(const GetPortalRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPortal", "Required field: PortalId, is not set");
    return GetPortalOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
  };

  return GetPortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPortalProductOutcome ApiGatewayV2Client::GetPortalProduct(const GetPortalProductRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPortalProduct", "Required field: PortalProductId, is not set");
    return GetPortalProductOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [PortalProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
  };

  return GetPortalProductOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPortalProductSharingPolicyOutcome ApiGatewayV2Client::GetPortalProductSharingPolicy(
    const GetPortalProductSharingPolicyRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPortalProductSharingPolicy", "Required field: PortalProductId, is not set");
    return GetPortalProductSharingPolicyOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sharingpolicy");
  };

  return GetPortalProductSharingPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProductPageOutcome ApiGatewayV2Client::GetProductPage(const GetProductPageRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProductPage", "Required field: PortalProductId, is not set");
    return GetProductPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [PortalProductId]", false));
  }
  if (!request.ProductPageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProductPage", "Required field: ProductPageId, is not set");
    return GetProductPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProductPageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productpages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductPageId());
  };

  return GetProductPageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProductRestEndpointPageOutcome ApiGatewayV2Client::GetProductRestEndpointPage(const GetProductRestEndpointPageRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProductRestEndpointPage", "Required field: PortalProductId, is not set");
    return GetProductRestEndpointPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalProductId]", false));
  }
  if (!request.ProductRestEndpointPageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProductRestEndpointPage", "Required field: ProductRestEndpointPageId, is not set");
    return GetProductRestEndpointPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProductRestEndpointPageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productrestendpointpages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductRestEndpointPageId());
  };

  return GetProductRestEndpointPageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRouteOutcome ApiGatewayV2Client::GetRoute(const GetRouteRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: ApiId, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: RouteId, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [RouteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteId());
  };

  return GetRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRouteResponseOutcome ApiGatewayV2Client::GetRouteResponse(const GetRouteResponseRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouteResponse", "Required field: ApiId, is not set");
    return GetRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouteResponse", "Required field: RouteId, is not set");
    return GetRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [RouteId]", false));
  }
  if (!request.RouteResponseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouteResponse", "Required field: RouteResponseId, is not set");
    return GetRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [RouteResponseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routeresponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteResponseId());
  };

  return GetRouteResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRouteResponsesOutcome ApiGatewayV2Client::GetRouteResponses(const GetRouteResponsesRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouteResponses", "Required field: ApiId, is not set");
    return GetRouteResponsesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouteResponses", "Required field: RouteId, is not set");
    return GetRouteResponsesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [RouteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routeresponses");
  };

  return GetRouteResponsesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRoutesOutcome ApiGatewayV2Client::GetRoutes(const GetRoutesRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoutes", "Required field: ApiId, is not set");
    return GetRoutesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
  };

  return GetRoutesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRoutingRuleOutcome ApiGatewayV2Client::GetRoutingRule(const GetRoutingRuleRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoutingRule", "Required field: DomainName, is not set");
    return GetRoutingRuleOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainName]", false));
  }
  if (!request.RoutingRuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoutingRule", "Required field: RoutingRuleId, is not set");
    return GetRoutingRuleOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RoutingRuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routingrules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingRuleId());
  };

  return GetRoutingRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetStageOutcome ApiGatewayV2Client::GetStage(const GetStageRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStage", "Required field: ApiId, is not set");
    return GetStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApiId]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStage", "Required field: StageName, is not set");
    return GetStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [StageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  };

  return GetStageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetStagesOutcome ApiGatewayV2Client::GetStages(const GetStagesRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStages", "Required field: ApiId, is not set");
    return GetStagesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages");
  };

  return GetStagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTagsOutcome ApiGatewayV2Client::GetTags(const GetTagsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTags", "Required field: ResourceArn, is not set");
    return GetTagsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return GetTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVpcLinkOutcome ApiGatewayV2Client::GetVpcLink(const GetVpcLinkRequest& request) const {
  if (!request.VpcLinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVpcLink", "Required field: VpcLinkId, is not set");
    return GetVpcLinkOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [VpcLinkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/vpclinks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcLinkId());
  };

  return GetVpcLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVpcLinksOutcome ApiGatewayV2Client::GetVpcLinks(const GetVpcLinksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/vpclinks");
  };

  return GetVpcLinksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ImportApiOutcome ApiGatewayV2Client::ImportApi(const ImportApiRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis");
  };

  return ImportApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ListPortalProductsOutcome ApiGatewayV2Client::ListPortalProducts(const ListPortalProductsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts");
  };

  return ListPortalProductsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPortalsOutcome ApiGatewayV2Client::ListPortals(const ListPortalsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portals");
  };

  return ListPortalsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProductPagesOutcome ApiGatewayV2Client::ListProductPages(const ListProductPagesRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProductPages", "Required field: PortalProductId, is not set");
    return ListProductPagesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [PortalProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productpages");
  };

  return ListProductPagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProductRestEndpointPagesOutcome ApiGatewayV2Client::ListProductRestEndpointPages(
    const ListProductRestEndpointPagesRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProductRestEndpointPages", "Required field: PortalProductId, is not set");
    return ListProductRestEndpointPagesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productrestendpointpages");
  };

  return ListProductRestEndpointPagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRoutingRulesOutcome ApiGatewayV2Client::ListRoutingRules(const ListRoutingRulesRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoutingRules", "Required field: DomainName, is not set");
    return ListRoutingRulesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routingrules");
  };

  return ListRoutingRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PreviewPortalOutcome ApiGatewayV2Client::PreviewPortal(const PreviewPortalRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PreviewPortal", "Required field: PortalId, is not set");
    return PreviewPortalOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/preview");
  };

  return PreviewPortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PublishPortalOutcome ApiGatewayV2Client::PublishPortal(const PublishPortalRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishPortal", "Required field: PortalId, is not set");
    return PublishPortalOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/publish");
  };

  return PublishPortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPortalProductSharingPolicyOutcome ApiGatewayV2Client::PutPortalProductSharingPolicy(
    const PutPortalProductSharingPolicyRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutPortalProductSharingPolicy", "Required field: PortalProductId, is not set");
    return PutPortalProductSharingPolicyOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sharingpolicy");
  };

  return PutPortalProductSharingPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutRoutingRuleOutcome ApiGatewayV2Client::PutRoutingRule(const PutRoutingRuleRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRoutingRule", "Required field: DomainName, is not set");
    return PutRoutingRuleOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainName]", false));
  }
  if (!request.RoutingRuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRoutingRule", "Required field: RoutingRuleId, is not set");
    return PutRoutingRuleOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RoutingRuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routingrules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingRuleId());
  };

  return PutRoutingRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ReimportApiOutcome ApiGatewayV2Client::ReimportApi(const ReimportApiRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ReimportApi", "Required field: ApiId, is not set");
    return ReimportApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
  };

  return ReimportApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ResetAuthorizersCacheOutcome ApiGatewayV2Client::ResetAuthorizersCache(const ResetAuthorizersCacheRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetAuthorizersCache", "Required field: ApiId, is not set");
    return ResetAuthorizersCacheOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetAuthorizersCache", "Required field: StageName, is not set");
    return ResetAuthorizersCacheOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cache/authorizers");
  };

  return ResetAuthorizersCacheOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

TagResourceOutcome ApiGatewayV2Client::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ApiGatewayV2Client::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateApiOutcome ApiGatewayV2Client::UpdateApi(const UpdateApiRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApi", "Required field: ApiId, is not set");
    return UpdateApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApiId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
  };

  return UpdateApiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateApiMappingOutcome ApiGatewayV2Client::UpdateApiMapping(const UpdateApiMappingRequest& request) const {
  if (!request.ApiMappingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApiMapping", "Required field: ApiMappingId, is not set");
    return UpdateApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApiMappingId]", false));
  }
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApiMapping", "Required field: DomainName, is not set");
    return UpdateApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apimappings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiMappingId());
  };

  return UpdateApiMappingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateAuthorizerOutcome ApiGatewayV2Client::UpdateAuthorizer(const UpdateAuthorizerRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAuthorizer", "Required field: ApiId, is not set");
    return UpdateAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAuthorizer", "Required field: AuthorizerId, is not set");
    return UpdateAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AuthorizerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerId());
  };

  return UpdateAuthorizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDeploymentOutcome ApiGatewayV2Client::UpdateDeployment(const UpdateDeploymentRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDeployment", "Required field: ApiId, is not set");
    return UpdateDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDeployment", "Required field: DeploymentId, is not set");
    return UpdateDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
  };

  return UpdateDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDomainNameOutcome ApiGatewayV2Client::UpdateDomainName(const UpdateDomainNameRequest& request) const {
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomainName", "Required field: DomainName, is not set");
    return UpdateDomainNameOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domainnames/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return UpdateDomainNameOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateIntegrationOutcome ApiGatewayV2Client::UpdateIntegration(const UpdateIntegrationRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: ApiId, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: IntegrationId, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [IntegrationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationId());
  };

  return UpdateIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateIntegrationResponseOutcome ApiGatewayV2Client::UpdateIntegrationResponse(const UpdateIntegrationResponseRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: ApiId, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: IntegrationId, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }
  if (!request.IntegrationResponseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: IntegrationResponseId, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationResponseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integrationresponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationResponseId());
  };

  return UpdateIntegrationResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateModelOutcome ApiGatewayV2Client::UpdateModel(const UpdateModelRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateModel", "Required field: ApiId, is not set");
    return UpdateModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }
  if (!request.ModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateModel", "Required field: ModelId, is not set");
    return UpdateModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetModelId());
  };

  return UpdateModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdatePortalOutcome ApiGatewayV2Client::UpdatePortal(const UpdatePortalRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePortal", "Required field: PortalId, is not set");
    return UpdatePortalOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
  };

  return UpdatePortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdatePortalProductOutcome ApiGatewayV2Client::UpdatePortalProduct(const UpdatePortalProductRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePortalProduct", "Required field: PortalProductId, is not set");
    return UpdatePortalProductOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [PortalProductId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
  };

  return UpdatePortalProductOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateProductPageOutcome ApiGatewayV2Client::UpdateProductPage(const UpdateProductPageRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProductPage", "Required field: PortalProductId, is not set");
    return UpdateProductPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [PortalProductId]", false));
  }
  if (!request.ProductPageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProductPage", "Required field: ProductPageId, is not set");
    return UpdateProductPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ProductPageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productpages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductPageId());
  };

  return UpdateProductPageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateProductRestEndpointPageOutcome ApiGatewayV2Client::UpdateProductRestEndpointPage(
    const UpdateProductRestEndpointPageRequest& request) const {
  if (!request.PortalProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProductRestEndpointPage", "Required field: PortalProductId, is not set");
    return UpdateProductRestEndpointPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalProductId]", false));
  }
  if (!request.ProductRestEndpointPageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProductRestEndpointPage", "Required field: ProductRestEndpointPageId, is not set");
    return UpdateProductRestEndpointPageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(
        ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProductRestEndpointPageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/portalproducts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalProductId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/productrestendpointpages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductRestEndpointPageId());
  };

  return UpdateProductRestEndpointPageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateRouteOutcome ApiGatewayV2Client::UpdateRoute(const UpdateRouteRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: ApiId, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: RouteId, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [RouteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteId());
  };

  return UpdateRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateRouteResponseOutcome ApiGatewayV2Client::UpdateRouteResponse(const UpdateRouteResponseRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRouteResponse", "Required field: ApiId, is not set");
    return UpdateRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRouteResponse", "Required field: RouteId, is not set");
    return UpdateRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RouteId]", false));
  }
  if (!request.RouteResponseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRouteResponse", "Required field: RouteResponseId, is not set");
    return UpdateRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RouteResponseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routeresponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteResponseId());
  };

  return UpdateRouteResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateStageOutcome ApiGatewayV2Client::UpdateStage(const UpdateStageRequest& request) const {
  if (!request.ApiIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStage", "Required field: ApiId, is not set");
    return UpdateStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApiId]", false));
  }
  if (!request.StageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStage", "Required field: StageName, is not set");
    return UpdateStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [StageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/apis/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApiId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  };

  return UpdateStageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateVpcLinkOutcome ApiGatewayV2Client::UpdateVpcLink(const UpdateVpcLinkRequest& request) const {
  if (!request.VpcLinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVpcLink", "Required field: VpcLinkId, is not set");
    return UpdateVpcLinkOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [VpcLinkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/vpclinks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcLinkId());
  };

  return UpdateVpcLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
