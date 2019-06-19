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
#include <aws/eks/model/DescribeUpdateResult.h>
#include <aws/eks/model/ListClustersResult.h>
#include <aws/eks/model/ListUpdatesResult.h>
#include <aws/eks/model/UpdateClusterConfigResult.h>
#include <aws/eks/model/UpdateClusterVersionResult.h>
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
        class DescribeUpdateRequest;
        class ListClustersRequest;
        class ListUpdatesRequest;
        class UpdateClusterConfigRequest;
        class UpdateClusterVersionRequest;

        typedef Aws::Utils::Outcome<CreateClusterResult, Aws::Client::AWSError<EKSErrors>> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<DeleteClusterResult, Aws::Client::AWSError<EKSErrors>> DeleteClusterOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterResult, Aws::Client::AWSError<EKSErrors>> DescribeClusterOutcome;
        typedef Aws::Utils::Outcome<DescribeUpdateResult, Aws::Client::AWSError<EKSErrors>> DescribeUpdateOutcome;
        typedef Aws::Utils::Outcome<ListClustersResult, Aws::Client::AWSError<EKSErrors>> ListClustersOutcome;
        typedef Aws::Utils::Outcome<ListUpdatesResult, Aws::Client::AWSError<EKSErrors>> ListUpdatesOutcome;
        typedef Aws::Utils::Outcome<UpdateClusterConfigResult, Aws::Client::AWSError<EKSErrors>> UpdateClusterConfigOutcome;
        typedef Aws::Utils::Outcome<UpdateClusterVersionResult, Aws::Client::AWSError<EKSErrors>> UpdateClusterVersionOutcome;

        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
        typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
        typedef std::future<DescribeUpdateOutcome> DescribeUpdateOutcomeCallable;
        typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
        typedef std::future<ListUpdatesOutcome> ListUpdatesOutcomeCallable;
        typedef std::future<UpdateClusterConfigOutcome> UpdateClusterConfigOutcomeCallable;
        typedef std::future<UpdateClusterVersionOutcome> UpdateClusterVersionOutcomeCallable;
} // namespace Model

  class EKSClient;

    typedef std::function<void(const EKSClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeUpdateRequest&, const Model::DescribeUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUpdateResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListUpdatesRequest&, const Model::ListUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUpdatesResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateClusterConfigRequest&, const Model::UpdateClusterConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterConfigResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateClusterVersionRequest&, const Model::UpdateClusterVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterVersionResponseReceivedHandler;

  /**
   * <p>Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that
   * makes it easy for you to run Kubernetes on AWS without needing to stand up or
   * maintain your own Kubernetes control plane. Kubernetes is an open-source system
   * for automating the deployment, scaling, and management of containerized
   * applications. </p> <p>Amazon EKS runs up-to-date versions of the open-source
   * Kubernetes software, so you can use all the existing plugins and tooling from
   * the Kubernetes community. Applications running on Amazon EKS are fully
   * compatible with applications running on any standard Kubernetes environment,
   * whether running in on-premises data centers or public clouds. This means that
   * you can easily migrate any standard Kubernetes application to Amazon EKS without
   * any code modification required.</p>
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
         * consists of control plane instances that run the Kubernetes software, such as
         * <code>etcd</code> and the API server. The control plane runs in an account
         * managed by AWS, and the Kubernetes API is exposed via the Amazon EKS API server
         * endpoint. Each Amazon EKS cluster control plane is single-tenant and unique and
         * runs on its own set of Amazon EC2 instances.</p> <p>The cluster control plane is
         * provisioned across multiple Availability Zones and fronted by an Elastic Load
         * Balancing Network Load Balancer. Amazon EKS also provisions elastic network
         * interfaces in your VPC subnets to provide connectivity from the control plane
         * instances to the worker nodes (for example, to support <code>kubectl
         * exec</code>, <code>logs</code>, and <code>proxy</code> data flows).</p>
         * <p>Amazon EKS worker nodes run in your AWS account and connect to your cluster's
         * control plane via the Kubernetes API server endpoint and a certificate file that
         * is created for your cluster.</p> <p>You can use the
         * <code>endpointPublicAccess</code> and <code>endpointPrivateAccess</code>
         * parameters to enable or disable public and private access to your cluster's
         * Kubernetes API server endpoint. By default, public access is enabled, and
         * private access is disabled. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
         * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>. </p> <p>You can use the <code>logging</code> parameter to enable or
         * disable exporting the Kubernetes control plane logs for your cluster to
         * CloudWatch Logs. By default, cluster control plane logs aren't exported to
         * CloudWatch Logs. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
         * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p> </note> <p>Cluster creation typically takes between 10 and 15
         * minutes. After you create an Amazon EKS cluster, you must configure your
         * Kubernetes tooling to communicate with the API server and launch worker nodes
         * into your cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/managing-auth.html">Managing
         * Cluster Authentication</a> and <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-workers.html">Launching
         * Amazon EKS Worker Nodes</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates an Amazon EKS control plane. </p> <p>The Amazon EKS control plane
         * consists of control plane instances that run the Kubernetes software, such as
         * <code>etcd</code> and the API server. The control plane runs in an account
         * managed by AWS, and the Kubernetes API is exposed via the Amazon EKS API server
         * endpoint. Each Amazon EKS cluster control plane is single-tenant and unique and
         * runs on its own set of Amazon EC2 instances.</p> <p>The cluster control plane is
         * provisioned across multiple Availability Zones and fronted by an Elastic Load
         * Balancing Network Load Balancer. Amazon EKS also provisions elastic network
         * interfaces in your VPC subnets to provide connectivity from the control plane
         * instances to the worker nodes (for example, to support <code>kubectl
         * exec</code>, <code>logs</code>, and <code>proxy</code> data flows).</p>
         * <p>Amazon EKS worker nodes run in your AWS account and connect to your cluster's
         * control plane via the Kubernetes API server endpoint and a certificate file that
         * is created for your cluster.</p> <p>You can use the
         * <code>endpointPublicAccess</code> and <code>endpointPrivateAccess</code>
         * parameters to enable or disable public and private access to your cluster's
         * Kubernetes API server endpoint. By default, public access is enabled, and
         * private access is disabled. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
         * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>. </p> <p>You can use the <code>logging</code> parameter to enable or
         * disable exporting the Kubernetes control plane logs for your cluster to
         * CloudWatch Logs. By default, cluster control plane logs aren't exported to
         * CloudWatch Logs. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
         * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p> </note> <p>Cluster creation typically takes between 10 and 15
         * minutes. After you create an Amazon EKS cluster, you must configure your
         * Kubernetes tooling to communicate with the API server and launch worker nodes
         * into your cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/managing-auth.html">Managing
         * Cluster Authentication</a> and <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-workers.html">Launching
         * Amazon EKS Worker Nodes</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates an Amazon EKS control plane. </p> <p>The Amazon EKS control plane
         * consists of control plane instances that run the Kubernetes software, such as
         * <code>etcd</code> and the API server. The control plane runs in an account
         * managed by AWS, and the Kubernetes API is exposed via the Amazon EKS API server
         * endpoint. Each Amazon EKS cluster control plane is single-tenant and unique and
         * runs on its own set of Amazon EC2 instances.</p> <p>The cluster control plane is
         * provisioned across multiple Availability Zones and fronted by an Elastic Load
         * Balancing Network Load Balancer. Amazon EKS also provisions elastic network
         * interfaces in your VPC subnets to provide connectivity from the control plane
         * instances to the worker nodes (for example, to support <code>kubectl
         * exec</code>, <code>logs</code>, and <code>proxy</code> data flows).</p>
         * <p>Amazon EKS worker nodes run in your AWS account and connect to your cluster's
         * control plane via the Kubernetes API server endpoint and a certificate file that
         * is created for your cluster.</p> <p>You can use the
         * <code>endpointPublicAccess</code> and <code>endpointPrivateAccess</code>
         * parameters to enable or disable public and private access to your cluster's
         * Kubernetes API server endpoint. By default, public access is enabled, and
         * private access is disabled. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
         * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>. </p> <p>You can use the <code>logging</code> parameter to enable or
         * disable exporting the Kubernetes control plane logs for your cluster to
         * CloudWatch Logs. By default, cluster control plane logs aren't exported to
         * CloudWatch Logs. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
         * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p> </note> <p>Cluster creation typically takes between 10 and 15
         * minutes. After you create an Amazon EKS cluster, you must configure your
         * Kubernetes tooling to communicate with the API server and launch worker nodes
         * into your cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/managing-auth.html">Managing
         * Cluster Authentication</a> and <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-workers.html">Launching
         * Amazon EKS Worker Nodes</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See
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
         * href="https://docs.aws.amazon.com/eks/latest/userguide/delete-cluster.html">Deleting
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
         * href="https://docs.aws.amazon.com/eks/latest/userguide/delete-cluster.html">Deleting
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
         * href="https://docs.aws.amazon.com/eks/latest/userguide/delete-cluster.html">Deleting
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
         * href="https://docs.aws.amazon.com/eks/latest/userguide/create-kubeconfig.html">Create
         * a kubeconfig for Amazon EKS</a>.</p> <note> <p>The API server endpoint and
         * certificate authority data aren't available until the cluster reaches the
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
         * href="https://docs.aws.amazon.com/eks/latest/userguide/create-kubeconfig.html">Create
         * a kubeconfig for Amazon EKS</a>.</p> <note> <p>The API server endpoint and
         * certificate authority data aren't available until the cluster reaches the
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
         * href="https://docs.aws.amazon.com/eks/latest/userguide/create-kubeconfig.html">Create
         * a kubeconfig for Amazon EKS</a>.</p> <note> <p>The API server endpoint and
         * certificate authority data aren't available until the cluster reaches the
         * <code>ACTIVE</code> state.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptive information about an update against your Amazon EKS
         * cluster.</p> <p>When the status of the update is <code>Succeeded</code>, the
         * update is complete. If an update fails, the status is <code>Failed</code>, and
         * an error detail explains the reason for the failure.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUpdateOutcome DescribeUpdate(const Model::DescribeUpdateRequest& request) const;

        /**
         * <p>Returns descriptive information about an update against your Amazon EKS
         * cluster.</p> <p>When the status of the update is <code>Succeeded</code>, the
         * update is complete. If an update fails, the status is <code>Failed</code>, and
         * an error detail explains the reason for the failure.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeUpdate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUpdateOutcomeCallable DescribeUpdateCallable(const Model::DescribeUpdateRequest& request) const;

        /**
         * <p>Returns descriptive information about an update against your Amazon EKS
         * cluster.</p> <p>When the status of the update is <code>Succeeded</code>, the
         * update is complete. If an update fails, the status is <code>Failed</code>, and
         * an error detail explains the reason for the failure.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeUpdate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUpdateAsync(const Model::DescribeUpdateRequest& request, const DescribeUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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

        /**
         * <p>Lists the updates associated with an Amazon EKS cluster in your AWS account,
         * in the specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListUpdates">AWS API
         * Reference</a></p>
         */
        virtual Model::ListUpdatesOutcome ListUpdates(const Model::ListUpdatesRequest& request) const;

        /**
         * <p>Lists the updates associated with an Amazon EKS cluster in your AWS account,
         * in the specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListUpdates">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUpdatesOutcomeCallable ListUpdatesCallable(const Model::ListUpdatesRequest& request) const;

        /**
         * <p>Lists the updates associated with an Amazon EKS cluster in your AWS account,
         * in the specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListUpdates">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUpdatesAsync(const Model::ListUpdatesRequest& request, const ListUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Amazon EKS cluster configuration. Your cluster continues to
         * function during the update. The response output includes an update ID that you
         * can use to track the status of your cluster update with the
         * <a>DescribeUpdate</a> API operation.</p> <p>You can use this API operation to
         * enable or disable exporting the Kubernetes control plane logs for your cluster
         * to CloudWatch Logs. By default, cluster control plane logs aren't exported to
         * CloudWatch Logs. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
         * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p> </note> <p>You can also use this API operation to enable or
         * disable public and private access to your cluster's Kubernetes API server
         * endpoint. By default, public access is enabled, and private access is disabled.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
         * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>. </p> <important> <p>At this time, you can not update the subnets or
         * security group IDs for an existing cluster.</p> </important> <p>Cluster updates
         * are asynchronous, and they should finish within a few minutes. During an update,
         * the cluster status moves to <code>UPDATING</code> (this status transition is
         * eventually consistent). When the update is complete (either <code>Failed</code>
         * or <code>Successful</code>), the cluster status moves to
         * <code>Active</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateClusterConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterConfigOutcome UpdateClusterConfig(const Model::UpdateClusterConfigRequest& request) const;

        /**
         * <p>Updates an Amazon EKS cluster configuration. Your cluster continues to
         * function during the update. The response output includes an update ID that you
         * can use to track the status of your cluster update with the
         * <a>DescribeUpdate</a> API operation.</p> <p>You can use this API operation to
         * enable or disable exporting the Kubernetes control plane logs for your cluster
         * to CloudWatch Logs. By default, cluster control plane logs aren't exported to
         * CloudWatch Logs. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
         * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p> </note> <p>You can also use this API operation to enable or
         * disable public and private access to your cluster's Kubernetes API server
         * endpoint. By default, public access is enabled, and private access is disabled.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
         * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>. </p> <important> <p>At this time, you can not update the subnets or
         * security group IDs for an existing cluster.</p> </important> <p>Cluster updates
         * are asynchronous, and they should finish within a few minutes. During an update,
         * the cluster status moves to <code>UPDATING</code> (this status transition is
         * eventually consistent). When the update is complete (either <code>Failed</code>
         * or <code>Successful</code>), the cluster status moves to
         * <code>Active</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateClusterConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClusterConfigOutcomeCallable UpdateClusterConfigCallable(const Model::UpdateClusterConfigRequest& request) const;

        /**
         * <p>Updates an Amazon EKS cluster configuration. Your cluster continues to
         * function during the update. The response output includes an update ID that you
         * can use to track the status of your cluster update with the
         * <a>DescribeUpdate</a> API operation.</p> <p>You can use this API operation to
         * enable or disable exporting the Kubernetes control plane logs for your cluster
         * to CloudWatch Logs. By default, cluster control plane logs aren't exported to
         * CloudWatch Logs. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
         * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p> </note> <p>You can also use this API operation to enable or
         * disable public and private access to your cluster's Kubernetes API server
         * endpoint. By default, public access is enabled, and private access is disabled.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
         * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>. </p> <important> <p>At this time, you can not update the subnets or
         * security group IDs for an existing cluster.</p> </important> <p>Cluster updates
         * are asynchronous, and they should finish within a few minutes. During an update,
         * the cluster status moves to <code>UPDATING</code> (this status transition is
         * eventually consistent). When the update is complete (either <code>Failed</code>
         * or <code>Successful</code>), the cluster status moves to
         * <code>Active</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateClusterConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClusterConfigAsync(const Model::UpdateClusterConfigRequest& request, const UpdateClusterConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Amazon EKS cluster to the specified Kubernetes version. Your
         * cluster continues to function during the update. The response output includes an
         * update ID that you can use to track the status of your cluster update with the
         * <a>DescribeUpdate</a> API operation.</p> <p>Cluster updates are asynchronous,
         * and they should finish within a few minutes. During an update, the cluster
         * status moves to <code>UPDATING</code> (this status transition is eventually
         * consistent). When the update is complete (either <code>Failed</code> or
         * <code>Successful</code>), the cluster status moves to
         * <code>Active</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateClusterVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterVersionOutcome UpdateClusterVersion(const Model::UpdateClusterVersionRequest& request) const;

        /**
         * <p>Updates an Amazon EKS cluster to the specified Kubernetes version. Your
         * cluster continues to function during the update. The response output includes an
         * update ID that you can use to track the status of your cluster update with the
         * <a>DescribeUpdate</a> API operation.</p> <p>Cluster updates are asynchronous,
         * and they should finish within a few minutes. During an update, the cluster
         * status moves to <code>UPDATING</code> (this status transition is eventually
         * consistent). When the update is complete (either <code>Failed</code> or
         * <code>Successful</code>), the cluster status moves to
         * <code>Active</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateClusterVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClusterVersionOutcomeCallable UpdateClusterVersionCallable(const Model::UpdateClusterVersionRequest& request) const;

        /**
         * <p>Updates an Amazon EKS cluster to the specified Kubernetes version. Your
         * cluster continues to function during the update. The response output includes an
         * update ID that you can use to track the status of your cluster update with the
         * <a>DescribeUpdate</a> API operation.</p> <p>Cluster updates are asynchronous,
         * and they should finish within a few minutes. During an update, the cluster
         * status moves to <code>UPDATING</code> (this status transition is eventually
         * consistent). When the update is complete (either <code>Failed</code> or
         * <code>Successful</code>), the cluster status moves to
         * <code>Active</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateClusterVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClusterVersionAsync(const Model::UpdateClusterVersionRequest& request, const UpdateClusterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterAsyncHelper(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUpdateAsyncHelper(const Model::DescribeUpdateRequest& request, const DescribeUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUpdatesAsyncHelper(const Model::ListUpdatesRequest& request, const ListUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateClusterConfigAsyncHelper(const Model::UpdateClusterConfigRequest& request, const UpdateClusterConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateClusterVersionAsyncHelper(const Model::UpdateClusterVersionRequest& request, const UpdateClusterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EKS
} // namespace Aws
