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

#include <aws/appmesh/AppMeshClient.h>
#include <aws/appmesh/AppMeshEndpoint.h>
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

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppMesh;
using namespace Aws::AppMesh::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "appmesh";
static const char* ALLOCATION_TAG = "AppMeshClient";

AppMeshClient::AppMeshClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppMeshClient::AppMeshClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppMeshClient::AppMeshClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppMeshClient::~AppMeshClient()
{
}

void AppMeshClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("App Mesh");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AppMeshEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AppMeshClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateGatewayRouteOutcome AppMeshClient::CreateGatewayRoute(const CreateGatewayRouteRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualGateway/");
  uri.AddPathSegment(request.GetVirtualGatewayName());
  uri.AddPathSegments("/gatewayRoutes");
  return CreateGatewayRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateGatewayRouteOutcomeCallable AppMeshClient::CreateGatewayRouteCallable(const CreateGatewayRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGatewayRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientCreateGatewayRouteAsyncHelper(AppMeshClient const * const clientThis, const CreateGatewayRouteRequest& request, const CreateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGatewayRoute(request), context);
}

void AppMeshClient::CreateGatewayRouteAsync(const CreateGatewayRouteRequest& request, const CreateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientCreateGatewayRouteAsyncHelper( this, request, handler, context ); } );
}

CreateMeshOutcome AppMeshClient::CreateMesh(const CreateMeshRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes");
  return CreateMeshOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateMeshOutcomeCallable AppMeshClient::CreateMeshCallable(const CreateMeshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMeshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMesh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientCreateMeshAsyncHelper(AppMeshClient const * const clientThis, const CreateMeshRequest& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMesh(request), context);
}

void AppMeshClient::CreateMeshAsync(const CreateMeshRequest& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientCreateMeshAsyncHelper( this, request, handler, context ); } );
}

CreateRouteOutcome AppMeshClient::CreateRoute(const CreateRouteRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualRouter/");
  uri.AddPathSegment(request.GetVirtualRouterName());
  uri.AddPathSegments("/routes");
  return CreateRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateRouteOutcomeCallable AppMeshClient::CreateRouteCallable(const CreateRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientCreateRouteAsyncHelper(AppMeshClient const * const clientThis, const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRoute(request), context);
}

void AppMeshClient::CreateRouteAsync(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientCreateRouteAsyncHelper( this, request, handler, context ); } );
}

CreateVirtualGatewayOutcome AppMeshClient::CreateVirtualGateway(const CreateVirtualGatewayRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVirtualGateway", "Required field: MeshName, is not set");
    return CreateVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualGateways");
  return CreateVirtualGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateVirtualGatewayOutcomeCallable AppMeshClient::CreateVirtualGatewayCallable(const CreateVirtualGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientCreateVirtualGatewayAsyncHelper(AppMeshClient const * const clientThis, const CreateVirtualGatewayRequest& request, const CreateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVirtualGateway(request), context);
}

void AppMeshClient::CreateVirtualGatewayAsync(const CreateVirtualGatewayRequest& request, const CreateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientCreateVirtualGatewayAsyncHelper( this, request, handler, context ); } );
}

CreateVirtualNodeOutcome AppMeshClient::CreateVirtualNode(const CreateVirtualNodeRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVirtualNode", "Required field: MeshName, is not set");
    return CreateVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualNodes");
  return CreateVirtualNodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateVirtualNodeOutcomeCallable AppMeshClient::CreateVirtualNodeCallable(const CreateVirtualNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientCreateVirtualNodeAsyncHelper(AppMeshClient const * const clientThis, const CreateVirtualNodeRequest& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVirtualNode(request), context);
}

void AppMeshClient::CreateVirtualNodeAsync(const CreateVirtualNodeRequest& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientCreateVirtualNodeAsyncHelper( this, request, handler, context ); } );
}

CreateVirtualRouterOutcome AppMeshClient::CreateVirtualRouter(const CreateVirtualRouterRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVirtualRouter", "Required field: MeshName, is not set");
    return CreateVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualRouters");
  return CreateVirtualRouterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateVirtualRouterOutcomeCallable AppMeshClient::CreateVirtualRouterCallable(const CreateVirtualRouterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualRouterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualRouter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientCreateVirtualRouterAsyncHelper(AppMeshClient const * const clientThis, const CreateVirtualRouterRequest& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVirtualRouter(request), context);
}

void AppMeshClient::CreateVirtualRouterAsync(const CreateVirtualRouterRequest& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientCreateVirtualRouterAsyncHelper( this, request, handler, context ); } );
}

