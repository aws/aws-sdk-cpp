/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/EMRContainersErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-containers/model/CancelJobRunResult.h>
#include <aws/emr-containers/model/CreateManagedEndpointResult.h>
#include <aws/emr-containers/model/CreateVirtualClusterResult.h>
#include <aws/emr-containers/model/DeleteManagedEndpointResult.h>
#include <aws/emr-containers/model/DeleteVirtualClusterResult.h>
#include <aws/emr-containers/model/DescribeJobRunResult.h>
#include <aws/emr-containers/model/DescribeManagedEndpointResult.h>
#include <aws/emr-containers/model/DescribeVirtualClusterResult.h>
#include <aws/emr-containers/model/ListJobRunsResult.h>
#include <aws/emr-containers/model/ListManagedEndpointsResult.h>
#include <aws/emr-containers/model/ListTagsForResourceResult.h>
#include <aws/emr-containers/model/ListVirtualClustersResult.h>
#include <aws/emr-containers/model/StartJobRunResult.h>
#include <aws/emr-containers/model/TagResourceResult.h>
#include <aws/emr-containers/model/UntagResourceResult.h>
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

namespace EMRContainers
{

namespace Model
{
        class CancelJobRunRequest;
        class CreateManagedEndpointRequest;
        class CreateVirtualClusterRequest;
        class DeleteManagedEndpointRequest;
        class DeleteVirtualClusterRequest;
        class DescribeJobRunRequest;
        class DescribeManagedEndpointRequest;
        class DescribeVirtualClusterRequest;
        class ListJobRunsRequest;
        class ListManagedEndpointsRequest;
        class ListTagsForResourceRequest;
        class ListVirtualClustersRequest;
        class StartJobRunRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CancelJobRunResult, EMRContainersError> CancelJobRunOutcome;
        typedef Aws::Utils::Outcome<CreateManagedEndpointResult, EMRContainersError> CreateManagedEndpointOutcome;
        typedef Aws::Utils::Outcome<CreateVirtualClusterResult, EMRContainersError> CreateVirtualClusterOutcome;
        typedef Aws::Utils::Outcome<DeleteManagedEndpointResult, EMRContainersError> DeleteManagedEndpointOutcome;
        typedef Aws::Utils::Outcome<DeleteVirtualClusterResult, EMRContainersError> DeleteVirtualClusterOutcome;
        typedef Aws::Utils::Outcome<DescribeJobRunResult, EMRContainersError> DescribeJobRunOutcome;
        typedef Aws::Utils::Outcome<DescribeManagedEndpointResult, EMRContainersError> DescribeManagedEndpointOutcome;
        typedef Aws::Utils::Outcome<DescribeVirtualClusterResult, EMRContainersError> DescribeVirtualClusterOutcome;
        typedef Aws::Utils::Outcome<ListJobRunsResult, EMRContainersError> ListJobRunsOutcome;
        typedef Aws::Utils::Outcome<ListManagedEndpointsResult, EMRContainersError> ListManagedEndpointsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, EMRContainersError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListVirtualClustersResult, EMRContainersError> ListVirtualClustersOutcome;
        typedef Aws::Utils::Outcome<StartJobRunResult, EMRContainersError> StartJobRunOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, EMRContainersError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, EMRContainersError> UntagResourceOutcome;

        typedef std::future<CancelJobRunOutcome> CancelJobRunOutcomeCallable;
        typedef std::future<CreateManagedEndpointOutcome> CreateManagedEndpointOutcomeCallable;
        typedef std::future<CreateVirtualClusterOutcome> CreateVirtualClusterOutcomeCallable;
        typedef std::future<DeleteManagedEndpointOutcome> DeleteManagedEndpointOutcomeCallable;
        typedef std::future<DeleteVirtualClusterOutcome> DeleteVirtualClusterOutcomeCallable;
        typedef std::future<DescribeJobRunOutcome> DescribeJobRunOutcomeCallable;
        typedef std::future<DescribeManagedEndpointOutcome> DescribeManagedEndpointOutcomeCallable;
        typedef std::future<DescribeVirtualClusterOutcome> DescribeVirtualClusterOutcomeCallable;
        typedef std::future<ListJobRunsOutcome> ListJobRunsOutcomeCallable;
        typedef std::future<ListManagedEndpointsOutcome> ListManagedEndpointsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListVirtualClustersOutcome> ListVirtualClustersOutcomeCallable;
        typedef std::future<StartJobRunOutcome> StartJobRunOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class EMRContainersClient;

