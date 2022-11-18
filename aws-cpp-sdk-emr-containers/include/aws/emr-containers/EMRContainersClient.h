/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-containers/EMRContainersServiceClientModel.h>
#include <aws/emr-containers/EMRContainersLegacyAsyncMacros.h>

namespace Aws
{
namespace EMRContainers
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRContainersClient(const Aws::EMRContainers::EMRContainersClientConfiguration& clientConfiguration = Aws::EMRContainers::EMRContainersClientConfiguration(),
                            std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider = Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRContainersClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider = Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG),
                            const Aws::EMRContainers::EMRContainersClientConfiguration& clientConfiguration = Aws::EMRContainers::EMRContainersClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRContainersClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider = Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG),
                            const Aws::EMRContainers::EMRContainersClientConfiguration& clientConfiguration = Aws::EMRContainers::EMRContainersClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRContainersClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRContainersClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRContainersClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EMRContainersClient();


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
         * <p>Cancels a job run. A job run is a unit of work, such as a Spark jar, PySpark
         * script, or SparkSQL query, that you submit to Amazon EMR on EKS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CancelJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobRunOutcome CancelJobRun(const Model::CancelJobRunRequest& request) const;


        /**
         * <p>Creates a job template. Job template stores values of StartJobRun API request
         * in a template and can be used to start a job run. Job template allows two use
         * cases: avoid repeating recurring StartJobRun API request values, enforcing
         * certain values in StartJobRun API request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CreateJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobTemplateOutcome CreateJobTemplate(const Model::CreateJobTemplateRequest& request) const;


        /**
         * <p>Creates a managed endpoint. A managed endpoint is a gateway that connects EMR
         * Studio to Amazon EMR on EKS so that EMR Studio can communicate with your virtual
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CreateManagedEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateManagedEndpointOutcome CreateManagedEndpoint(const Model::CreateManagedEndpointRequest& request) const;


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
         * <p>Deletes a job template. Job template stores values of StartJobRun API request
         * in a template and can be used to start a job run. Job template allows two use
         * cases: avoid repeating recurring StartJobRun API request values, enforcing
         * certain values in StartJobRun API request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DeleteJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobTemplateOutcome DeleteJobTemplate(const Model::DeleteJobTemplateRequest& request) const;


        /**
         * <p>Deletes a managed endpoint. A managed endpoint is a gateway that connects EMR
         * Studio to Amazon EMR on EKS so that EMR Studio can communicate with your virtual
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DeleteManagedEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteManagedEndpointOutcome DeleteManagedEndpoint(const Model::DeleteManagedEndpointRequest& request) const;


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
         * <p>Displays detailed information about a job run. A job run is a unit of work,
         * such as a Spark jar, PySpark script, or SparkSQL query, that you submit to
         * Amazon EMR on EKS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobRunOutcome DescribeJobRun(const Model::DescribeJobRunRequest& request) const;


        /**
         * <p>Displays detailed information about a specified job template. Job template
         * stores values of StartJobRun API request in a template and can be used to start
         * a job run. Job template allows two use cases: avoid repeating recurring
         * StartJobRun API request values, enforcing certain values in StartJobRun API
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobTemplateOutcome DescribeJobTemplate(const Model::DescribeJobTemplateRequest& request) const;


        /**
         * <p>Displays detailed information about a managed endpoint. A managed endpoint is
         * a gateway that connects EMR Studio to Amazon EMR on EKS so that EMR Studio can
         * communicate with your virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/DescribeManagedEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeManagedEndpointOutcome DescribeManagedEndpoint(const Model::DescribeManagedEndpointRequest& request) const;


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
         * <p>Lists job runs based on a set of parameters. A job run is a unit of work,
         * such as a Spark jar, PySpark script, or SparkSQL query, that you submit to
         * Amazon EMR on EKS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListJobRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobRunsOutcome ListJobRuns(const Model::ListJobRunsRequest& request) const;


        /**
         * <p>Lists job templates based on a set of parameters. Job template stores values
         * of StartJobRun API request in a template and can be used to start a job run. Job
         * template allows two use cases: avoid repeating recurring StartJobRun API request
         * values, enforcing certain values in StartJobRun API request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListJobTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobTemplatesOutcome ListJobTemplates(const Model::ListJobTemplatesRequest& request) const;


        /**
         * <p>Lists managed endpoints based on a set of parameters. A managed endpoint is a
         * gateway that connects EMR Studio to Amazon EMR on EKS so that EMR Studio can
         * communicate with your virtual cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListManagedEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedEndpointsOutcome ListManagedEndpoints(const Model::ListManagedEndpointsRequest& request) const;


        /**
         * <p>Lists the tags assigned to the resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Starts a job run. A job run is a unit of work, such as a Spark jar, PySpark
         * script, or SparkSQL query, that you submit to Amazon EMR on EKS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/StartJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobRunOutcome StartJobRun(const Model::StartJobRunRequest& request) const;


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
         * <p>Removes tags from resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<EMRContainersEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const EMRContainersClientConfiguration& clientConfiguration);

      EMRContainersClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<EMRContainersEndpointProviderBase> m_endpointProvider;
  };

} // namespace EMRContainers
} // namespace Aws
