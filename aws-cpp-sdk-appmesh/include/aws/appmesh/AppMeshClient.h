/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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
} // namespace Model

  class AppMeshClient;

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

  /**
   * <p>AWS App Mesh is a service mesh based on the Envoy proxy that makes it easy to
   * monitor and control microservices. App Mesh standardizes how your microservices
   * communicate, giving you end-to-end visibility and helping to ensure high
   * availability for your applications.</p> <p>App Mesh gives you consistent
   * visibility and network traffic controls for every microservice in an
   * application. You can use App Mesh with AWS Fargate, Amazon ECS, Amazon EKS,
   * Kubernetes on AWS, and Amazon EC2.</p>  <p>App Mesh supports microservice
   * applications that use service discovery naming for their components. For more
   * information about service discovery on Amazon ECS, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
   * Discovery</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.
   * Kubernetes <code>kube-dns</code> and <code>coredns</code> are supported. For
   * more information, see <a
   * href="https://kubernetes.io/docs/concepts/services-networking/dns-pod-service/">DNS
   * for Services and Pods</a> in the Kubernetes documentation.</p> 
   */
  class AWS_APPMESH_API AppMeshClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppMeshClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppMeshClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppMeshClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AppMeshClient();


        /**
         * <p>Creates a gateway route.</p> <p>A gateway route is attached to a virtual
         * gateway and routes traffic to an existing virtual service. If a route matches a
         * request, it can distribute traffic to a target virtual service.</p> <p>For more
         * information about gateway routes, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/gateway-routes.html">Gateway
         * routes</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGatewayRouteOutcome CreateGatewayRoute(const Model::CreateGatewayRouteRequest& request) const;

        /**
         * <p>Creates a gateway route.</p> <p>A gateway route is attached to a virtual
         * gateway and routes traffic to an existing virtual service. If a route matches a
         * request, it can distribute traffic to a target virtual service.</p> <p>For more
         * information about gateway routes, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/gateway-routes.html">Gateway
         * routes</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateGatewayRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGatewayRouteOutcomeCallable CreateGatewayRouteCallable(const Model::CreateGatewayRouteRequest& request) const;

        /**
         * <p>Creates a gateway route.</p> <p>A gateway route is attached to a virtual
         * gateway and routes traffic to an existing virtual service. If a route matches a
         * request, it can distribute traffic to a target virtual service.</p> <p>For more
         * information about gateway routes, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/gateway-routes.html">Gateway
         * routes</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateGatewayRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGatewayRouteAsync(const Model::CreateGatewayRouteRequest& request, const CreateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a service mesh.</p> <p> A service mesh is a logical boundary for
         * network traffic between services that are represented by resources within the
         * mesh. After you create your service mesh, you can create virtual services,
         * virtual nodes, virtual routers, and routes to distribute traffic between the
         * applications in your mesh.</p> <p>For more information about service meshes, see
         * <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/meshes.html">Service
         * meshes</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeshOutcome CreateMesh(const Model::CreateMeshRequest& request) const;

        /**
         * <p>Creates a service mesh.</p> <p> A service mesh is a logical boundary for
         * network traffic between services that are represented by resources within the
         * mesh. After you create your service mesh, you can create virtual services,
         * virtual nodes, virtual routers, and routes to distribute traffic between the
         * applications in your mesh.</p> <p>For more information about service meshes, see
         * <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/meshes.html">Service
         * meshes</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateMesh">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMeshOutcomeCallable CreateMeshCallable(const Model::CreateMeshRequest& request) const;

        /**
         * <p>Creates a service mesh.</p> <p> A service mesh is a logical boundary for
         * network traffic between services that are represented by resources within the
         * mesh. After you create your service mesh, you can create virtual services,
         * virtual nodes, virtual routers, and routes to distribute traffic between the
         * applications in your mesh.</p> <p>For more information about service meshes, see
         * <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/meshes.html">Service
         * meshes</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateMesh">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMeshAsync(const Model::CreateMeshRequest& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a route that is associated with a virtual router.</p> <p> You can
         * route several different protocols and define a retry policy for a route. Traffic
         * can be routed to one or more virtual nodes.</p> <p>For more information about
         * routes, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/routes.html">Routes</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteOutcome CreateRoute(const Model::CreateRouteRequest& request) const;

        /**
         * <p>Creates a route that is associated with a virtual router.</p> <p> You can
         * route several different protocols and define a retry policy for a route. Traffic
         * can be routed to one or more virtual nodes.</p> <p>For more information about
         * routes, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/routes.html">Routes</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteOutcomeCallable CreateRouteCallable(const Model::CreateRouteRequest& request) const;

        /**
         * <p>Creates a route that is associated with a virtual router.</p> <p> You can
         * route several different protocols and define a retry policy for a route. Traffic
         * can be routed to one or more virtual nodes.</p> <p>For more information about
         * routes, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/routes.html">Routes</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRouteAsync(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a virtual gateway.</p> <p>A virtual gateway allows resources outside
         * your mesh to communicate to resources that are inside your mesh. The virtual
         * gateway represents an Envoy proxy running in an Amazon ECS task, in a Kubernetes
         * service, or on an Amazon EC2 instance. Unlike a virtual node, which represents
         * an Envoy running with an application, a virtual gateway represents Envoy
         * deployed by itself.</p> <p>For more information about virtual gateways, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_gateways.html">Virtual
         * gateways</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualGatewayOutcome CreateVirtualGateway(const Model::CreateVirtualGatewayRequest& request) const;

        /**
         * <p>Creates a virtual gateway.</p> <p>A virtual gateway allows resources outside
         * your mesh to communicate to resources that are inside your mesh. The virtual
         * gateway represents an Envoy proxy running in an Amazon ECS task, in a Kubernetes
         * service, or on an Amazon EC2 instance. Unlike a virtual node, which represents
         * an Envoy running with an application, a virtual gateway represents Envoy
         * deployed by itself.</p> <p>For more information about virtual gateways, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_gateways.html">Virtual
         * gateways</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualGatewayOutcomeCallable CreateVirtualGatewayCallable(const Model::CreateVirtualGatewayRequest& request) const;

        /**
         * <p>Creates a virtual gateway.</p> <p>A virtual gateway allows resources outside
         * your mesh to communicate to resources that are inside your mesh. The virtual
         * gateway represents an Envoy proxy running in an Amazon ECS task, in a Kubernetes
         * service, or on an Amazon EC2 instance. Unlike a virtual node, which represents
         * an Envoy running with an application, a virtual gateway represents Envoy
         * deployed by itself.</p> <p>For more information about virtual gateways, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_gateways.html">Virtual
         * gateways</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualGatewayAsync(const Model::CreateVirtualGatewayRequest& request, const CreateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a virtual node within a service mesh.</p> <p> A virtual node acts as
         * a logical pointer to a particular task group, such as an Amazon ECS service or a
         * Kubernetes deployment. When you create a virtual node, you can specify the
         * service discovery information for your task group, and whether the proxy running
         * in a task group will communicate with other proxies using Transport Layer
         * Security (TLS).</p> <p>You define a <code>listener</code> for any inbound
         * traffic that your virtual node expects. Any virtual service that your virtual
         * node expects to communicate to is specified as a <code>backend</code>.</p>
         * <p>The response metadata for your new virtual node contains the <code>arn</code>
         * that is associated with the virtual node. Set this value to the full ARN; for
         * example,
         * <code>arn:aws:appmesh:us-west-2:123456789012:myMesh/default/virtualNode/myApp</code>)
         * as the <code>APPMESH_RESOURCE_ARN</code> environment variable for your task
         * group's Envoy proxy container in your task definition or pod spec. This is then
         * mapped to the <code>node.id</code> and <code>node.cluster</code> Envoy
         * parameters.</p>  <p>By default, App Mesh uses the name of the resource you
         * specified in <code>APPMESH_RESOURCE_ARN</code> when Envoy is referring to itself
         * in metrics and traces. You can override this behavior by setting the
         * <code>APPMESH_RESOURCE_CLUSTER</code> environment variable with your own
         * name.</p> <p>AWS Cloud Map is not available in the eu-south-1 Region.</p>
         *  <p>For more information about virtual nodes, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_nodes.html">Virtual
         * nodes</a>. You must be using <code>1.15.0</code> or later of the Envoy image
         * when setting these variables. For more information about App Mesh Envoy
         * variables, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/envoy.html">Envoy
         * image</a> in the AWS App Mesh User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualNodeOutcome CreateVirtualNode(const Model::CreateVirtualNodeRequest& request) const;

        /**
         * <p>Creates a virtual node within a service mesh.</p> <p> A virtual node acts as
         * a logical pointer to a particular task group, such as an Amazon ECS service or a
         * Kubernetes deployment. When you create a virtual node, you can specify the
         * service discovery information for your task group, and whether the proxy running
         * in a task group will communicate with other proxies using Transport Layer
         * Security (TLS).</p> <p>You define a <code>listener</code> for any inbound
         * traffic that your virtual node expects. Any virtual service that your virtual
         * node expects to communicate to is specified as a <code>backend</code>.</p>
         * <p>The response metadata for your new virtual node contains the <code>arn</code>
         * that is associated with the virtual node. Set this value to the full ARN; for
         * example,
         * <code>arn:aws:appmesh:us-west-2:123456789012:myMesh/default/virtualNode/myApp</code>)
         * as the <code>APPMESH_RESOURCE_ARN</code> environment variable for your task
         * group's Envoy proxy container in your task definition or pod spec. This is then
         * mapped to the <code>node.id</code> and <code>node.cluster</code> Envoy
         * parameters.</p>  <p>By default, App Mesh uses the name of the resource you
         * specified in <code>APPMESH_RESOURCE_ARN</code> when Envoy is referring to itself
         * in metrics and traces. You can override this behavior by setting the
         * <code>APPMESH_RESOURCE_CLUSTER</code> environment variable with your own
         * name.</p> <p>AWS Cloud Map is not available in the eu-south-1 Region.</p>
         *  <p>For more information about virtual nodes, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_nodes.html">Virtual
         * nodes</a>. You must be using <code>1.15.0</code> or later of the Envoy image
         * when setting these variables. For more information about App Mesh Envoy
         * variables, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/envoy.html">Envoy
         * image</a> in the AWS App Mesh User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualNodeOutcomeCallable CreateVirtualNodeCallable(const Model::CreateVirtualNodeRequest& request) const;

        /**
         * <p>Creates a virtual node within a service mesh.</p> <p> A virtual node acts as
         * a logical pointer to a particular task group, such as an Amazon ECS service or a
         * Kubernetes deployment. When you create a virtual node, you can specify the
         * service discovery information for your task group, and whether the proxy running
         * in a task group will communicate with other proxies using Transport Layer
         * Security (TLS).</p> <p>You define a <code>listener</code> for any inbound
         * traffic that your virtual node expects. Any virtual service that your virtual
         * node expects to communicate to is specified as a <code>backend</code>.</p>
         * <p>The response metadata for your new virtual node contains the <code>arn</code>
         * that is associated with the virtual node. Set this value to the full ARN; for
         * example,
         * <code>arn:aws:appmesh:us-west-2:123456789012:myMesh/default/virtualNode/myApp</code>)
         * as the <code>APPMESH_RESOURCE_ARN</code> environment variable for your task
         * group's Envoy proxy container in your task definition or pod spec. This is then
         * mapped to the <code>node.id</code> and <code>node.cluster</code> Envoy
         * parameters.</p>  <p>By default, App Mesh uses the name of the resource you
         * specified in <code>APPMESH_RESOURCE_ARN</code> when Envoy is referring to itself
         * in metrics and traces. You can override this behavior by setting the
         * <code>APPMESH_RESOURCE_CLUSTER</code> environment variable with your own
         * name.</p> <p>AWS Cloud Map is not available in the eu-south-1 Region.</p>
         *  <p>For more information about virtual nodes, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_nodes.html">Virtual
         * nodes</a>. You must be using <code>1.15.0</code> or later of the Envoy image
         * when setting these variables. For more information about App Mesh Envoy
         * variables, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/envoy.html">Envoy
         * image</a> in the AWS App Mesh User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualNodeAsync(const Model::CreateVirtualNodeRequest& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a virtual router within a service mesh.</p> <p>Specify a
         * <code>listener</code> for any inbound traffic that your virtual router receives.
         * Create a virtual router for each protocol and port that you need to route.
         * Virtual routers handle traffic for one or more virtual services within your
         * mesh. After you create your virtual router, create and associate routes for your
         * virtual router that direct incoming requests to different virtual nodes.</p>
         * <p>For more information about virtual routers, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_routers.html">Virtual
         * routers</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualRouterOutcome CreateVirtualRouter(const Model::CreateVirtualRouterRequest& request) const;

        /**
         * <p>Creates a virtual router within a service mesh.</p> <p>Specify a
         * <code>listener</code> for any inbound traffic that your virtual router receives.
         * Create a virtual router for each protocol and port that you need to route.
         * Virtual routers handle traffic for one or more virtual services within your
         * mesh. After you create your virtual router, create and associate routes for your
         * virtual router that direct incoming requests to different virtual nodes.</p>
         * <p>For more information about virtual routers, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_routers.html">Virtual
         * routers</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualRouter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualRouterOutcomeCallable CreateVirtualRouterCallable(const Model::CreateVirtualRouterRequest& request) const;

        /**
         * <p>Creates a virtual router within a service mesh.</p> <p>Specify a
         * <code>listener</code> for any inbound traffic that your virtual router receives.
         * Create a virtual router for each protocol and port that you need to route.
         * Virtual routers handle traffic for one or more virtual services within your
         * mesh. After you create your virtual router, create and associate routes for your
         * virtual router that direct incoming requests to different virtual nodes.</p>
         * <p>For more information about virtual routers, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_routers.html">Virtual
         * routers</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualRouter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualRouterAsync(const Model::CreateVirtualRouterRequest& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a virtual service within a service mesh.</p> <p>A virtual service is
         * an abstraction of a real service that is provided by a virtual node directly or
         * indirectly by means of a virtual router. Dependent services call your virtual
         * service by its <code>virtualServiceName</code>, and those requests are routed to
         * the virtual node or virtual router that is specified as the provider for the
         * virtual service.</p> <p>For more information about virtual services, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_services.html">Virtual
         * services</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualServiceOutcome CreateVirtualService(const Model::CreateVirtualServiceRequest& request) const;

        /**
         * <p>Creates a virtual service within a service mesh.</p> <p>A virtual service is
         * an abstraction of a real service that is provided by a virtual node directly or
         * indirectly by means of a virtual router. Dependent services call your virtual
         * service by its <code>virtualServiceName</code>, and those requests are routed to
         * the virtual node or virtual router that is specified as the provider for the
         * virtual service.</p> <p>For more information about virtual services, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_services.html">Virtual
         * services</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualServiceOutcomeCallable CreateVirtualServiceCallable(const Model::CreateVirtualServiceRequest& request) const;

        /**
         * <p>Creates a virtual service within a service mesh.</p> <p>A virtual service is
         * an abstraction of a real service that is provided by a virtual node directly or
         * indirectly by means of a virtual router. Dependent services call your virtual
         * service by its <code>virtualServiceName</code>, and those requests are routed to
         * the virtual node or virtual router that is specified as the provider for the
         * virtual service.</p> <p>For more information about virtual services, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_services.html">Virtual
         * services</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualServiceAsync(const Model::CreateVirtualServiceRequest& request, const CreateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayRouteOutcome DeleteGatewayRoute(const Model::DeleteGatewayRouteRequest& request) const;

        /**
         * <p>Deletes an existing gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteGatewayRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGatewayRouteOutcomeCallable DeleteGatewayRouteCallable(const Model::DeleteGatewayRouteRequest& request) const;

        /**
         * <p>Deletes an existing gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteGatewayRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGatewayRouteAsync(const Model::DeleteGatewayRouteRequest& request, const DeleteGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing service mesh.</p> <p>You must delete all resources
         * (virtual services, routes, virtual routers, and virtual nodes) in the service
         * mesh before you can delete the mesh itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMeshOutcome DeleteMesh(const Model::DeleteMeshRequest& request) const;

        /**
         * <p>Deletes an existing service mesh.</p> <p>You must delete all resources
         * (virtual services, routes, virtual routers, and virtual nodes) in the service
         * mesh before you can delete the mesh itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteMesh">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMeshOutcomeCallable DeleteMeshCallable(const Model::DeleteMeshRequest& request) const;

        /**
         * <p>Deletes an existing service mesh.</p> <p>You must delete all resources
         * (virtual services, routes, virtual routers, and virtual nodes) in the service
         * mesh before you can delete the mesh itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteMesh">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMeshAsync(const Model::DeleteMeshRequest& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;

        /**
         * <p>Deletes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteOutcomeCallable DeleteRouteCallable(const Model::DeleteRouteRequest& request) const;

        /**
         * <p>Deletes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRouteAsync(const Model::DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing virtual gateway. You cannot delete a virtual gateway if
         * any gateway routes are associated to it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualGatewayOutcome DeleteVirtualGateway(const Model::DeleteVirtualGatewayRequest& request) const;

        /**
         * <p>Deletes an existing virtual gateway. You cannot delete a virtual gateway if
         * any gateway routes are associated to it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualGatewayOutcomeCallable DeleteVirtualGatewayCallable(const Model::DeleteVirtualGatewayRequest& request) const;

        /**
         * <p>Deletes an existing virtual gateway. You cannot delete a virtual gateway if
         * any gateway routes are associated to it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualGatewayAsync(const Model::DeleteVirtualGatewayRequest& request, const DeleteVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing virtual node.</p> <p>You must delete any virtual services
         * that list a virtual node as a service provider before you can delete the virtual
         * node itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualNodeOutcome DeleteVirtualNode(const Model::DeleteVirtualNodeRequest& request) const;

        /**
         * <p>Deletes an existing virtual node.</p> <p>You must delete any virtual services
         * that list a virtual node as a service provider before you can delete the virtual
         * node itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualNodeOutcomeCallable DeleteVirtualNodeCallable(const Model::DeleteVirtualNodeRequest& request) const;

        /**
         * <p>Deletes an existing virtual node.</p> <p>You must delete any virtual services
         * that list a virtual node as a service provider before you can delete the virtual
         * node itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualNodeAsync(const Model::DeleteVirtualNodeRequest& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing virtual router.</p> <p>You must delete any routes
         * associated with the virtual router before you can delete the router
         * itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualRouterOutcome DeleteVirtualRouter(const Model::DeleteVirtualRouterRequest& request) const;

        /**
         * <p>Deletes an existing virtual router.</p> <p>You must delete any routes
         * associated with the virtual router before you can delete the router
         * itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualRouter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualRouterOutcomeCallable DeleteVirtualRouterCallable(const Model::DeleteVirtualRouterRequest& request) const;

        /**
         * <p>Deletes an existing virtual router.</p> <p>You must delete any routes
         * associated with the virtual router before you can delete the router
         * itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualRouter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualRouterAsync(const Model::DeleteVirtualRouterRequest& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing virtual service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualServiceOutcome DeleteVirtualService(const Model::DeleteVirtualServiceRequest& request) const;

        /**
         * <p>Deletes an existing virtual service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualServiceOutcomeCallable DeleteVirtualServiceCallable(const Model::DeleteVirtualServiceRequest& request) const;

        /**
         * <p>Deletes an existing virtual service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualServiceAsync(const Model::DeleteVirtualServiceRequest& request, const DeleteVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGatewayRouteOutcome DescribeGatewayRoute(const Model::DescribeGatewayRouteRequest& request) const;

        /**
         * <p>Describes an existing gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeGatewayRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGatewayRouteOutcomeCallable DescribeGatewayRouteCallable(const Model::DescribeGatewayRouteRequest& request) const;

        /**
         * <p>Describes an existing gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeGatewayRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGatewayRouteAsync(const Model::DescribeGatewayRouteRequest& request, const DescribeGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMeshOutcome DescribeMesh(const Model::DescribeMeshRequest& request) const;

        /**
         * <p>Describes an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeMesh">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMeshOutcomeCallable DescribeMeshCallable(const Model::DescribeMeshRequest& request) const;

        /**
         * <p>Describes an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeMesh">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMeshAsync(const Model::DescribeMeshRequest& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRouteOutcome DescribeRoute(const Model::DescribeRouteRequest& request) const;

        /**
         * <p>Describes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRouteOutcomeCallable DescribeRouteCallable(const Model::DescribeRouteRequest& request) const;

        /**
         * <p>Describes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRouteAsync(const Model::DescribeRouteRequest& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing virtual gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualGatewayOutcome DescribeVirtualGateway(const Model::DescribeVirtualGatewayRequest& request) const;

        /**
         * <p>Describes an existing virtual gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualGatewayOutcomeCallable DescribeVirtualGatewayCallable(const Model::DescribeVirtualGatewayRequest& request) const;

        /**
         * <p>Describes an existing virtual gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualGatewayAsync(const Model::DescribeVirtualGatewayRequest& request, const DescribeVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing virtual node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualNodeOutcome DescribeVirtualNode(const Model::DescribeVirtualNodeRequest& request) const;

        /**
         * <p>Describes an existing virtual node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualNodeOutcomeCallable DescribeVirtualNodeCallable(const Model::DescribeVirtualNodeRequest& request) const;

        /**
         * <p>Describes an existing virtual node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualNodeAsync(const Model::DescribeVirtualNodeRequest& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing virtual router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualRouterOutcome DescribeVirtualRouter(const Model::DescribeVirtualRouterRequest& request) const;

        /**
         * <p>Describes an existing virtual router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualRouter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualRouterOutcomeCallable DescribeVirtualRouterCallable(const Model::DescribeVirtualRouterRequest& request) const;

        /**
         * <p>Describes an existing virtual router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualRouter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualRouterAsync(const Model::DescribeVirtualRouterRequest& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing virtual service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualServiceOutcome DescribeVirtualService(const Model::DescribeVirtualServiceRequest& request) const;

        /**
         * <p>Describes an existing virtual service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualServiceOutcomeCallable DescribeVirtualServiceCallable(const Model::DescribeVirtualServiceRequest& request) const;

        /**
         * <p>Describes an existing virtual service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualServiceAsync(const Model::DescribeVirtualServiceRequest& request, const DescribeVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing gateway routes that are associated to a virtual
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListGatewayRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewayRoutesOutcome ListGatewayRoutes(const Model::ListGatewayRoutesRequest& request) const;

        /**
         * <p>Returns a list of existing gateway routes that are associated to a virtual
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListGatewayRoutes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGatewayRoutesOutcomeCallable ListGatewayRoutesCallable(const Model::ListGatewayRoutesRequest& request) const;

        /**
         * <p>Returns a list of existing gateway routes that are associated to a virtual
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListGatewayRoutes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGatewayRoutesAsync(const Model::ListGatewayRoutesRequest& request, const ListGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing service meshes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListMeshes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMeshesOutcome ListMeshes(const Model::ListMeshesRequest& request) const;

        /**
         * <p>Returns a list of existing service meshes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListMeshes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMeshesOutcomeCallable ListMeshesCallable(const Model::ListMeshesRequest& request) const;

        /**
         * <p>Returns a list of existing service meshes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListMeshes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMeshesAsync(const Model::ListMeshesRequest& request, const ListMeshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing routes in a service mesh.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutesOutcome ListRoutes(const Model::ListRoutesRequest& request) const;

        /**
         * <p>Returns a list of existing routes in a service mesh.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListRoutes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoutesOutcomeCallable ListRoutesCallable(const Model::ListRoutesRequest& request) const;

        /**
         * <p>Returns a list of existing routes in a service mesh.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListRoutes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoutesAsync(const Model::ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tags for an App Mesh resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for an App Mesh resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for an App Mesh resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing virtual gateways in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualGatewaysOutcome ListVirtualGateways(const Model::ListVirtualGatewaysRequest& request) const;

        /**
         * <p>Returns a list of existing virtual gateways in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualGateways">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualGatewaysOutcomeCallable ListVirtualGatewaysCallable(const Model::ListVirtualGatewaysRequest& request) const;

        /**
         * <p>Returns a list of existing virtual gateways in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualGateways">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVirtualGatewaysAsync(const Model::ListVirtualGatewaysRequest& request, const ListVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing virtual nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualNodesOutcome ListVirtualNodes(const Model::ListVirtualNodesRequest& request) const;

        /**
         * <p>Returns a list of existing virtual nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualNodes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualNodesOutcomeCallable ListVirtualNodesCallable(const Model::ListVirtualNodesRequest& request) const;

        /**
         * <p>Returns a list of existing virtual nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualNodes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVirtualNodesAsync(const Model::ListVirtualNodesRequest& request, const ListVirtualNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing virtual routers in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualRouters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualRoutersOutcome ListVirtualRouters(const Model::ListVirtualRoutersRequest& request) const;

        /**
         * <p>Returns a list of existing virtual routers in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualRouters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualRoutersOutcomeCallable ListVirtualRoutersCallable(const Model::ListVirtualRoutersRequest& request) const;

        /**
         * <p>Returns a list of existing virtual routers in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualRouters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVirtualRoutersAsync(const Model::ListVirtualRoutersRequest& request, const ListVirtualRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing virtual services in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualServicesOutcome ListVirtualServices(const Model::ListVirtualServicesRequest& request) const;

        /**
         * <p>Returns a list of existing virtual services in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualServices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualServicesOutcomeCallable ListVirtualServicesCallable(const Model::ListVirtualServicesRequest& request) const;

        /**
         * <p>Returns a list of existing virtual services in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualServices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVirtualServicesAsync(const Model::ListVirtualServicesRequest& request, const ListVirtualServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource aren't specified in the
         * request parameters, they aren't changed. When a resource is deleted, the tags
         * associated with that resource are also deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource aren't specified in the
         * request parameters, they aren't changed. When a resource is deleted, the tags
         * associated with that resource are also deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource aren't specified in the
         * request parameters, they aren't changed. When a resource is deleted, the tags
         * associated with that resource are also deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing gateway route that is associated to a specified virtual
         * gateway in a service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayRouteOutcome UpdateGatewayRoute(const Model::UpdateGatewayRouteRequest& request) const;

        /**
         * <p>Updates an existing gateway route that is associated to a specified virtual
         * gateway in a service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateGatewayRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayRouteOutcomeCallable UpdateGatewayRouteCallable(const Model::UpdateGatewayRouteRequest& request) const;

        /**
         * <p>Updates an existing gateway route that is associated to a specified virtual
         * gateway in a service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateGatewayRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayRouteAsync(const Model::UpdateGatewayRouteRequest& request, const UpdateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMeshOutcome UpdateMesh(const Model::UpdateMeshRequest& request) const;

        /**
         * <p>Updates an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateMesh">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMeshOutcomeCallable UpdateMeshCallable(const Model::UpdateMeshRequest& request) const;

        /**
         * <p>Updates an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateMesh">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMeshAsync(const Model::UpdateMeshRequest& request, const UpdateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing route for a specified service mesh and virtual
         * router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRouteOutcome UpdateRoute(const Model::UpdateRouteRequest& request) const;

        /**
         * <p>Updates an existing route for a specified service mesh and virtual
         * router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRouteOutcomeCallable UpdateRouteCallable(const Model::UpdateRouteRequest& request) const;

        /**
         * <p>Updates an existing route for a specified service mesh and virtual
         * router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRouteAsync(const Model::UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing virtual gateway in a specified service
         * mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualGatewayOutcome UpdateVirtualGateway(const Model::UpdateVirtualGatewayRequest& request) const;

        /**
         * <p>Updates an existing virtual gateway in a specified service
         * mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVirtualGatewayOutcomeCallable UpdateVirtualGatewayCallable(const Model::UpdateVirtualGatewayRequest& request) const;

        /**
         * <p>Updates an existing virtual gateway in a specified service
         * mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVirtualGatewayAsync(const Model::UpdateVirtualGatewayRequest& request, const UpdateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing virtual node in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualNodeOutcome UpdateVirtualNode(const Model::UpdateVirtualNodeRequest& request) const;

        /**
         * <p>Updates an existing virtual node in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVirtualNodeOutcomeCallable UpdateVirtualNodeCallable(const Model::UpdateVirtualNodeRequest& request) const;

        /**
         * <p>Updates an existing virtual node in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVirtualNodeAsync(const Model::UpdateVirtualNodeRequest& request, const UpdateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing virtual router in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualRouterOutcome UpdateVirtualRouter(const Model::UpdateVirtualRouterRequest& request) const;

        /**
         * <p>Updates an existing virtual router in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualRouter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVirtualRouterOutcomeCallable UpdateVirtualRouterCallable(const Model::UpdateVirtualRouterRequest& request) const;

        /**
         * <p>Updates an existing virtual router in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualRouter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVirtualRouterAsync(const Model::UpdateVirtualRouterRequest& request, const UpdateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing virtual service in a specified service
         * mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualServiceOutcome UpdateVirtualService(const Model::UpdateVirtualServiceRequest& request) const;

        /**
         * <p>Updates an existing virtual service in a specified service
         * mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVirtualServiceOutcomeCallable UpdateVirtualServiceCallable(const Model::UpdateVirtualServiceRequest& request) const;

        /**
         * <p>Updates an existing virtual service in a specified service
         * mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVirtualServiceAsync(const Model::UpdateVirtualServiceRequest& request, const UpdateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateGatewayRouteAsyncHelper(const Model::CreateGatewayRouteRequest& request, const CreateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMeshAsyncHelper(const Model::CreateMeshRequest& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRouteAsyncHelper(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVirtualGatewayAsyncHelper(const Model::CreateVirtualGatewayRequest& request, const CreateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVirtualNodeAsyncHelper(const Model::CreateVirtualNodeRequest& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVirtualRouterAsyncHelper(const Model::CreateVirtualRouterRequest& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVirtualServiceAsyncHelper(const Model::CreateVirtualServiceRequest& request, const CreateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGatewayRouteAsyncHelper(const Model::DeleteGatewayRouteRequest& request, const DeleteGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMeshAsyncHelper(const Model::DeleteMeshRequest& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRouteAsyncHelper(const Model::DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualGatewayAsyncHelper(const Model::DeleteVirtualGatewayRequest& request, const DeleteVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualNodeAsyncHelper(const Model::DeleteVirtualNodeRequest& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualRouterAsyncHelper(const Model::DeleteVirtualRouterRequest& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualServiceAsyncHelper(const Model::DeleteVirtualServiceRequest& request, const DeleteVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGatewayRouteAsyncHelper(const Model::DescribeGatewayRouteRequest& request, const DescribeGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMeshAsyncHelper(const Model::DescribeMeshRequest& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRouteAsyncHelper(const Model::DescribeRouteRequest& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualGatewayAsyncHelper(const Model::DescribeVirtualGatewayRequest& request, const DescribeVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualNodeAsyncHelper(const Model::DescribeVirtualNodeRequest& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualRouterAsyncHelper(const Model::DescribeVirtualRouterRequest& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualServiceAsyncHelper(const Model::DescribeVirtualServiceRequest& request, const DescribeVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGatewayRoutesAsyncHelper(const Model::ListGatewayRoutesRequest& request, const ListGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMeshesAsyncHelper(const Model::ListMeshesRequest& request, const ListMeshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoutesAsyncHelper(const Model::ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualGatewaysAsyncHelper(const Model::ListVirtualGatewaysRequest& request, const ListVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualNodesAsyncHelper(const Model::ListVirtualNodesRequest& request, const ListVirtualNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualRoutersAsyncHelper(const Model::ListVirtualRoutersRequest& request, const ListVirtualRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualServicesAsyncHelper(const Model::ListVirtualServicesRequest& request, const ListVirtualServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGatewayRouteAsyncHelper(const Model::UpdateGatewayRouteRequest& request, const UpdateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMeshAsyncHelper(const Model::UpdateMeshRequest& request, const UpdateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRouteAsyncHelper(const Model::UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVirtualGatewayAsyncHelper(const Model::UpdateVirtualGatewayRequest& request, const UpdateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVirtualNodeAsyncHelper(const Model::UpdateVirtualNodeRequest& request, const UpdateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVirtualRouterAsyncHelper(const Model::UpdateVirtualRouterRequest& request, const UpdateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVirtualServiceAsyncHelper(const Model::UpdateVirtualServiceRequest& request, const UpdateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AppMesh
} // namespace Aws