CreateVirtualServiceOutcome AppMeshClient::CreateVirtualService(const CreateVirtualServiceRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVirtualService", "Required field: MeshName, is not set");
    return CreateVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualServices");
  return CreateVirtualServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateVirtualServiceOutcomeCallable AppMeshClient::CreateVirtualServiceCallable(const CreateVirtualServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientCreateVirtualServiceAsyncHelper(AppMeshClient const * const clientThis, const CreateVirtualServiceRequest& request, const CreateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVirtualService(request), context);
}

void AppMeshClient::CreateVirtualServiceAsync(const CreateVirtualServiceRequest& request, const CreateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientCreateVirtualServiceAsyncHelper( this, request, handler, context ); } );
}

DeleteGatewayRouteOutcome AppMeshClient::DeleteGatewayRoute(const DeleteGatewayRouteRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualGateway/");
  uri.AddPathSegment(request.GetVirtualGatewayName());
  uri.AddPathSegments("/gatewayRoutes/");
  uri.AddPathSegment(request.GetGatewayRouteName());
  return DeleteGatewayRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGatewayRouteOutcomeCallable AppMeshClient::DeleteGatewayRouteCallable(const DeleteGatewayRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGatewayRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDeleteGatewayRouteAsyncHelper(AppMeshClient const * const clientThis, const DeleteGatewayRouteRequest& request, const DeleteGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGatewayRoute(request), context);
}

void AppMeshClient::DeleteGatewayRouteAsync(const DeleteGatewayRouteRequest& request, const DeleteGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDeleteGatewayRouteAsyncHelper( this, request, handler, context ); } );
}

DeleteMeshOutcome AppMeshClient::DeleteMesh(const DeleteMeshRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMesh", "Required field: MeshName, is not set");
    return DeleteMeshOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  return DeleteMeshOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMeshOutcomeCallable AppMeshClient::DeleteMeshCallable(const DeleteMeshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMeshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMesh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDeleteMeshAsyncHelper(AppMeshClient const * const clientThis, const DeleteMeshRequest& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMesh(request), context);
}

void AppMeshClient::DeleteMeshAsync(const DeleteMeshRequest& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDeleteMeshAsyncHelper( this, request, handler, context ); } );
}

DeleteRouteOutcome AppMeshClient::DeleteRoute(const DeleteRouteRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualRouter/");
  uri.AddPathSegment(request.GetVirtualRouterName());
  uri.AddPathSegments("/routes/");
  uri.AddPathSegment(request.GetRouteName());
  return DeleteRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRouteOutcomeCallable AppMeshClient::DeleteRouteCallable(const DeleteRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDeleteRouteAsyncHelper(AppMeshClient const * const clientThis, const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRoute(request), context);
}

void AppMeshClient::DeleteRouteAsync(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDeleteRouteAsyncHelper( this, request, handler, context ); } );
}

DeleteVirtualGatewayOutcome AppMeshClient::DeleteVirtualGateway(const DeleteVirtualGatewayRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualGateways/");
  uri.AddPathSegment(request.GetVirtualGatewayName());
  return DeleteVirtualGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVirtualGatewayOutcomeCallable AppMeshClient::DeleteVirtualGatewayCallable(const DeleteVirtualGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDeleteVirtualGatewayAsyncHelper(AppMeshClient const * const clientThis, const DeleteVirtualGatewayRequest& request, const DeleteVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVirtualGateway(request), context);
}

void AppMeshClient::DeleteVirtualGatewayAsync(const DeleteVirtualGatewayRequest& request, const DeleteVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDeleteVirtualGatewayAsyncHelper( this, request, handler, context ); } );
}

DeleteVirtualNodeOutcome AppMeshClient::DeleteVirtualNode(const DeleteVirtualNodeRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualNodes/");
  uri.AddPathSegment(request.GetVirtualNodeName());
  return DeleteVirtualNodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVirtualNodeOutcomeCallable AppMeshClient::DeleteVirtualNodeCallable(const DeleteVirtualNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDeleteVirtualNodeAsyncHelper(AppMeshClient const * const clientThis, const DeleteVirtualNodeRequest& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVirtualNode(request), context);
}

void AppMeshClient::DeleteVirtualNodeAsync(const DeleteVirtualNodeRequest& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDeleteVirtualNodeAsyncHelper( this, request, handler, context ); } );
}

