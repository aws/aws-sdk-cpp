/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appmesh/AppMeshServiceClientModel.h>
#include <aws/appmesh/AppMeshLegacyAsyncMacros.h>

namespace Aws
{
namespace AppMesh
{
  /**
   * <p>App Mesh is a service mesh based on the Envoy proxy that makes it easy to
   * monitor and control microservices. App Mesh standardizes how your microservices
   * communicate, giving you end-to-end visibility and helping to ensure high
   * availability for your applications.</p> <p>App Mesh gives you consistent
   * visibility and network traffic controls for every microservice in an
   * application. You can use App Mesh with Amazon Web Services Fargate, Amazon ECS,
   * Amazon EKS, Kubernetes on Amazon Web Services, and Amazon EC2.</p>  <p>App
   * Mesh supports microservice applications that use service discovery naming for
   * their components. For more information about service discovery on Amazon ECS,
   * see <a
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppMeshClient(const Aws::AppMesh::AppMeshClientConfiguration& clientConfiguration = Aws::AppMesh::AppMeshClientConfiguration(),
                      std::shared_ptr<AppMeshEndpointProviderBase> endpointProvider = Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppMeshClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AppMeshEndpointProviderBase> endpointProvider = Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG),
                      const Aws::AppMesh::AppMeshClientConfiguration& clientConfiguration = Aws::AppMesh::AppMeshClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppMeshClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AppMeshEndpointProviderBase> endpointProvider = Aws::MakeShared<AppMeshEndpointProvider>(ALLOCATION_TAG),
                      const Aws::AppMesh::AppMeshClientConfiguration& clientConfiguration = Aws::AppMesh::AppMeshClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppMeshClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppMeshClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppMeshClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AppMeshClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * name.</p>  <p>For more information about virtual nodes, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/virtual_nodes.html">Virtual
         * nodes</a>. You must be using <code>1.15.0</code> or later of the Envoy image
         * when setting these variables. For more information aboutApp Mesh Envoy
         * variables, see <a
         * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/envoy.html">Envoy
         * image</a> in the App Mesh User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualNodeOutcome CreateVirtualNode(const Model::CreateVirtualNodeRequest& request) const;


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
         * <p>Deletes an existing gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayRouteOutcome DeleteGatewayRoute(const Model::DeleteGatewayRouteRequest& request) const;


        /**
         * <p>Deletes an existing service mesh.</p> <p>You must delete all resources
         * (virtual services, routes, virtual routers, and virtual nodes) in the service
         * mesh before you can delete the mesh itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMeshOutcome DeleteMesh(const Model::DeleteMeshRequest& request) const;


        /**
         * <p>Deletes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;


        /**
         * <p>Deletes an existing virtual gateway. You cannot delete a virtual gateway if
         * any gateway routes are associated to it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualGatewayOutcome DeleteVirtualGateway(const Model::DeleteVirtualGatewayRequest& request) const;


        /**
         * <p>Deletes an existing virtual node.</p> <p>You must delete any virtual services
         * that list a virtual node as a service provider before you can delete the virtual
         * node itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualNodeOutcome DeleteVirtualNode(const Model::DeleteVirtualNodeRequest& request) const;


        /**
         * <p>Deletes an existing virtual router.</p> <p>You must delete any routes
         * associated with the virtual router before you can delete the router
         * itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualRouterOutcome DeleteVirtualRouter(const Model::DeleteVirtualRouterRequest& request) const;


        /**
         * <p>Deletes an existing virtual service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualServiceOutcome DeleteVirtualService(const Model::DeleteVirtualServiceRequest& request) const;


        /**
         * <p>Describes an existing gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGatewayRouteOutcome DescribeGatewayRoute(const Model::DescribeGatewayRouteRequest& request) const;


        /**
         * <p>Describes an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMeshOutcome DescribeMesh(const Model::DescribeMeshRequest& request) const;


        /**
         * <p>Describes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRouteOutcome DescribeRoute(const Model::DescribeRouteRequest& request) const;


        /**
         * <p>Describes an existing virtual gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualGatewayOutcome DescribeVirtualGateway(const Model::DescribeVirtualGatewayRequest& request) const;


        /**
         * <p>Describes an existing virtual node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualNodeOutcome DescribeVirtualNode(const Model::DescribeVirtualNodeRequest& request) const;


        /**
         * <p>Describes an existing virtual router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualRouterOutcome DescribeVirtualRouter(const Model::DescribeVirtualRouterRequest& request) const;


        /**
         * <p>Describes an existing virtual service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualServiceOutcome DescribeVirtualService(const Model::DescribeVirtualServiceRequest& request) const;


        /**
         * <p>Returns a list of existing gateway routes that are associated to a virtual
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListGatewayRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewayRoutesOutcome ListGatewayRoutes(const Model::ListGatewayRoutesRequest& request) const;


        /**
         * <p>Returns a list of existing service meshes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListMeshes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMeshesOutcome ListMeshes(const Model::ListMeshesRequest& request) const;


        /**
         * <p>Returns a list of existing routes in a service mesh.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutesOutcome ListRoutes(const Model::ListRoutesRequest& request) const;


        /**
         * <p>List the tags for an App Mesh resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Returns a list of existing virtual gateways in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualGatewaysOutcome ListVirtualGateways(const Model::ListVirtualGatewaysRequest& request) const;


        /**
         * <p>Returns a list of existing virtual nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualNodesOutcome ListVirtualNodes(const Model::ListVirtualNodesRequest& request) const;


        /**
         * <p>Returns a list of existing virtual routers in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualRouters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualRoutersOutcome ListVirtualRouters(const Model::ListVirtualRoutersRequest& request) const;


        /**
         * <p>Returns a list of existing virtual services in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualServicesOutcome ListVirtualServices(const Model::ListVirtualServicesRequest& request) const;


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
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an existing gateway route that is associated to a specified virtual
         * gateway in a service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayRouteOutcome UpdateGatewayRoute(const Model::UpdateGatewayRouteRequest& request) const;


        /**
         * <p>Updates an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMeshOutcome UpdateMesh(const Model::UpdateMeshRequest& request) const;


        /**
         * <p>Updates an existing route for a specified service mesh and virtual
         * router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRouteOutcome UpdateRoute(const Model::UpdateRouteRequest& request) const;


        /**
         * <p>Updates an existing virtual gateway in a specified service
         * mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualGatewayOutcome UpdateVirtualGateway(const Model::UpdateVirtualGatewayRequest& request) const;


        /**
         * <p>Updates an existing virtual node in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualNodeOutcome UpdateVirtualNode(const Model::UpdateVirtualNodeRequest& request) const;


        /**
         * <p>Updates an existing virtual router in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualRouterOutcome UpdateVirtualRouter(const Model::UpdateVirtualRouterRequest& request) const;


        /**
         * <p>Updates an existing virtual service in a specified service
         * mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualServiceOutcome UpdateVirtualService(const Model::UpdateVirtualServiceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppMeshEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AppMeshClientConfiguration& clientConfiguration);

      AppMeshClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppMeshEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppMesh
} // namespace Aws
