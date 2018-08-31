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
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/CreateClusterResult.h>
#include <aws/eks/model/DeleteClusterResult.h>
#include <aws/eks/model/DescribeClusterResult.h>
#include <aws/eks/model/ListClustersResult.h>
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

namespace EKS
{

namespace Model
{
        class CreateClusterRequest;
        class DeleteClusterRequest;
        class DescribeClusterRequest;
        class ListClustersRequest;

        typedef Aws::Utils::Outcome<CreateClusterResult, Aws::Client::AWSError<EKSErrors>> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<DeleteClusterResult, Aws::Client::AWSError<EKSErrors>> DeleteClusterOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterResult, Aws::Client::AWSError<EKSErrors>> DescribeClusterOutcome;
        typedef Aws::Utils::Outcome<ListClustersResult, Aws::Client::AWSError<EKSErrors>> ListClustersOutcome;

        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
        typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
        typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
} // namespace Model

  class EKSClient;

    typedef std::function<void(const EKSClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;

  /**
   * <p>Amazon Elastic Container Service for Kubernetes (Amazon EKS) is a managed
   * service that makes it easy for you to run Kubernetes on AWS without needing to
   * stand up or maintain your own Kubernetes control plane. Kubernetes is an
   * open-source system for automating the deployment, scaling, and management of
   * containerized applications. </p> <p>Amazon EKS runs up-to-date versions of the
   * open-source Kubernetes software, so you can use all the existing plugins and
   * tooling from the Kubernetes community. Applications running on Amazon EKS are
   * fully compatible with applications running on any standard Kubernetes
   * environment, whether running in on-premises data centers or public clouds. This
   * means that you can easily migrate any standard Kubernetes application to Amazon
   * EKS without any code modification required.</p>
   */
  class AWS_EKS_API EKSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EKSClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EKSClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EKSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~EKSClient();

        inline virtual const char* GetServiceClientName() const override { return "EKS"; }


        /**
         * <p>Creates an Amazon EKS control plane. </p> <p>The Amazon EKS control plane
         * consists of control plane instances that run the Kubernetes software, like
         * <code>etcd</code> and the API server. The control plane runs in an account
         * managed by AWS, and the Kubernetes API is exposed via the Amazon EKS API server
         * endpoint.</p> <p>Amazon EKS worker nodes run in your AWS account and connect to
         * your cluster's control plane via the Kubernetes API server endpoint and a
         * certificate file that is created for your cluster.</p> <p>The cluster control
         * plane is provisioned across multiple Availability Zones and fronted by an
         * Elastic Load Balancing Network Load Balancer. Amazon EKS also provisions elastic
         * network interfaces in your VPC subnets to provide connectivity from the control
         * plane instances to the worker nodes (for example, to support <code>kubectl
         * exec</code>, <code>logs</code>, and <code>proxy</code> data flows).</p> <p>After
         * you create an Amazon EKS cluster, you must configure your Kubernetes tooling to
         * communicate with the API server and launch worker nodes into your cluster. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/eks/latest/userguide/managing-auth.html">Managing
         * Cluster Authentication</a> and <a
         * href="http://docs.aws.amazon.com/eks/latest/userguide/launch-workers.html">Launching
         * Amazon EKS Worker Nodes</a>in the <i>Amazon EKS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates an Amazon EKS control plane. </p> <p>The Amazon EKS control plane
         * consists of control plane instances that run the Kubernetes software, like
         * <code>etcd</code> and the API server. The control plane runs in an account
         * managed by AWS, and the Kubernetes API is exposed via the Amazon EKS API server
         * endpoint.</p> <p>Amazon EKS worker nodes run in your AWS account and connect to
         * your cluster's control plane via the Kubernetes API server endpoint and a
         * certificate file that is created for your cluster.</p> <p>The cluster control
         * plane is provisioned across multiple Availability Zones and fronted by an
         * Elastic Load Balancing Network Load Balancer. Amazon EKS also provisions elastic
         * network interfaces in your VPC subnets to provide connectivity from the control
         * plane instances to the worker nodes (for example, to support <code>kubectl
         * exec</code>, <code>logs</code>, and <code>proxy</code> data flows).</p> <p>After
         * you create an Amazon EKS cluster, you must configure your Kubernetes tooling to
         * communicate with the API server and launch worker nodes into your cluster. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/eks/latest/userguide/managing-auth.html">Managing
         * Cluster Authentication</a> and <a
         * href="http://docs.aws.amazon.com/eks/latest/userguide/launch-workers.html">Launching
         * Amazon EKS Worker Nodes</a>in the <i>Amazon EKS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates an Amazon EKS control plane. </p> <p>The Amazon EKS control plane
         * consists of control plane instances that run the Kubernetes software, like
         * <code>etcd</code> and the API server. The control plane runs in an account
         * managed by AWS, and the Kubernetes API is exposed via the Amazon EKS API server
         * endpoint.</p> <p>Amazon EKS worker nodes run in your AWS account and connect to
         * your cluster's control plane via the Kubernetes API server endpoint and a
         * certificate file that is created for your cluster.</p> <p>The cluster control
         * plane is provisioned across multiple Availability Zones and fronted by an
         * Elastic Load Balancing Network Load Balancer. Amazon EKS also provisions elastic
         * network interfaces in your VPC subnets to provide connectivity from the control
         * plane instances to the worker nodes (for example, to support <code>kubectl
         * exec</code>, <code>logs</code>, and <code>proxy</code> data flows).</p> <p>After
         * you create an Amazon EKS cluster, you must configure your Kubernetes tooling to
         * communicate with the API server and launch worker nodes into your cluster. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/eks/latest/userguide/managing-auth.html">Managing
         * Cluster Authentication</a> and <a
         * href="http://docs.aws.amazon.com/eks/latest/userguide/launch-workers.html">Launching
         * Amazon EKS Worker Nodes</a>in the <i>Amazon EKS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Amazon EKS cluster control plane. </p> <note> <p>If you have
         * active services in your cluster that are associated with a load balancer, you
         * must delete those services before deleting the cluster so that the load
         * balancers are deleted properly. Otherwise, you can have orphaned resources in
         * your VPC that prevent you from being able to delete the VPC. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/eks/latest/userguide/delete-cluster.html">Deleting
         * a Cluster</a> in the <i>Amazon EKS User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes the Amazon EKS cluster control plane. </p> <note> <p>If you have
         * active services in your cluster that are associated with a load balancer, you
         * must delete those services before deleting the cluster so that the load
         * balancers are deleted properly. Otherwise, you can have orphaned resources in
         * your VPC that prevent you from being able to delete the VPC. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/eks/latest/userguide/delete-cluster.html">Deleting
         * a Cluster</a> in the <i>Amazon EKS User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes the Amazon EKS cluster control plane. </p> <note> <p>If you have
         * active services in your cluster that are associated with a load balancer, you
         * must delete those services before deleting the cluster so that the load
         * balancers are deleted properly. Otherwise, you can have orphaned resources in
         * your VPC that prevent you from being able to delete the VPC. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/eks/latest/userguide/delete-cluster.html">Deleting
         * a Cluster</a> in the <i>Amazon EKS User Guide</i>.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptive information about an Amazon EKS cluster.</p> <p>The API
         * server endpoint and certificate authority data returned by this operation are
         * required for <code>kubelet</code> and <code>kubectl</code> to communicate with
         * your Kubernetes API server. For more information, see <a
         * href="http://docs.aws.amazon.com/eks/latest/userguide/create-kubeconfig.html">Create
         * a kubeconfig for Amazon EKS</a>.</p> <note> <p>The API server endpoint and
         * certificate authority data are not available until the cluster reaches the
         * <code>ACTIVE</code> state.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

        /**
         * <p>Returns descriptive information about an Amazon EKS cluster.</p> <p>The API
         * server endpoint and certificate authority data returned by this operation are
         * required for <code>kubelet</code> and <code>kubectl</code> to communicate with
         * your Kubernetes API server. For more information, see <a
         * href="http://docs.aws.amazon.com/eks/latest/userguide/create-kubeconfig.html">Create
         * a kubeconfig for Amazon EKS</a>.</p> <note> <p>The API server endpoint and
         * certificate authority data are not available until the cluster reaches the
         * <code>ACTIVE</code> state.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const Model::DescribeClusterRequest& request) const;

        /**
         * <p>Returns descriptive information about an Amazon EKS cluster.</p> <p>The API
         * server endpoint and certificate authority data returned by this operation are
         * required for <code>kubelet</code> and <code>kubectl</code> to communicate with
         * your Kubernetes API server. For more information, see <a
         * href="http://docs.aws.amazon.com/eks/latest/userguide/create-kubeconfig.html">Create
         * a kubeconfig for Amazon EKS</a>.</p> <note> <p>The API server endpoint and
         * certificate authority data are not available until the cluster reaches the
         * <code>ACTIVE</code> state.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon EKS clusters in your AWS account in the specified
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * <p>Lists the Amazon EKS clusters in your AWS account in the specified
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

        /**
         * <p>Lists the Amazon EKS clusters in your AWS account in the specified
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClustersAsync(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterAsyncHelper(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EKS
} // namespace Aws
