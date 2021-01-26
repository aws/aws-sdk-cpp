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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppMeshClient::AppMeshClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppMeshClient::AppMeshClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppMeshClient::~AppMeshClient()
{
}

void AppMeshClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("App Mesh");
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualGateway/";
  ss << request.GetVirtualGatewayName();
  ss << "/gatewayRoutes";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateGatewayRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateGatewayRouteOutcomeCallable AppMeshClient::CreateGatewayRouteCallable(const CreateGatewayRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGatewayRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::CreateGatewayRouteAsync(const CreateGatewayRouteRequest& request, const CreateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGatewayRouteAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::CreateGatewayRouteAsyncHelper(const CreateGatewayRouteRequest& request, const CreateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGatewayRoute(request), context);
}

CreateMeshOutcome AppMeshClient::CreateMesh(const CreateMeshRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateMeshOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateMeshOutcomeCallable AppMeshClient::CreateMeshCallable(const CreateMeshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMeshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMesh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::CreateMeshAsync(const CreateMeshRequest& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMeshAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::CreateMeshAsyncHelper(const CreateMeshRequest& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMesh(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouter/";
  ss << request.GetVirtualRouterName();
  ss << "/routes";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateRouteOutcomeCallable AppMeshClient::CreateRouteCallable(const CreateRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::CreateRouteAsync(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRouteAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::CreateRouteAsyncHelper(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRoute(request), context);
}

CreateVirtualGatewayOutcome AppMeshClient::CreateVirtualGateway(const CreateVirtualGatewayRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVirtualGateway", "Required field: MeshName, is not set");
    return CreateVirtualGatewayOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualGateways";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateVirtualGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateVirtualGatewayOutcomeCallable AppMeshClient::CreateVirtualGatewayCallable(const CreateVirtualGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::CreateVirtualGatewayAsync(const CreateVirtualGatewayRequest& request, const CreateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVirtualGatewayAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::CreateVirtualGatewayAsyncHelper(const CreateVirtualGatewayRequest& request, const CreateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVirtualGateway(request), context);
}

CreateVirtualNodeOutcome AppMeshClient::CreateVirtualNode(const CreateVirtualNodeRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVirtualNode", "Required field: MeshName, is not set");
    return CreateVirtualNodeOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualNodes";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateVirtualNodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateVirtualNodeOutcomeCallable AppMeshClient::CreateVirtualNodeCallable(const CreateVirtualNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::CreateVirtualNodeAsync(const CreateVirtualNodeRequest& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVirtualNodeAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::CreateVirtualNodeAsyncHelper(const CreateVirtualNodeRequest& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVirtualNode(request), context);
}

CreateVirtualRouterOutcome AppMeshClient::CreateVirtualRouter(const CreateVirtualRouterRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVirtualRouter", "Required field: MeshName, is not set");
    return CreateVirtualRouterOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouters";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateVirtualRouterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateVirtualRouterOutcomeCallable AppMeshClient::CreateVirtualRouterCallable(const CreateVirtualRouterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualRouterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualRouter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::CreateVirtualRouterAsync(const CreateVirtualRouterRequest& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVirtualRouterAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::CreateVirtualRouterAsyncHelper(const CreateVirtualRouterRequest& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVirtualRouter(request), context);
}

CreateVirtualServiceOutcome AppMeshClient::CreateVirtualService(const CreateVirtualServiceRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVirtualService", "Required field: MeshName, is not set");
    return CreateVirtualServiceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualServices";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateVirtualServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateVirtualServiceOutcomeCallable AppMeshClient::CreateVirtualServiceCallable(const CreateVirtualServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::CreateVirtualServiceAsync(const CreateVirtualServiceRequest& request, const CreateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVirtualServiceAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::CreateVirtualServiceAsyncHelper(const CreateVirtualServiceRequest& request, const CreateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVirtualService(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualGateway/";
  ss << request.GetVirtualGatewayName();
  ss << "/gatewayRoutes/";
  ss << request.GetGatewayRouteName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteGatewayRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGatewayRouteOutcomeCallable AppMeshClient::DeleteGatewayRouteCallable(const DeleteGatewayRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGatewayRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DeleteGatewayRouteAsync(const DeleteGatewayRouteRequest& request, const DeleteGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGatewayRouteAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DeleteGatewayRouteAsyncHelper(const DeleteGatewayRouteRequest& request, const DeleteGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGatewayRoute(request), context);
}

DeleteMeshOutcome AppMeshClient::DeleteMesh(const DeleteMeshRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMesh", "Required field: MeshName, is not set");
    return DeleteMeshOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteMeshOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMeshOutcomeCallable AppMeshClient::DeleteMeshCallable(const DeleteMeshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMeshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMesh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DeleteMeshAsync(const DeleteMeshRequest& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMeshAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DeleteMeshAsyncHelper(const DeleteMeshRequest& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMesh(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouter/";
  ss << request.GetVirtualRouterName();
  ss << "/routes/";
  ss << request.GetRouteName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRouteOutcomeCallable AppMeshClient::DeleteRouteCallable(const DeleteRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DeleteRouteAsync(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRouteAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DeleteRouteAsyncHelper(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoute(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualGateways/";
  ss << request.GetVirtualGatewayName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVirtualGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVirtualGatewayOutcomeCallable AppMeshClient::DeleteVirtualGatewayCallable(const DeleteVirtualGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DeleteVirtualGatewayAsync(const DeleteVirtualGatewayRequest& request, const DeleteVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVirtualGatewayAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DeleteVirtualGatewayAsyncHelper(const DeleteVirtualGatewayRequest& request, const DeleteVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVirtualGateway(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualNodes/";
  ss << request.GetVirtualNodeName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVirtualNodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVirtualNodeOutcomeCallable AppMeshClient::DeleteVirtualNodeCallable(const DeleteVirtualNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DeleteVirtualNodeAsync(const DeleteVirtualNodeRequest& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVirtualNodeAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DeleteVirtualNodeAsyncHelper(const DeleteVirtualNodeRequest& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVirtualNode(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouters/";
  ss << request.GetVirtualRouterName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVirtualRouterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVirtualRouterOutcomeCallable AppMeshClient::DeleteVirtualRouterCallable(const DeleteVirtualRouterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualRouterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualRouter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DeleteVirtualRouterAsync(const DeleteVirtualRouterRequest& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVirtualRouterAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DeleteVirtualRouterAsyncHelper(const DeleteVirtualRouterRequest& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVirtualRouter(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualServices/";
  ss << request.GetVirtualServiceName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVirtualServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVirtualServiceOutcomeCallable AppMeshClient::DeleteVirtualServiceCallable(const DeleteVirtualServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DeleteVirtualServiceAsync(const DeleteVirtualServiceRequest& request, const DeleteVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVirtualServiceAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DeleteVirtualServiceAsyncHelper(const DeleteVirtualServiceRequest& request, const DeleteVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVirtualService(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualGateway/";
  ss << request.GetVirtualGatewayName();
  ss << "/gatewayRoutes/";
  ss << request.GetGatewayRouteName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeGatewayRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGatewayRouteOutcomeCallable AppMeshClient::DescribeGatewayRouteCallable(const DescribeGatewayRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGatewayRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DescribeGatewayRouteAsync(const DescribeGatewayRouteRequest& request, const DescribeGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGatewayRouteAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DescribeGatewayRouteAsyncHelper(const DescribeGatewayRouteRequest& request, const DescribeGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGatewayRoute(request), context);
}

DescribeMeshOutcome AppMeshClient::DescribeMesh(const DescribeMeshRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMesh", "Required field: MeshName, is not set");
    return DescribeMeshOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeMeshOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeMeshOutcomeCallable AppMeshClient::DescribeMeshCallable(const DescribeMeshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMeshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMesh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DescribeMeshAsync(const DescribeMeshRequest& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMeshAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DescribeMeshAsyncHelper(const DescribeMeshRequest& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMesh(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouter/";
  ss << request.GetVirtualRouterName();
  ss << "/routes/";
  ss << request.GetRouteName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRouteOutcomeCallable AppMeshClient::DescribeRouteCallable(const DescribeRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DescribeRouteAsync(const DescribeRouteRequest& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRouteAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DescribeRouteAsyncHelper(const DescribeRouteRequest& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRoute(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualGateways/";
  ss << request.GetVirtualGatewayName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeVirtualGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVirtualGatewayOutcomeCallable AppMeshClient::DescribeVirtualGatewayCallable(const DescribeVirtualGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVirtualGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DescribeVirtualGatewayAsync(const DescribeVirtualGatewayRequest& request, const DescribeVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVirtualGatewayAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DescribeVirtualGatewayAsyncHelper(const DescribeVirtualGatewayRequest& request, const DescribeVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVirtualGateway(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualNodes/";
  ss << request.GetVirtualNodeName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeVirtualNodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVirtualNodeOutcomeCallable AppMeshClient::DescribeVirtualNodeCallable(const DescribeVirtualNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVirtualNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DescribeVirtualNodeAsync(const DescribeVirtualNodeRequest& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVirtualNodeAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DescribeVirtualNodeAsyncHelper(const DescribeVirtualNodeRequest& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVirtualNode(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouters/";
  ss << request.GetVirtualRouterName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeVirtualRouterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVirtualRouterOutcomeCallable AppMeshClient::DescribeVirtualRouterCallable(const DescribeVirtualRouterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualRouterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVirtualRouter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DescribeVirtualRouterAsync(const DescribeVirtualRouterRequest& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVirtualRouterAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DescribeVirtualRouterAsyncHelper(const DescribeVirtualRouterRequest& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVirtualRouter(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualServices/";
  ss << request.GetVirtualServiceName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeVirtualServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVirtualServiceOutcomeCallable AppMeshClient::DescribeVirtualServiceCallable(const DescribeVirtualServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVirtualService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DescribeVirtualServiceAsync(const DescribeVirtualServiceRequest& request, const DescribeVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVirtualServiceAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DescribeVirtualServiceAsyncHelper(const DescribeVirtualServiceRequest& request, const DescribeVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVirtualService(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualGateway/";
  ss << request.GetVirtualGatewayName();
  ss << "/gatewayRoutes";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListGatewayRoutesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGatewayRoutesOutcomeCallable AppMeshClient::ListGatewayRoutesCallable(const ListGatewayRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGatewayRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGatewayRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::ListGatewayRoutesAsync(const ListGatewayRoutesRequest& request, const ListGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGatewayRoutesAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::ListGatewayRoutesAsyncHelper(const ListGatewayRoutesRequest& request, const ListGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGatewayRoutes(request), context);
}

ListMeshesOutcome AppMeshClient::ListMeshes(const ListMeshesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListMeshesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMeshesOutcomeCallable AppMeshClient::ListMeshesCallable(const ListMeshesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMeshesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMeshes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::ListMeshesAsync(const ListMeshesRequest& request, const ListMeshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMeshesAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::ListMeshesAsyncHelper(const ListMeshesRequest& request, const ListMeshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMeshes(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouter/";
  ss << request.GetVirtualRouterName();
  ss << "/routes";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListRoutesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRoutesOutcomeCallable AppMeshClient::ListRoutesCallable(const ListRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::ListRoutesAsync(const ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRoutesAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::ListRoutesAsyncHelper(const ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRoutes(request), context);
}

ListTagsForResourceOutcome AppMeshClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppMeshClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListVirtualGatewaysOutcome AppMeshClient::ListVirtualGateways(const ListVirtualGatewaysRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVirtualGateways", "Required field: MeshName, is not set");
    return ListVirtualGatewaysOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualGateways";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListVirtualGatewaysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVirtualGatewaysOutcomeCallable AppMeshClient::ListVirtualGatewaysCallable(const ListVirtualGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::ListVirtualGatewaysAsync(const ListVirtualGatewaysRequest& request, const ListVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVirtualGatewaysAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::ListVirtualGatewaysAsyncHelper(const ListVirtualGatewaysRequest& request, const ListVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVirtualGateways(request), context);
}

ListVirtualNodesOutcome AppMeshClient::ListVirtualNodes(const ListVirtualNodesRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVirtualNodes", "Required field: MeshName, is not set");
    return ListVirtualNodesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualNodes";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListVirtualNodesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVirtualNodesOutcomeCallable AppMeshClient::ListVirtualNodesCallable(const ListVirtualNodesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualNodesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualNodes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::ListVirtualNodesAsync(const ListVirtualNodesRequest& request, const ListVirtualNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVirtualNodesAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::ListVirtualNodesAsyncHelper(const ListVirtualNodesRequest& request, const ListVirtualNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVirtualNodes(request), context);
}

ListVirtualRoutersOutcome AppMeshClient::ListVirtualRouters(const ListVirtualRoutersRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVirtualRouters", "Required field: MeshName, is not set");
    return ListVirtualRoutersOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouters";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListVirtualRoutersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVirtualRoutersOutcomeCallable AppMeshClient::ListVirtualRoutersCallable(const ListVirtualRoutersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualRoutersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualRouters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::ListVirtualRoutersAsync(const ListVirtualRoutersRequest& request, const ListVirtualRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVirtualRoutersAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::ListVirtualRoutersAsyncHelper(const ListVirtualRoutersRequest& request, const ListVirtualRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVirtualRouters(request), context);
}

ListVirtualServicesOutcome AppMeshClient::ListVirtualServices(const ListVirtualServicesRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVirtualServices", "Required field: MeshName, is not set");
    return ListVirtualServicesOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualServices";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListVirtualServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVirtualServicesOutcomeCallable AppMeshClient::ListVirtualServicesCallable(const ListVirtualServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::ListVirtualServicesAsync(const ListVirtualServicesRequest& request, const ListVirtualServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVirtualServicesAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::ListVirtualServicesAsyncHelper(const ListVirtualServicesRequest& request, const ListVirtualServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVirtualServices(request), context);
}

TagResourceOutcome AppMeshClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/tag";
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppMeshClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome AppMeshClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/untag";
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppMeshClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualGateway/";
  ss << request.GetVirtualGatewayName();
  ss << "/gatewayRoutes/";
  ss << request.GetGatewayRouteName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateGatewayRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewayRouteOutcomeCallable AppMeshClient::UpdateGatewayRouteCallable(const UpdateGatewayRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewayRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::UpdateGatewayRouteAsync(const UpdateGatewayRouteRequest& request, const UpdateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGatewayRouteAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::UpdateGatewayRouteAsyncHelper(const UpdateGatewayRouteRequest& request, const UpdateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGatewayRoute(request), context);
}

UpdateMeshOutcome AppMeshClient::UpdateMesh(const UpdateMeshRequest& request) const
{
  if (!request.MeshNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMesh", "Required field: MeshName, is not set");
    return UpdateMeshOutcome(Aws::Client::AWSError<AppMeshErrors>(AppMeshErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeshName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateMeshOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateMeshOutcomeCallable AppMeshClient::UpdateMeshCallable(const UpdateMeshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMeshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMesh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::UpdateMeshAsync(const UpdateMeshRequest& request, const UpdateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMeshAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::UpdateMeshAsyncHelper(const UpdateMeshRequest& request, const UpdateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMesh(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouter/";
  ss << request.GetVirtualRouterName();
  ss << "/routes/";
  ss << request.GetRouteName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRouteOutcomeCallable AppMeshClient::UpdateRouteCallable(const UpdateRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::UpdateRouteAsync(const UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRouteAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::UpdateRouteAsyncHelper(const UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoute(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualGateways/";
  ss << request.GetVirtualGatewayName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateVirtualGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVirtualGatewayOutcomeCallable AppMeshClient::UpdateVirtualGatewayCallable(const UpdateVirtualGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVirtualGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVirtualGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::UpdateVirtualGatewayAsync(const UpdateVirtualGatewayRequest& request, const UpdateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVirtualGatewayAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::UpdateVirtualGatewayAsyncHelper(const UpdateVirtualGatewayRequest& request, const UpdateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVirtualGateway(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualNodes/";
  ss << request.GetVirtualNodeName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateVirtualNodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVirtualNodeOutcomeCallable AppMeshClient::UpdateVirtualNodeCallable(const UpdateVirtualNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVirtualNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVirtualNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::UpdateVirtualNodeAsync(const UpdateVirtualNodeRequest& request, const UpdateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVirtualNodeAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::UpdateVirtualNodeAsyncHelper(const UpdateVirtualNodeRequest& request, const UpdateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVirtualNode(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouters/";
  ss << request.GetVirtualRouterName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateVirtualRouterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVirtualRouterOutcomeCallable AppMeshClient::UpdateVirtualRouterCallable(const UpdateVirtualRouterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVirtualRouterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVirtualRouter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::UpdateVirtualRouterAsync(const UpdateVirtualRouterRequest& request, const UpdateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVirtualRouterAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::UpdateVirtualRouterAsyncHelper(const UpdateVirtualRouterRequest& request, const UpdateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVirtualRouter(request), context);
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
  Aws::StringStream ss;
  ss << "/v20190125/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualServices/";
  ss << request.GetVirtualServiceName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateVirtualServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVirtualServiceOutcomeCallable AppMeshClient::UpdateVirtualServiceCallable(const UpdateVirtualServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVirtualServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVirtualService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::UpdateVirtualServiceAsync(const UpdateVirtualServiceRequest& request, const UpdateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVirtualServiceAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::UpdateVirtualServiceAsyncHelper(const UpdateVirtualServiceRequest& request, const UpdateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVirtualService(request), context);
}