DeleteVirtualRouterOutcome AppMeshClient::DeleteVirtualRouter(const DeleteVirtualRouterRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualRouters/");
  uri.AddPathSegment(request.GetVirtualRouterName());
  return DeleteVirtualRouterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVirtualRouterOutcomeCallable AppMeshClient::DeleteVirtualRouterCallable(const DeleteVirtualRouterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualRouterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualRouter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDeleteVirtualRouterAsyncHelper(AppMeshClient const * const clientThis, const DeleteVirtualRouterRequest& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVirtualRouter(request), context);
}

void AppMeshClient::DeleteVirtualRouterAsync(const DeleteVirtualRouterRequest& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDeleteVirtualRouterAsyncHelper( this, request, handler, context ); } );
}

DeleteVirtualServiceOutcome AppMeshClient::DeleteVirtualService(const DeleteVirtualServiceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualServices/");
  uri.AddPathSegment(request.GetVirtualServiceName());
  return DeleteVirtualServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVirtualServiceOutcomeCallable AppMeshClient::DeleteVirtualServiceCallable(const DeleteVirtualServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDeleteVirtualServiceAsyncHelper(AppMeshClient const * const clientThis, const DeleteVirtualServiceRequest& request, const DeleteVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVirtualService(request), context);
}

void AppMeshClient::DeleteVirtualServiceAsync(const DeleteVirtualServiceRequest& request, const DeleteVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDeleteVirtualServiceAsyncHelper( this, request, handler, context ); } );
}

DescribeGatewayRouteOutcome AppMeshClient::DescribeGatewayRoute(const DescribeGatewayRouteRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualGateway/");
  uri.AddPathSegment(request.GetVirtualGatewayName());
  uri.AddPathSegments("/gatewayRoutes/");
  uri.AddPathSegment(request.GetGatewayRouteName());
  return DescribeGatewayRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGatewayRouteOutcomeCallable AppMeshClient::DescribeGatewayRouteCallable(const DescribeGatewayRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGatewayRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDescribeGatewayRouteAsyncHelper(AppMeshClient const * const clientThis, const DescribeGatewayRouteRequest& request, const DescribeGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGatewayRoute(request), context);
}

void AppMeshClient::DescribeGatewayRouteAsync(const DescribeGatewayRouteRequest& request, const DescribeGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDescribeGatewayRouteAsyncHelper( this, request, handler, context ); } );
}

DescribeMeshOutcome AppMeshClient::DescribeMesh(const DescribeMeshRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMesh", "Required field: MeshName, is not set");
    return DescribeMeshOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  return DescribeMeshOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeMeshOutcomeCallable AppMeshClient::DescribeMeshCallable(const DescribeMeshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMeshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMesh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDescribeMeshAsyncHelper(AppMeshClient const * const clientThis, const DescribeMeshRequest& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMesh(request), context);
}

void AppMeshClient::DescribeMeshAsync(const DescribeMeshRequest& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDescribeMeshAsyncHelper( this, request, handler, context ); } );
}

DescribeRouteOutcome AppMeshClient::DescribeRoute(const DescribeRouteRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualRouter/");
  uri.AddPathSegment(request.GetVirtualRouterName());
  uri.AddPathSegments("/routes/");
  uri.AddPathSegment(request.GetRouteName());
  return DescribeRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRouteOutcomeCallable AppMeshClient::DescribeRouteCallable(const DescribeRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDescribeRouteAsyncHelper(AppMeshClient const * const clientThis, const DescribeRouteRequest& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRoute(request), context);
}

void AppMeshClient::DescribeRouteAsync(const DescribeRouteRequest& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDescribeRouteAsyncHelper( this, request, handler, context ); } );
}

DescribeVirtualGatewayOutcome AppMeshClient::DescribeVirtualGateway(const DescribeVirtualGatewayRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualGateways/");
  uri.AddPathSegment(request.GetVirtualGatewayName());
  return DescribeVirtualGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVirtualGatewayOutcomeCallable AppMeshClient::DescribeVirtualGatewayCallable(const DescribeVirtualGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVirtualGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDescribeVirtualGatewayAsyncHelper(AppMeshClient const * const clientThis, const DescribeVirtualGatewayRequest& request, const DescribeVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeVirtualGateway(request), context);
}

void AppMeshClient::DescribeVirtualGatewayAsync(const DescribeVirtualGatewayRequest& request, const DescribeVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDescribeVirtualGatewayAsyncHelper( this, request, handler, context ); } );
}

