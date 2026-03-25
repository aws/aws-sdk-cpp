/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/AppMeshClient.h>
#include <aws/appmesh/AppMeshEndpointProvider.h>
#include <aws/appmesh/AppMeshErrorMarshaller.h>
#include <aws/appmesh/model/CreateGatewayRouteRequest.h>
#include <aws/appmesh/model/CreateMeshRequest.h>
#include <aws/appmesh/model/CreateRouteRequest.h>
#include <aws/appmesh/model/CreateVirtualGatewayRequest.h>
#include <aws/appmesh/model/CreateVirtualNodeRequest.h>
#include <aws/appmesh/model/CreateVirtualRouterRequest.h>
#include <aws/appmesh/model/CreateVirtualServiceRequest.h>
#include <aws/appmesh/model/DeleteGatewayRouteRequest.h>
#include <aws/appmesh/model/DeleteMeshRequest.h>
#include <aws/appmesh/model/DeleteRouteRequest.h>
#include <aws/appmesh/model/DeleteVirtualGatewayRequest.h>
#include <aws/appmesh/model/DeleteVirtualNodeRequest.h>
#include <aws/appmesh/model/DeleteVirtualRouterRequest.h>
#include <aws/appmesh/model/DeleteVirtualServiceRequest.h>
#include <aws/appmesh/model/DescribeGatewayRouteRequest.h>
#include <aws/appmesh/model/DescribeMeshRequest.h>
#include <aws/appmesh/model/DescribeRouteRequest.h>
#include <aws/appmesh/model/DescribeVirtualGatewayRequest.h>
#include <aws/appmesh/model/DescribeVirtualNodeRequest.h>
#include <aws/appmesh/model/DescribeVirtualRouterRequest.h>
#include <aws/appmesh/model/DescribeVirtualServiceRequest.h>
#include <aws/appmesh/model/ListGatewayRoutesRequest.h>
#include <aws/appmesh/model/ListMeshesRequest.h>
#include <aws/appmesh/model/ListRoutesRequest.h>
#include <aws/appmesh/model/ListTagsForResourceRequest.h>
#include <aws/appmesh/model/ListVirtualGatewaysRequest.h>
#include <aws/appmesh/model/ListVirtualNodesRequest.h>
#include <aws/appmesh/model/ListVirtualRoutersRequest.h>
#include <aws/appmesh/model/ListVirtualServicesRequest.h>
#include <aws/appmesh/model/TagResourceRequest.h>
#include <aws/appmesh/model/UntagResourceRequest.h>
#include <aws/appmesh/model/UpdateGatewayRouteRequest.h>
#include <aws/appmesh/model/UpdateMeshRequest.h>
#include <aws/appmesh/model/UpdateRouteRequest.h>
#include <aws/appmesh/model/UpdateVirtualGatewayRequest.h>
#include <aws/appmesh/model/UpdateVirtualNodeRequest.h>
#include <aws/appmesh/model/UpdateVirtualRouterRequest.h>
#include <aws/appmesh/model/UpdateVirtualServiceRequest.h>
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
using namespace Aws::AppMesh;
using namespace Aws::AppMesh::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AppMesh {
const char SERVICE_NAME[] = "appmesh";
const char ALLOCATION_TAG[] = "AppMeshClient";
}  // namespace AppMesh
}  // namespace Aws
const char* AppMeshClient::GetServiceName() { return SERVICE_NAME; }
const char* AppMeshClient::GetAllocationTag() { return ALLOCATION_TAG; }

