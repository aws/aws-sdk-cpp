/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appmesh/AppMeshServiceClientModel.h>

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
  class AWS_APPMESH_API AppMeshClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AppMeshClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AppMeshClientConfiguration ClientConfigurationType;
      typedef AppMeshEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppMeshClient(const Aws::AppMesh::AppMeshClientConfiguration& clientConfiguration = Aws::AppMesh::AppMeshClientConfiguration(),
                      std::shared_ptr<AppMeshEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppMeshClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AppMeshEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::AppMesh::AppMeshClientConfiguration& clientConfiguration = Aws::AppMesh::AppMeshClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppMeshClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AppMeshEndpointProviderBase> endpointProvider = nullptr,
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
         * A Callable wrapper for CreateGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGatewayRouteRequestT = Model::CreateGatewayRouteRequest>
        Model::CreateGatewayRouteOutcomeCallable CreateGatewayRouteCallable(const CreateGatewayRouteRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::CreateGatewayRoute, request);
        }

        /**
         * An Async wrapper for CreateGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGatewayRouteRequestT = Model::CreateGatewayRouteRequest>
        void CreateGatewayRouteAsync(const CreateGatewayRouteRequestT& request, const CreateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::CreateGatewayRoute, request, handler, context);
        }

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
         * A Callable wrapper for CreateMesh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMeshRequestT = Model::CreateMeshRequest>
        Model::CreateMeshOutcomeCallable CreateMeshCallable(const CreateMeshRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::CreateMesh, request);
        }

        /**
         * An Async wrapper for CreateMesh that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMeshRequestT = Model::CreateMeshRequest>
        void CreateMeshAsync(const CreateMeshRequestT& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::CreateMesh, request, handler, context);
        }

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
         * A Callable wrapper for CreateRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRouteRequestT = Model::CreateRouteRequest>
        Model::CreateRouteOutcomeCallable CreateRouteCallable(const CreateRouteRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::CreateRoute, request);
        }

        /**
         * An Async wrapper for CreateRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRouteRequestT = Model::CreateRouteRequest>
        void CreateRouteAsync(const CreateRouteRequestT& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::CreateRoute, request, handler, context);
        }

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
         * A Callable wrapper for CreateVirtualGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVirtualGatewayRequestT = Model::CreateVirtualGatewayRequest>
        Model::CreateVirtualGatewayOutcomeCallable CreateVirtualGatewayCallable(const CreateVirtualGatewayRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::CreateVirtualGateway, request);
        }

        /**
         * An Async wrapper for CreateVirtualGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVirtualGatewayRequestT = Model::CreateVirtualGatewayRequest>
        void CreateVirtualGatewayAsync(const CreateVirtualGatewayRequestT& request, const CreateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::CreateVirtualGateway, request, handler, context);
        }

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
         * A Callable wrapper for CreateVirtualNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVirtualNodeRequestT = Model::CreateVirtualNodeRequest>
        Model::CreateVirtualNodeOutcomeCallable CreateVirtualNodeCallable(const CreateVirtualNodeRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::CreateVirtualNode, request);
        }

        /**
         * An Async wrapper for CreateVirtualNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVirtualNodeRequestT = Model::CreateVirtualNodeRequest>
        void CreateVirtualNodeAsync(const CreateVirtualNodeRequestT& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::CreateVirtualNode, request, handler, context);
        }

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
         * A Callable wrapper for CreateVirtualRouter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVirtualRouterRequestT = Model::CreateVirtualRouterRequest>
        Model::CreateVirtualRouterOutcomeCallable CreateVirtualRouterCallable(const CreateVirtualRouterRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::CreateVirtualRouter, request);
        }

        /**
         * An Async wrapper for CreateVirtualRouter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVirtualRouterRequestT = Model::CreateVirtualRouterRequest>
        void CreateVirtualRouterAsync(const CreateVirtualRouterRequestT& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::CreateVirtualRouter, request, handler, context);
        }

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
         * A Callable wrapper for CreateVirtualService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVirtualServiceRequestT = Model::CreateVirtualServiceRequest>
        Model::CreateVirtualServiceOutcomeCallable CreateVirtualServiceCallable(const CreateVirtualServiceRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::CreateVirtualService, request);
        }

        /**
         * An Async wrapper for CreateVirtualService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVirtualServiceRequestT = Model::CreateVirtualServiceRequest>
        void CreateVirtualServiceAsync(const CreateVirtualServiceRequestT& request, const CreateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::CreateVirtualService, request, handler, context);
        }

        /**
         * <p>Deletes an existing gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayRouteOutcome DeleteGatewayRoute(const Model::DeleteGatewayRouteRequest& request) const;

        /**
         * A Callable wrapper for DeleteGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGatewayRouteRequestT = Model::DeleteGatewayRouteRequest>
        Model::DeleteGatewayRouteOutcomeCallable DeleteGatewayRouteCallable(const DeleteGatewayRouteRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DeleteGatewayRoute, request);
        }

        /**
         * An Async wrapper for DeleteGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGatewayRouteRequestT = Model::DeleteGatewayRouteRequest>
        void DeleteGatewayRouteAsync(const DeleteGatewayRouteRequestT& request, const DeleteGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DeleteGatewayRoute, request, handler, context);
        }

        /**
         * <p>Deletes an existing service mesh.</p> <p>You must delete all resources
         * (virtual services, routes, virtual routers, and virtual nodes) in the service
         * mesh before you can delete the mesh itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMeshOutcome DeleteMesh(const Model::DeleteMeshRequest& request) const;

        /**
         * A Callable wrapper for DeleteMesh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMeshRequestT = Model::DeleteMeshRequest>
        Model::DeleteMeshOutcomeCallable DeleteMeshCallable(const DeleteMeshRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DeleteMesh, request);
        }

        /**
         * An Async wrapper for DeleteMesh that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMeshRequestT = Model::DeleteMeshRequest>
        void DeleteMeshAsync(const DeleteMeshRequestT& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DeleteMesh, request, handler, context);
        }

        /**
         * <p>Deletes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRouteRequestT = Model::DeleteRouteRequest>
        Model::DeleteRouteOutcomeCallable DeleteRouteCallable(const DeleteRouteRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DeleteRoute, request);
        }

        /**
         * An Async wrapper for DeleteRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRouteRequestT = Model::DeleteRouteRequest>
        void DeleteRouteAsync(const DeleteRouteRequestT& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DeleteRoute, request, handler, context);
        }

        /**
         * <p>Deletes an existing virtual gateway. You cannot delete a virtual gateway if
         * any gateway routes are associated to it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualGatewayOutcome DeleteVirtualGateway(const Model::DeleteVirtualGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteVirtualGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVirtualGatewayRequestT = Model::DeleteVirtualGatewayRequest>
        Model::DeleteVirtualGatewayOutcomeCallable DeleteVirtualGatewayCallable(const DeleteVirtualGatewayRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DeleteVirtualGateway, request);
        }

        /**
         * An Async wrapper for DeleteVirtualGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVirtualGatewayRequestT = Model::DeleteVirtualGatewayRequest>
        void DeleteVirtualGatewayAsync(const DeleteVirtualGatewayRequestT& request, const DeleteVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DeleteVirtualGateway, request, handler, context);
        }

        /**
         * <p>Deletes an existing virtual node.</p> <p>You must delete any virtual services
         * that list a virtual node as a service provider before you can delete the virtual
         * node itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualNodeOutcome DeleteVirtualNode(const Model::DeleteVirtualNodeRequest& request) const;

        /**
         * A Callable wrapper for DeleteVirtualNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVirtualNodeRequestT = Model::DeleteVirtualNodeRequest>
        Model::DeleteVirtualNodeOutcomeCallable DeleteVirtualNodeCallable(const DeleteVirtualNodeRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DeleteVirtualNode, request);
        }

        /**
         * An Async wrapper for DeleteVirtualNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVirtualNodeRequestT = Model::DeleteVirtualNodeRequest>
        void DeleteVirtualNodeAsync(const DeleteVirtualNodeRequestT& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DeleteVirtualNode, request, handler, context);
        }

        /**
         * <p>Deletes an existing virtual router.</p> <p>You must delete any routes
         * associated with the virtual router before you can delete the router
         * itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualRouterOutcome DeleteVirtualRouter(const Model::DeleteVirtualRouterRequest& request) const;

        /**
         * A Callable wrapper for DeleteVirtualRouter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVirtualRouterRequestT = Model::DeleteVirtualRouterRequest>
        Model::DeleteVirtualRouterOutcomeCallable DeleteVirtualRouterCallable(const DeleteVirtualRouterRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DeleteVirtualRouter, request);
        }

        /**
         * An Async wrapper for DeleteVirtualRouter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVirtualRouterRequestT = Model::DeleteVirtualRouterRequest>
        void DeleteVirtualRouterAsync(const DeleteVirtualRouterRequestT& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DeleteVirtualRouter, request, handler, context);
        }

        /**
         * <p>Deletes an existing virtual service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualServiceOutcome DeleteVirtualService(const Model::DeleteVirtualServiceRequest& request) const;

        /**
         * A Callable wrapper for DeleteVirtualService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVirtualServiceRequestT = Model::DeleteVirtualServiceRequest>
        Model::DeleteVirtualServiceOutcomeCallable DeleteVirtualServiceCallable(const DeleteVirtualServiceRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DeleteVirtualService, request);
        }

        /**
         * An Async wrapper for DeleteVirtualService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVirtualServiceRequestT = Model::DeleteVirtualServiceRequest>
        void DeleteVirtualServiceAsync(const DeleteVirtualServiceRequestT& request, const DeleteVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DeleteVirtualService, request, handler, context);
        }

        /**
         * <p>Describes an existing gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGatewayRouteOutcome DescribeGatewayRoute(const Model::DescribeGatewayRouteRequest& request) const;

        /**
         * A Callable wrapper for DescribeGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGatewayRouteRequestT = Model::DescribeGatewayRouteRequest>
        Model::DescribeGatewayRouteOutcomeCallable DescribeGatewayRouteCallable(const DescribeGatewayRouteRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DescribeGatewayRoute, request);
        }

        /**
         * An Async wrapper for DescribeGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGatewayRouteRequestT = Model::DescribeGatewayRouteRequest>
        void DescribeGatewayRouteAsync(const DescribeGatewayRouteRequestT& request, const DescribeGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DescribeGatewayRoute, request, handler, context);
        }

        /**
         * <p>Describes an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMeshOutcome DescribeMesh(const Model::DescribeMeshRequest& request) const;

        /**
         * A Callable wrapper for DescribeMesh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMeshRequestT = Model::DescribeMeshRequest>
        Model::DescribeMeshOutcomeCallable DescribeMeshCallable(const DescribeMeshRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DescribeMesh, request);
        }

        /**
         * An Async wrapper for DescribeMesh that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMeshRequestT = Model::DescribeMeshRequest>
        void DescribeMeshAsync(const DescribeMeshRequestT& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DescribeMesh, request, handler, context);
        }

        /**
         * <p>Describes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRouteOutcome DescribeRoute(const Model::DescribeRouteRequest& request) const;

        /**
         * A Callable wrapper for DescribeRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRouteRequestT = Model::DescribeRouteRequest>
        Model::DescribeRouteOutcomeCallable DescribeRouteCallable(const DescribeRouteRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DescribeRoute, request);
        }

        /**
         * An Async wrapper for DescribeRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRouteRequestT = Model::DescribeRouteRequest>
        void DescribeRouteAsync(const DescribeRouteRequestT& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DescribeRoute, request, handler, context);
        }

        /**
         * <p>Describes an existing virtual gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualGatewayOutcome DescribeVirtualGateway(const Model::DescribeVirtualGatewayRequest& request) const;

        /**
         * A Callable wrapper for DescribeVirtualGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVirtualGatewayRequestT = Model::DescribeVirtualGatewayRequest>
        Model::DescribeVirtualGatewayOutcomeCallable DescribeVirtualGatewayCallable(const DescribeVirtualGatewayRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DescribeVirtualGateway, request);
        }

        /**
         * An Async wrapper for DescribeVirtualGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVirtualGatewayRequestT = Model::DescribeVirtualGatewayRequest>
        void DescribeVirtualGatewayAsync(const DescribeVirtualGatewayRequestT& request, const DescribeVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DescribeVirtualGateway, request, handler, context);
        }

        /**
         * <p>Describes an existing virtual node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualNodeOutcome DescribeVirtualNode(const Model::DescribeVirtualNodeRequest& request) const;

        /**
         * A Callable wrapper for DescribeVirtualNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVirtualNodeRequestT = Model::DescribeVirtualNodeRequest>
        Model::DescribeVirtualNodeOutcomeCallable DescribeVirtualNodeCallable(const DescribeVirtualNodeRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DescribeVirtualNode, request);
        }

        /**
         * An Async wrapper for DescribeVirtualNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVirtualNodeRequestT = Model::DescribeVirtualNodeRequest>
        void DescribeVirtualNodeAsync(const DescribeVirtualNodeRequestT& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DescribeVirtualNode, request, handler, context);
        }

        /**
         * <p>Describes an existing virtual router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualRouterOutcome DescribeVirtualRouter(const Model::DescribeVirtualRouterRequest& request) const;

        /**
         * A Callable wrapper for DescribeVirtualRouter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVirtualRouterRequestT = Model::DescribeVirtualRouterRequest>
        Model::DescribeVirtualRouterOutcomeCallable DescribeVirtualRouterCallable(const DescribeVirtualRouterRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DescribeVirtualRouter, request);
        }

        /**
         * An Async wrapper for DescribeVirtualRouter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVirtualRouterRequestT = Model::DescribeVirtualRouterRequest>
        void DescribeVirtualRouterAsync(const DescribeVirtualRouterRequestT& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DescribeVirtualRouter, request, handler, context);
        }

        /**
         * <p>Describes an existing virtual service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualServiceOutcome DescribeVirtualService(const Model::DescribeVirtualServiceRequest& request) const;

        /**
         * A Callable wrapper for DescribeVirtualService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVirtualServiceRequestT = Model::DescribeVirtualServiceRequest>
        Model::DescribeVirtualServiceOutcomeCallable DescribeVirtualServiceCallable(const DescribeVirtualServiceRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::DescribeVirtualService, request);
        }

        /**
         * An Async wrapper for DescribeVirtualService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVirtualServiceRequestT = Model::DescribeVirtualServiceRequest>
        void DescribeVirtualServiceAsync(const DescribeVirtualServiceRequestT& request, const DescribeVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::DescribeVirtualService, request, handler, context);
        }

        /**
         * <p>Returns a list of existing gateway routes that are associated to a virtual
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListGatewayRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewayRoutesOutcome ListGatewayRoutes(const Model::ListGatewayRoutesRequest& request) const;

        /**
         * A Callable wrapper for ListGatewayRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGatewayRoutesRequestT = Model::ListGatewayRoutesRequest>
        Model::ListGatewayRoutesOutcomeCallable ListGatewayRoutesCallable(const ListGatewayRoutesRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::ListGatewayRoutes, request);
        }

        /**
         * An Async wrapper for ListGatewayRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGatewayRoutesRequestT = Model::ListGatewayRoutesRequest>
        void ListGatewayRoutesAsync(const ListGatewayRoutesRequestT& request, const ListGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::ListGatewayRoutes, request, handler, context);
        }

        /**
         * <p>Returns a list of existing service meshes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListMeshes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMeshesOutcome ListMeshes(const Model::ListMeshesRequest& request) const;

        /**
         * A Callable wrapper for ListMeshes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMeshesRequestT = Model::ListMeshesRequest>
        Model::ListMeshesOutcomeCallable ListMeshesCallable(const ListMeshesRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::ListMeshes, request);
        }

        /**
         * An Async wrapper for ListMeshes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMeshesRequestT = Model::ListMeshesRequest>
        void ListMeshesAsync(const ListMeshesRequestT& request, const ListMeshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::ListMeshes, request, handler, context);
        }

        /**
         * <p>Returns a list of existing routes in a service mesh.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutesOutcome ListRoutes(const Model::ListRoutesRequest& request) const;

        /**
         * A Callable wrapper for ListRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRoutesRequestT = Model::ListRoutesRequest>
        Model::ListRoutesOutcomeCallable ListRoutesCallable(const ListRoutesRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::ListRoutes, request);
        }

        /**
         * An Async wrapper for ListRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRoutesRequestT = Model::ListRoutesRequest>
        void ListRoutesAsync(const ListRoutesRequestT& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::ListRoutes, request, handler, context);
        }

        /**
         * <p>List the tags for an App Mesh resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns a list of existing virtual gateways in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualGatewaysOutcome ListVirtualGateways(const Model::ListVirtualGatewaysRequest& request) const;

        /**
         * A Callable wrapper for ListVirtualGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVirtualGatewaysRequestT = Model::ListVirtualGatewaysRequest>
        Model::ListVirtualGatewaysOutcomeCallable ListVirtualGatewaysCallable(const ListVirtualGatewaysRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::ListVirtualGateways, request);
        }

        /**
         * An Async wrapper for ListVirtualGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVirtualGatewaysRequestT = Model::ListVirtualGatewaysRequest>
        void ListVirtualGatewaysAsync(const ListVirtualGatewaysRequestT& request, const ListVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::ListVirtualGateways, request, handler, context);
        }

        /**
         * <p>Returns a list of existing virtual nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualNodesOutcome ListVirtualNodes(const Model::ListVirtualNodesRequest& request) const;

        /**
         * A Callable wrapper for ListVirtualNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVirtualNodesRequestT = Model::ListVirtualNodesRequest>
        Model::ListVirtualNodesOutcomeCallable ListVirtualNodesCallable(const ListVirtualNodesRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::ListVirtualNodes, request);
        }

        /**
         * An Async wrapper for ListVirtualNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVirtualNodesRequestT = Model::ListVirtualNodesRequest>
        void ListVirtualNodesAsync(const ListVirtualNodesRequestT& request, const ListVirtualNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::ListVirtualNodes, request, handler, context);
        }

        /**
         * <p>Returns a list of existing virtual routers in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualRouters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualRoutersOutcome ListVirtualRouters(const Model::ListVirtualRoutersRequest& request) const;

        /**
         * A Callable wrapper for ListVirtualRouters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVirtualRoutersRequestT = Model::ListVirtualRoutersRequest>
        Model::ListVirtualRoutersOutcomeCallable ListVirtualRoutersCallable(const ListVirtualRoutersRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::ListVirtualRouters, request);
        }

        /**
         * An Async wrapper for ListVirtualRouters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVirtualRoutersRequestT = Model::ListVirtualRoutersRequest>
        void ListVirtualRoutersAsync(const ListVirtualRoutersRequestT& request, const ListVirtualRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::ListVirtualRouters, request, handler, context);
        }

        /**
         * <p>Returns a list of existing virtual services in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualServicesOutcome ListVirtualServices(const Model::ListVirtualServicesRequest& request) const;

        /**
         * A Callable wrapper for ListVirtualServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVirtualServicesRequestT = Model::ListVirtualServicesRequest>
        Model::ListVirtualServicesOutcomeCallable ListVirtualServicesCallable(const ListVirtualServicesRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::ListVirtualServices, request);
        }

        /**
         * An Async wrapper for ListVirtualServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVirtualServicesRequestT = Model::ListVirtualServicesRequest>
        void ListVirtualServicesAsync(const ListVirtualServicesRequestT& request, const ListVirtualServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::ListVirtualServices, request, handler, context);
        }

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing gateway route that is associated to a specified virtual
         * gateway in a service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayRouteOutcome UpdateGatewayRoute(const Model::UpdateGatewayRouteRequest& request) const;

        /**
         * A Callable wrapper for UpdateGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGatewayRouteRequestT = Model::UpdateGatewayRouteRequest>
        Model::UpdateGatewayRouteOutcomeCallable UpdateGatewayRouteCallable(const UpdateGatewayRouteRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::UpdateGatewayRoute, request);
        }

        /**
         * An Async wrapper for UpdateGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGatewayRouteRequestT = Model::UpdateGatewayRouteRequest>
        void UpdateGatewayRouteAsync(const UpdateGatewayRouteRequestT& request, const UpdateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::UpdateGatewayRoute, request, handler, context);
        }

        /**
         * <p>Updates an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMeshOutcome UpdateMesh(const Model::UpdateMeshRequest& request) const;

        /**
         * A Callable wrapper for UpdateMesh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMeshRequestT = Model::UpdateMeshRequest>
        Model::UpdateMeshOutcomeCallable UpdateMeshCallable(const UpdateMeshRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::UpdateMesh, request);
        }

        /**
         * An Async wrapper for UpdateMesh that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMeshRequestT = Model::UpdateMeshRequest>
        void UpdateMeshAsync(const UpdateMeshRequestT& request, const UpdateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::UpdateMesh, request, handler, context);
        }

        /**
         * <p>Updates an existing route for a specified service mesh and virtual
         * router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRouteOutcome UpdateRoute(const Model::UpdateRouteRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRouteRequestT = Model::UpdateRouteRequest>
        Model::UpdateRouteOutcomeCallable UpdateRouteCallable(const UpdateRouteRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::UpdateRoute, request);
        }

        /**
         * An Async wrapper for UpdateRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRouteRequestT = Model::UpdateRouteRequest>
        void UpdateRouteAsync(const UpdateRouteRequestT& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::UpdateRoute, request, handler, context);
        }

        /**
         * <p>Updates an existing virtual gateway in a specified service
         * mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualGatewayOutcome UpdateVirtualGateway(const Model::UpdateVirtualGatewayRequest& request) const;

        /**
         * A Callable wrapper for UpdateVirtualGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVirtualGatewayRequestT = Model::UpdateVirtualGatewayRequest>
        Model::UpdateVirtualGatewayOutcomeCallable UpdateVirtualGatewayCallable(const UpdateVirtualGatewayRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::UpdateVirtualGateway, request);
        }

        /**
         * An Async wrapper for UpdateVirtualGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVirtualGatewayRequestT = Model::UpdateVirtualGatewayRequest>
        void UpdateVirtualGatewayAsync(const UpdateVirtualGatewayRequestT& request, const UpdateVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::UpdateVirtualGateway, request, handler, context);
        }

        /**
         * <p>Updates an existing virtual node in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualNodeOutcome UpdateVirtualNode(const Model::UpdateVirtualNodeRequest& request) const;

        /**
         * A Callable wrapper for UpdateVirtualNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVirtualNodeRequestT = Model::UpdateVirtualNodeRequest>
        Model::UpdateVirtualNodeOutcomeCallable UpdateVirtualNodeCallable(const UpdateVirtualNodeRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::UpdateVirtualNode, request);
        }

        /**
         * An Async wrapper for UpdateVirtualNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVirtualNodeRequestT = Model::UpdateVirtualNodeRequest>
        void UpdateVirtualNodeAsync(const UpdateVirtualNodeRequestT& request, const UpdateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::UpdateVirtualNode, request, handler, context);
        }

        /**
         * <p>Updates an existing virtual router in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualRouterOutcome UpdateVirtualRouter(const Model::UpdateVirtualRouterRequest& request) const;

        /**
         * A Callable wrapper for UpdateVirtualRouter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVirtualRouterRequestT = Model::UpdateVirtualRouterRequest>
        Model::UpdateVirtualRouterOutcomeCallable UpdateVirtualRouterCallable(const UpdateVirtualRouterRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::UpdateVirtualRouter, request);
        }

        /**
         * An Async wrapper for UpdateVirtualRouter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVirtualRouterRequestT = Model::UpdateVirtualRouterRequest>
        void UpdateVirtualRouterAsync(const UpdateVirtualRouterRequestT& request, const UpdateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::UpdateVirtualRouter, request, handler, context);
        }

        /**
         * <p>Updates an existing virtual service in a specified service
         * mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualServiceOutcome UpdateVirtualService(const Model::UpdateVirtualServiceRequest& request) const;

        /**
         * A Callable wrapper for UpdateVirtualService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVirtualServiceRequestT = Model::UpdateVirtualServiceRequest>
        Model::UpdateVirtualServiceOutcomeCallable UpdateVirtualServiceCallable(const UpdateVirtualServiceRequestT& request) const
        {
            return SubmitCallable(&AppMeshClient::UpdateVirtualService, request);
        }

        /**
         * An Async wrapper for UpdateVirtualService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVirtualServiceRequestT = Model::UpdateVirtualServiceRequest>
        void UpdateVirtualServiceAsync(const UpdateVirtualServiceRequestT& request, const UpdateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppMeshClient::UpdateVirtualService, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppMeshEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AppMeshClient>;
      void init(const AppMeshClientConfiguration& clientConfiguration);

      AppMeshClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppMeshEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppMesh
} // namespace Aws