DescribeVirtualNodeOutcome AppMeshClient::DescribeVirtualNode(const DescribeVirtualNodeRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualNodes/");
  uri.AddPathSegment(request.GetVirtualNodeName());
  return DescribeVirtualNodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVirtualNodeOutcomeCallable AppMeshClient::DescribeVirtualNodeCallable(const DescribeVirtualNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVirtualNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDescribeVirtualNodeAsyncHelper(AppMeshClient const * const clientThis, const DescribeVirtualNodeRequest& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeVirtualNode(request), context);
}

void AppMeshClient::DescribeVirtualNodeAsync(const DescribeVirtualNodeRequest& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDescribeVirtualNodeAsyncHelper( this, request, handler, context ); } );
}

DescribeVirtualRouterOutcome AppMeshClient::DescribeVirtualRouter(const DescribeVirtualRouterRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualRouters/");
  uri.AddPathSegment(request.GetVirtualRouterName());
  return DescribeVirtualRouterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVirtualRouterOutcomeCallable AppMeshClient::DescribeVirtualRouterCallable(const DescribeVirtualRouterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualRouterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVirtualRouter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDescribeVirtualRouterAsyncHelper(AppMeshClient const * const clientThis, const DescribeVirtualRouterRequest& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeVirtualRouter(request), context);
}

void AppMeshClient::DescribeVirtualRouterAsync(const DescribeVirtualRouterRequest& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDescribeVirtualRouterAsyncHelper( this, request, handler, context ); } );
}

DescribeVirtualServiceOutcome AppMeshClient::DescribeVirtualService(const DescribeVirtualServiceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualServices/");
  uri.AddPathSegment(request.GetVirtualServiceName());
  return DescribeVirtualServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVirtualServiceOutcomeCallable AppMeshClient::DescribeVirtualServiceCallable(const DescribeVirtualServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVirtualService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientDescribeVirtualServiceAsyncHelper(AppMeshClient const * const clientThis, const DescribeVirtualServiceRequest& request, const DescribeVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeVirtualService(request), context);
}

void AppMeshClient::DescribeVirtualServiceAsync(const DescribeVirtualServiceRequest& request, const DescribeVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientDescribeVirtualServiceAsyncHelper( this, request, handler, context ); } );
}

ListGatewayRoutesOutcome AppMeshClient::ListGatewayRoutes(const ListGatewayRoutesRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualGateway/");
  uri.AddPathSegment(request.GetVirtualGatewayName());
  uri.AddPathSegments("/gatewayRoutes");
  return ListGatewayRoutesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGatewayRoutesOutcomeCallable AppMeshClient::ListGatewayRoutesCallable(const ListGatewayRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGatewayRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGatewayRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientListGatewayRoutesAsyncHelper(AppMeshClient const * const clientThis, const ListGatewayRoutesRequest& request, const ListGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGatewayRoutes(request), context);
}

void AppMeshClient::ListGatewayRoutesAsync(const ListGatewayRoutesRequest& request, const ListGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientListGatewayRoutesAsyncHelper( this, request, handler, context ); } );
}

ListMeshesOutcome AppMeshClient::ListMeshes(const ListMeshesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes");
  return ListMeshesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMeshesOutcomeCallable AppMeshClient::ListMeshesCallable(const ListMeshesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMeshesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMeshes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientListMeshesAsyncHelper(AppMeshClient const * const clientThis, const ListMeshesRequest& request, const ListMeshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMeshes(request), context);
}

void AppMeshClient::ListMeshesAsync(const ListMeshesRequest& request, const ListMeshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientListMeshesAsyncHelper( this, request, handler, context ); } );
}

