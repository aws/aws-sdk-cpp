/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appmesh/model/CreateMeshResult.h>
#include <aws/appmesh/model/CreateRouteResult.h>
#include <aws/appmesh/model/CreateVirtualNodeResult.h>
#include <aws/appmesh/model/CreateVirtualRouterResult.h>
#include <aws/appmesh/model/CreateVirtualServiceResult.h>
#include <aws/appmesh/model/DeleteMeshResult.h>
#include <aws/appmesh/model/DeleteRouteResult.h>
#include <aws/appmesh/model/DeleteVirtualNodeResult.h>
#include <aws/appmesh/model/DeleteVirtualRouterResult.h>
#include <aws/appmesh/model/DeleteVirtualServiceResult.h>
#include <aws/appmesh/model/DescribeMeshResult.h>
#include <aws/appmesh/model/DescribeRouteResult.h>
#include <aws/appmesh/model/DescribeVirtualNodeResult.h>
#include <aws/appmesh/model/DescribeVirtualRouterResult.h>
#include <aws/appmesh/model/DescribeVirtualServiceResult.h>
#include <aws/appmesh/model/ListMeshesResult.h>
#include <aws/appmesh/model/ListRoutesResult.h>
#include <aws/appmesh/model/ListTagsForResourceResult.h>
#include <aws/appmesh/model/ListVirtualNodesResult.h>
#include <aws/appmesh/model/ListVirtualRoutersResult.h>
#include <aws/appmesh/model/ListVirtualServicesResult.h>
#include <aws/appmesh/model/TagResourceResult.h>
#include <aws/appmesh/model/UntagResourceResult.h>
#include <aws/appmesh/model/UpdateMeshResult.h>
#include <aws/appmesh/model/UpdateRouteResult.h>
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
        class CreateMeshRequest;
        class CreateRouteRequest;
        class CreateVirtualNodeRequest;
        class CreateVirtualRouterRequest;
        class CreateVirtualServiceRequest;
        class DeleteMeshRequest;
        class DeleteRouteRequest;
        class DeleteVirtualNodeRequest;
        class DeleteVirtualRouterRequest;
        class DeleteVirtualServiceRequest;
        class DescribeMeshRequest;
        class DescribeRouteRequest;
        class DescribeVirtualNodeRequest;
        class DescribeVirtualRouterRequest;
        class DescribeVirtualServiceRequest;
        class ListMeshesRequest;
        class ListRoutesRequest;
        class ListTagsForResourceRequest;
        class ListVirtualNodesRequest;
        class ListVirtualRoutersRequest;
        class ListVirtualServicesRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateMeshRequest;
        class UpdateRouteRequest;
        class UpdateVirtualNodeRequest;
        class UpdateVirtualRouterRequest;
        class UpdateVirtualServiceRequest;

        typedef Aws::Utils::Outcome<CreateMeshResult, Aws::Client::AWSError<AppMeshErrors>> CreateMeshOutcome;
        typedef Aws::Utils::Outcome<CreateRouteResult, Aws::Client::AWSError<AppMeshErrors>> CreateRouteOutcome;
        typedef Aws::Utils::Outcome<CreateVirtualNodeResult, Aws::Client::AWSError<AppMeshErrors>> CreateVirtualNodeOutcome;
        typedef Aws::Utils::Outcome<CreateVirtualRouterResult, Aws::Client::AWSError<AppMeshErrors>> CreateVirtualRouterOutcome;
        typedef Aws::Utils::Outcome<CreateVirtualServiceResult, Aws::Client::AWSError<AppMeshErrors>> CreateVirtualServiceOutcome;
        typedef Aws::Utils::Outcome<DeleteMeshResult, Aws::Client::AWSError<AppMeshErrors>> DeleteMeshOutcome;
        typedef Aws::Utils::Outcome<DeleteRouteResult, Aws::Client::AWSError<AppMeshErrors>> DeleteRouteOutcome;
        typedef Aws::Utils::Outcome<DeleteVirtualNodeResult, Aws::Client::AWSError<AppMeshErrors>> DeleteVirtualNodeOutcome;
        typedef Aws::Utils::Outcome<DeleteVirtualRouterResult, Aws::Client::AWSError<AppMeshErrors>> DeleteVirtualRouterOutcome;
        typedef Aws::Utils::Outcome<DeleteVirtualServiceResult, Aws::Client::AWSError<AppMeshErrors>> DeleteVirtualServiceOutcome;
        typedef Aws::Utils::Outcome<DescribeMeshResult, Aws::Client::AWSError<AppMeshErrors>> DescribeMeshOutcome;
        typedef Aws::Utils::Outcome<DescribeRouteResult, Aws::Client::AWSError<AppMeshErrors>> DescribeRouteOutcome;
        typedef Aws::Utils::Outcome<DescribeVirtualNodeResult, Aws::Client::AWSError<AppMeshErrors>> DescribeVirtualNodeOutcome;
        typedef Aws::Utils::Outcome<DescribeVirtualRouterResult, Aws::Client::AWSError<AppMeshErrors>> DescribeVirtualRouterOutcome;
        typedef Aws::Utils::Outcome<DescribeVirtualServiceResult, Aws::Client::AWSError<AppMeshErrors>> DescribeVirtualServiceOutcome;
        typedef Aws::Utils::Outcome<ListMeshesResult, Aws::Client::AWSError<AppMeshErrors>> ListMeshesOutcome;
        typedef Aws::Utils::Outcome<ListRoutesResult, Aws::Client::AWSError<AppMeshErrors>> ListRoutesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<AppMeshErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListVirtualNodesResult, Aws::Client::AWSError<AppMeshErrors>> ListVirtualNodesOutcome;
        typedef Aws::Utils::Outcome<ListVirtualRoutersResult, Aws::Client::AWSError<AppMeshErrors>> ListVirtualRoutersOutcome;
        typedef Aws::Utils::Outcome<ListVirtualServicesResult, Aws::Client::AWSError<AppMeshErrors>> ListVirtualServicesOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<AppMeshErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<AppMeshErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateMeshResult, Aws::Client::AWSError<AppMeshErrors>> UpdateMeshOutcome;
        typedef Aws::Utils::Outcome<UpdateRouteResult, Aws::Client::AWSError<AppMeshErrors>> UpdateRouteOutcome;
        typedef Aws::Utils::Outcome<UpdateVirtualNodeResult, Aws::Client::AWSError<AppMeshErrors>> UpdateVirtualNodeOutcome;
        typedef Aws::Utils::Outcome<UpdateVirtualRouterResult, Aws::Client::AWSError<AppMeshErrors>> UpdateVirtualRouterOutcome;
        typedef Aws::Utils::Outcome<UpdateVirtualServiceResult, Aws::Client::AWSError<AppMeshErrors>> UpdateVirtualServiceOutcome;

        typedef std::future<CreateMeshOutcome> CreateMeshOutcomeCallable;
        typedef std::future<CreateRouteOutcome> CreateRouteOutcomeCallable;
        typedef std::future<CreateVirtualNodeOutcome> CreateVirtualNodeOutcomeCallable;
        typedef std::future<CreateVirtualRouterOutcome> CreateVirtualRouterOutcomeCallable;
        typedef std::future<CreateVirtualServiceOutcome> CreateVirtualServiceOutcomeCallable;
        typedef std::future<DeleteMeshOutcome> DeleteMeshOutcomeCallable;
        typedef std::future<DeleteRouteOutcome> DeleteRouteOutcomeCallable;
        typedef std::future<DeleteVirtualNodeOutcome> DeleteVirtualNodeOutcomeCallable;
        typedef std::future<DeleteVirtualRouterOutcome> DeleteVirtualRouterOutcomeCallable;
        typedef std::future<DeleteVirtualServiceOutcome> DeleteVirtualServiceOutcomeCallable;
        typedef std::future<DescribeMeshOutcome> DescribeMeshOutcomeCallable;
        typedef std::future<DescribeRouteOutcome> DescribeRouteOutcomeCallable;
        typedef std::future<DescribeVirtualNodeOutcome> DescribeVirtualNodeOutcomeCallable;
        typedef std::future<DescribeVirtualRouterOutcome> DescribeVirtualRouterOutcomeCallable;
        typedef std::future<DescribeVirtualServiceOutcome> DescribeVirtualServiceOutcomeCallable;
        typedef std::future<ListMeshesOutcome> ListMeshesOutcomeCallable;
        typedef std::future<ListRoutesOutcome> ListRoutesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListVirtualNodesOutcome> ListVirtualNodesOutcomeCallable;
        typedef std::future<ListVirtualRoutersOutcome> ListVirtualRoutersOutcomeCallable;
        typedef std::future<ListVirtualServicesOutcome> ListVirtualServicesOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateMeshOutcome> UpdateMeshOutcomeCallable;
        typedef std::future<UpdateRouteOutcome> UpdateRouteOutcomeCallable;
        typedef std::future<UpdateVirtualNodeOutcome> UpdateVirtualNodeOutcomeCallable;
        typedef std::future<UpdateVirtualRouterOutcome> UpdateVirtualRouterOutcomeCallable;
        typedef std::future<UpdateVirtualServiceOutcome> UpdateVirtualServiceOutcomeCallable;
} // namespace Model

  class AppMeshClient;

    typedef std::function<void(const AppMeshClient*, const Model::CreateMeshRequest&, const Model::CreateMeshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMeshResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateRouteRequest&, const Model::CreateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateVirtualNodeRequest&, const Model::CreateVirtualNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualNodeResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateVirtualRouterRequest&, const Model::CreateVirtualRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualRouterResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateVirtualServiceRequest&, const Model::CreateVirtualServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualServiceResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteMeshRequest&, const Model::DeleteMeshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMeshResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteRouteRequest&, const Model::DeleteRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteVirtualNodeRequest&, const Model::DeleteVirtualNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualNodeResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteVirtualRouterRequest&, const Model::DeleteVirtualRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualRouterResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteVirtualServiceRequest&, const Model::DeleteVirtualServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualServiceResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeMeshRequest&, const Model::DescribeMeshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMeshResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeRouteRequest&, const Model::DescribeRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeVirtualNodeRequest&, const Model::DescribeVirtualNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualNodeResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeVirtualRouterRequest&, const Model::DescribeVirtualRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualRouterResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeVirtualServiceRequest&, const Model::DescribeVirtualServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualServiceResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListMeshesRequest&, const Model::ListMeshesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMeshesResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListRoutesRequest&, const Model::ListRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutesResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListVirtualNodesRequest&, const Model::ListVirtualNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualNodesResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListVirtualRoutersRequest&, const Model::ListVirtualRoutersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualRoutersResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListVirtualServicesRequest&, const Model::ListVirtualServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualServicesResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateMeshRequest&, const Model::UpdateMeshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMeshResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateRouteRequest&, const Model::UpdateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateVirtualNodeRequest&, const Model::UpdateVirtualNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVirtualNodeResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateVirtualRouterRequest&, const Model::UpdateVirtualRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVirtualRouterResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateVirtualServiceRequest&, const Model::UpdateVirtualServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVirtualServiceResponseReceivedHandler;

  /**
   * <p>AWS App Mesh is a service mesh based on the Envoy proxy that makes it easy to
   * monitor and
         control microservices. App Mesh standardizes how your
   * microservices communicate, giving you
         end-to-end visibility and helping
   * to ensure high availability for your applications.</p>
         <p>App Mesh
   * gives you consistent visibility and network traffic controls for every
        
   * microservice in an application. You can use App Mesh with AWS Fargate, Amazon
   * ECS, Amazon EKS,
         Kubernetes on AWS, and Amazon EC2.</p>
        
   * <note>
            <p>App Mesh supports microservice applications that use
   * service discovery naming for their
            components. For more information
   * about service discovery on Amazon ECS, see <a
   * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
   * Discovery</a> in the
               <i>Amazon Elastic Container Service
   * Developer Guide</i>. Kubernetes <code>kube-dns</code> and
              
   * <code>coredns</code> are supported. For more information, see <a
   * href="https://kubernetes.io/docs/concepts/services-networking/dns-pod-service/">DNS

   *  for Services and Pods</a> in the Kubernetes documentation.</p>
         </note>
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

        inline virtual const char* GetServiceClientName() const override { return "App Mesh"; }


        /**
         * <p>Creates a service mesh. A service mesh is a logical boundary for network
         * traffic between
         the services that reside within it.</p>
        
         * <p>After you create your service mesh, you can create virtual services, virtual
         * nodes,
         virtual routers, and routes to distribute traffic between the
         * applications in your
         mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeshOutcome CreateMesh(const Model::CreateMeshRequest& request) const;

        /**
         * <p>Creates a service mesh. A service mesh is a logical boundary for network
         * traffic between
         the services that reside within it.</p>
        
         * <p>After you create your service mesh, you can create virtual services, virtual
         * nodes,
         virtual routers, and routes to distribute traffic between the
         * applications in your
         mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateMesh">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMeshOutcomeCallable CreateMeshCallable(const Model::CreateMeshRequest& request) const;

        /**
         * <p>Creates a service mesh. A service mesh is a logical boundary for network
         * traffic between
         the services that reside within it.</p>
        
         * <p>After you create your service mesh, you can create virtual services, virtual
         * nodes,
         virtual routers, and routes to distribute traffic between the
         * applications in your
         mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateMesh">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMeshAsync(const Model::CreateMeshRequest& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a route that is associated with a virtual router.</p>
         <p>You
         * can use the <code>prefix</code> parameter in your route specification for
         * path-based
         routing of requests. For example, if your virtual service
         * name is
            <code>my-service.local</code> and you want the route to
         * match requests to
            <code>my-service.local/metrics</code>, your prefix
         * should be
         <code>/metrics</code>.</p>
         <p>If your route matches
         * a request, you can distribute traffic to one or more target
         virtual
         * nodes with relative weighting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteOutcome CreateRoute(const Model::CreateRouteRequest& request) const;

        /**
         * <p>Creates a route that is associated with a virtual router.</p>
         <p>You
         * can use the <code>prefix</code> parameter in your route specification for
         * path-based
         routing of requests. For example, if your virtual service
         * name is
            <code>my-service.local</code> and you want the route to
         * match requests to
            <code>my-service.local/metrics</code>, your prefix
         * should be
         <code>/metrics</code>.</p>
         <p>If your route matches
         * a request, you can distribute traffic to one or more target
         virtual
         * nodes with relative weighting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteOutcomeCallable CreateRouteCallable(const Model::CreateRouteRequest& request) const;

        /**
         * <p>Creates a route that is associated with a virtual router.</p>
         <p>You
         * can use the <code>prefix</code> parameter in your route specification for
         * path-based
         routing of requests. For example, if your virtual service
         * name is
            <code>my-service.local</code> and you want the route to
         * match requests to
            <code>my-service.local/metrics</code>, your prefix
         * should be
         <code>/metrics</code>.</p>
         <p>If your route matches
         * a request, you can distribute traffic to one or more target
         virtual
         * nodes with relative weighting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRouteAsync(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a virtual node within a service mesh.</p>
         <p>A virtual node
         * acts as a logical pointer to a particular task group, such as an Amazon ECS
    
         * service or a Kubernetes deployment. When you create a virtual node, you can
         * specify the
         service discovery information for your task group.</p>
    
         * <p>Any inbound traffic that your virtual node expects should be specified as a
 
         * <code>listener</code>. Any outbound traffic that your virtual node expects to
         * reach
         should be specified as a <code>backend</code>.</p>
        
         * <p>The response metadata for your new virtual node contains the <code>arn</code>
         * that is
         associated with the virtual node. Set this value (either the
         * full ARN or the truncated
         resource name: for example,
         * <code>mesh/default/virtualNode/simpleapp</code>) as the
           
         * <code>APPMESH_VIRTUAL_NODE_NAME</code> environment variable for your task
         * group's Envoy
         proxy container in your task definition or pod spec. This
         * is then mapped to the
            <code>node.id</code> and
         * <code>node.cluster</code> Envoy parameters.</p>
         <note>
           
         * <p>If you require your Envoy stats or tracing to use a different name, you can
         * override
            the <code>node.cluster</code> value that is set by
        
         * <code>APPMESH_VIRTUAL_NODE_NAME</code> with the
              
         * <code>APPMESH_VIRTUAL_NODE_CLUSTER</code> environment variable.</p>
        
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualNodeOutcome CreateVirtualNode(const Model::CreateVirtualNodeRequest& request) const;

        /**
         * <p>Creates a virtual node within a service mesh.</p>
         <p>A virtual node
         * acts as a logical pointer to a particular task group, such as an Amazon ECS
    
         * service or a Kubernetes deployment. When you create a virtual node, you can
         * specify the
         service discovery information for your task group.</p>
    
         * <p>Any inbound traffic that your virtual node expects should be specified as a
 
         * <code>listener</code>. Any outbound traffic that your virtual node expects to
         * reach
         should be specified as a <code>backend</code>.</p>
        
         * <p>The response metadata for your new virtual node contains the <code>arn</code>
         * that is
         associated with the virtual node. Set this value (either the
         * full ARN or the truncated
         resource name: for example,
         * <code>mesh/default/virtualNode/simpleapp</code>) as the
           
         * <code>APPMESH_VIRTUAL_NODE_NAME</code> environment variable for your task
         * group's Envoy
         proxy container in your task definition or pod spec. This
         * is then mapped to the
            <code>node.id</code> and
         * <code>node.cluster</code> Envoy parameters.</p>
         <note>
           
         * <p>If you require your Envoy stats or tracing to use a different name, you can
         * override
            the <code>node.cluster</code> value that is set by
        
         * <code>APPMESH_VIRTUAL_NODE_NAME</code> with the
              
         * <code>APPMESH_VIRTUAL_NODE_CLUSTER</code> environment variable.</p>
        
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualNodeOutcomeCallable CreateVirtualNodeCallable(const Model::CreateVirtualNodeRequest& request) const;

        /**
         * <p>Creates a virtual node within a service mesh.</p>
         <p>A virtual node
         * acts as a logical pointer to a particular task group, such as an Amazon ECS
    
         * service or a Kubernetes deployment. When you create a virtual node, you can
         * specify the
         service discovery information for your task group.</p>
    
         * <p>Any inbound traffic that your virtual node expects should be specified as a
 
         * <code>listener</code>. Any outbound traffic that your virtual node expects to
         * reach
         should be specified as a <code>backend</code>.</p>
        
         * <p>The response metadata for your new virtual node contains the <code>arn</code>
         * that is
         associated with the virtual node. Set this value (either the
         * full ARN or the truncated
         resource name: for example,
         * <code>mesh/default/virtualNode/simpleapp</code>) as the
           
         * <code>APPMESH_VIRTUAL_NODE_NAME</code> environment variable for your task
         * group's Envoy
         proxy container in your task definition or pod spec. This
         * is then mapped to the
            <code>node.id</code> and
         * <code>node.cluster</code> Envoy parameters.</p>
         <note>
           
         * <p>If you require your Envoy stats or tracing to use a different name, you can
         * override
            the <code>node.cluster</code> value that is set by
        
         * <code>APPMESH_VIRTUAL_NODE_NAME</code> with the
              
         * <code>APPMESH_VIRTUAL_NODE_CLUSTER</code> environment variable.</p>
        
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualNodeAsync(const Model::CreateVirtualNodeRequest& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a virtual router within a service mesh.</p>
         <p>Any inbound
         * traffic that your virtual router expects should be specified as a
           
         * <code>listener</code>. </p>
         <p>Virtual routers handle traffic for one
         * or more virtual services within your mesh. After
         you create your
         * virtual router, create and associate routes for your virtual router that
       
         * direct incoming requests to different virtual nodes.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualRouterOutcome CreateVirtualRouter(const Model::CreateVirtualRouterRequest& request) const;

        /**
         * <p>Creates a virtual router within a service mesh.</p>
         <p>Any inbound
         * traffic that your virtual router expects should be specified as a
           
         * <code>listener</code>. </p>
         <p>Virtual routers handle traffic for one
         * or more virtual services within your mesh. After
         you create your
         * virtual router, create and associate routes for your virtual router that
       
         * direct incoming requests to different virtual nodes.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualRouter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualRouterOutcomeCallable CreateVirtualRouterCallable(const Model::CreateVirtualRouterRequest& request) const;

        /**
         * <p>Creates a virtual router within a service mesh.</p>
         <p>Any inbound
         * traffic that your virtual router expects should be specified as a
           
         * <code>listener</code>. </p>
         <p>Virtual routers handle traffic for one
         * or more virtual services within your mesh. After
         you create your
         * virtual router, create and associate routes for your virtual router that
       
         * direct incoming requests to different virtual nodes.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualRouter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualRouterAsync(const Model::CreateVirtualRouterRequest& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a virtual service within a service mesh.</p>
         <p>A virtual
         * service is an abstraction of a real service that is provided by a virtual node
 
         * directly or indirectly by means of a virtual router. Dependent services call
         * your virtual
         service by its <code>virtualServiceName</code>, and those
         * requests are routed to the
         virtual node or virtual router that is
         * specified as the provider for the virtual
         service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualService">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualServiceOutcome CreateVirtualService(const Model::CreateVirtualServiceRequest& request) const;

        /**
         * <p>Creates a virtual service within a service mesh.</p>
         <p>A virtual
         * service is an abstraction of a real service that is provided by a virtual node
 
         * directly or indirectly by means of a virtual router. Dependent services call
         * your virtual
         service by its <code>virtualServiceName</code>, and those
         * requests are routed to the
         virtual node or virtual router that is
         * specified as the provider for the virtual
         service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualServiceOutcomeCallable CreateVirtualServiceCallable(const Model::CreateVirtualServiceRequest& request) const;

        /**
         * <p>Creates a virtual service within a service mesh.</p>
         <p>A virtual
         * service is an abstraction of a real service that is provided by a virtual node
 
         * directly or indirectly by means of a virtual router. Dependent services call
         * your virtual
         service by its <code>virtualServiceName</code>, and those
         * requests are routed to the
         virtual node or virtual router that is
         * specified as the provider for the virtual
         service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualServiceAsync(const Model::CreateVirtualServiceRequest& request, const CreateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing service mesh.</p>
         <p>You must delete all
         * resources (virtual services, routes, virtual routers, and virtual
        
         * nodes) in the service mesh before you can delete the mesh itself.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMeshOutcome DeleteMesh(const Model::DeleteMeshRequest& request) const;

        /**
         * <p>Deletes an existing service mesh.</p>
         <p>You must delete all
         * resources (virtual services, routes, virtual routers, and virtual
        
         * nodes) in the service mesh before you can delete the mesh itself.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteMesh">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMeshOutcomeCallable DeleteMeshCallable(const Model::DeleteMeshRequest& request) const;

        /**
         * <p>Deletes an existing service mesh.</p>
         <p>You must delete all
         * resources (virtual services, routes, virtual routers, and virtual
        
         * nodes) in the service mesh before you can delete the mesh itself.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Deletes an existing virtual node.</p>
         <p>You must delete any virtual
         * services that list a virtual node as a service provider
         before you can
         * delete the virtual node itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualNodeOutcome DeleteVirtualNode(const Model::DeleteVirtualNodeRequest& request) const;

        /**
         * <p>Deletes an existing virtual node.</p>
         <p>You must delete any virtual
         * services that list a virtual node as a service provider
         before you can
         * delete the virtual node itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualNodeOutcomeCallable DeleteVirtualNodeCallable(const Model::DeleteVirtualNodeRequest& request) const;

        /**
         * <p>Deletes an existing virtual node.</p>
         <p>You must delete any virtual
         * services that list a virtual node as a service provider
         before you can
         * delete the virtual node itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualNodeAsync(const Model::DeleteVirtualNodeRequest& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing virtual router.</p>
         <p>You must delete any
         * routes associated with the virtual router before you can delete the
        
         * router itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualRouterOutcome DeleteVirtualRouter(const Model::DeleteVirtualRouterRequest& request) const;

        /**
         * <p>Deletes an existing virtual router.</p>
         <p>You must delete any
         * routes associated with the virtual router before you can delete the
        
         * router itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualRouter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualRouterOutcomeCallable DeleteVirtualRouterCallable(const Model::DeleteVirtualRouterRequest& request) const;

        /**
         * <p>Deletes an existing virtual router.</p>
         <p>You must delete any
         * routes associated with the virtual router before you can delete the
        
         * router itself.</p><p><h3>See Also:</h3>   <a
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
         * <code>resourceArn</code>.
         If existing tags on a resource aren't
         * specified in the request parameters, they aren't
         changed. When a
         * resource is deleted, the tags associated with that resource are also
        
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>.
         If existing tags on a resource aren't
         * specified in the request parameters, they aren't
         changed. When a
         * resource is deleted, the tags associated with that resource are also
        
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>.
         If existing tags on a resource aren't
         * specified in the request parameters, they aren't
         changed. When a
         * resource is deleted, the tags associated with that resource are also
        
         * deleted.</p><p><h3>See Also:</h3>   <a
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
        void CreateMeshAsyncHelper(const Model::CreateMeshRequest& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRouteAsyncHelper(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVirtualNodeAsyncHelper(const Model::CreateVirtualNodeRequest& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVirtualRouterAsyncHelper(const Model::CreateVirtualRouterRequest& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVirtualServiceAsyncHelper(const Model::CreateVirtualServiceRequest& request, const CreateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMeshAsyncHelper(const Model::DeleteMeshRequest& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRouteAsyncHelper(const Model::DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualNodeAsyncHelper(const Model::DeleteVirtualNodeRequest& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualRouterAsyncHelper(const Model::DeleteVirtualRouterRequest& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualServiceAsyncHelper(const Model::DeleteVirtualServiceRequest& request, const DeleteVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMeshAsyncHelper(const Model::DescribeMeshRequest& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRouteAsyncHelper(const Model::DescribeRouteRequest& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualNodeAsyncHelper(const Model::DescribeVirtualNodeRequest& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualRouterAsyncHelper(const Model::DescribeVirtualRouterRequest& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualServiceAsyncHelper(const Model::DescribeVirtualServiceRequest& request, const DescribeVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMeshesAsyncHelper(const Model::ListMeshesRequest& request, const ListMeshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoutesAsyncHelper(const Model::ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualNodesAsyncHelper(const Model::ListVirtualNodesRequest& request, const ListVirtualNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualRoutersAsyncHelper(const Model::ListVirtualRoutersRequest& request, const ListVirtualRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualServicesAsyncHelper(const Model::ListVirtualServicesRequest& request, const ListVirtualServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMeshAsyncHelper(const Model::UpdateMeshRequest& request, const UpdateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRouteAsyncHelper(const Model::UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVirtualNodeAsyncHelper(const Model::UpdateVirtualNodeRequest& request, const UpdateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVirtualRouterAsyncHelper(const Model::UpdateVirtualRouterRequest& request, const UpdateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVirtualServiceAsyncHelper(const Model::UpdateVirtualServiceRequest& request, const UpdateVirtualServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AppMesh
} // namespace Aws
