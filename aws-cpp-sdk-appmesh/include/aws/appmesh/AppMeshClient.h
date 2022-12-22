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
        virtual Model::CreateGatewayRouteOutcomeCallable CreateGatewayRouteCallable(const Model::CreateGatewayRouteRequest& request) const;

        /**
         * An Async wrapper for CreateGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateMesh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMeshOutcomeCallable CreateMeshCallable(const Model::CreateMeshRequest& request) const;

        /**
         * An Async wrapper for CreateMesh that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteOutcomeCallable CreateRouteCallable(const Model::CreateRouteRequest& request) const;

        /**
         * An Async wrapper for CreateRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateVirtualGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualGatewayOutcomeCallable CreateVirtualGatewayCallable(const Model::CreateVirtualGatewayRequest& request) const;

        /**
         * An Async wrapper for CreateVirtualGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
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
        virtual Model::CreateVirtualNodeOutcomeCallable CreateVirtualNodeCallable(const Model::CreateVirtualNodeRequest& request) const;

        /**
         * An Async wrapper for CreateVirtualNode that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateVirtualRouter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualRouterOutcomeCallable CreateVirtualRouterCallable(const Model::CreateVirtualRouterRequest& request) const;

        /**
         * An Async wrapper for CreateVirtualRouter that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateVirtualService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualServiceOutcomeCallable CreateVirtualServiceCallable(const Model::CreateVirtualServiceRequest& request) const;

        /**
         * An Async wrapper for CreateVirtualService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualServiceAsync(const Model::CreateVirtualServiceRequest& request, const CreateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayRouteOutcome DeleteGatewayRoute(const Model::DeleteGatewayRouteRequest& request) const;

        /**
         * A Callable wrapper for DeleteGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGatewayRouteOutcomeCallable DeleteGatewayRouteCallable(const Model::DeleteGatewayRouteRequest& request) const;

        /**
         * An Async wrapper for DeleteGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteMesh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMeshOutcomeCallable DeleteMeshCallable(const Model::DeleteMeshRequest& request) const;

        /**
         * An Async wrapper for DeleteMesh that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMeshAsync(const Model::DeleteMeshRequest& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteOutcomeCallable DeleteRouteCallable(const Model::DeleteRouteRequest& request) const;

        /**
         * An Async wrapper for DeleteRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteVirtualGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualGatewayOutcomeCallable DeleteVirtualGatewayCallable(const Model::DeleteVirtualGatewayRequest& request) const;

        /**
         * An Async wrapper for DeleteVirtualGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteVirtualNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualNodeOutcomeCallable DeleteVirtualNodeCallable(const Model::DeleteVirtualNodeRequest& request) const;

        /**
         * An Async wrapper for DeleteVirtualNode that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteVirtualRouter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualRouterOutcomeCallable DeleteVirtualRouterCallable(const Model::DeleteVirtualRouterRequest& request) const;

        /**
         * An Async wrapper for DeleteVirtualRouter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualRouterAsync(const Model::DeleteVirtualRouterRequest& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing virtual service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualServiceOutcome DeleteVirtualService(const Model::DeleteVirtualServiceRequest& request) const;

        /**
         * A Callable wrapper for DeleteVirtualService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualServiceOutcomeCallable DeleteVirtualServiceCallable(const Model::DeleteVirtualServiceRequest& request) const;

        /**
         * An Async wrapper for DeleteVirtualService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualServiceAsync(const Model::DeleteVirtualServiceRequest& request, const DeleteVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing gateway route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeGatewayRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGatewayRouteOutcome DescribeGatewayRoute(const Model::DescribeGatewayRouteRequest& request) const;

        /**
         * A Callable wrapper for DescribeGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGatewayRouteOutcomeCallable DescribeGatewayRouteCallable(const Model::DescribeGatewayRouteRequest& request) const;

        /**
         * An Async wrapper for DescribeGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGatewayRouteAsync(const Model::DescribeGatewayRouteRequest& request, const DescribeGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMeshOutcome DescribeMesh(const Model::DescribeMeshRequest& request) const;

        /**
         * A Callable wrapper for DescribeMesh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMeshOutcomeCallable DescribeMeshCallable(const Model::DescribeMeshRequest& request) const;

        /**
         * An Async wrapper for DescribeMesh that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMeshAsync(const Model::DescribeMeshRequest& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRouteOutcome DescribeRoute(const Model::DescribeRouteRequest& request) const;

        /**
         * A Callable wrapper for DescribeRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRouteOutcomeCallable DescribeRouteCallable(const Model::DescribeRouteRequest& request) const;

        /**
         * An Async wrapper for DescribeRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRouteAsync(const Model::DescribeRouteRequest& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing virtual gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualGatewayOutcome DescribeVirtualGateway(const Model::DescribeVirtualGatewayRequest& request) const;

        /**
         * A Callable wrapper for DescribeVirtualGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualGatewayOutcomeCallable DescribeVirtualGatewayCallable(const Model::DescribeVirtualGatewayRequest& request) const;

        /**
         * An Async wrapper for DescribeVirtualGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualGatewayAsync(const Model::DescribeVirtualGatewayRequest& request, const DescribeVirtualGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing virtual node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualNodeOutcome DescribeVirtualNode(const Model::DescribeVirtualNodeRequest& request) const;

        /**
         * A Callable wrapper for DescribeVirtualNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualNodeOutcomeCallable DescribeVirtualNodeCallable(const Model::DescribeVirtualNodeRequest& request) const;

        /**
         * An Async wrapper for DescribeVirtualNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualNodeAsync(const Model::DescribeVirtualNodeRequest& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing virtual router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualRouterOutcome DescribeVirtualRouter(const Model::DescribeVirtualRouterRequest& request) const;

        /**
         * A Callable wrapper for DescribeVirtualRouter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualRouterOutcomeCallable DescribeVirtualRouterCallable(const Model::DescribeVirtualRouterRequest& request) const;

        /**
         * An Async wrapper for DescribeVirtualRouter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualRouterAsync(const Model::DescribeVirtualRouterRequest& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing virtual service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualServiceOutcome DescribeVirtualService(const Model::DescribeVirtualServiceRequest& request) const;

        /**
         * A Callable wrapper for DescribeVirtualService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualServiceOutcomeCallable DescribeVirtualServiceCallable(const Model::DescribeVirtualServiceRequest& request) const;

        /**
         * An Async wrapper for DescribeVirtualService that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListGatewayRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGatewayRoutesOutcomeCallable ListGatewayRoutesCallable(const Model::ListGatewayRoutesRequest& request) const;

        /**
         * An Async wrapper for ListGatewayRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGatewayRoutesAsync(const Model::ListGatewayRoutesRequest& request, const ListGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing service meshes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListMeshes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMeshesOutcome ListMeshes(const Model::ListMeshesRequest& request) const;

        /**
         * A Callable wrapper for ListMeshes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMeshesOutcomeCallable ListMeshesCallable(const Model::ListMeshesRequest& request) const;

        /**
         * An Async wrapper for ListMeshes that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoutesOutcomeCallable ListRoutesCallable(const Model::ListRoutesRequest& request) const;

        /**
         * An Async wrapper for ListRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoutesAsync(const Model::ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tags for an App Mesh resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListVirtualGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualGatewaysOutcomeCallable ListVirtualGatewaysCallable(const Model::ListVirtualGatewaysRequest& request) const;

        /**
         * An Async wrapper for ListVirtualGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVirtualGatewaysAsync(const Model::ListVirtualGatewaysRequest& request, const ListVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing virtual nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualNodesOutcome ListVirtualNodes(const Model::ListVirtualNodesRequest& request) const;

        /**
         * A Callable wrapper for ListVirtualNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualNodesOutcomeCallable ListVirtualNodesCallable(const Model::ListVirtualNodesRequest& request) const;

        /**
         * An Async wrapper for ListVirtualNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListVirtualRouters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualRoutersOutcomeCallable ListVirtualRoutersCallable(const Model::ListVirtualRoutersRequest& request) const;

        /**
         * An Async wrapper for ListVirtualRouters that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListVirtualServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualServicesOutcomeCallable ListVirtualServicesCallable(const Model::ListVirtualServicesRequest& request) const;

        /**
         * An Async wrapper for ListVirtualServices that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateGatewayRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayRouteOutcomeCallable UpdateGatewayRouteCallable(const Model::UpdateGatewayRouteRequest& request) const;

        /**
         * An Async wrapper for UpdateGatewayRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayRouteAsync(const Model::UpdateGatewayRouteRequest& request, const UpdateGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMeshOutcome UpdateMesh(const Model::UpdateMeshRequest& request) const;

        /**
         * A Callable wrapper for UpdateMesh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMeshOutcomeCallable UpdateMeshCallable(const Model::UpdateMeshRequest& request) const;

        /**
         * An Async wrapper for UpdateMesh that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRouteOutcomeCallable UpdateRouteCallable(const Model::UpdateRouteRequest& request) const;

        /**
         * An Async wrapper for UpdateRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateVirtualGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVirtualGatewayOutcomeCallable UpdateVirtualGatewayCallable(const Model::UpdateVirtualGatewayRequest& request) const;

        /**
         * An Async wrapper for UpdateVirtualGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateVirtualNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVirtualNodeOutcomeCallable UpdateVirtualNodeCallable(const Model::UpdateVirtualNodeRequest& request) const;

        /**
         * An Async wrapper for UpdateVirtualNode that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateVirtualRouter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVirtualRouterOutcomeCallable UpdateVirtualRouterCallable(const Model::UpdateVirtualRouterRequest& request) const;

        /**
         * An Async wrapper for UpdateVirtualRouter that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateVirtualService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVirtualServiceOutcomeCallable UpdateVirtualServiceCallable(const Model::UpdateVirtualServiceRequest& request) const;

        /**
         * An Async wrapper for UpdateVirtualService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVirtualServiceAsync(const Model::UpdateVirtualServiceRequest& request, const UpdateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