ListRoutesOutcome AppMeshClient::ListRoutes(const ListRoutesRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualRouter/");
  uri.AddPathSegment(request.GetVirtualRouterName());
  uri.AddPathSegments("/routes");
  return ListRoutesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRoutesOutcomeCallable AppMeshClient::ListRoutesCallable(const ListRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientListRoutesAsyncHelper(AppMeshClient const * const clientThis, const ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRoutes(request), context);
}

void AppMeshClient::ListRoutesAsync(const ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientListRoutesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome AppMeshClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppMeshClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientListTagsForResourceAsyncHelper(AppMeshClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void AppMeshClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListVirtualGatewaysOutcome AppMeshClient::ListVirtualGateways(const ListVirtualGatewaysRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVirtualGateways", "Required field: MeshName, is not set");
    return ListVirtualGatewaysOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualGateways");
  return ListVirtualGatewaysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVirtualGatewaysOutcomeCallable AppMeshClient::ListVirtualGatewaysCallable(const ListVirtualGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientListVirtualGatewaysAsyncHelper(AppMeshClient const * const clientThis, const ListVirtualGatewaysRequest& request, const ListVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVirtualGateways(request), context);
}

void AppMeshClient::ListVirtualGatewaysAsync(const ListVirtualGatewaysRequest& request, const ListVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientListVirtualGatewaysAsyncHelper( this, request, handler, context ); } );
}

ListVirtualNodesOutcome AppMeshClient::ListVirtualNodes(const ListVirtualNodesRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVirtualNodes", "Required field: MeshName, is not set");
    return ListVirtualNodesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualNodes");
  return ListVirtualNodesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVirtualNodesOutcomeCallable AppMeshClient::ListVirtualNodesCallable(const ListVirtualNodesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualNodesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualNodes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientListVirtualNodesAsyncHelper(AppMeshClient const * const clientThis, const ListVirtualNodesRequest& request, const ListVirtualNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVirtualNodes(request), context);
}

void AppMeshClient::ListVirtualNodesAsync(const ListVirtualNodesRequest& request, const ListVirtualNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientListVirtualNodesAsyncHelper( this, request, handler, context ); } );
}

ListVirtualRoutersOutcome AppMeshClient::ListVirtualRouters(const ListVirtualRoutersRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVirtualRouters", "Required field: MeshName, is not set");
    return ListVirtualRoutersOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualRouters");
  return ListVirtualRoutersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVirtualRoutersOutcomeCallable AppMeshClient::ListVirtualRoutersCallable(const ListVirtualRoutersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualRoutersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualRouters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientListVirtualRoutersAsyncHelper(AppMeshClient const * const clientThis, const ListVirtualRoutersRequest& request, const ListVirtualRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVirtualRouters(request), context);
}

void AppMeshClient::ListVirtualRoutersAsync(const ListVirtualRoutersRequest& request, const ListVirtualRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientListVirtualRoutersAsyncHelper( this, request, handler, context ); } );
}

ListVirtualServicesOutcome AppMeshClient::ListVirtualServices(const ListVirtualServicesRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVirtualServices", "Required field: MeshName, is not set");
    return ListVirtualServicesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualServices");
  return ListVirtualServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVirtualServicesOutcomeCallable AppMeshClient::ListVirtualServicesCallable(const ListVirtualServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientListVirtualServicesAsyncHelper(AppMeshClient const * const clientThis, const ListVirtualServicesRequest& request, const ListVirtualServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVirtualServices(request), context);
}

void AppMeshClient::ListVirtualServicesAsync(const ListVirtualServicesRequest& request, const ListVirtualServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientListVirtualServicesAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome AppMeshClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/tag");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppMeshClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientTagResourceAsyncHelper(AppMeshClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void AppMeshClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome AppMeshClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/untag");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppMeshClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientUntagResourceAsyncHelper(AppMeshClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void AppMeshClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateGatewayRouteOutcome AppMeshClient::UpdateGatewayRoute(const UpdateGatewayRouteRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualGateway/");
  uri.AddPathSegment(request.GetVirtualGatewayName());
  uri.AddPathSegments("/gatewayRoutes/");
  uri.AddPathSegment(request.GetGatewayRouteName());
  return UpdateGatewayRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewayRouteOutcomeCallable AppMeshClient::UpdateGatewayRouteCallable(const UpdateGatewayRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewayRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientUpdateGatewayRouteAsyncHelper(AppMeshClient const * const clientThis, const UpdateGatewayRouteRequest& request, const UpdateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGatewayRoute(request), context);
}

void AppMeshClient::UpdateGatewayRouteAsync(const UpdateGatewayRouteRequest& request, const UpdateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientUpdateGatewayRouteAsyncHelper( this, request, handler, context ); } );
}

UpdateMeshOutcome AppMeshClient::UpdateMesh(const UpdateMeshRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMesh", "Required field: MeshName, is not set");
    return UpdateMeshOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  return UpdateMeshOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateMeshOutcomeCallable AppMeshClient::UpdateMeshCallable(const UpdateMeshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMeshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMesh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientUpdateMeshAsyncHelper(AppMeshClient const * const clientThis, const UpdateMeshRequest& request, const UpdateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMesh(request), context);
}

void AppMeshClient::UpdateMeshAsync(const UpdateMeshRequest& request, const UpdateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientUpdateMeshAsyncHelper( this, request, handler, context ); } );
}

