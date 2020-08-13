/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/eks/model/CreateFargateProfileResult.h>
#include <aws/eks/model/CreateNodegroupResult.h>
#include <aws/eks/model/DeleteClusterResult.h>
#include <aws/eks/model/DeleteFargateProfileResult.h>
#include <aws/eks/model/DeleteNodegroupResult.h>
#include <aws/eks/model/DescribeClusterResult.h>
#include <aws/eks/model/DescribeFargateProfileResult.h>
#include <aws/eks/model/DescribeNodegroupResult.h>
#include <aws/eks/model/DescribeUpdateResult.h>
#include <aws/eks/model/ListClustersResult.h>
#include <aws/eks/model/ListFargateProfilesResult.h>
#include <aws/eks/model/ListNodegroupsResult.h>
#include <aws/eks/model/ListTagsForResourceResult.h>
#include <aws/eks/model/ListUpdatesResult.h>
#include <aws/eks/model/TagResourceResult.h>
#include <aws/eks/model/UntagResourceResult.h>
#include <aws/eks/model/UpdateClusterConfigResult.h>
#include <aws/eks/model/UpdateClusterVersionResult.h>
#include <aws/eks/model/UpdateNodegroupConfigResult.h>
#include <aws/eks/model/UpdateNodegroupVersionResult.h>
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
        class CreateFargateProfileRequest;
        class CreateNodegroupRequest;
        class DeleteClusterRequest;
        class DeleteFargateProfileRequest;
        class DeleteNodegroupRequest;
        class DescribeClusterRequest;
        class DescribeFargateProfileRequest;
        class DescribeNodegroupRequest;
        class DescribeUpdateRequest;
        class ListClustersRequest;
        class ListFargateProfilesRequest;
        class ListNodegroupsRequest;
        class ListTagsForResourceRequest;
        class ListUpdatesRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateClusterConfigRequest;
        class UpdateClusterVersionRequest;
        class UpdateNodegroupConfigRequest;
        class UpdateNodegroupVersionRequest;

        typedef Aws::Utils::Outcome<CreateClusterResult, EKSError> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<CreateFargateProfileResult, EKSError> CreateFargateProfileOutcome;
        typedef Aws::Utils::Outcome<CreateNodegroupResult, EKSError> CreateNodegroupOutcome;
        typedef Aws::Utils::Outcome<DeleteClusterResult, EKSError> DeleteClusterOutcome;
        typedef Aws::Utils::Outcome<DeleteFargateProfileResult, EKSError> DeleteFargateProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteNodegroupResult, EKSError> DeleteNodegroupOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterResult, EKSError> DescribeClusterOutcome;
        typedef Aws::Utils::Outcome<DescribeFargateProfileResult, EKSError> DescribeFargateProfileOutcome;
        typedef Aws::Utils::Outcome<DescribeNodegroupResult, EKSError> DescribeNodegroupOutcome;
        typedef Aws::Utils::Outcome<DescribeUpdateResult, EKSError> DescribeUpdateOutcome;
        typedef Aws::Utils::Outcome<ListClustersResult, EKSError> ListClustersOutcome;
        typedef Aws::Utils::Outcome<ListFargateProfilesResult, EKSError> ListFargateProfilesOutcome;
        typedef Aws::Utils::Outcome<ListNodegroupsResult, EKSError> ListNodegroupsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, EKSError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListUpdatesResult, EKSError> ListUpdatesOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, EKSError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, EKSError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateClusterConfigResult, EKSError> UpdateClusterConfigOutcome;
        typedef Aws::Utils::Outcome<UpdateClusterVersionResult, EKSError> UpdateClusterVersionOutcome;
        typedef Aws::Utils::Outcome<UpdateNodegroupConfigResult, EKSError> UpdateNodegroupConfigOutcome;
        typedef Aws::Utils::Outcome<UpdateNodegroupVersionResult, EKSError> UpdateNodegroupVersionOutcome;

        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<CreateFargateProfileOutcome> CreateFargateProfileOutcomeCallable;
        typedef std::future<CreateNodegroupOutcome> CreateNodegroupOutcomeCallable;
        typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
        typedef std::future<DeleteFargateProfileOutcome> DeleteFargateProfileOutcomeCallable;
        typedef std::future<DeleteNodegroupOutcome> DeleteNodegroupOutcomeCallable;
        typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
        typedef std::future<DescribeFargateProfileOutcome> DescribeFargateProfileOutcomeCallable;
        typedef std::future<DescribeNodegroupOutcome> DescribeNodegroupOutcomeCallable;
        typedef std::future<DescribeUpdateOutcome> DescribeUpdateOutcomeCallable;
        typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
        typedef std::future<ListFargateProfilesOutcome> ListFargateProfilesOutcomeCallable;
        typedef std::future<ListNodegroupsOutcome> ListNodegroupsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListUpdatesOutcome> ListUpdatesOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateClusterConfigOutcome> UpdateClusterConfigOutcomeCallable;
        typedef std::future<UpdateClusterVersionOutcome> UpdateClusterVersionOutcomeCallable;
        typedef std::future<UpdateNodegroupConfigOutcome> UpdateNodegroupConfigOutcomeCallable;
        typedef std::future<UpdateNodegroupVersionOutcome> UpdateNodegroupVersionOutcomeCallable;
} // namespace Model

  class EKSClient;

    typedef std::function<void(const EKSClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::CreateFargateProfileRequest&, const Model::CreateFargateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFargateProfileResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::CreateNodegroupRequest&, const Model::CreateNodegroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNodegroupResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeleteFargateProfileRequest&, const Model::DeleteFargateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFargateProfileResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeleteNodegroupRequest&, const Model::DeleteNodegroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNodegroupResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeFargateProfileRequest&, const Model::DescribeFargateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFargateProfileResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeNodegroupRequest&, const Model::DescribeNodegroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNodegroupResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeUpdateRequest&, const Model::DescribeUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUpdateResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListFargateProfilesRequest&, const Model::ListFargateProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFargateProfilesResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListNodegroupsRequest&, const Model::ListNodegroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNodegroupsResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListUpdatesRequest&, const Model::ListUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUpdatesResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateClusterConfigRequest&, const Model::UpdateClusterConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterConfigResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateClusterVersionRequest&, const Model::UpdateClusterVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterVersionResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateNodegroupConfigRequest&, const Model::UpdateNodegroupConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNodegroupConfigResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateNodegroupVersionRequest&, const Model::UpdateNodegroupVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNodegroupVersionResponseReceivedHandler;

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
         * </i>.</p>  <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p>  <p>Cluster creation typically takes between 10 and 15
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
         * </i>.</p>  <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p>  <p>Cluster creation typically takes between 10 and 15
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
         * </i>.</p>  <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p>  <p>Cluster creation typically takes between 10 and 15
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
         * <p>Creates an AWS Fargate profile for your Amazon EKS cluster. You must have at
         * least one Fargate profile in a cluster to be able to run pods on Fargate.</p>
         * <p>The Fargate profile allows an administrator to declare which pods run on
         * Fargate and specify which pods run on which Fargate profile. This declaration is
         * done through the profile’s selectors. Each profile can have up to five selectors
         * that contain a namespace and labels. A namespace is required for every selector.
         * The label field consists of multiple optional key-value pairs. Pods that match
         * the selectors are scheduled on Fargate. If a to-be-scheduled pod matches any of
         * the selectors in the Fargate profile, then that pod is run on Fargate.</p>
         * <p>When you create a Fargate profile, you must specify a pod execution role to
         * use with the pods that are scheduled with the profile. This role is added to the
         * cluster's Kubernetes <a
         * href="https://kubernetes.io/docs/admin/authorization/rbac/">Role Based Access
         * Control</a> (RBAC) for authorization so that the <code>kubelet</code> that is
         * running on the Fargate infrastructure can register with your Amazon EKS cluster
         * so that it can appear in your cluster as a node. The pod execution role also
         * provides IAM permissions to the Fargate infrastructure to allow read access to
         * Amazon ECR image repositories. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
         * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p> <p>Fargate profiles
         * are immutable. However, you can create a new updated profile to replace an
         * existing profile and then delete the original after the updated profile has
         * finished creating.</p> <p>If any Fargate profiles in a cluster are in the
         * <code>DELETING</code> status, you must wait for that Fargate profile to finish
         * deleting before you can create any other profiles in that cluster.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/fargate-profile.html">AWS
         * Fargate Profile</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateFargateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFargateProfileOutcome CreateFargateProfile(const Model::CreateFargateProfileRequest& request) const;

        /**
         * <p>Creates an AWS Fargate profile for your Amazon EKS cluster. You must have at
         * least one Fargate profile in a cluster to be able to run pods on Fargate.</p>
         * <p>The Fargate profile allows an administrator to declare which pods run on
         * Fargate and specify which pods run on which Fargate profile. This declaration is
         * done through the profile’s selectors. Each profile can have up to five selectors
         * that contain a namespace and labels. A namespace is required for every selector.
         * The label field consists of multiple optional key-value pairs. Pods that match
         * the selectors are scheduled on Fargate. If a to-be-scheduled pod matches any of
         * the selectors in the Fargate profile, then that pod is run on Fargate.</p>
         * <p>When you create a Fargate profile, you must specify a pod execution role to
         * use with the pods that are scheduled with the profile. This role is added to the
         * cluster's Kubernetes <a
         * href="https://kubernetes.io/docs/admin/authorization/rbac/">Role Based Access
         * Control</a> (RBAC) for authorization so that the <code>kubelet</code> that is
         * running on the Fargate infrastructure can register with your Amazon EKS cluster
         * so that it can appear in your cluster as a node. The pod execution role also
         * provides IAM permissions to the Fargate infrastructure to allow read access to
         * Amazon ECR image repositories. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
         * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p> <p>Fargate profiles
         * are immutable. However, you can create a new updated profile to replace an
         * existing profile and then delete the original after the updated profile has
         * finished creating.</p> <p>If any Fargate profiles in a cluster are in the
         * <code>DELETING</code> status, you must wait for that Fargate profile to finish
         * deleting before you can create any other profiles in that cluster.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/fargate-profile.html">AWS
         * Fargate Profile</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateFargateProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFargateProfileOutcomeCallable CreateFargateProfileCallable(const Model::CreateFargateProfileRequest& request) const;

        /**
         * <p>Creates an AWS Fargate profile for your Amazon EKS cluster. You must have at
         * least one Fargate profile in a cluster to be able to run pods on Fargate.</p>
         * <p>The Fargate profile allows an administrator to declare which pods run on
         * Fargate and specify which pods run on which Fargate profile. This declaration is
         * done through the profile’s selectors. Each profile can have up to five selectors
         * that contain a namespace and labels. A namespace is required for every selector.
         * The label field consists of multiple optional key-value pairs. Pods that match
         * the selectors are scheduled on Fargate. If a to-be-scheduled pod matches any of
         * the selectors in the Fargate profile, then that pod is run on Fargate.</p>
         * <p>When you create a Fargate profile, you must specify a pod execution role to
         * use with the pods that are scheduled with the profile. This role is added to the
         * cluster's Kubernetes <a
         * href="https://kubernetes.io/docs/admin/authorization/rbac/">Role Based Access
         * Control</a> (RBAC) for authorization so that the <code>kubelet</code> that is
         * running on the Fargate infrastructure can register with your Amazon EKS cluster
         * so that it can appear in your cluster as a node. The pod execution role also
         * provides IAM permissions to the Fargate infrastructure to allow read access to
         * Amazon ECR image repositories. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
         * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p> <p>Fargate profiles
         * are immutable. However, you can create a new updated profile to replace an
         * existing profile and then delete the original after the updated profile has
         * finished creating.</p> <p>If any Fargate profiles in a cluster are in the
         * <code>DELETING</code> status, you must wait for that Fargate profile to finish
         * deleting before you can create any other profiles in that cluster.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/fargate-profile.html">AWS
         * Fargate Profile</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateFargateProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFargateProfileAsync(const Model::CreateFargateProfileRequest& request, const CreateFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a managed worker node group for an Amazon EKS cluster. You can only
         * create a node group for your cluster that is equal to the current Kubernetes
         * version for the cluster. All node groups are created with the latest AMI release
         * version for the respective minor Kubernetes version of the cluster, unless you
         * deploy a custom AMI using a launch template. For more information about using
         * launch templates, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
         * template support</a>.</p> <p>An Amazon EKS managed node group is an Amazon EC2
         * Auto Scaling group and associated Amazon EC2 instances that are managed by AWS
         * for an Amazon EKS cluster. Each node group uses a version of the Amazon
         * EKS-optimized Amazon Linux 2 AMI. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html">Managed
         * Node Groups</a> in the <i>Amazon EKS User Guide</i>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateNodegroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNodegroupOutcome CreateNodegroup(const Model::CreateNodegroupRequest& request) const;

        /**
         * <p>Creates a managed worker node group for an Amazon EKS cluster. You can only
         * create a node group for your cluster that is equal to the current Kubernetes
         * version for the cluster. All node groups are created with the latest AMI release
         * version for the respective minor Kubernetes version of the cluster, unless you
         * deploy a custom AMI using a launch template. For more information about using
         * launch templates, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
         * template support</a>.</p> <p>An Amazon EKS managed node group is an Amazon EC2
         * Auto Scaling group and associated Amazon EC2 instances that are managed by AWS
         * for an Amazon EKS cluster. Each node group uses a version of the Amazon
         * EKS-optimized Amazon Linux 2 AMI. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html">Managed
         * Node Groups</a> in the <i>Amazon EKS User Guide</i>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateNodegroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNodegroupOutcomeCallable CreateNodegroupCallable(const Model::CreateNodegroupRequest& request) const;

        /**
         * <p>Creates a managed worker node group for an Amazon EKS cluster. You can only
         * create a node group for your cluster that is equal to the current Kubernetes
         * version for the cluster. All node groups are created with the latest AMI release
         * version for the respective minor Kubernetes version of the cluster, unless you
         * deploy a custom AMI using a launch template. For more information about using
         * launch templates, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-templates.html">Launch
         * template support</a>.</p> <p>An Amazon EKS managed node group is an Amazon EC2
         * Auto Scaling group and associated Amazon EC2 instances that are managed by AWS
         * for an Amazon EKS cluster. Each node group uses a version of the Amazon
         * EKS-optimized Amazon Linux 2 AMI. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html">Managed
         * Node Groups</a> in the <i>Amazon EKS User Guide</i>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateNodegroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNodegroupAsync(const Model::CreateNodegroupRequest& request, const CreateNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Amazon EKS cluster control plane.</p> <p>If you have active
         * services in your cluster that are associated with a load balancer, you must
         * delete those services before deleting the cluster so that the load balancers are
         * deleted properly. Otherwise, you can have orphaned resources in your VPC that
         * prevent you from being able to delete the VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/delete-cluster.html">Deleting
         * a Cluster</a> in the <i>Amazon EKS User Guide</i>.</p> <p>If you have managed
         * node groups or Fargate profiles attached to the cluster, you must delete them
         * first. For more information, see <a>DeleteNodegroup</a> and
         * <a>DeleteFargateProfile</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes the Amazon EKS cluster control plane.</p> <p>If you have active
         * services in your cluster that are associated with a load balancer, you must
         * delete those services before deleting the cluster so that the load balancers are
         * deleted properly. Otherwise, you can have orphaned resources in your VPC that
         * prevent you from being able to delete the VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/delete-cluster.html">Deleting
         * a Cluster</a> in the <i>Amazon EKS User Guide</i>.</p> <p>If you have managed
         * node groups or Fargate profiles attached to the cluster, you must delete them
         * first. For more information, see <a>DeleteNodegroup</a> and
         * <a>DeleteFargateProfile</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes the Amazon EKS cluster control plane.</p> <p>If you have active
         * services in your cluster that are associated with a load balancer, you must
         * delete those services before deleting the cluster so that the load balancers are
         * deleted properly. Otherwise, you can have orphaned resources in your VPC that
         * prevent you from being able to delete the VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/delete-cluster.html">Deleting
         * a Cluster</a> in the <i>Amazon EKS User Guide</i>.</p> <p>If you have managed
         * node groups or Fargate profiles attached to the cluster, you must delete them
         * first. For more information, see <a>DeleteNodegroup</a> and
         * <a>DeleteFargateProfile</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AWS Fargate profile.</p> <p>When you delete a Fargate profile, any
         * pods running on Fargate that were created with the profile are deleted. If those
         * pods match another Fargate profile, then they are scheduled on Fargate with that
         * profile. If they no longer match any Fargate profiles, then they are not
         * scheduled on Fargate and they may remain in a pending state.</p> <p>Only one
         * Fargate profile in a cluster can be in the <code>DELETING</code> status at a
         * time. You must wait for a Fargate profile to finish deleting before you can
         * delete any other profiles in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteFargateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFargateProfileOutcome DeleteFargateProfile(const Model::DeleteFargateProfileRequest& request) const;

        /**
         * <p>Deletes an AWS Fargate profile.</p> <p>When you delete a Fargate profile, any
         * pods running on Fargate that were created with the profile are deleted. If those
         * pods match another Fargate profile, then they are scheduled on Fargate with that
         * profile. If they no longer match any Fargate profiles, then they are not
         * scheduled on Fargate and they may remain in a pending state.</p> <p>Only one
         * Fargate profile in a cluster can be in the <code>DELETING</code> status at a
         * time. You must wait for a Fargate profile to finish deleting before you can
         * delete any other profiles in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteFargateProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFargateProfileOutcomeCallable DeleteFargateProfileCallable(const Model::DeleteFargateProfileRequest& request) const;

        /**
         * <p>Deletes an AWS Fargate profile.</p> <p>When you delete a Fargate profile, any
         * pods running on Fargate that were created with the profile are deleted. If those
         * pods match another Fargate profile, then they are scheduled on Fargate with that
         * profile. If they no longer match any Fargate profiles, then they are not
         * scheduled on Fargate and they may remain in a pending state.</p> <p>Only one
         * Fargate profile in a cluster can be in the <code>DELETING</code> status at a
         * time. You must wait for a Fargate profile to finish deleting before you can
         * delete any other profiles in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteFargateProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFargateProfileAsync(const Model::DeleteFargateProfileRequest& request, const DeleteFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon EKS node group for a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteNodegroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNodegroupOutcome DeleteNodegroup(const Model::DeleteNodegroupRequest& request) const;

        /**
         * <p>Deletes an Amazon EKS node group for a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteNodegroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNodegroupOutcomeCallable DeleteNodegroupCallable(const Model::DeleteNodegroupRequest& request) const;

        /**
         * <p>Deletes an Amazon EKS node group for a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteNodegroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNodegroupAsync(const Model::DeleteNodegroupRequest& request, const DeleteNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptive information about an Amazon EKS cluster.</p> <p>The API
         * server endpoint and certificate authority data returned by this operation are
         * required for <code>kubelet</code> and <code>kubectl</code> to communicate with
         * your Kubernetes API server. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/create-kubeconfig.html">Create
         * a kubeconfig for Amazon EKS</a>.</p>  <p>The API server endpoint and
         * certificate authority data aren't available until the cluster reaches the
         * <code>ACTIVE</code> state.</p> <p><h3>See Also:</h3>   <a
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
         * a kubeconfig for Amazon EKS</a>.</p>  <p>The API server endpoint and
         * certificate authority data aren't available until the cluster reaches the
         * <code>ACTIVE</code> state.</p> <p><h3>See Also:</h3>   <a
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
         * a kubeconfig for Amazon EKS</a>.</p>  <p>The API server endpoint and
         * certificate authority data aren't available until the cluster reaches the
         * <code>ACTIVE</code> state.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptive information about an AWS Fargate profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeFargateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFargateProfileOutcome DescribeFargateProfile(const Model::DescribeFargateProfileRequest& request) const;

        /**
         * <p>Returns descriptive information about an AWS Fargate profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeFargateProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFargateProfileOutcomeCallable DescribeFargateProfileCallable(const Model::DescribeFargateProfileRequest& request) const;

        /**
         * <p>Returns descriptive information about an AWS Fargate profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeFargateProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFargateProfileAsync(const Model::DescribeFargateProfileRequest& request, const DescribeFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptive information about an Amazon EKS node group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeNodegroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNodegroupOutcome DescribeNodegroup(const Model::DescribeNodegroupRequest& request) const;

        /**
         * <p>Returns descriptive information about an Amazon EKS node group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeNodegroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNodegroupOutcomeCallable DescribeNodegroupCallable(const Model::DescribeNodegroupRequest& request) const;

        /**
         * <p>Returns descriptive information about an Amazon EKS node group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeNodegroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNodegroupAsync(const Model::DescribeNodegroupRequest& request, const DescribeNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptive information about an update against your Amazon EKS
         * cluster or associated managed node group.</p> <p>When the status of the update
         * is <code>Succeeded</code>, the update is complete. If an update fails, the
         * status is <code>Failed</code>, and an error detail explains the reason for the
         * failure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUpdateOutcome DescribeUpdate(const Model::DescribeUpdateRequest& request) const;

        /**
         * <p>Returns descriptive information about an update against your Amazon EKS
         * cluster or associated managed node group.</p> <p>When the status of the update
         * is <code>Succeeded</code>, the update is complete. If an update fails, the
         * status is <code>Failed</code>, and an error detail explains the reason for the
         * failure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeUpdate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUpdateOutcomeCallable DescribeUpdateCallable(const Model::DescribeUpdateRequest& request) const;

        /**
         * <p>Returns descriptive information about an update against your Amazon EKS
         * cluster or associated managed node group.</p> <p>When the status of the update
         * is <code>Succeeded</code>, the update is complete. If an update fails, the
         * status is <code>Failed</code>, and an error detail explains the reason for the
         * failure.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists the AWS Fargate profiles associated with the specified cluster in your
         * AWS account in the specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListFargateProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFargateProfilesOutcome ListFargateProfiles(const Model::ListFargateProfilesRequest& request) const;

        /**
         * <p>Lists the AWS Fargate profiles associated with the specified cluster in your
         * AWS account in the specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListFargateProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFargateProfilesOutcomeCallable ListFargateProfilesCallable(const Model::ListFargateProfilesRequest& request) const;

        /**
         * <p>Lists the AWS Fargate profiles associated with the specified cluster in your
         * AWS account in the specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListFargateProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFargateProfilesAsync(const Model::ListFargateProfilesRequest& request, const ListFargateProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon EKS managed node groups associated with the specified
         * cluster in your AWS account in the specified Region. Self-managed node groups
         * are not listed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListNodegroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodegroupsOutcome ListNodegroups(const Model::ListNodegroupsRequest& request) const;

        /**
         * <p>Lists the Amazon EKS managed node groups associated with the specified
         * cluster in your AWS account in the specified Region. Self-managed node groups
         * are not listed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListNodegroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNodegroupsOutcomeCallable ListNodegroupsCallable(const Model::ListNodegroupsRequest& request) const;

        /**
         * <p>Lists the Amazon EKS managed node groups associated with the specified
         * cluster in your AWS account in the specified Region. Self-managed node groups
         * are not listed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListNodegroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNodegroupsAsync(const Model::ListNodegroupsRequest& request, const ListNodegroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tags for an Amazon EKS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for an Amazon EKS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for an Amazon EKS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the updates associated with an Amazon EKS cluster or managed node group
         * in your AWS account, in the specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListUpdates">AWS API
         * Reference</a></p>
         */
        virtual Model::ListUpdatesOutcome ListUpdates(const Model::ListUpdatesRequest& request) const;

        /**
         * <p>Lists the updates associated with an Amazon EKS cluster or managed node group
         * in your AWS account, in the specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListUpdates">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUpdatesOutcomeCallable ListUpdatesCallable(const Model::ListUpdatesRequest& request) const;

        /**
         * <p>Lists the updates associated with an Amazon EKS cluster or managed node group
         * in your AWS account, in the specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListUpdates">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUpdatesAsync(const Model::ListUpdatesRequest& request, const ListUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are deleted as well. Tags that you create for
         * Amazon EKS resources do not propagate to any other resources associated with the
         * cluster. For example, if you tag a cluster with this operation, that tag does
         * not automatically propagate to the subnets and worker nodes associated with the
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are deleted as well. Tags that you create for
         * Amazon EKS resources do not propagate to any other resources associated with the
         * cluster. For example, if you tag a cluster with this operation, that tag does
         * not automatically propagate to the subnets and worker nodes associated with the
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/TagResource">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are deleted as well. Tags that you create for
         * Amazon EKS resources do not propagate to any other resources associated with the
         * cluster. For example, if you tag a cluster with this operation, that tag does
         * not automatically propagate to the subnets and worker nodes associated with the
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/TagResource">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * </i>.</p>  <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p>  <p>You can also use this API operation to enable or
         * disable public and private access to your cluster's Kubernetes API server
         * endpoint. By default, public access is enabled, and private access is disabled.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
         * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>. </p>  <p>At this time, you can not update the subnets or
         * security group IDs for an existing cluster.</p>  <p>Cluster updates
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
         * </i>.</p>  <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p>  <p>You can also use this API operation to enable or
         * disable public and private access to your cluster's Kubernetes API server
         * endpoint. By default, public access is enabled, and private access is disabled.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
         * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>. </p>  <p>At this time, you can not update the subnets or
         * security group IDs for an existing cluster.</p>  <p>Cluster updates
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
         * </i>.</p>  <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p>  <p>You can also use this API operation to enable or
         * disable public and private access to your cluster's Kubernetes API server
         * endpoint. By default, public access is enabled, and private access is disabled.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
         * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>. </p>  <p>At this time, you can not update the subnets or
         * security group IDs for an existing cluster.</p>  <p>Cluster updates
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
         * <code>Successful</code>), the cluster status moves to <code>Active</code>.</p>
         * <p>If your cluster has managed node groups attached to it, all of your node
         * groups’ Kubernetes versions must match the cluster’s Kubernetes version in order
         * to update the cluster to a new Kubernetes version.</p><p><h3>See Also:</h3>   <a
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
         * <code>Successful</code>), the cluster status moves to <code>Active</code>.</p>
         * <p>If your cluster has managed node groups attached to it, all of your node
         * groups’ Kubernetes versions must match the cluster’s Kubernetes version in order
         * to update the cluster to a new Kubernetes version.</p><p><h3>See Also:</h3>   <a
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
         * <code>Successful</code>), the cluster status moves to <code>Active</code>.</p>
         * <p>If your cluster has managed node groups attached to it, all of your node
         * groups’ Kubernetes versions must match the cluster’s Kubernetes version in order
         * to update the cluster to a new Kubernetes version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateClusterVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClusterVersionAsync(const Model::UpdateClusterVersionRequest& request, const UpdateClusterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Amazon EKS managed node group configuration. Your node group
         * continues to function during the update. The response output includes an update
         * ID that you can use to track the status of your node group update with the
         * <a>DescribeUpdate</a> API operation. Currently you can update the Kubernetes
         * labels for a node group or the scaling configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateNodegroupConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNodegroupConfigOutcome UpdateNodegroupConfig(const Model::UpdateNodegroupConfigRequest& request) const;

        /**
         * <p>Updates an Amazon EKS managed node group configuration. Your node group
         * continues to function during the update. The response output includes an update
         * ID that you can use to track the status of your node group update with the
         * <a>DescribeUpdate</a> API operation. Currently you can update the Kubernetes
         * labels for a node group or the scaling configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateNodegroupConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNodegroupConfigOutcomeCallable UpdateNodegroupConfigCallable(const Model::UpdateNodegroupConfigRequest& request) const;

        /**
         * <p>Updates an Amazon EKS managed node group configuration. Your node group
         * continues to function during the update. The response output includes an update
         * ID that you can use to track the status of your node group update with the
         * <a>DescribeUpdate</a> API operation. Currently you can update the Kubernetes
         * labels for a node group or the scaling configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateNodegroupConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNodegroupConfigAsync(const Model::UpdateNodegroupConfigRequest& request, const UpdateNodegroupConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Kubernetes version or AMI version of an Amazon EKS managed node
         * group.</p> <p>You can update a node group using a launch template only if the
         * node group was originally deployed with a launch template. If you need to update
         * a custom AMI in a node group that was deployed with a launch template, then
         * update your custom AMI, specify the new ID in a new version of the launch
         * template, and then update the node group to the new version of the launch
         * template.</p> <p>If you update without a launch template, then you can update to
         * the latest available AMI version of a node group's current Kubernetes version by
         * not specifying a Kubernetes version in the request. You can update to the latest
         * AMI version of your cluster's current Kubernetes version by specifying your
         * cluster's Kubernetes version in the request. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
         * EKS-Optimized Linux AMI Versions</a> in the <i>Amazon EKS User Guide</i>.</p>
         * <p>You cannot roll back a node group to an earlier Kubernetes version or AMI
         * version.</p> <p>When a node in a managed node group is terminated due to a
         * scaling action or update, the pods in that node are drained first. Amazon EKS
         * attempts to drain the nodes gracefully and will fail if it is unable to do so.
         * You can <code>force</code> the update if Amazon EKS is unable to drain the nodes
         * as a result of a pod disruption budget issue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateNodegroupVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNodegroupVersionOutcome UpdateNodegroupVersion(const Model::UpdateNodegroupVersionRequest& request) const;

        /**
         * <p>Updates the Kubernetes version or AMI version of an Amazon EKS managed node
         * group.</p> <p>You can update a node group using a launch template only if the
         * node group was originally deployed with a launch template. If you need to update
         * a custom AMI in a node group that was deployed with a launch template, then
         * update your custom AMI, specify the new ID in a new version of the launch
         * template, and then update the node group to the new version of the launch
         * template.</p> <p>If you update without a launch template, then you can update to
         * the latest available AMI version of a node group's current Kubernetes version by
         * not specifying a Kubernetes version in the request. You can update to the latest
         * AMI version of your cluster's current Kubernetes version by specifying your
         * cluster's Kubernetes version in the request. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
         * EKS-Optimized Linux AMI Versions</a> in the <i>Amazon EKS User Guide</i>.</p>
         * <p>You cannot roll back a node group to an earlier Kubernetes version or AMI
         * version.</p> <p>When a node in a managed node group is terminated due to a
         * scaling action or update, the pods in that node are drained first. Amazon EKS
         * attempts to drain the nodes gracefully and will fail if it is unable to do so.
         * You can <code>force</code> the update if Amazon EKS is unable to drain the nodes
         * as a result of a pod disruption budget issue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateNodegroupVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNodegroupVersionOutcomeCallable UpdateNodegroupVersionCallable(const Model::UpdateNodegroupVersionRequest& request) const;

        /**
         * <p>Updates the Kubernetes version or AMI version of an Amazon EKS managed node
         * group.</p> <p>You can update a node group using a launch template only if the
         * node group was originally deployed with a launch template. If you need to update
         * a custom AMI in a node group that was deployed with a launch template, then
         * update your custom AMI, specify the new ID in a new version of the launch
         * template, and then update the node group to the new version of the launch
         * template.</p> <p>If you update without a launch template, then you can update to
         * the latest available AMI version of a node group's current Kubernetes version by
         * not specifying a Kubernetes version in the request. You can update to the latest
         * AMI version of your cluster's current Kubernetes version by specifying your
         * cluster's Kubernetes version in the request. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
         * EKS-Optimized Linux AMI Versions</a> in the <i>Amazon EKS User Guide</i>.</p>
         * <p>You cannot roll back a node group to an earlier Kubernetes version or AMI
         * version.</p> <p>When a node in a managed node group is terminated due to a
         * scaling action or update, the pods in that node are drained first. Amazon EKS
         * attempts to drain the nodes gracefully and will fail if it is unable to do so.
         * You can <code>force</code> the update if Amazon EKS is unable to drain the nodes
         * as a result of a pod disruption budget issue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateNodegroupVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNodegroupVersionAsync(const Model::UpdateNodegroupVersionRequest& request, const UpdateNodegroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFargateProfileAsyncHelper(const Model::CreateFargateProfileRequest& request, const CreateFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNodegroupAsyncHelper(const Model::CreateNodegroupRequest& request, const CreateNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFargateProfileAsyncHelper(const Model::DeleteFargateProfileRequest& request, const DeleteFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNodegroupAsyncHelper(const Model::DeleteNodegroupRequest& request, const DeleteNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterAsyncHelper(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFargateProfileAsyncHelper(const Model::DescribeFargateProfileRequest& request, const DescribeFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNodegroupAsyncHelper(const Model::DescribeNodegroupRequest& request, const DescribeNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUpdateAsyncHelper(const Model::DescribeUpdateRequest& request, const DescribeUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFargateProfilesAsyncHelper(const Model::ListFargateProfilesRequest& request, const ListFargateProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNodegroupsAsyncHelper(const Model::ListNodegroupsRequest& request, const ListNodegroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUpdatesAsyncHelper(const Model::ListUpdatesRequest& request, const ListUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateClusterConfigAsyncHelper(const Model::UpdateClusterConfigRequest& request, const UpdateClusterConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateClusterVersionAsyncHelper(const Model::UpdateClusterVersionRequest& request, const UpdateClusterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNodegroupConfigAsyncHelper(const Model::UpdateNodegroupConfigRequest& request, const UpdateNodegroupConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNodegroupVersionAsyncHelper(const Model::UpdateNodegroupVersionRequest& request, const UpdateNodegroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EKS
} // namespace Aws
