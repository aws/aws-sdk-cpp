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


#include <aws/appmesh/AppMeshClient.h>
#include <aws/appmesh/AppMeshErrorMarshaller.h>
#include <aws/appmesh/AppMeshEndpointProvider.h>
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

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppMesh;
using namespace Aws::AppMesh::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace AppMesh
  {
    const char ALLOCATION_TAG[] = "AppMeshClient";
    const char SERVICE_NAME[] = "appmesh";
  }
}
const char* AppMeshClient::GetServiceName() {return SERVICE_NAME;}
const char* AppMeshClient::GetAllocationTag() {return ALLOCATION_TAG;}

AppMeshClient::AppMeshClient(const AppMesh::AppMeshClientConfiguration& clientConfiguration,
                           std::shared_ptr<AppMeshEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "App Mesh",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

AppMeshClient::AppMeshClient(const AWSCredentials& credentials,
                           std::shared_ptr<AppMeshEndpointProviderBase> endpointProvider,
                           const AppMesh::AppMeshClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "App Mesh",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

AppMeshClient::AppMeshClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<AppMeshEndpointProviderBase> endpointProvider,
                           const AppMesh::AppMeshClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "App Mesh",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
AppMeshClient::AppMeshClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "App Mesh",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

AppMeshClient::AppMeshClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "App Mesh",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

AppMeshClient::AppMeshClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "App Mesh",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

AppMeshClient::~AppMeshClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<AppMeshEndpointProviderBase>& AppMeshClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AppMeshClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CreateGatewayRouteOutcome AppMeshClient::CreateGatewayRoute(const CreateGatewayRouteRequest& request) const
{
  AWS_OPERATION_GUARD(CreateGatewayRoute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGatewayRoute", "Required field: MeshName, is not set");
    return CreateGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGatewayRoute", "Required field: VirtualGatewayName, is not set");
    return CreateGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualGatewayName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateGatewayRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateGatewayRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateGatewayRoute",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateGatewayRouteOutcome>(
    [&]()-> CreateGatewayRouteOutcome {
      return CreateGatewayRouteOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualGateway/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualGatewayName());
      resolvedEndpoint.AddPathSegments("/gatewayRoutes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMeshOutcome AppMeshClient::CreateMesh(const CreateMeshRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMesh);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMesh, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMesh, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMesh, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMesh",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMeshOutcome>(
    [&]()-> CreateMeshOutcome {
      return CreateMeshOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRouteOutcome AppMeshClient::CreateRoute(const CreateRouteRequest& request) const
{
  AWS_OPERATION_GUARD(CreateRoute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoute", "Required field: MeshName, is not set");
    return CreateRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoute", "Required field: VirtualRouterName, is not set");
    return CreateRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualRouterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRoute",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRouteOutcome>(
    [&]()-> CreateRouteOutcome {
      return CreateRouteOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualRouter/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualRouterName());
      resolvedEndpoint.AddPathSegments("/routes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVirtualGatewayOutcome AppMeshClient::CreateVirtualGateway(const CreateVirtualGatewayRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVirtualGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVirtualGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVirtualGateway", "Required field: MeshName, is not set");
    return CreateVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateVirtualGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateVirtualGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateVirtualGateway",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateVirtualGatewayOutcome>(
    [&]()-> CreateVirtualGatewayOutcome {
      return CreateVirtualGatewayOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualGateways");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVirtualNodeOutcome AppMeshClient::CreateVirtualNode(const CreateVirtualNodeRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVirtualNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVirtualNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVirtualNode", "Required field: MeshName, is not set");
    return CreateVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateVirtualNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateVirtualNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateVirtualNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateVirtualNodeOutcome>(
    [&]()-> CreateVirtualNodeOutcome {
      return CreateVirtualNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualNodes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVirtualRouterOutcome AppMeshClient::CreateVirtualRouter(const CreateVirtualRouterRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVirtualRouter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVirtualRouter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVirtualRouter", "Required field: MeshName, is not set");
    return CreateVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateVirtualRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateVirtualRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateVirtualRouter",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateVirtualRouterOutcome>(
    [&]()-> CreateVirtualRouterOutcome {
      return CreateVirtualRouterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualRouters");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVirtualServiceOutcome AppMeshClient::CreateVirtualService(const CreateVirtualServiceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVirtualService);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVirtualService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVirtualService", "Required field: MeshName, is not set");
    return CreateVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateVirtualService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateVirtualService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateVirtualService",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateVirtualServiceOutcome>(
    [&]()-> CreateVirtualServiceOutcome {
      return CreateVirtualServiceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualServices");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteGatewayRouteOutcome AppMeshClient::DeleteGatewayRoute(const DeleteGatewayRouteRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteGatewayRoute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayRouteNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGatewayRoute", "Required field: GatewayRouteName, is not set");
    return DeleteGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayRouteName]", false));
  }
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGatewayRoute", "Required field: MeshName, is not set");
    return DeleteGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGatewayRoute", "Required field: VirtualGatewayName, is not set");
    return DeleteGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualGatewayName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteGatewayRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteGatewayRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteGatewayRoute",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteGatewayRouteOutcome>(
    [&]()-> DeleteGatewayRouteOutcome {
      return DeleteGatewayRouteOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualGateway/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualGatewayName());
      resolvedEndpoint.AddPathSegments("/gatewayRoutes/");
      resolvedEndpoint.AddPathSegment(request.GetGatewayRouteName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMeshOutcome AppMeshClient::DeleteMesh(const DeleteMeshRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMesh);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMesh, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMesh", "Required field: MeshName, is not set");
    return DeleteMeshOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMesh, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMesh, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMesh",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMeshOutcome>(
    [&]()-> DeleteMeshOutcome {
      return DeleteMeshOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRouteOutcome AppMeshClient::DeleteRoute(const DeleteRouteRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRoute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: MeshName, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.RouteNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: RouteName, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: VirtualRouterName, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualRouterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRoute",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRouteOutcome>(
    [&]()-> DeleteRouteOutcome {
      return DeleteRouteOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualRouter/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualRouterName());
      resolvedEndpoint.AddPathSegments("/routes/");
      resolvedEndpoint.AddPathSegment(request.GetRouteName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVirtualGatewayOutcome AppMeshClient::DeleteVirtualGateway(const DeleteVirtualGatewayRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVirtualGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVirtualGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVirtualGateway", "Required field: MeshName, is not set");
    return DeleteVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVirtualGateway", "Required field: VirtualGatewayName, is not set");
    return DeleteVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualGatewayName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteVirtualGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVirtualGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVirtualGateway",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVirtualGatewayOutcome>(
    [&]()-> DeleteVirtualGatewayOutcome {
      return DeleteVirtualGatewayOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualGateways/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualGatewayName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVirtualNodeOutcome AppMeshClient::DeleteVirtualNode(const DeleteVirtualNodeRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVirtualNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVirtualNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVirtualNode", "Required field: MeshName, is not set");
    return DeleteVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualNodeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVirtualNode", "Required field: VirtualNodeName, is not set");
    return DeleteVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualNodeName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteVirtualNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVirtualNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVirtualNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVirtualNodeOutcome>(
    [&]()-> DeleteVirtualNodeOutcome {
      return DeleteVirtualNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualNodes/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualNodeName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVirtualRouterOutcome AppMeshClient::DeleteVirtualRouter(const DeleteVirtualRouterRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVirtualRouter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVirtualRouter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVirtualRouter", "Required field: MeshName, is not set");
    return DeleteVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVirtualRouter", "Required field: VirtualRouterName, is not set");
    return DeleteVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualRouterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteVirtualRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVirtualRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVirtualRouter",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVirtualRouterOutcome>(
    [&]()-> DeleteVirtualRouterOutcome {
      return DeleteVirtualRouterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualRouters/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualRouterName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVirtualServiceOutcome AppMeshClient::DeleteVirtualService(const DeleteVirtualServiceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVirtualService);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVirtualService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVirtualService", "Required field: MeshName, is not set");
    return DeleteVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualServiceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVirtualService", "Required field: VirtualServiceName, is not set");
    return DeleteVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualServiceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteVirtualService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVirtualService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVirtualService",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVirtualServiceOutcome>(
    [&]()-> DeleteVirtualServiceOutcome {
      return DeleteVirtualServiceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualServices/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualServiceName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeGatewayRouteOutcome AppMeshClient::DescribeGatewayRoute(const DescribeGatewayRouteRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeGatewayRoute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayRouteNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGatewayRoute", "Required field: GatewayRouteName, is not set");
    return DescribeGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayRouteName]", false));
  }
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGatewayRoute", "Required field: MeshName, is not set");
    return DescribeGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGatewayRoute", "Required field: VirtualGatewayName, is not set");
    return DescribeGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualGatewayName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeGatewayRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeGatewayRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeGatewayRoute",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeGatewayRouteOutcome>(
    [&]()-> DescribeGatewayRouteOutcome {
      return DescribeGatewayRouteOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualGateway/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualGatewayName());
      resolvedEndpoint.AddPathSegments("/gatewayRoutes/");
      resolvedEndpoint.AddPathSegment(request.GetGatewayRouteName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeMeshOutcome AppMeshClient::DescribeMesh(const DescribeMeshRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeMesh);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMesh, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMesh", "Required field: MeshName, is not set");
    return DescribeMeshOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeMesh, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeMesh, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeMesh",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeMeshOutcome>(
    [&]()-> DescribeMeshOutcome {
      return DescribeMeshOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeRouteOutcome AppMeshClient::DescribeRoute(const DescribeRouteRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRoute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRoute", "Required field: MeshName, is not set");
    return DescribeRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.RouteNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRoute", "Required field: RouteName, is not set");
    return DescribeRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRoute", "Required field: VirtualRouterName, is not set");
    return DescribeRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualRouterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeRoute",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeRouteOutcome>(
    [&]()-> DescribeRouteOutcome {
      return DescribeRouteOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualRouter/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualRouterName());
      resolvedEndpoint.AddPathSegments("/routes/");
      resolvedEndpoint.AddPathSegment(request.GetRouteName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVirtualGatewayOutcome AppMeshClient::DescribeVirtualGateway(const DescribeVirtualGatewayRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVirtualGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVirtualGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVirtualGateway", "Required field: MeshName, is not set");
    return DescribeVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVirtualGateway", "Required field: VirtualGatewayName, is not set");
    return DescribeVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualGatewayName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeVirtualGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVirtualGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeVirtualGateway",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVirtualGatewayOutcome>(
    [&]()-> DescribeVirtualGatewayOutcome {
      return DescribeVirtualGatewayOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualGateways/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualGatewayName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVirtualNodeOutcome AppMeshClient::DescribeVirtualNode(const DescribeVirtualNodeRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVirtualNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVirtualNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVirtualNode", "Required field: MeshName, is not set");
    return DescribeVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualNodeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVirtualNode", "Required field: VirtualNodeName, is not set");
    return DescribeVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualNodeName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeVirtualNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVirtualNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeVirtualNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVirtualNodeOutcome>(
    [&]()-> DescribeVirtualNodeOutcome {
      return DescribeVirtualNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualNodes/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualNodeName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVirtualRouterOutcome AppMeshClient::DescribeVirtualRouter(const DescribeVirtualRouterRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVirtualRouter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVirtualRouter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVirtualRouter", "Required field: MeshName, is not set");
    return DescribeVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVirtualRouter", "Required field: VirtualRouterName, is not set");
    return DescribeVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualRouterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeVirtualRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVirtualRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeVirtualRouter",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVirtualRouterOutcome>(
    [&]()-> DescribeVirtualRouterOutcome {
      return DescribeVirtualRouterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualRouters/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualRouterName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVirtualServiceOutcome AppMeshClient::DescribeVirtualService(const DescribeVirtualServiceRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVirtualService);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVirtualService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVirtualService", "Required field: MeshName, is not set");
    return DescribeVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualServiceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVirtualService", "Required field: VirtualServiceName, is not set");
    return DescribeVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualServiceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeVirtualService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVirtualService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeVirtualService",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVirtualServiceOutcome>(
    [&]()-> DescribeVirtualServiceOutcome {
      return DescribeVirtualServiceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualServices/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualServiceName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListGatewayRoutesOutcome AppMeshClient::ListGatewayRoutes(const ListGatewayRoutesRequest& request) const
{
  AWS_OPERATION_GUARD(ListGatewayRoutes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGatewayRoutes", "Required field: MeshName, is not set");
    return ListGatewayRoutesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGatewayRoutes", "Required field: VirtualGatewayName, is not set");
    return ListGatewayRoutesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualGatewayName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListGatewayRoutes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListGatewayRoutes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListGatewayRoutes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListGatewayRoutesOutcome>(
    [&]()-> ListGatewayRoutesOutcome {
      return ListGatewayRoutesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualGateway/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualGatewayName());
      resolvedEndpoint.AddPathSegments("/gatewayRoutes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMeshesOutcome AppMeshClient::ListMeshes(const ListMeshesRequest& request) const
{
  AWS_OPERATION_GUARD(ListMeshes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMeshes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMeshes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMeshes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMeshes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMeshesOutcome>(
    [&]()-> ListMeshesOutcome {
      return ListMeshesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRoutesOutcome AppMeshClient::ListRoutes(const ListRoutesRequest& request) const
{
  AWS_OPERATION_GUARD(ListRoutes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoutes", "Required field: MeshName, is not set");
    return ListRoutesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoutes", "Required field: VirtualRouterName, is not set");
    return ListRoutesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualRouterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRoutes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRoutes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRoutes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRoutesOutcome>(
    [&]()-> ListRoutesOutcome {
      return ListRoutesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualRouter/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualRouterName());
      resolvedEndpoint.AddPathSegments("/routes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome AppMeshClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/tags");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVirtualGatewaysOutcome AppMeshClient::ListVirtualGateways(const ListVirtualGatewaysRequest& request) const
{
  AWS_OPERATION_GUARD(ListVirtualGateways);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVirtualGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVirtualGateways", "Required field: MeshName, is not set");
    return ListVirtualGatewaysOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListVirtualGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVirtualGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVirtualGateways",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVirtualGatewaysOutcome>(
    [&]()-> ListVirtualGatewaysOutcome {
      return ListVirtualGatewaysOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualGateways");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVirtualNodesOutcome AppMeshClient::ListVirtualNodes(const ListVirtualNodesRequest& request) const
{
  AWS_OPERATION_GUARD(ListVirtualNodes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVirtualNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVirtualNodes", "Required field: MeshName, is not set");
    return ListVirtualNodesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListVirtualNodes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVirtualNodes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVirtualNodes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVirtualNodesOutcome>(
    [&]()-> ListVirtualNodesOutcome {
      return ListVirtualNodesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualNodes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVirtualRoutersOutcome AppMeshClient::ListVirtualRouters(const ListVirtualRoutersRequest& request) const
{
  AWS_OPERATION_GUARD(ListVirtualRouters);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVirtualRouters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVirtualRouters", "Required field: MeshName, is not set");
    return ListVirtualRoutersOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListVirtualRouters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVirtualRouters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVirtualRouters",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVirtualRoutersOutcome>(
    [&]()-> ListVirtualRoutersOutcome {
      return ListVirtualRoutersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualRouters");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVirtualServicesOutcome AppMeshClient::ListVirtualServices(const ListVirtualServicesRequest& request) const
{
  AWS_OPERATION_GUARD(ListVirtualServices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVirtualServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVirtualServices", "Required field: MeshName, is not set");
    return ListVirtualServicesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListVirtualServices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVirtualServices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVirtualServices",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVirtualServicesOutcome>(
    [&]()-> ListVirtualServicesOutcome {
      return ListVirtualServicesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualServices");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome AppMeshClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/tag");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome AppMeshClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/untag");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGatewayRouteOutcome AppMeshClient::UpdateGatewayRoute(const UpdateGatewayRouteRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGatewayRoute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayRouteNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGatewayRoute", "Required field: GatewayRouteName, is not set");
    return UpdateGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayRouteName]", false));
  }
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGatewayRoute", "Required field: MeshName, is not set");
    return UpdateGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGatewayRoute", "Required field: VirtualGatewayName, is not set");
    return UpdateGatewayRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualGatewayName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateGatewayRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGatewayRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGatewayRoute",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGatewayRouteOutcome>(
    [&]()-> UpdateGatewayRouteOutcome {
      return UpdateGatewayRouteOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualGateway/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualGatewayName());
      resolvedEndpoint.AddPathSegments("/gatewayRoutes/");
      resolvedEndpoint.AddPathSegment(request.GetGatewayRouteName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMeshOutcome AppMeshClient::UpdateMesh(const UpdateMeshRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMesh);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMesh, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMesh", "Required field: MeshName, is not set");
    return UpdateMeshOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMesh, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMesh, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMesh",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMeshOutcome>(
    [&]()-> UpdateMeshOutcome {
      return UpdateMeshOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRouteOutcome AppMeshClient::UpdateRoute(const UpdateRouteRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRoute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: MeshName, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.RouteNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: RouteName, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: VirtualRouterName, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualRouterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRoute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRoute",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRouteOutcome>(
    [&]()-> UpdateRouteOutcome {
      return UpdateRouteOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualRouter/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualRouterName());
      resolvedEndpoint.AddPathSegments("/routes/");
      resolvedEndpoint.AddPathSegment(request.GetRouteName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateVirtualGatewayOutcome AppMeshClient::UpdateVirtualGateway(const UpdateVirtualGatewayRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVirtualGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVirtualGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVirtualGateway", "Required field: MeshName, is not set");
    return UpdateVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualGatewayNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVirtualGateway", "Required field: VirtualGatewayName, is not set");
    return UpdateVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualGatewayName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateVirtualGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateVirtualGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateVirtualGateway",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateVirtualGatewayOutcome>(
    [&]()-> UpdateVirtualGatewayOutcome {
      return UpdateVirtualGatewayOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualGateways/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualGatewayName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateVirtualNodeOutcome AppMeshClient::UpdateVirtualNode(const UpdateVirtualNodeRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVirtualNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVirtualNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVirtualNode", "Required field: MeshName, is not set");
    return UpdateVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualNodeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVirtualNode", "Required field: VirtualNodeName, is not set");
    return UpdateVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualNodeName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateVirtualNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateVirtualNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateVirtualNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateVirtualNodeOutcome>(
    [&]()-> UpdateVirtualNodeOutcome {
      return UpdateVirtualNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualNodes/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualNodeName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateVirtualRouterOutcome AppMeshClient::UpdateVirtualRouter(const UpdateVirtualRouterRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVirtualRouter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVirtualRouter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVirtualRouter", "Required field: MeshName, is not set");
    return UpdateVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualRouterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVirtualRouter", "Required field: VirtualRouterName, is not set");
    return UpdateVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualRouterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateVirtualRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateVirtualRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateVirtualRouter",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateVirtualRouterOutcome>(
    [&]()-> UpdateVirtualRouterOutcome {
      return UpdateVirtualRouterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualRouters/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualRouterName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateVirtualServiceOutcome AppMeshClient::UpdateVirtualService(const UpdateVirtualServiceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVirtualService);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVirtualService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVirtualService", "Required field: MeshName, is not set");
    return UpdateVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  if (!request.VirtualServiceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVirtualService", "Required field: VirtualServiceName, is not set");
    return UpdateVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualServiceName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateVirtualService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateVirtualService, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateVirtualService",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateVirtualServiceOutcome>(
    [&]()-> UpdateVirtualServiceOutcome {
      return UpdateVirtualServiceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v20190125/meshes/");
      resolvedEndpoint.AddPathSegment(request.GetMeshName());
      resolvedEndpoint.AddPathSegments("/virtualServices/");
      resolvedEndpoint.AddPathSegment(request.GetVirtualServiceName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