UpdateRouteOutcome AppMeshClient::UpdateRoute(const UpdateRouteRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualRouter/");
  uri.AddPathSegment(request.GetVirtualRouterName());
  uri.AddPathSegments("/routes/");
  uri.AddPathSegment(request.GetRouteName());
  return UpdateRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRouteOutcomeCallable AppMeshClient::UpdateRouteCallable(const UpdateRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientUpdateRouteAsyncHelper(AppMeshClient const * const clientThis, const UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRoute(request), context);
}

void AppMeshClient::UpdateRouteAsync(const UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientUpdateRouteAsyncHelper( this, request, handler, context ); } );
}

UpdateVirtualGatewayOutcome AppMeshClient::UpdateVirtualGateway(const UpdateVirtualGatewayRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualGateways/");
  uri.AddPathSegment(request.GetVirtualGatewayName());
  return UpdateVirtualGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVirtualGatewayOutcomeCallable AppMeshClient::UpdateVirtualGatewayCallable(const UpdateVirtualGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVirtualGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVirtualGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientUpdateVirtualGatewayAsyncHelper(AppMeshClient const * const clientThis, const UpdateVirtualGatewayRequest& request, const UpdateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVirtualGateway(request), context);
}

void AppMeshClient::UpdateVirtualGatewayAsync(const UpdateVirtualGatewayRequest& request, const UpdateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientUpdateVirtualGatewayAsyncHelper( this, request, handler, context ); } );
}

UpdateVirtualNodeOutcome AppMeshClient::UpdateVirtualNode(const UpdateVirtualNodeRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualNodes/");
  uri.AddPathSegment(request.GetVirtualNodeName());
  return UpdateVirtualNodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVirtualNodeOutcomeCallable AppMeshClient::UpdateVirtualNodeCallable(const UpdateVirtualNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVirtualNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVirtualNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientUpdateVirtualNodeAsyncHelper(AppMeshClient const * const clientThis, const UpdateVirtualNodeRequest& request, const UpdateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVirtualNode(request), context);
}

void AppMeshClient::UpdateVirtualNodeAsync(const UpdateVirtualNodeRequest& request, const UpdateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientUpdateVirtualNodeAsyncHelper( this, request, handler, context ); } );
}

UpdateVirtualRouterOutcome AppMeshClient::UpdateVirtualRouter(const UpdateVirtualRouterRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualRouters/");
  uri.AddPathSegment(request.GetVirtualRouterName());
  return UpdateVirtualRouterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVirtualRouterOutcomeCallable AppMeshClient::UpdateVirtualRouterCallable(const UpdateVirtualRouterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVirtualRouterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVirtualRouter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientUpdateVirtualRouterAsyncHelper(AppMeshClient const * const clientThis, const UpdateVirtualRouterRequest& request, const UpdateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVirtualRouter(request), context);
}

void AppMeshClient::UpdateVirtualRouterAsync(const UpdateVirtualRouterRequest& request, const UpdateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientUpdateVirtualRouterAsyncHelper( this, request, handler, context ); } );
}

UpdateVirtualServiceOutcome AppMeshClient::UpdateVirtualService(const UpdateVirtualServiceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v20190125/meshes/");
  uri.AddPathSegment(request.GetMeshName());
  uri.AddPathSegments("/virtualServices/");
  uri.AddPathSegment(request.GetVirtualServiceName());
  return UpdateVirtualServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVirtualServiceOutcomeCallable AppMeshClient::UpdateVirtualServiceCallable(const UpdateVirtualServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVirtualServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVirtualService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClientUpdateVirtualServiceAsyncHelper(AppMeshClient const * const clientThis, const UpdateVirtualServiceRequest& request, const UpdateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVirtualService(request), context);
}

void AppMeshClient::UpdateVirtualServiceAsync(const UpdateVirtualServiceRequest& request, const UpdateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppMeshClientUpdateVirtualServiceAsyncHelper( this, request, handler, context ); } );
}

