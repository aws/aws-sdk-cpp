/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/appmesh/AppMeshErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/appmesh/AppMeshEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AppMeshClient header */
#include <aws/appmesh/model/CreateGatewayRouteResult.h>
#include <aws/appmesh/model/CreateMeshResult.h>
#include <aws/appmesh/model/CreateRouteResult.h>
#include <aws/appmesh/model/CreateVirtualGatewayResult.h>
#include <aws/appmesh/model/CreateVirtualNodeResult.h>
#include <aws/appmesh/model/CreateVirtualRouterResult.h>
#include <aws/appmesh/model/CreateVirtualServiceResult.h>
#include <aws/appmesh/model/DeleteGatewayRouteResult.h>
#include <aws/appmesh/model/DeleteMeshResult.h>
#include <aws/appmesh/model/DeleteRouteResult.h>
#include <aws/appmesh/model/DeleteVirtualGatewayResult.h>
#include <aws/appmesh/model/DeleteVirtualNodeResult.h>
#include <aws/appmesh/model/DeleteVirtualRouterResult.h>
#include <aws/appmesh/model/DeleteVirtualServiceResult.h>
#include <aws/appmesh/model/DescribeGatewayRouteResult.h>
#include <aws/appmesh/model/DescribeMeshResult.h>
#include <aws/appmesh/model/DescribeRouteResult.h>
#include <aws/appmesh/model/DescribeVirtualGatewayResult.h>
#include <aws/appmesh/model/DescribeVirtualNodeResult.h>
#include <aws/appmesh/model/DescribeVirtualRouterResult.h>
#include <aws/appmesh/model/DescribeVirtualServiceResult.h>
#include <aws/appmesh/model/ListGatewayRoutesResult.h>
#include <aws/appmesh/model/ListMeshesResult.h>
#include <aws/appmesh/model/ListRoutesResult.h>
#include <aws/appmesh/model/ListTagsForResourceResult.h>
#include <aws/appmesh/model/ListVirtualGatewaysResult.h>
#include <aws/appmesh/model/ListVirtualNodesResult.h>
#include <aws/appmesh/model/ListVirtualRoutersResult.h>
#include <aws/appmesh/model/ListVirtualServicesResult.h>
#include <aws/appmesh/model/TagResourceResult.h>
#include <aws/appmesh/model/UntagResourceResult.h>
#include <aws/appmesh/model/UpdateGatewayRouteResult.h>
#include <aws/appmesh/model/UpdateMeshResult.h>
#include <aws/appmesh/model/UpdateRouteResult.h>
#include <aws/appmesh/model/UpdateVirtualGatewayResult.h>
#include <aws/appmesh/model/UpdateVirtualNodeResult.h>
#include <aws/appmesh/model/UpdateVirtualRouterResult.h>
#include <aws/appmesh/model/UpdateVirtualServiceResult.h>
/* End of service model headers required in AppMeshClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace AppMesh
  {
    using AppMeshClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AppMeshEndpointProviderBase = Aws::AppMesh::Endpoint::AppMeshEndpointProviderBase;
    using AppMeshEndpointProvider = Aws::AppMesh::Endpoint::AppMeshEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AppMeshClient header */
      class CreateGatewayRouteRequest;
      class CreateMeshRequest;
      class CreateRouteRequest;
      class CreateVirtualGatewayRequest;
      class CreateVirtualNodeRequest;
      class CreateVirtualRouterRequest;
      class CreateVirtualServiceRequest;
      class DeleteGatewayRouteRequest;
      class DeleteMeshRequest;
      class DeleteRouteRequest;
      class DeleteVirtualGatewayRequest;
      class DeleteVirtualNodeRequest;
      class DeleteVirtualRouterRequest;
      class DeleteVirtualServiceRequest;
      class DescribeGatewayRouteRequest;
      class DescribeMeshRequest;
      class DescribeRouteRequest;
      class DescribeVirtualGatewayRequest;
      class DescribeVirtualNodeRequest;
      class DescribeVirtualRouterRequest;
      class DescribeVirtualServiceRequest;
      class ListGatewayRoutesRequest;
      class ListMeshesRequest;
      class ListRoutesRequest;
      class ListTagsForResourceRequest;
      class ListVirtualGatewaysRequest;
      class ListVirtualNodesRequest;
      class ListVirtualRoutersRequest;
      class ListVirtualServicesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateGatewayRouteRequest;
      class UpdateMeshRequest;
      class UpdateRouteRequest;
      class UpdateVirtualGatewayRequest;
      class UpdateVirtualNodeRequest;
      class UpdateVirtualRouterRequest;
      class UpdateVirtualServiceRequest;
      /* End of service model forward declarations required in AppMeshClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateGatewayRouteResult, AppMeshError> CreateGatewayRouteOutcome;
      typedef Aws::Utils::Outcome<CreateMeshResult, AppMeshError> CreateMeshOutcome;
      typedef Aws::Utils::Outcome<CreateRouteResult, AppMeshError> CreateRouteOutcome;
      typedef Aws::Utils::Outcome<CreateVirtualGatewayResult, AppMeshError> CreateVirtualGatewayOutcome;
      typedef Aws::Utils::Outcome<CreateVirtualNodeResult, AppMeshError> CreateVirtualNodeOutcome;
      typedef Aws::Utils::Outcome<CreateVirtualRouterResult, AppMeshError> CreateVirtualRouterOutcome;
      typedef Aws::Utils::Outcome<CreateVirtualServiceResult, AppMeshError> CreateVirtualServiceOutcome;
      typedef Aws::Utils::Outcome<DeleteGatewayRouteResult, AppMeshError> DeleteGatewayRouteOutcome;
      typedef Aws::Utils::Outcome<DeleteMeshResult, AppMeshError> DeleteMeshOutcome;
      typedef Aws::Utils::Outcome<DeleteRouteResult, AppMeshError> DeleteRouteOutcome;
      typedef Aws::Utils::Outcome<DeleteVirtualGatewayResult, AppMeshError> DeleteVirtualGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteVirtualNodeResult, AppMeshError> DeleteVirtualNodeOutcome;
      typedef Aws::Utils::Outcome<DeleteVirtualRouterResult, AppMeshError> DeleteVirtualRouterOutcome;
      typedef Aws::Utils::Outcome<DeleteVirtualServiceResult, AppMeshError> DeleteVirtualServiceOutcome;
      typedef Aws::Utils::Outcome<DescribeGatewayRouteResult, AppMeshError> DescribeGatewayRouteOutcome;
      typedef Aws::Utils::Outcome<DescribeMeshResult, AppMeshError> DescribeMeshOutcome;
      typedef Aws::Utils::Outcome<DescribeRouteResult, AppMeshError> DescribeRouteOutcome;
      typedef Aws::Utils::Outcome<DescribeVirtualGatewayResult, AppMeshError> DescribeVirtualGatewayOutcome;
      typedef Aws::Utils::Outcome<DescribeVirtualNodeResult, AppMeshError> DescribeVirtualNodeOutcome;
      typedef Aws::Utils::Outcome<DescribeVirtualRouterResult, AppMeshError> DescribeVirtualRouterOutcome;
      typedef Aws::Utils::Outcome<DescribeVirtualServiceResult, AppMeshError> DescribeVirtualServiceOutcome;
      typedef Aws::Utils::Outcome<ListGatewayRoutesResult, AppMeshError> ListGatewayRoutesOutcome;
      typedef Aws::Utils::Outcome<ListMeshesResult, AppMeshError> ListMeshesOutcome;
      typedef Aws::Utils::Outcome<ListRoutesResult, AppMeshError> ListRoutesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppMeshError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListVirtualGatewaysResult, AppMeshError> ListVirtualGatewaysOutcome;
      typedef Aws::Utils::Outcome<ListVirtualNodesResult, AppMeshError> ListVirtualNodesOutcome;
      typedef Aws::Utils::Outcome<ListVirtualRoutersResult, AppMeshError> ListVirtualRoutersOutcome;
      typedef Aws::Utils::Outcome<ListVirtualServicesResult, AppMeshError> ListVirtualServicesOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AppMeshError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AppMeshError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateGatewayRouteResult, AppMeshError> UpdateGatewayRouteOutcome;
      typedef Aws::Utils::Outcome<UpdateMeshResult, AppMeshError> UpdateMeshOutcome;
      typedef Aws::Utils::Outcome<UpdateRouteResult, AppMeshError> UpdateRouteOutcome;
      typedef Aws::Utils::Outcome<UpdateVirtualGatewayResult, AppMeshError> UpdateVirtualGatewayOutcome;
      typedef Aws::Utils::Outcome<UpdateVirtualNodeResult, AppMeshError> UpdateVirtualNodeOutcome;
      typedef Aws::Utils::Outcome<UpdateVirtualRouterResult, AppMeshError> UpdateVirtualRouterOutcome;
      typedef Aws::Utils::Outcome<UpdateVirtualServiceResult, AppMeshError> UpdateVirtualServiceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateGatewayRouteOutcome> CreateGatewayRouteOutcomeCallable;
      typedef std::future<CreateMeshOutcome> CreateMeshOutcomeCallable;
      typedef std::future<CreateRouteOutcome> CreateRouteOutcomeCallable;
      typedef std::future<CreateVirtualGatewayOutcome> CreateVirtualGatewayOutcomeCallable;
      typedef std::future<CreateVirtualNodeOutcome> CreateVirtualNodeOutcomeCallable;
      typedef std::future<CreateVirtualRouterOutcome> CreateVirtualRouterOutcomeCallable;
      typedef std::future<CreateVirtualServiceOutcome> CreateVirtualServiceOutcomeCallable;
      typedef std::future<DeleteGatewayRouteOutcome> DeleteGatewayRouteOutcomeCallable;
      typedef std::future<DeleteMeshOutcome> DeleteMeshOutcomeCallable;
      typedef std::future<DeleteRouteOutcome> DeleteRouteOutcomeCallable;
      typedef std::future<DeleteVirtualGatewayOutcome> DeleteVirtualGatewayOutcomeCallable;
      typedef std::future<DeleteVirtualNodeOutcome> DeleteVirtualNodeOutcomeCallable;
      typedef std::future<DeleteVirtualRouterOutcome> DeleteVirtualRouterOutcomeCallable;
      typedef std::future<DeleteVirtualServiceOutcome> DeleteVirtualServiceOutcomeCallable;
      typedef std::future<DescribeGatewayRouteOutcome> DescribeGatewayRouteOutcomeCallable;
      typedef std::future<DescribeMeshOutcome> DescribeMeshOutcomeCallable;
      typedef std::future<DescribeRouteOutcome> DescribeRouteOutcomeCallable;
      typedef std::future<DescribeVirtualGatewayOutcome> DescribeVirtualGatewayOutcomeCallable;
      typedef std::future<DescribeVirtualNodeOutcome> DescribeVirtualNodeOutcomeCallable;
      typedef std::future<DescribeVirtualRouterOutcome> DescribeVirtualRouterOutcomeCallable;
      typedef std::future<DescribeVirtualServiceOutcome> DescribeVirtualServiceOutcomeCallable;
      typedef std::future<ListGatewayRoutesOutcome> ListGatewayRoutesOutcomeCallable;
      typedef std::future<ListMeshesOutcome> ListMeshesOutcomeCallable;
      typedef std::future<ListRoutesOutcome> ListRoutesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListVirtualGatewaysOutcome> ListVirtualGatewaysOutcomeCallable;
      typedef std::future<ListVirtualNodesOutcome> ListVirtualNodesOutcomeCallable;
      typedef std::future<ListVirtualRoutersOutcome> ListVirtualRoutersOutcomeCallable;
      typedef std::future<ListVirtualServicesOutcome> ListVirtualServicesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateGatewayRouteOutcome> UpdateGatewayRouteOutcomeCallable;
      typedef std::future<UpdateMeshOutcome> UpdateMeshOutcomeCallable;
      typedef std::future<UpdateRouteOutcome> UpdateRouteOutcomeCallable;
      typedef std::future<UpdateVirtualGatewayOutcome> UpdateVirtualGatewayOutcomeCallable;
      typedef std::future<UpdateVirtualNodeOutcome> UpdateVirtualNodeOutcomeCallable;
      typedef std::future<UpdateVirtualRouterOutcome> UpdateVirtualRouterOutcomeCallable;
      typedef std::future<UpdateVirtualServiceOutcome> UpdateVirtualServiceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AppMeshClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AppMeshClient*, const Model::CreateGatewayRouteRequest&, const Model::CreateGatewayRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGatewayRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateMeshRequest&, const Model::CreateMeshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMeshResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateRouteRequest&, const Model::CreateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateVirtualGatewayRequest&, const Model::CreateVirtualGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualGatewayResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateVirtualNodeRequest&, const Model::CreateVirtualNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualNodeResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateVirtualRouterRequest&, const Model::CreateVirtualRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualRouterResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateVirtualServiceRequest&, const Model::CreateVirtualServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualServiceResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteGatewayRouteRequest&, const Model::DeleteGatewayRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGatewayRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteMeshRequest&, const Model::DeleteMeshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMeshResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteRouteRequest&, const Model::DeleteRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteVirtualGatewayRequest&, const Model::DeleteVirtualGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualGatewayResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteVirtualNodeRequest&, const Model::DeleteVirtualNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualNodeResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteVirtualRouterRequest&, const Model::DeleteVirtualRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualRouterResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteVirtualServiceRequest&, const Model::DeleteVirtualServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualServiceResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeGatewayRouteRequest&, const Model::DescribeGatewayRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGatewayRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeMeshRequest&, const Model::DescribeMeshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMeshResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeRouteRequest&, const Model::DescribeRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeVirtualGatewayRequest&, const Model::DescribeVirtualGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualGatewayResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeVirtualNodeRequest&, const Model::DescribeVirtualNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualNodeResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeVirtualRouterRequest&, const Model::DescribeVirtualRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualRouterResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeVirtualServiceRequest&, const Model::DescribeVirtualServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualServiceResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListGatewayRoutesRequest&, const Model::ListGatewayRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGatewayRoutesResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListMeshesRequest&, const Model::ListMeshesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMeshesResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListRoutesRequest&, const Model::ListRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutesResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListVirtualGatewaysRequest&, const Model::ListVirtualGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualGatewaysResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListVirtualNodesRequest&, const Model::ListVirtualNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualNodesResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListVirtualRoutersRequest&, const Model::ListVirtualRoutersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualRoutersResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListVirtualServicesRequest&, const Model::ListVirtualServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualServicesResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateGatewayRouteRequest&, const Model::UpdateGatewayRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewayRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateMeshRequest&, const Model::UpdateMeshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMeshResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateRouteRequest&, const Model::UpdateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateVirtualGatewayRequest&, const Model::UpdateVirtualGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVirtualGatewayResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateVirtualNodeRequest&, const Model::UpdateVirtualNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVirtualNodeResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateVirtualRouterRequest&, const Model::UpdateVirtualRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVirtualRouterResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateVirtualServiceRequest&, const Model::UpdateVirtualServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVirtualServiceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AppMesh
} // namespace Aws