    typedef std::function<void(const EMRContainersClient*, const Model::CancelJobRunRequest&, const Model::CancelJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::CreateManagedEndpointRequest&, const Model::CreateManagedEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateManagedEndpointResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::CreateVirtualClusterRequest&, const Model::CreateVirtualClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualClusterResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::DeleteManagedEndpointRequest&, const Model::DeleteManagedEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteManagedEndpointResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::DeleteVirtualClusterRequest&, const Model::DeleteVirtualClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualClusterResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::DescribeJobRunRequest&, const Model::DescribeJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::DescribeManagedEndpointRequest&, const Model::DescribeManagedEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeManagedEndpointResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::DescribeVirtualClusterRequest&, const Model::DescribeVirtualClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualClusterResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::ListJobRunsRequest&, const Model::ListJobRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobRunsResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::ListManagedEndpointsRequest&, const Model::ListManagedEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedEndpointsResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::ListVirtualClustersRequest&, const Model::ListVirtualClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualClustersResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::StartJobRunRequest&, const Model::StartJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>Amazon EMR on EKS provides a deployment option for Amazon EMR that allows you
   * to run open-source big data frameworks on Amazon Elastic Kubernetes Service
   * (Amazon EKS). With this deployment option, you can focus on running analytics
   * workloads while Amazon EMR on EKS builds, configures, and manages containers for
   * open-source applications. For more information about Amazon EMR on EKS concepts
   * and tasks, see <a
   * href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/emr-eks.html">What
   * is Amazon EMR on EKS</a>.</p> <p> <i>Amazon EMR containers</i> is the API name
   * for Amazon EMR on EKS. The <code>emr-containers</code> prefix is used in the
   * following scenarios: </p> <ul> <li> <p>It is the prefix in the CLI commands for
   * Amazon EMR on EKS. For example, <code>aws emr-containers
   * start-job-run</code>.</p> </li> <li> <p>It is the prefix before IAM policy
   * actions for Amazon EMR on EKS. For example, <code>"Action": [
   * "emr-containers:StartJobRun"]</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-actions">Policy
   * actions for Amazon EMR on EKS</a>.</p> </li> <li> <p>It is the prefix used in
   * Amazon EMR on EKS service endpoints. For example,
   * <code>emr-containers.us-east-2.amazonaws.com</code>. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/service-quotas.html#service-endpoints">Amazon
   * EMR on EKS Service Endpoints</a>.</p> </li> </ul>
   */
  class AWS_EMRCONTAINERS_API EMRContainersClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRContainersClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRContainersClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRContainersClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~EMRContainersClient();


        /**
         * <p>Cancels a job run. A job run is a unit of work, such as a Spark jar, PySpark
         * script, or SparkSQL query, that you submit to Amazon EMR on EKS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CancelJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobRunOutcome CancelJobRun(const Model::CancelJobRunRequest& request) const;

        /**
         * <p>Cancels a job run. A job run is a unit of work, such as a Spark jar, PySpark
         * script, or SparkSQL query, that you submit to Amazon EMR on EKS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CancelJobRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobRunOutcomeCallable CancelJobRunCallable(const Model::CancelJobRunRequest& request) const;

        /**
         * <p>Cancels a job run. A job run is a unit of work, such as a Spark jar, PySpark
         * script, or SparkSQL query, that you submit to Amazon EMR on EKS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CancelJobRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobRunAsync(const Model::CancelJobRunRequest& request, const CancelJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a managed endpoint. A managed endpoint is a gateway that connects EMR
         * Studio to Amazon EMR on EKS so that EMR Studio can communicate with your virtual
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CreateManagedEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateManagedEndpointOutcome CreateManagedEndpoint(const Model::CreateManagedEndpointRequest& request) const;

        /**
         * <p>Creates a managed endpoint. A managed endpoint is a gateway that connects EMR
         * Studio to Amazon EMR on EKS so that EMR Studio can communicate with your virtual
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CreateManagedEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateManagedEndpointOutcomeCallable CreateManagedEndpointCallable(const Model::CreateManagedEndpointRequest& request) const;

        /**
         * <p>Creates a managed endpoint. A managed endpoint is a gateway that connects EMR
         * Studio to Amazon EMR on EKS so that EMR Studio can communicate with your virtual
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CreateManagedEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateManagedEndpointAsync(const Model::CreateManagedEndpointRequest& request, const CreateManagedEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a virtual cluster. Virtual cluster is a managed entity on Amazon EMR
         * on EKS. You can create, describe, list and delete virtual clusters. They do not
         * consume any additional resource in your system. A single virtual cluster maps to
         * a single Kubernetes namespace. Given this relationship, you can model virtual
         * clusters the same way you model Kubernetes namespaces to meet your
         * requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CreateVirtualCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualClusterOutcome CreateVirtualCluster(const Model::CreateVirtualClusterRequest& request) const;

        /**
         * <p>Creates a virtual cluster. Virtual cluster is a managed entity on Amazon EMR
         * on EKS. You can create, describe, list and delete virtual clusters. They do not
         * consume any additional resource in your system. A single virtual cluster maps to
         * a single Kubernetes namespace. Given this relationship, you can model virtual
         * clusters the same way you model Kubernetes namespaces to meet your
         * requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CreateVirtualCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualClusterOutcomeCallable CreateVirtualClusterCallable(const Model::CreateVirtualClusterRequest& request) const;

        /**
         * <p>Creates a virtual cluster. Virtual cluster is a managed entity on Amazon EMR
         * on EKS. You can create, describe, list and delete virtual clusters. They do not
         * consume any additional resource in your system. A single virtual cluster maps to
         * a single Kubernetes namespace. Given this relationship, you can model virtual
         * clusters the same way you model Kubernetes namespaces to meet your
         * requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CreateVirtualCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualClusterAsync(const Model::CreateVirtualClusterRequest& request, const CreateVirtualClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a managed endpoint. A managed endpoint is a gateway that connects EMR
         * Studio to Amazon EMR on EKS so that EMR Studio can communicate with your virtual
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DeleteManagedEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteManagedEndpointOutcome DeleteManagedEndpoint(const Model::DeleteManagedEndpointRequest& request) const;

        /**
         * <p>Deletes a managed endpoint. A managed endpoint is a gateway that connects EMR
         * Studio to Amazon EMR on EKS so that EMR Studio can communicate with your virtual
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DeleteManagedEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteManagedEndpointOutcomeCallable DeleteManagedEndpointCallable(const Model::DeleteManagedEndpointRequest& request) const;

        /**
         * <p>Deletes a managed endpoint. A managed endpoint is a gateway that connects EMR
         * Studio to Amazon EMR on EKS so that EMR Studio can communicate with your virtual
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DeleteManagedEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteManagedEndpointAsync(const Model::DeleteManagedEndpointRequest& request, const DeleteManagedEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a virtual cluster. Virtual cluster is a managed entity on Amazon EMR
         * on EKS. You can create, describe, list and delete virtual clusters. They do not
         * consume any additional resource in your system. A single virtual cluster maps to
         * a single Kubernetes namespace. Given this relationship, you can model virtual
         * clusters the same way you model Kubernetes namespaces to meet your
         * requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DeleteVirtualCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualClusterOutcome DeleteVirtualCluster(const Model::DeleteVirtualClusterRequest& request) const;

        /**
         * <p>Deletes a virtual cluster. Virtual cluster is a managed entity on Amazon EMR
         * on EKS. You can create, describe, list and delete virtual clusters. They do not
         * consume any additional resource in your system. A single virtual cluster maps to
         * a single Kubernetes namespace. Given this relationship, you can model virtual
         * clusters the same way you model Kubernetes namespaces to meet your
         * requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DeleteVirtualCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualClusterOutcomeCallable DeleteVirtualClusterCallable(const Model::DeleteVirtualClusterRequest& request) const;

        /**
         * <p>Deletes a virtual cluster. Virtual cluster is a managed entity on Amazon EMR
         * on EKS. You can create, describe, list and delete virtual clusters. They do not
         * consume any additional resource in your system. A single virtual cluster maps to
         * a single Kubernetes namespace. Given this relationship, you can model virtual
         * clusters the same way you model Kubernetes namespaces to meet your
         * requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DeleteVirtualCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualClusterAsync(const Model::DeleteVirtualClusterRequest& request, const DeleteVirtualClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays detailed information about a job run. A job run is a unit of work,
         * such as a Spark jar, PySpark script, or SparkSQL query, that you submit to
         * Amazon EMR on EKS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobRunOutcome DescribeJobRun(const Model::DescribeJobRunRequest& request) const;

        /**
         * <p>Displays detailed information about a job run. A job run is a unit of work,
         * such as a Spark jar, PySpark script, or SparkSQL query, that you submit to
         * Amazon EMR on EKS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeJobRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobRunOutcomeCallable DescribeJobRunCallable(const Model::DescribeJobRunRequest& request) const;

        /**
         * <p>Displays detailed information about a job run. A job run is a unit of work,
         * such as a Spark jar, PySpark script, or SparkSQL query, that you submit to
         * Amazon EMR on EKS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeJobRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobRunAsync(const Model::DescribeJobRunRequest& request, const DescribeJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays detailed information about a managed endpoint. A managed endpoint is
         * a gateway that connects EMR Studio to Amazon EMR on EKS so that EMR Studio can
         * communicate with your virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeManagedEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeManagedEndpointOutcome DescribeManagedEndpoint(const Model::DescribeManagedEndpointRequest& request) const;

        /**
         * <p>Displays detailed information about a managed endpoint. A managed endpoint is
         * a gateway that connects EMR Studio to Amazon EMR on EKS so that EMR Studio can
         * communicate with your virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeManagedEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeManagedEndpointOutcomeCallable DescribeManagedEndpointCallable(const Model::DescribeManagedEndpointRequest& request) const;

        /**
         * <p>Displays detailed information about a managed endpoint. A managed endpoint is
         * a gateway that connects EMR Studio to Amazon EMR on EKS so that EMR Studio can
         * communicate with your virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeManagedEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeManagedEndpointAsync(const Model::DescribeManagedEndpointRequest& request, const DescribeManagedEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays detailed information about a specified virtual cluster. Virtual
         * cluster is a managed entity on Amazon EMR on EKS. You can create, describe, list
         * and delete virtual clusters. They do not consume any additional resource in your
         * system. A single virtual cluster maps to a single Kubernetes namespace. Given
         * this relationship, you can model virtual clusters the same way you model
         * Kubernetes namespaces to meet your requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeVirtualCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualClusterOutcome DescribeVirtualCluster(const Model::DescribeVirtualClusterRequest& request) const;

        /**
         * <p>Displays detailed information about a specified virtual cluster. Virtual
         * cluster is a managed entity on Amazon EMR on EKS. You can create, describe, list
         * and delete virtual clusters. They do not consume any additional resource in your
         * system. A single virtual cluster maps to a single Kubernetes namespace. Given
         * this relationship, you can model virtual clusters the same way you model
         * Kubernetes namespaces to meet your requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeVirtualCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualClusterOutcomeCallable DescribeVirtualClusterCallable(const Model::DescribeVirtualClusterRequest& request) const;

        /**
         * <p>Displays detailed information about a specified virtual cluster. Virtual
         * cluster is a managed entity on Amazon EMR on EKS. You can create, describe, list
         * and delete virtual clusters. They do not consume any additional resource in your
         * system. A single virtual cluster maps to a single Kubernetes namespace. Given
         * this relationship, you can model virtual clusters the same way you model
         * Kubernetes namespaces to meet your requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeVirtualCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualClusterAsync(const Model::DescribeVirtualClusterRequest& request, const DescribeVirtualClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists job runs based on a set of parameters. A job run is a unit of work,
         * such as a Spark jar, PySpark script, or SparkSQL query, that you submit to
         * Amazon EMR on EKS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListJobRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobRunsOutcome ListJobRuns(const Model::ListJobRunsRequest& request) const;

        /**
         * <p>Lists job runs based on a set of parameters. A job run is a unit of work,
         * such as a Spark jar, PySpark script, or SparkSQL query, that you submit to
         * Amazon EMR on EKS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListJobRuns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobRunsOutcomeCallable ListJobRunsCallable(const Model::ListJobRunsRequest& request) const;

        /**
         * <p>Lists job runs based on a set of parameters. A job run is a unit of work,
         * such as a Spark jar, PySpark script, or SparkSQL query, that you submit to
         * Amazon EMR on EKS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListJobRuns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobRunsAsync(const Model::ListJobRunsRequest& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists managed endpoints based on a set of parameters. A managed endpoint is a
         * gateway that connects EMR Studio to Amazon EMR on EKS so that EMR Studio can
         * communicate with your virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListManagedEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedEndpointsOutcome ListManagedEndpoints(const Model::ListManagedEndpointsRequest& request) const;

        /**
         * <p>Lists managed endpoints based on a set of parameters. A managed endpoint is a
         * gateway that connects EMR Studio to Amazon EMR on EKS so that EMR Studio can
         * communicate with your virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListManagedEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListManagedEndpointsOutcomeCallable ListManagedEndpointsCallable(const Model::ListManagedEndpointsRequest& request) const;

        /**
         * <p>Lists managed endpoints based on a set of parameters. A managed endpoint is a
         * gateway that connects EMR Studio to Amazon EMR on EKS so that EMR Studio can
         * communicate with your virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListManagedEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListManagedEndpointsAsync(const Model::ListManagedEndpointsRequest& request, const ListManagedEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags assigned to the resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags assigned to the resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags assigned to the resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about the specified virtual cluster. Virtual cluster is a
         * managed entity on Amazon EMR on EKS. You can create, describe, list and delete
         * virtual clusters. They do not consume any additional resource in your system. A
         * single virtual cluster maps to a single Kubernetes namespace. Given this
         * relationship, you can model virtual clusters the same way you model Kubernetes
         * namespaces to meet your requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListVirtualClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualClustersOutcome ListVirtualClusters(const Model::ListVirtualClustersRequest& request) const;

        /**
         * <p>Lists information about the specified virtual cluster. Virtual cluster is a
         * managed entity on Amazon EMR on EKS. You can create, describe, list and delete
         * virtual clusters. They do not consume any additional resource in your system. A
         * single virtual cluster maps to a single Kubernetes namespace. Given this
         * relationship, you can model virtual clusters the same way you model Kubernetes
         * namespaces to meet your requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListVirtualClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualClustersOutcomeCallable ListVirtualClustersCallable(const Model::ListVirtualClustersRequest& request) const;

        /**
         * <p>Lists information about the specified virtual cluster. Virtual cluster is a
         * managed entity on Amazon EMR on EKS. You can create, describe, list and delete
         * virtual clusters. They do not consume any additional resource in your system. A
         * single virtual cluster maps to a single Kubernetes namespace. Given this
         * relationship, you can model virtual clusters the same way you model Kubernetes
         * namespaces to meet your requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListVirtualClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVirtualClustersAsync(const Model::ListVirtualClustersRequest& request, const ListVirtualClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a job run. A job run is a unit of work, such as a Spark jar, PySpark
         * script, or SparkSQL query, that you submit to Amazon EMR on EKS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/StartJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobRunOutcome StartJobRun(const Model::StartJobRunRequest& request) const;

        /**
         * <p>Starts a job run. A job run is a unit of work, such as a Spark jar, PySpark
         * script, or SparkSQL query, that you submit to Amazon EMR on EKS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/StartJobRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartJobRunOutcomeCallable StartJobRunCallable(const Model::StartJobRunRequest& request) const;

        /**
         * <p>Starts a job run. A job run is a unit of work, such as a Spark jar, PySpark
         * script, or SparkSQL query, that you submit to Amazon EMR on EKS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/StartJobRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartJobRunAsync(const Model::StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns tags to resources. A tag is a label that you assign to an AWS
         * resource. Each tag consists of a key and an optional value, both of which you
         * define. Tags enable you to categorize your AWS resources by attributes such as
         * purpose, owner, or environment. When you have many resources of the same type,
         * you can quickly identify a specific resource based on the tags you've assigned
         * to it. For example, you can define a set of tags for your Amazon EMR on EKS
         * clusters to help you track each cluster's owner and stack level. We recommend
         * that you devise a consistent set of tag keys for each resource type. You can
         * then search and filter the resources based on the tags that you
         * add.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns tags to resources. A tag is a label that you assign to an AWS
         * resource. Each tag consists of a key and an optional value, both of which you
         * define. Tags enable you to categorize your AWS resources by attributes such as
         * purpose, owner, or environment. When you have many resources of the same type,
         * you can quickly identify a specific resource based on the tags you've assigned
         * to it. For example, you can define a set of tags for your Amazon EMR on EKS
         * clusters to help you track each cluster's owner and stack level. We recommend
         * that you devise a consistent set of tag keys for each resource type. You can
         * then search and filter the resources based on the tags that you
         * add.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns tags to resources. A tag is a label that you assign to an AWS
         * resource. Each tag consists of a key and an optional value, both of which you
         * define. Tags enable you to categorize your AWS resources by attributes such as
         * purpose, owner, or environment. When you have many resources of the same type,
         * you can quickly identify a specific resource based on the tags you've assigned
         * to it. For example, you can define a set of tags for your Amazon EMR on EKS
         * clusters to help you track each cluster's owner and stack level. We recommend
         * that you devise a consistent set of tag keys for each resource type. You can
         * then search and filter the resources based on the tags that you
         * add.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelJobRunAsyncHelper(const Model::CancelJobRunRequest& request, const CancelJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateManagedEndpointAsyncHelper(const Model::CreateManagedEndpointRequest& request, const CreateManagedEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVirtualClusterAsyncHelper(const Model::CreateVirtualClusterRequest& request, const CreateVirtualClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteManagedEndpointAsyncHelper(const Model::DeleteManagedEndpointRequest& request, const DeleteManagedEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualClusterAsyncHelper(const Model::DeleteVirtualClusterRequest& request, const DeleteVirtualClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobRunAsyncHelper(const Model::DescribeJobRunRequest& request, const DescribeJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeManagedEndpointAsyncHelper(const Model::DescribeManagedEndpointRequest& request, const DescribeManagedEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualClusterAsyncHelper(const Model::DescribeVirtualClusterRequest& request, const DescribeVirtualClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobRunsAsyncHelper(const Model::ListJobRunsRequest& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListManagedEndpointsAsyncHelper(const Model::ListManagedEndpointsRequest& request, const ListManagedEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualClustersAsyncHelper(const Model::ListVirtualClustersRequest& request, const ListVirtualClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartJobRunAsyncHelper(const Model::StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EMRContainers
} // namespace Aws