AppMeshClient::AppMeshClient(const AppMesh::AppMeshClientConfiguration& clientConfiguration,
                             std::shared_ptr<AppMeshEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppMeshClient::AppMeshClient(const AWSCredentials& credentials, std::shared_ptr<AppMeshEndpointProviderBase> endpointProvider,
                             const AppMesh::AppMeshClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppMeshClient::AppMeshClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<AppMeshEndpointProviderBase> endpointProvider,
                             const AppMesh::AppMeshClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AppMeshClient::AppMeshClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppMeshClient::AppMeshClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppMeshClient::AppMeshClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AppMeshClient::~AppMeshClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AppMeshEndpointProviderBase>& AppMeshClient::accessEndpointProvider() { return m_endpointProvider; }

void AppMeshClient::init(const AppMesh::AppMeshClientConfiguration& config) {
  AWSClient::SetServiceClientName("App Mesh");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "appmesh");
}

void AppMeshClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AppMeshClient::InvokeOperationOutcome AppMeshClient::InvokeServiceOperation(
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

CreateGatewayRouteOutcome AppMeshClient::CreateGatewayRoute(const CreateGatewayRouteRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGatewayRoute", "Required field: MeshName, is not set");
    return CreateGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGatewayRoute", "Required field: VirtualGatewayName, is not set");
    return CreateGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [VirtualGatewayName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualGateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualGatewayName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayRoutes");
  };

  return CreateGatewayRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateMeshOutcome AppMeshClient::CreateMesh(const CreateMeshRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes");
  };

  return CreateMeshOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateRouteOutcome AppMeshClient::CreateRoute(const CreateRouteRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoute", "Required field: MeshName, is not set");
    return CreateRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [MeshName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoute", "Required field: VirtualRouterName, is not set");
    return CreateRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [VirtualRouterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualRouter/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualRouterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
  };

  return CreateRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateVirtualGatewayOutcome AppMeshClient::CreateVirtualGateway(const CreateVirtualGatewayRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVirtualGateway", "Required field: MeshName, is not set");
    return CreateVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MeshName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualGateways");
  };

  return CreateVirtualGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateVirtualNodeOutcome AppMeshClient::CreateVirtualNode(const CreateVirtualNodeRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVirtualNode", "Required field: MeshName, is not set");
    return CreateVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MeshName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualNodes");
  };

  return CreateVirtualNodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateVirtualRouterOutcome AppMeshClient::CreateVirtualRouter(const CreateVirtualRouterRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVirtualRouter", "Required field: MeshName, is not set");
    return CreateVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MeshName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualRouters");
  };

  return CreateVirtualRouterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateVirtualServiceOutcome AppMeshClient::CreateVirtualService(const CreateVirtualServiceRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVirtualService", "Required field: MeshName, is not set");
    return CreateVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MeshName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualServices");
  };

  return CreateVirtualServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DeleteGatewayRouteOutcome AppMeshClient::DeleteGatewayRoute(const DeleteGatewayRouteRequest& request) const {
  if (!request.GatewayRouteNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGatewayRoute", "Required field: GatewayRouteName, is not set");
    return DeleteGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [GatewayRouteName]", false));
  }
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGatewayRoute", "Required field: MeshName, is not set");
    return DeleteGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGatewayRoute", "Required field: VirtualGatewayName, is not set");
    return DeleteGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [VirtualGatewayName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualGateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualGatewayName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayRoutes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayRouteName());
  };

  return DeleteGatewayRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMeshOutcome AppMeshClient::DeleteMesh(const DeleteMeshRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMesh", "Required field: MeshName, is not set");
    return DeleteMeshOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [MeshName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
  };

  return DeleteMeshOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRouteOutcome AppMeshClient::DeleteRoute(const DeleteRouteRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: MeshName, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [MeshName]", false));
  }
  if (!request.RouteNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: RouteName, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [RouteName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: VirtualRouterName, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [VirtualRouterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualRouter/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualRouterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteName());
  };

  return DeleteRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVirtualGatewayOutcome AppMeshClient::DeleteVirtualGateway(const DeleteVirtualGatewayRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVirtualGateway", "Required field: MeshName, is not set");
    return DeleteVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVirtualGateway", "Required field: VirtualGatewayName, is not set");
    return DeleteVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VirtualGatewayName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualGateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualGatewayName());
  };

  return DeleteVirtualGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVirtualNodeOutcome AppMeshClient::DeleteVirtualNode(const DeleteVirtualNodeRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVirtualNode", "Required field: MeshName, is not set");
    return DeleteVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MeshName]", false));
  }
  if (!request.VirtualNodeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVirtualNode", "Required field: VirtualNodeName, is not set");
    return DeleteVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [VirtualNodeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualNodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualNodeName());
  };

  return DeleteVirtualNodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVirtualRouterOutcome AppMeshClient::DeleteVirtualRouter(const DeleteVirtualRouterRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVirtualRouter", "Required field: MeshName, is not set");
    return DeleteVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MeshName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVirtualRouter", "Required field: VirtualRouterName, is not set");
    return DeleteVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [VirtualRouterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualRouters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualRouterName());
  };

  return DeleteVirtualRouterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVirtualServiceOutcome AppMeshClient::DeleteVirtualService(const DeleteVirtualServiceRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVirtualService", "Required field: MeshName, is not set");
    return DeleteVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MeshName]", false));
  }
  if (!request.VirtualServiceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVirtualService", "Required field: VirtualServiceName, is not set");
    return DeleteVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VirtualServiceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualServices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualServiceName());
  };

  return DeleteVirtualServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeGatewayRouteOutcome AppMeshClient::DescribeGatewayRoute(const DescribeGatewayRouteRequest& request) const {
  if (!request.GatewayRouteNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGatewayRoute", "Required field: GatewayRouteName, is not set");
    return DescribeGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [GatewayRouteName]", false));
  }
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGatewayRoute", "Required field: MeshName, is not set");
    return DescribeGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGatewayRoute", "Required field: VirtualGatewayName, is not set");
    return DescribeGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VirtualGatewayName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualGateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualGatewayName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayRoutes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayRouteName());
  };

  return DescribeGatewayRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeMeshOutcome AppMeshClient::DescribeMesh(const DescribeMeshRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeMesh", "Required field: MeshName, is not set");
    return DescribeMeshOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [MeshName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
  };

  return DescribeMeshOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRouteOutcome AppMeshClient::DescribeRoute(const DescribeRouteRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRoute", "Required field: MeshName, is not set");
    return DescribeRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [MeshName]", false));
  }
  if (!request.RouteNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRoute", "Required field: RouteName, is not set");
    return DescribeRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [RouteName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRoute", "Required field: VirtualRouterName, is not set");
    return DescribeRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [VirtualRouterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualRouter/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualRouterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteName());
  };

  return DescribeRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeVirtualGatewayOutcome AppMeshClient::DescribeVirtualGateway(const DescribeVirtualGatewayRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVirtualGateway", "Required field: MeshName, is not set");
    return DescribeVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVirtualGateway", "Required field: VirtualGatewayName, is not set");
    return DescribeVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [VirtualGatewayName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualGateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualGatewayName());
  };

  return DescribeVirtualGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeVirtualNodeOutcome AppMeshClient::DescribeVirtualNode(const DescribeVirtualNodeRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVirtualNode", "Required field: MeshName, is not set");
    return DescribeVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MeshName]", false));
  }
  if (!request.VirtualNodeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVirtualNode", "Required field: VirtualNodeName, is not set");
    return DescribeVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [VirtualNodeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualNodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualNodeName());
  };

  return DescribeVirtualNodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeVirtualRouterOutcome AppMeshClient::DescribeVirtualRouter(const DescribeVirtualRouterRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVirtualRouter", "Required field: MeshName, is not set");
    return DescribeVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [MeshName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVirtualRouter", "Required field: VirtualRouterName, is not set");
    return DescribeVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [VirtualRouterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualRouters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualRouterName());
  };

  return DescribeVirtualRouterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeVirtualServiceOutcome AppMeshClient::DescribeVirtualService(const DescribeVirtualServiceRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVirtualService", "Required field: MeshName, is not set");
    return DescribeVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MeshName]", false));
  }
  if (!request.VirtualServiceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVirtualService", "Required field: VirtualServiceName, is not set");
    return DescribeVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [VirtualServiceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualServices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualServiceName());
  };

  return DescribeVirtualServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListGatewayRoutesOutcome AppMeshClient::ListGatewayRoutes(const ListGatewayRoutesRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGatewayRoutes", "Required field: MeshName, is not set");
    return ListGatewayRoutesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGatewayRoutes", "Required field: VirtualGatewayName, is not set");
    return ListGatewayRoutesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [VirtualGatewayName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualGateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualGatewayName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayRoutes");
  };

  return ListGatewayRoutesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMeshesOutcome AppMeshClient::ListMeshes(const ListMeshesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes");
  };

  return ListMeshesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRoutesOutcome AppMeshClient::ListRoutes(const ListRoutesRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoutes", "Required field: MeshName, is not set");
    return ListRoutesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [MeshName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoutes", "Required field: VirtualRouterName, is not set");
    return ListRoutesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [VirtualRouterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualRouter/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualRouterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes");
  };

  return ListRoutesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome AppMeshClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/tags");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVirtualGatewaysOutcome AppMeshClient::ListVirtualGateways(const ListVirtualGatewaysRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVirtualGateways", "Required field: MeshName, is not set");
    return ListVirtualGatewaysOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MeshName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualGateways");
  };

  return ListVirtualGatewaysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVirtualNodesOutcome AppMeshClient::ListVirtualNodes(const ListVirtualNodesRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVirtualNodes", "Required field: MeshName, is not set");
    return ListVirtualNodesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [MeshName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualNodes");
  };

  return ListVirtualNodesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVirtualRoutersOutcome AppMeshClient::ListVirtualRouters(const ListVirtualRoutersRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVirtualRouters", "Required field: MeshName, is not set");
    return ListVirtualRoutersOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MeshName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualRouters");
  };

  return ListVirtualRoutersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVirtualServicesOutcome AppMeshClient::ListVirtualServices(const ListVirtualServicesRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVirtualServices", "Required field: MeshName, is not set");
    return ListVirtualServicesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MeshName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualServices");
  };

  return ListVirtualServicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

TagResourceOutcome AppMeshClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/tag");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UntagResourceOutcome AppMeshClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/untag");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateGatewayRouteOutcome AppMeshClient::UpdateGatewayRoute(const UpdateGatewayRouteRequest& request) const {
  if (!request.GatewayRouteNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGatewayRoute", "Required field: GatewayRouteName, is not set");
    return UpdateGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [GatewayRouteName]", false));
  }
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGatewayRoute", "Required field: MeshName, is not set");
    return UpdateGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGatewayRoute", "Required field: VirtualGatewayName, is not set");
    return UpdateGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [VirtualGatewayName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualGateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualGatewayName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/gatewayRoutes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayRouteName());
  };

  return UpdateGatewayRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateMeshOutcome AppMeshClient::UpdateMesh(const UpdateMeshRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMesh", "Required field: MeshName, is not set");
    return UpdateMeshOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [MeshName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
  };

  return UpdateMeshOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRouteOutcome AppMeshClient::UpdateRoute(const UpdateRouteRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: MeshName, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [MeshName]", false));
  }
  if (!request.RouteNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: RouteName, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [RouteName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: VirtualRouterName, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [VirtualRouterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualRouter/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualRouterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/routes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteName());
  };

  return UpdateRouteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateVirtualGatewayOutcome AppMeshClient::UpdateVirtualGateway(const UpdateVirtualGatewayRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVirtualGateway", "Required field: MeshName, is not set");
    return UpdateVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVirtualGateway", "Required field: VirtualGatewayName, is not set");
    return UpdateVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VirtualGatewayName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualGateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualGatewayName());
  };

  return UpdateVirtualGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateVirtualNodeOutcome AppMeshClient::UpdateVirtualNode(const UpdateVirtualNodeRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVirtualNode", "Required field: MeshName, is not set");
    return UpdateVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MeshName]", false));
  }
  if (!request.VirtualNodeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVirtualNode", "Required field: VirtualNodeName, is not set");
    return UpdateVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [VirtualNodeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualNodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualNodeName());
  };

  return UpdateVirtualNodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateVirtualRouterOutcome AppMeshClient::UpdateVirtualRouter(const UpdateVirtualRouterRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVirtualRouter", "Required field: MeshName, is not set");
    return UpdateVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MeshName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVirtualRouter", "Required field: VirtualRouterName, is not set");
    return UpdateVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [VirtualRouterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualRouters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualRouterName());
  };

  return UpdateVirtualRouterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateVirtualServiceOutcome AppMeshClient::UpdateVirtualService(const UpdateVirtualServiceRequest& request) const {
  if (!request.MeshNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVirtualService", "Required field: MeshName, is not set");
    return UpdateVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MeshName]", false));
  }
  if (!request.VirtualServiceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVirtualService", "Required field: VirtualServiceName, is not set");
    return UpdateVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VirtualServiceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v20190125/meshes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeshName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualServices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualServiceName());
  };

  return UpdateVirtualServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
