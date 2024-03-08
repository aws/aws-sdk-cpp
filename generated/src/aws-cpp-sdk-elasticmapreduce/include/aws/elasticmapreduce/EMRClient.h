/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/EMRServiceClientModel.h>

namespace Aws
{
namespace EMR
{
  /**
   * <p>Amazon EMR is a web service that makes it easier to process large amounts of
   * data efficiently. Amazon EMR uses Hadoop processing combined with several Amazon
   * Web Services services to do tasks such as web indexing, data mining, log file
   * analysis, machine learning, scientific simulation, and data warehouse
   * management.</p>
   */
  class AWS_EMR_API EMRClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<EMRClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef EMRClientConfiguration ClientConfigurationType;
      typedef EMREndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRClient(const Aws::EMR::EMRClientConfiguration& clientConfiguration = Aws::EMR::EMRClientConfiguration(),
                  std::shared_ptr<EMREndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<EMREndpointProviderBase> endpointProvider = nullptr,
                  const Aws::EMR::EMRClientConfiguration& clientConfiguration = Aws::EMR::EMRClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<EMREndpointProviderBase> endpointProvider = nullptr,
                  const Aws::EMR::EMRClientConfiguration& clientConfiguration = Aws::EMR::EMRClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EMRClient();

        /**
         * <p>Adds an instance fleet to a running cluster.</p>  <p>The instance fleet
         * configuration is available only in Amazon EMR releases 4.8.0 and later,
         * excluding 5.0.x.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AddInstanceFleetOutcome AddInstanceFleet(const Model::AddInstanceFleetRequest& request) const;

        /**
         * A Callable wrapper for AddInstanceFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddInstanceFleetRequestT = Model::AddInstanceFleetRequest>
        Model::AddInstanceFleetOutcomeCallable AddInstanceFleetCallable(const AddInstanceFleetRequestT& request) const
        {
            return SubmitCallable(&EMRClient::AddInstanceFleet, request);
        }

        /**
         * An Async wrapper for AddInstanceFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddInstanceFleetRequestT = Model::AddInstanceFleetRequest>
        void AddInstanceFleetAsync(const AddInstanceFleetRequestT& request, const AddInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::AddInstanceFleet, request, handler, context);
        }

        /**
         * <p>Adds one or more instance groups to a running cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::AddInstanceGroupsOutcome AddInstanceGroups(const Model::AddInstanceGroupsRequest& request) const;

        /**
         * A Callable wrapper for AddInstanceGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddInstanceGroupsRequestT = Model::AddInstanceGroupsRequest>
        Model::AddInstanceGroupsOutcomeCallable AddInstanceGroupsCallable(const AddInstanceGroupsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::AddInstanceGroups, request);
        }

        /**
         * An Async wrapper for AddInstanceGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddInstanceGroupsRequestT = Model::AddInstanceGroupsRequest>
        void AddInstanceGroupsAsync(const AddInstanceGroupsRequestT& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::AddInstanceGroups, request, handler, context);
        }

        /**
         * <p>AddJobFlowSteps adds new steps to a running cluster. A maximum of 256 steps
         * are allowed in each job flow.</p> <p>If your cluster is long-running (such as a
         * Hive data warehouse) or complex, you may require more than 256 steps to process
         * your data. You can bypass the 256-step limitation in various ways, including
         * using SSH to connect to the master node and submitting queries directly to the
         * software running on the master node, such as Hive and Hadoop.</p> <p>A step
         * specifies the location of a JAR file stored either on the master node of the
         * cluster or in Amazon S3. Each step is performed by the main function of the main
         * class of the JAR file. The main class can be specified either in the manifest of
         * the JAR or by using the MainFunction parameter of the step.</p> <p>Amazon EMR
         * executes each step in the order listed. For a step to be considered complete,
         * the main function must exit with a zero exit code and all Hadoop jobs started
         * while the step was running must have completed and run successfully.</p> <p>You
         * can only add steps to a cluster that is in one of the following states:
         * STARTING, BOOTSTRAPPING, RUNNING, or WAITING.</p>  <p>The string values
         * passed into <code>HadoopJarStep</code> object cannot exceed a total of 10240
         * characters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddJobFlowSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::AddJobFlowStepsOutcome AddJobFlowSteps(const Model::AddJobFlowStepsRequest& request) const;

        /**
         * A Callable wrapper for AddJobFlowSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddJobFlowStepsRequestT = Model::AddJobFlowStepsRequest>
        Model::AddJobFlowStepsOutcomeCallable AddJobFlowStepsCallable(const AddJobFlowStepsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::AddJobFlowSteps, request);
        }

        /**
         * An Async wrapper for AddJobFlowSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddJobFlowStepsRequestT = Model::AddJobFlowStepsRequest>
        void AddJobFlowStepsAsync(const AddJobFlowStepsRequestT& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::AddJobFlowSteps, request, handler, context);
        }

        /**
         * <p>Adds tags to an Amazon EMR resource, such as a cluster or an Amazon EMR
         * Studio. Tags make it easier to associate resources in various ways, such as
         * grouping clusters to track your Amazon EMR resource allocation costs. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-tags.html">Tag
         * Clusters</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * A Callable wrapper for AddTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        Model::AddTagsOutcomeCallable AddTagsCallable(const AddTagsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::AddTags, request);
        }

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        void AddTagsAsync(const AddTagsRequestT& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::AddTags, request, handler, context);
        }

        /**
         * <p>Cancels a pending step or steps in a running cluster. Available only in
         * Amazon EMR versions 4.8.0 and later, excluding version 5.0.0. A maximum of 256
         * steps are allowed in each CancelSteps request. CancelSteps is idempotent but
         * asynchronous; it does not guarantee that a step will be canceled, even if the
         * request is successfully submitted. When you use Amazon EMR releases 5.28.0 and
         * later, you can cancel steps that are in a <code>PENDING</code> or
         * <code>RUNNING</code> state. In earlier versions of Amazon EMR, you can only
         * cancel steps that are in a <code>PENDING</code> state. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CancelSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelStepsOutcome CancelSteps(const Model::CancelStepsRequest& request) const;

        /**
         * A Callable wrapper for CancelSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelStepsRequestT = Model::CancelStepsRequest>
        Model::CancelStepsOutcomeCallable CancelStepsCallable(const CancelStepsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::CancelSteps, request);
        }

        /**
         * An Async wrapper for CancelSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelStepsRequestT = Model::CancelStepsRequest>
        void CancelStepsAsync(const CancelStepsRequestT& request, const CancelStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::CancelSteps, request, handler, context);
        }

        /**
         * <p>Creates a security configuration, which is stored in the service and can be
         * specified when a cluster is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityConfigurationOutcome CreateSecurityConfiguration(const Model::CreateSecurityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateSecurityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSecurityConfigurationRequestT = Model::CreateSecurityConfigurationRequest>
        Model::CreateSecurityConfigurationOutcomeCallable CreateSecurityConfigurationCallable(const CreateSecurityConfigurationRequestT& request) const
        {
            return SubmitCallable(&EMRClient::CreateSecurityConfiguration, request);
        }

        /**
         * An Async wrapper for CreateSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSecurityConfigurationRequestT = Model::CreateSecurityConfigurationRequest>
        void CreateSecurityConfigurationAsync(const CreateSecurityConfigurationRequestT& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::CreateSecurityConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon EMR Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioOutcome CreateStudio(const Model::CreateStudioRequest& request) const;

        /**
         * A Callable wrapper for CreateStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStudioRequestT = Model::CreateStudioRequest>
        Model::CreateStudioOutcomeCallable CreateStudioCallable(const CreateStudioRequestT& request) const
        {
            return SubmitCallable(&EMRClient::CreateStudio, request);
        }

        /**
         * An Async wrapper for CreateStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStudioRequestT = Model::CreateStudioRequest>
        void CreateStudioAsync(const CreateStudioRequestT& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::CreateStudio, request, handler, context);
        }

        /**
         * <p>Maps a user or group to the Amazon EMR Studio specified by
         * <code>StudioId</code>, and applies a session policy to refine Studio permissions
         * for that user or group. Use <code>CreateStudioSessionMapping</code> to assign
         * users to a Studio when you use IAM Identity Center authentication. For
         * instructions on how to assign users to a Studio when you use IAM authentication,
         * see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-studio-manage-users.html#emr-studio-assign-users-groups">Assign
         * a user or group to your EMR Studio</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateStudioSessionMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioSessionMappingOutcome CreateStudioSessionMapping(const Model::CreateStudioSessionMappingRequest& request) const;

        /**
         * A Callable wrapper for CreateStudioSessionMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStudioSessionMappingRequestT = Model::CreateStudioSessionMappingRequest>
        Model::CreateStudioSessionMappingOutcomeCallable CreateStudioSessionMappingCallable(const CreateStudioSessionMappingRequestT& request) const
        {
            return SubmitCallable(&EMRClient::CreateStudioSessionMapping, request);
        }

        /**
         * An Async wrapper for CreateStudioSessionMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStudioSessionMappingRequestT = Model::CreateStudioSessionMappingRequest>
        void CreateStudioSessionMappingAsync(const CreateStudioSessionMappingRequestT& request, const CreateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::CreateStudioSessionMapping, request, handler, context);
        }

        /**
         * <p>Deletes a security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityConfigurationOutcome DeleteSecurityConfiguration(const Model::DeleteSecurityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecurityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSecurityConfigurationRequestT = Model::DeleteSecurityConfigurationRequest>
        Model::DeleteSecurityConfigurationOutcomeCallable DeleteSecurityConfigurationCallable(const DeleteSecurityConfigurationRequestT& request) const
        {
            return SubmitCallable(&EMRClient::DeleteSecurityConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSecurityConfigurationRequestT = Model::DeleteSecurityConfigurationRequest>
        void DeleteSecurityConfigurationAsync(const DeleteSecurityConfigurationRequestT& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::DeleteSecurityConfiguration, request, handler, context);
        }

        /**
         * <p>Removes an Amazon EMR Studio from the Studio metadata store.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioOutcome DeleteStudio(const Model::DeleteStudioRequest& request) const;

        /**
         * A Callable wrapper for DeleteStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStudioRequestT = Model::DeleteStudioRequest>
        Model::DeleteStudioOutcomeCallable DeleteStudioCallable(const DeleteStudioRequestT& request) const
        {
            return SubmitCallable(&EMRClient::DeleteStudio, request);
        }

        /**
         * An Async wrapper for DeleteStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStudioRequestT = Model::DeleteStudioRequest>
        void DeleteStudioAsync(const DeleteStudioRequestT& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::DeleteStudio, request, handler, context);
        }

        /**
         * <p>Removes a user or group from an Amazon EMR Studio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteStudioSessionMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioSessionMappingOutcome DeleteStudioSessionMapping(const Model::DeleteStudioSessionMappingRequest& request) const;

        /**
         * A Callable wrapper for DeleteStudioSessionMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStudioSessionMappingRequestT = Model::DeleteStudioSessionMappingRequest>
        Model::DeleteStudioSessionMappingOutcomeCallable DeleteStudioSessionMappingCallable(const DeleteStudioSessionMappingRequestT& request) const
        {
            return SubmitCallable(&EMRClient::DeleteStudioSessionMapping, request);
        }

        /**
         * An Async wrapper for DeleteStudioSessionMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStudioSessionMappingRequestT = Model::DeleteStudioSessionMappingRequest>
        void DeleteStudioSessionMappingAsync(const DeleteStudioSessionMappingRequestT& request, const DeleteStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::DeleteStudioSessionMapping, request, handler, context);
        }

        /**
         * <p>Provides cluster-level details including status, hardware and software
         * configuration, VPC settings, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

        /**
         * A Callable wrapper for DescribeCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeClusterRequestT = Model::DescribeClusterRequest>
        Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const DescribeClusterRequestT& request) const
        {
            return SubmitCallable(&EMRClient::DescribeCluster, request);
        }

        /**
         * An Async wrapper for DescribeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClusterRequestT = Model::DescribeClusterRequest>
        void DescribeClusterAsync(const DescribeClusterRequestT& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::DescribeCluster, request, handler, context);
        }

        /**
         * <p>Provides details of a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeNotebookExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotebookExecutionOutcome DescribeNotebookExecution(const Model::DescribeNotebookExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotebookExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNotebookExecutionRequestT = Model::DescribeNotebookExecutionRequest>
        Model::DescribeNotebookExecutionOutcomeCallable DescribeNotebookExecutionCallable(const DescribeNotebookExecutionRequestT& request) const
        {
            return SubmitCallable(&EMRClient::DescribeNotebookExecution, request);
        }

        /**
         * An Async wrapper for DescribeNotebookExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNotebookExecutionRequestT = Model::DescribeNotebookExecutionRequest>
        void DescribeNotebookExecutionAsync(const DescribeNotebookExecutionRequestT& request, const DescribeNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::DescribeNotebookExecution, request, handler, context);
        }

        /**
         * <p>Provides Amazon EMR release label details, such as the releases available the
         * Region where the API request is run, and the available applications for a
         * specific Amazon EMR release label. Can also list Amazon EMR releases that
         * support a specified version of Spark.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeReleaseLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReleaseLabelOutcome DescribeReleaseLabel(const Model::DescribeReleaseLabelRequest& request) const;

        /**
         * A Callable wrapper for DescribeReleaseLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReleaseLabelRequestT = Model::DescribeReleaseLabelRequest>
        Model::DescribeReleaseLabelOutcomeCallable DescribeReleaseLabelCallable(const DescribeReleaseLabelRequestT& request) const
        {
            return SubmitCallable(&EMRClient::DescribeReleaseLabel, request);
        }

        /**
         * An Async wrapper for DescribeReleaseLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReleaseLabelRequestT = Model::DescribeReleaseLabelRequest>
        void DescribeReleaseLabelAsync(const DescribeReleaseLabelRequestT& request, const DescribeReleaseLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::DescribeReleaseLabel, request, handler, context);
        }

        /**
         * <p>Provides the details of a security configuration by returning the
         * configuration JSON.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityConfigurationOutcome DescribeSecurityConfiguration(const Model::DescribeSecurityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeSecurityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSecurityConfigurationRequestT = Model::DescribeSecurityConfigurationRequest>
        Model::DescribeSecurityConfigurationOutcomeCallable DescribeSecurityConfigurationCallable(const DescribeSecurityConfigurationRequestT& request) const
        {
            return SubmitCallable(&EMRClient::DescribeSecurityConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSecurityConfigurationRequestT = Model::DescribeSecurityConfigurationRequest>
        void DescribeSecurityConfigurationAsync(const DescribeSecurityConfigurationRequestT& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::DescribeSecurityConfiguration, request, handler, context);
        }

        /**
         * <p>Provides more detail about the cluster step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStep">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStepOutcome DescribeStep(const Model::DescribeStepRequest& request) const;

        /**
         * A Callable wrapper for DescribeStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStepRequestT = Model::DescribeStepRequest>
        Model::DescribeStepOutcomeCallable DescribeStepCallable(const DescribeStepRequestT& request) const
        {
            return SubmitCallable(&EMRClient::DescribeStep, request);
        }

        /**
         * An Async wrapper for DescribeStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStepRequestT = Model::DescribeStepRequest>
        void DescribeStepAsync(const DescribeStepRequestT& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::DescribeStep, request, handler, context);
        }

        /**
         * <p>Returns details for the specified Amazon EMR Studio including ID, Name, VPC,
         * Studio access URL, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStudioOutcome DescribeStudio(const Model::DescribeStudioRequest& request) const;

        /**
         * A Callable wrapper for DescribeStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStudioRequestT = Model::DescribeStudioRequest>
        Model::DescribeStudioOutcomeCallable DescribeStudioCallable(const DescribeStudioRequestT& request) const
        {
            return SubmitCallable(&EMRClient::DescribeStudio, request);
        }

        /**
         * An Async wrapper for DescribeStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStudioRequestT = Model::DescribeStudioRequest>
        void DescribeStudioAsync(const DescribeStudioRequestT& request, const DescribeStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::DescribeStudio, request, handler, context);
        }

        /**
         * <p>Returns the auto-termination policy for an Amazon EMR cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetAutoTerminationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutoTerminationPolicyOutcome GetAutoTerminationPolicy(const Model::GetAutoTerminationPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetAutoTerminationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAutoTerminationPolicyRequestT = Model::GetAutoTerminationPolicyRequest>
        Model::GetAutoTerminationPolicyOutcomeCallable GetAutoTerminationPolicyCallable(const GetAutoTerminationPolicyRequestT& request) const
        {
            return SubmitCallable(&EMRClient::GetAutoTerminationPolicy, request);
        }

        /**
         * An Async wrapper for GetAutoTerminationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutoTerminationPolicyRequestT = Model::GetAutoTerminationPolicyRequest>
        void GetAutoTerminationPolicyAsync(const GetAutoTerminationPolicyRequestT& request, const GetAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::GetAutoTerminationPolicy, request, handler, context);
        }

        /**
         * <p>Returns the Amazon EMR block public access configuration for your Amazon Web
         * Services account in the current Region. For more information see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/configure-block-public-access.html">Configure
         * Block Public Access for Amazon EMR</a> in the <i>Amazon EMR Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetBlockPublicAccessConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlockPublicAccessConfigurationOutcome GetBlockPublicAccessConfiguration(const Model::GetBlockPublicAccessConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetBlockPublicAccessConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBlockPublicAccessConfigurationRequestT = Model::GetBlockPublicAccessConfigurationRequest>
        Model::GetBlockPublicAccessConfigurationOutcomeCallable GetBlockPublicAccessConfigurationCallable(const GetBlockPublicAccessConfigurationRequestT& request) const
        {
            return SubmitCallable(&EMRClient::GetBlockPublicAccessConfiguration, request);
        }

        /**
         * An Async wrapper for GetBlockPublicAccessConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBlockPublicAccessConfigurationRequestT = Model::GetBlockPublicAccessConfigurationRequest>
        void GetBlockPublicAccessConfigurationAsync(const GetBlockPublicAccessConfigurationRequestT& request, const GetBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::GetBlockPublicAccessConfiguration, request, handler, context);
        }

        /**
         * <p>Provides temporary, HTTP basic credentials that are associated with a given
         * runtime IAM role and used by a cluster with fine-grained access control
         * activated. You can use these credentials to connect to cluster endpoints that
         * support username and password authentication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetClusterSessionCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClusterSessionCredentialsOutcome GetClusterSessionCredentials(const Model::GetClusterSessionCredentialsRequest& request) const;

        /**
         * A Callable wrapper for GetClusterSessionCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetClusterSessionCredentialsRequestT = Model::GetClusterSessionCredentialsRequest>
        Model::GetClusterSessionCredentialsOutcomeCallable GetClusterSessionCredentialsCallable(const GetClusterSessionCredentialsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::GetClusterSessionCredentials, request);
        }

        /**
         * An Async wrapper for GetClusterSessionCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetClusterSessionCredentialsRequestT = Model::GetClusterSessionCredentialsRequest>
        void GetClusterSessionCredentialsAsync(const GetClusterSessionCredentialsRequestT& request, const GetClusterSessionCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::GetClusterSessionCredentials, request, handler, context);
        }

        /**
         * <p>Fetches the attached managed scaling policy for an Amazon EMR cluster.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetManagedScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedScalingPolicyOutcome GetManagedScalingPolicy(const Model::GetManagedScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetManagedScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetManagedScalingPolicyRequestT = Model::GetManagedScalingPolicyRequest>
        Model::GetManagedScalingPolicyOutcomeCallable GetManagedScalingPolicyCallable(const GetManagedScalingPolicyRequestT& request) const
        {
            return SubmitCallable(&EMRClient::GetManagedScalingPolicy, request);
        }

        /**
         * An Async wrapper for GetManagedScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetManagedScalingPolicyRequestT = Model::GetManagedScalingPolicyRequest>
        void GetManagedScalingPolicyAsync(const GetManagedScalingPolicyRequestT& request, const GetManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::GetManagedScalingPolicy, request, handler, context);
        }

        /**
         * <p>Fetches mapping details for the specified Amazon EMR Studio and identity
         * (user or group).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetStudioSessionMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioSessionMappingOutcome GetStudioSessionMapping(const Model::GetStudioSessionMappingRequest& request) const;

        /**
         * A Callable wrapper for GetStudioSessionMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStudioSessionMappingRequestT = Model::GetStudioSessionMappingRequest>
        Model::GetStudioSessionMappingOutcomeCallable GetStudioSessionMappingCallable(const GetStudioSessionMappingRequestT& request) const
        {
            return SubmitCallable(&EMRClient::GetStudioSessionMapping, request);
        }

        /**
         * An Async wrapper for GetStudioSessionMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStudioSessionMappingRequestT = Model::GetStudioSessionMappingRequest>
        void GetStudioSessionMappingAsync(const GetStudioSessionMappingRequestT& request, const GetStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::GetStudioSessionMapping, request, handler, context);
        }

        /**
         * <p>Provides information about the bootstrap actions associated with a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListBootstrapActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBootstrapActionsOutcome ListBootstrapActions(const Model::ListBootstrapActionsRequest& request) const;

        /**
         * A Callable wrapper for ListBootstrapActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBootstrapActionsRequestT = Model::ListBootstrapActionsRequest>
        Model::ListBootstrapActionsOutcomeCallable ListBootstrapActionsCallable(const ListBootstrapActionsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ListBootstrapActions, request);
        }

        /**
         * An Async wrapper for ListBootstrapActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBootstrapActionsRequestT = Model::ListBootstrapActionsRequest>
        void ListBootstrapActionsAsync(const ListBootstrapActionsRequestT& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ListBootstrapActions, request, handler, context);
        }

        /**
         * <p>Provides the status of all clusters visible to this Amazon Web Services
         * account. Allows you to filter the list of clusters based on certain criteria;
         * for example, filtering by cluster creation date and time or by status. This call
         * returns a maximum of 50 clusters in unsorted order per call, but returns a
         * marker to track the paging of the cluster list across multiple ListClusters
         * calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * A Callable wrapper for ListClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        Model::ListClustersOutcomeCallable ListClustersCallable(const ListClustersRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ListClusters, request);
        }

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        void ListClustersAsync(const ListClustersRequestT& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ListClusters, request, handler, context);
        }

        /**
         * <p>Lists all available details about the instance fleets in a cluster.</p>
         *  <p>The instance fleet configuration is available only in Amazon EMR
         * releases 4.8.0 and later, excluding 5.0.x versions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceFleetsOutcome ListInstanceFleets(const Model::ListInstanceFleetsRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstanceFleetsRequestT = Model::ListInstanceFleetsRequest>
        Model::ListInstanceFleetsOutcomeCallable ListInstanceFleetsCallable(const ListInstanceFleetsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ListInstanceFleets, request);
        }

        /**
         * An Async wrapper for ListInstanceFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstanceFleetsRequestT = Model::ListInstanceFleetsRequest>
        void ListInstanceFleetsAsync(const ListInstanceFleetsRequestT& request, const ListInstanceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ListInstanceFleets, request, handler, context);
        }

        /**
         * <p>Provides all available details about the instance groups in a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceGroupsOutcome ListInstanceGroups(const Model::ListInstanceGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstanceGroupsRequestT = Model::ListInstanceGroupsRequest>
        Model::ListInstanceGroupsOutcomeCallable ListInstanceGroupsCallable(const ListInstanceGroupsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ListInstanceGroups, request);
        }

        /**
         * An Async wrapper for ListInstanceGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstanceGroupsRequestT = Model::ListInstanceGroupsRequest>
        void ListInstanceGroupsAsync(const ListInstanceGroupsRequestT& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ListInstanceGroups, request, handler, context);
        }

        /**
         * <p>Provides information for all active Amazon EC2 instances and Amazon EC2
         * instances terminated in the last 30 days, up to a maximum of 2,000. Amazon EC2
         * instances in any of the following states are considered active:
         * AWAITING_FULFILLMENT, PROVISIONING, BOOTSTRAPPING, RUNNING.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstancesRequestT = Model::ListInstancesRequest>
        Model::ListInstancesOutcomeCallable ListInstancesCallable(const ListInstancesRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ListInstances, request);
        }

        /**
         * An Async wrapper for ListInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstancesRequestT = Model::ListInstancesRequest>
        void ListInstancesAsync(const ListInstancesRequestT& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ListInstances, request, handler, context);
        }

        /**
         * <p>Provides summaries of all notebook executions. You can filter the list based
         * on multiple criteria such as status, time range, and editor id. Returns a
         * maximum of 50 notebook executions and a marker to track the paging of a longer
         * notebook execution list across multiple <code>ListNotebookExecutions</code>
         * calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListNotebookExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotebookExecutionsOutcome ListNotebookExecutions(const Model::ListNotebookExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListNotebookExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNotebookExecutionsRequestT = Model::ListNotebookExecutionsRequest>
        Model::ListNotebookExecutionsOutcomeCallable ListNotebookExecutionsCallable(const ListNotebookExecutionsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ListNotebookExecutions, request);
        }

        /**
         * An Async wrapper for ListNotebookExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotebookExecutionsRequestT = Model::ListNotebookExecutionsRequest>
        void ListNotebookExecutionsAsync(const ListNotebookExecutionsRequestT& request, const ListNotebookExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ListNotebookExecutions, request, handler, context);
        }

        /**
         * <p>Retrieves release labels of Amazon EMR services in the Region where the API
         * is called.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListReleaseLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReleaseLabelsOutcome ListReleaseLabels(const Model::ListReleaseLabelsRequest& request) const;

        /**
         * A Callable wrapper for ListReleaseLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReleaseLabelsRequestT = Model::ListReleaseLabelsRequest>
        Model::ListReleaseLabelsOutcomeCallable ListReleaseLabelsCallable(const ListReleaseLabelsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ListReleaseLabels, request);
        }

        /**
         * An Async wrapper for ListReleaseLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReleaseLabelsRequestT = Model::ListReleaseLabelsRequest>
        void ListReleaseLabelsAsync(const ListReleaseLabelsRequestT& request, const ListReleaseLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ListReleaseLabels, request, handler, context);
        }

        /**
         * <p>Lists all the security configurations visible to this account, providing
         * their creation dates and times, and their names. This call returns a maximum of
         * 50 clusters per call, but returns a marker to track the paging of the cluster
         * list across multiple ListSecurityConfigurations calls.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSecurityConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityConfigurationsOutcome ListSecurityConfigurations(const Model::ListSecurityConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSecurityConfigurationsRequestT = Model::ListSecurityConfigurationsRequest>
        Model::ListSecurityConfigurationsOutcomeCallable ListSecurityConfigurationsCallable(const ListSecurityConfigurationsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ListSecurityConfigurations, request);
        }

        /**
         * An Async wrapper for ListSecurityConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecurityConfigurationsRequestT = Model::ListSecurityConfigurationsRequest>
        void ListSecurityConfigurationsAsync(const ListSecurityConfigurationsRequestT& request, const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ListSecurityConfigurations, request, handler, context);
        }

        /**
         * <p>Provides a list of steps for the cluster in reverse order unless you specify
         * <code>stepIds</code> with the request or filter by <code>StepStates</code>. You
         * can specify a maximum of 10 <code>stepIDs</code>. The CLI automatically
         * paginates results to return a list greater than 50 steps. To return more than 50
         * steps using the CLI, specify a <code>Marker</code>, which is a pagination token
         * that indicates the next set of steps to retrieve.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStepsOutcome ListSteps(const Model::ListStepsRequest& request) const;

        /**
         * A Callable wrapper for ListSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStepsRequestT = Model::ListStepsRequest>
        Model::ListStepsOutcomeCallable ListStepsCallable(const ListStepsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ListSteps, request);
        }

        /**
         * An Async wrapper for ListSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStepsRequestT = Model::ListStepsRequest>
        void ListStepsAsync(const ListStepsRequestT& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ListSteps, request, handler, context);
        }

        /**
         * <p>Returns a list of all user or group session mappings for the Amazon EMR
         * Studio specified by <code>StudioId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListStudioSessionMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioSessionMappingsOutcome ListStudioSessionMappings(const Model::ListStudioSessionMappingsRequest& request) const;

        /**
         * A Callable wrapper for ListStudioSessionMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStudioSessionMappingsRequestT = Model::ListStudioSessionMappingsRequest>
        Model::ListStudioSessionMappingsOutcomeCallable ListStudioSessionMappingsCallable(const ListStudioSessionMappingsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ListStudioSessionMappings, request);
        }

        /**
         * An Async wrapper for ListStudioSessionMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStudioSessionMappingsRequestT = Model::ListStudioSessionMappingsRequest>
        void ListStudioSessionMappingsAsync(const ListStudioSessionMappingsRequestT& request, const ListStudioSessionMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ListStudioSessionMappings, request, handler, context);
        }

        /**
         * <p>Returns a list of all Amazon EMR Studios associated with the Amazon Web
         * Services account. The list includes details such as ID, Studio Access URL, and
         * creation time for each Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListStudios">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudiosOutcome ListStudios(const Model::ListStudiosRequest& request) const;

        /**
         * A Callable wrapper for ListStudios that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStudiosRequestT = Model::ListStudiosRequest>
        Model::ListStudiosOutcomeCallable ListStudiosCallable(const ListStudiosRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ListStudios, request);
        }

        /**
         * An Async wrapper for ListStudios that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStudiosRequestT = Model::ListStudiosRequest>
        void ListStudiosAsync(const ListStudiosRequestT& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ListStudios, request, handler, context);
        }

        /**
         * <p>A list of the instance types that Amazon EMR supports. You can filter the
         * list by Amazon Web Services Region and Amazon EMR release. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSupportedInstanceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSupportedInstanceTypesOutcome ListSupportedInstanceTypes(const Model::ListSupportedInstanceTypesRequest& request) const;

        /**
         * A Callable wrapper for ListSupportedInstanceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSupportedInstanceTypesRequestT = Model::ListSupportedInstanceTypesRequest>
        Model::ListSupportedInstanceTypesOutcomeCallable ListSupportedInstanceTypesCallable(const ListSupportedInstanceTypesRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ListSupportedInstanceTypes, request);
        }

        /**
         * An Async wrapper for ListSupportedInstanceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSupportedInstanceTypesRequestT = Model::ListSupportedInstanceTypesRequest>
        void ListSupportedInstanceTypesAsync(const ListSupportedInstanceTypesRequestT& request, const ListSupportedInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ListSupportedInstanceTypes, request, handler, context);
        }

        /**
         * <p>Modifies the number of steps that can be executed concurrently for the
         * cluster specified using ClusterID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClusterOutcome ModifyCluster(const Model::ModifyClusterRequest& request) const;

        /**
         * A Callable wrapper for ModifyCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyClusterRequestT = Model::ModifyClusterRequest>
        Model::ModifyClusterOutcomeCallable ModifyClusterCallable(const ModifyClusterRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ModifyCluster, request);
        }

        /**
         * An Async wrapper for ModifyCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyClusterRequestT = Model::ModifyClusterRequest>
        void ModifyClusterAsync(const ModifyClusterRequestT& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ModifyCluster, request, handler, context);
        }

        /**
         * <p>Modifies the target On-Demand and target Spot capacities for the instance
         * fleet with the specified InstanceFleetID within the cluster specified using
         * ClusterID. The call either succeeds or fails atomically.</p>  <p>The
         * instance fleet configuration is available only in Amazon EMR releases 4.8.0 and
         * later, excluding 5.0.x versions.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyInstanceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceFleetOutcome ModifyInstanceFleet(const Model::ModifyInstanceFleetRequest& request) const;

        /**
         * A Callable wrapper for ModifyInstanceFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyInstanceFleetRequestT = Model::ModifyInstanceFleetRequest>
        Model::ModifyInstanceFleetOutcomeCallable ModifyInstanceFleetCallable(const ModifyInstanceFleetRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ModifyInstanceFleet, request);
        }

        /**
         * An Async wrapper for ModifyInstanceFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyInstanceFleetRequestT = Model::ModifyInstanceFleetRequest>
        void ModifyInstanceFleetAsync(const ModifyInstanceFleetRequestT& request, const ModifyInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ModifyInstanceFleet, request, handler, context);
        }

        /**
         * <p>ModifyInstanceGroups modifies the number of nodes and configuration settings
         * of an instance group. The input parameters include the new target instance count
         * for the group and the instance group ID. The call will either succeed or fail
         * atomically.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyInstanceGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceGroupsOutcome ModifyInstanceGroups(const Model::ModifyInstanceGroupsRequest& request) const;

        /**
         * A Callable wrapper for ModifyInstanceGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyInstanceGroupsRequestT = Model::ModifyInstanceGroupsRequest>
        Model::ModifyInstanceGroupsOutcomeCallable ModifyInstanceGroupsCallable(const ModifyInstanceGroupsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::ModifyInstanceGroups, request);
        }

        /**
         * An Async wrapper for ModifyInstanceGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyInstanceGroupsRequestT = Model::ModifyInstanceGroupsRequest>
        void ModifyInstanceGroupsAsync(const ModifyInstanceGroupsRequestT& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::ModifyInstanceGroups, request, handler, context);
        }

        /**
         * <p>Creates or updates an automatic scaling policy for a core instance group or
         * task instance group in an Amazon EMR cluster. The automatic scaling policy
         * defines how an instance group dynamically adds and terminates Amazon EC2
         * instances in response to the value of a CloudWatch metric.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutAutoScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAutoScalingPolicyOutcome PutAutoScalingPolicy(const Model::PutAutoScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutAutoScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAutoScalingPolicyRequestT = Model::PutAutoScalingPolicyRequest>
        Model::PutAutoScalingPolicyOutcomeCallable PutAutoScalingPolicyCallable(const PutAutoScalingPolicyRequestT& request) const
        {
            return SubmitCallable(&EMRClient::PutAutoScalingPolicy, request);
        }

        /**
         * An Async wrapper for PutAutoScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAutoScalingPolicyRequestT = Model::PutAutoScalingPolicyRequest>
        void PutAutoScalingPolicyAsync(const PutAutoScalingPolicyRequestT& request, const PutAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::PutAutoScalingPolicy, request, handler, context);
        }

        /**
         *  <p>Auto-termination is supported in Amazon EMR releases 5.30.0 and 6.1.0
         * and later. For more information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-auto-termination-policy.html">Using
         * an auto-termination policy</a>.</p>  <p>Creates or updates an
         * auto-termination policy for an Amazon EMR cluster. An auto-termination policy
         * defines the amount of idle time in seconds after which a cluster automatically
         * terminates. For alternative cluster termination options, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-termination.html">Control
         * cluster termination</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutAutoTerminationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAutoTerminationPolicyOutcome PutAutoTerminationPolicy(const Model::PutAutoTerminationPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutAutoTerminationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAutoTerminationPolicyRequestT = Model::PutAutoTerminationPolicyRequest>
        Model::PutAutoTerminationPolicyOutcomeCallable PutAutoTerminationPolicyCallable(const PutAutoTerminationPolicyRequestT& request) const
        {
            return SubmitCallable(&EMRClient::PutAutoTerminationPolicy, request);
        }

        /**
         * An Async wrapper for PutAutoTerminationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAutoTerminationPolicyRequestT = Model::PutAutoTerminationPolicyRequest>
        void PutAutoTerminationPolicyAsync(const PutAutoTerminationPolicyRequestT& request, const PutAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::PutAutoTerminationPolicy, request, handler, context);
        }

        /**
         * <p>Creates or updates an Amazon EMR block public access configuration for your
         * Amazon Web Services account in the current Region. For more information see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/configure-block-public-access.html">Configure
         * Block Public Access for Amazon EMR</a> in the <i>Amazon EMR Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutBlockPublicAccessConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBlockPublicAccessConfigurationOutcome PutBlockPublicAccessConfiguration(const Model::PutBlockPublicAccessConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutBlockPublicAccessConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutBlockPublicAccessConfigurationRequestT = Model::PutBlockPublicAccessConfigurationRequest>
        Model::PutBlockPublicAccessConfigurationOutcomeCallable PutBlockPublicAccessConfigurationCallable(const PutBlockPublicAccessConfigurationRequestT& request) const
        {
            return SubmitCallable(&EMRClient::PutBlockPublicAccessConfiguration, request);
        }

        /**
         * An Async wrapper for PutBlockPublicAccessConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBlockPublicAccessConfigurationRequestT = Model::PutBlockPublicAccessConfigurationRequest>
        void PutBlockPublicAccessConfigurationAsync(const PutBlockPublicAccessConfigurationRequestT& request, const PutBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::PutBlockPublicAccessConfiguration, request, handler, context);
        }

        /**
         * <p>Creates or updates a managed scaling policy for an Amazon EMR cluster. The
         * managed scaling policy defines the limits for resources, such as Amazon EC2
         * instances that can be added or terminated from a cluster. The policy only
         * applies to the core and task nodes. The master node cannot be scaled after
         * initial configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutManagedScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutManagedScalingPolicyOutcome PutManagedScalingPolicy(const Model::PutManagedScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutManagedScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutManagedScalingPolicyRequestT = Model::PutManagedScalingPolicyRequest>
        Model::PutManagedScalingPolicyOutcomeCallable PutManagedScalingPolicyCallable(const PutManagedScalingPolicyRequestT& request) const
        {
            return SubmitCallable(&EMRClient::PutManagedScalingPolicy, request);
        }

        /**
         * An Async wrapper for PutManagedScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutManagedScalingPolicyRequestT = Model::PutManagedScalingPolicyRequest>
        void PutManagedScalingPolicyAsync(const PutManagedScalingPolicyRequestT& request, const PutManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::PutManagedScalingPolicy, request, handler, context);
        }

        /**
         * <p>Removes an automatic scaling policy from a specified instance group within an
         * Amazon EMR cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveAutoScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAutoScalingPolicyOutcome RemoveAutoScalingPolicy(const Model::RemoveAutoScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for RemoveAutoScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveAutoScalingPolicyRequestT = Model::RemoveAutoScalingPolicyRequest>
        Model::RemoveAutoScalingPolicyOutcomeCallable RemoveAutoScalingPolicyCallable(const RemoveAutoScalingPolicyRequestT& request) const
        {
            return SubmitCallable(&EMRClient::RemoveAutoScalingPolicy, request);
        }

        /**
         * An Async wrapper for RemoveAutoScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveAutoScalingPolicyRequestT = Model::RemoveAutoScalingPolicyRequest>
        void RemoveAutoScalingPolicyAsync(const RemoveAutoScalingPolicyRequestT& request, const RemoveAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::RemoveAutoScalingPolicy, request, handler, context);
        }

        /**
         * <p>Removes an auto-termination policy from an Amazon EMR cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveAutoTerminationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAutoTerminationPolicyOutcome RemoveAutoTerminationPolicy(const Model::RemoveAutoTerminationPolicyRequest& request) const;

        /**
         * A Callable wrapper for RemoveAutoTerminationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveAutoTerminationPolicyRequestT = Model::RemoveAutoTerminationPolicyRequest>
        Model::RemoveAutoTerminationPolicyOutcomeCallable RemoveAutoTerminationPolicyCallable(const RemoveAutoTerminationPolicyRequestT& request) const
        {
            return SubmitCallable(&EMRClient::RemoveAutoTerminationPolicy, request);
        }

        /**
         * An Async wrapper for RemoveAutoTerminationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveAutoTerminationPolicyRequestT = Model::RemoveAutoTerminationPolicyRequest>
        void RemoveAutoTerminationPolicyAsync(const RemoveAutoTerminationPolicyRequestT& request, const RemoveAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::RemoveAutoTerminationPolicy, request, handler, context);
        }

        /**
         * <p> Removes a managed scaling policy from a specified Amazon EMR cluster.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveManagedScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveManagedScalingPolicyOutcome RemoveManagedScalingPolicy(const Model::RemoveManagedScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for RemoveManagedScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveManagedScalingPolicyRequestT = Model::RemoveManagedScalingPolicyRequest>
        Model::RemoveManagedScalingPolicyOutcomeCallable RemoveManagedScalingPolicyCallable(const RemoveManagedScalingPolicyRequestT& request) const
        {
            return SubmitCallable(&EMRClient::RemoveManagedScalingPolicy, request);
        }

        /**
         * An Async wrapper for RemoveManagedScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveManagedScalingPolicyRequestT = Model::RemoveManagedScalingPolicyRequest>
        void RemoveManagedScalingPolicyAsync(const RemoveManagedScalingPolicyRequestT& request, const RemoveManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::RemoveManagedScalingPolicy, request, handler, context);
        }

        /**
         * <p>Removes tags from an Amazon EMR resource, such as a cluster or Amazon EMR
         * Studio. Tags make it easier to associate resources in various ways, such as
         * grouping clusters to track your Amazon EMR resource allocation costs. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-tags.html">Tag
         * Clusters</a>. </p> <p>The following example removes the stack tag with value
         * Prod from a cluster:</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * A Callable wrapper for RemoveTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTagsRequestT = Model::RemoveTagsRequest>
        Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const RemoveTagsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::RemoveTags, request);
        }

        /**
         * An Async wrapper for RemoveTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsRequestT = Model::RemoveTagsRequest>
        void RemoveTagsAsync(const RemoveTagsRequestT& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::RemoveTags, request, handler, context);
        }

        /**
         * <p>RunJobFlow creates and starts running a new cluster (job flow). The cluster
         * runs the steps specified. After the steps complete, the cluster stops and the
         * HDFS partition is lost. To prevent loss of data, configure the last step of the
         * job flow to store results in Amazon S3. If the <a>JobFlowInstancesConfig</a>
         * <code>KeepJobFlowAliveWhenNoSteps</code> parameter is set to <code>TRUE</code>,
         * the cluster transitions to the WAITING state rather than shutting down after the
         * steps have completed. </p> <p>For additional protection, you can set the
         * <a>JobFlowInstancesConfig</a> <code>TerminationProtected</code> parameter to
         * <code>TRUE</code> to lock the cluster and prevent it from being terminated by
         * API call, user intervention, or in the event of a job flow error.</p> <p>A
         * maximum of 256 steps are allowed in each job flow.</p> <p>If your cluster is
         * long-running (such as a Hive data warehouse) or complex, you may require more
         * than 256 steps to process your data. You can bypass the 256-step limitation in
         * various ways, including using the SSH shell to connect to the master node and
         * submitting queries directly to the software running on the master node, such as
         * Hive and Hadoop.</p> <p>For long-running clusters, we recommend that you
         * periodically store your results.</p>  <p>The instance fleets configuration
         * is available only in Amazon EMR releases 4.8.0 and later, excluding 5.0.x
         * versions. The RunJobFlow request can contain InstanceFleets parameters or
         * InstanceGroups parameters, but not both.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RunJobFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::RunJobFlowOutcome RunJobFlow(const Model::RunJobFlowRequest& request) const;

        /**
         * A Callable wrapper for RunJobFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RunJobFlowRequestT = Model::RunJobFlowRequest>
        Model::RunJobFlowOutcomeCallable RunJobFlowCallable(const RunJobFlowRequestT& request) const
        {
            return SubmitCallable(&EMRClient::RunJobFlow, request);
        }

        /**
         * An Async wrapper for RunJobFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RunJobFlowRequestT = Model::RunJobFlowRequest>
        void RunJobFlowAsync(const RunJobFlowRequestT& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::RunJobFlow, request, handler, context);
        }

        /**
         * <p>You can use the <code>SetKeepJobFlowAliveWhenNoSteps</code> to configure a
         * cluster (job flow) to terminate after the step execution, i.e., all your steps
         * are executed. If you want a transient cluster that shuts down after the last of
         * the current executing steps are completed, you can configure
         * <code>SetKeepJobFlowAliveWhenNoSteps</code> to false. If you want a long running
         * cluster, configure <code>SetKeepJobFlowAliveWhenNoSteps</code> to true.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/UsingEMR_TerminationProtection.html">Managing
         * Cluster Termination</a> in the <i>Amazon EMR Management Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetKeepJobFlowAliveWhenNoSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::SetKeepJobFlowAliveWhenNoStepsOutcome SetKeepJobFlowAliveWhenNoSteps(const Model::SetKeepJobFlowAliveWhenNoStepsRequest& request) const;

        /**
         * A Callable wrapper for SetKeepJobFlowAliveWhenNoSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetKeepJobFlowAliveWhenNoStepsRequestT = Model::SetKeepJobFlowAliveWhenNoStepsRequest>
        Model::SetKeepJobFlowAliveWhenNoStepsOutcomeCallable SetKeepJobFlowAliveWhenNoStepsCallable(const SetKeepJobFlowAliveWhenNoStepsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::SetKeepJobFlowAliveWhenNoSteps, request);
        }

        /**
         * An Async wrapper for SetKeepJobFlowAliveWhenNoSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetKeepJobFlowAliveWhenNoStepsRequestT = Model::SetKeepJobFlowAliveWhenNoStepsRequest>
        void SetKeepJobFlowAliveWhenNoStepsAsync(const SetKeepJobFlowAliveWhenNoStepsRequestT& request, const SetKeepJobFlowAliveWhenNoStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::SetKeepJobFlowAliveWhenNoSteps, request, handler, context);
        }

        /**
         * <p>SetTerminationProtection locks a cluster (job flow) so the Amazon EC2
         * instances in the cluster cannot be terminated by user intervention, an API call,
         * or in the event of a job-flow error. The cluster still terminates upon
         * successful completion of the job flow. Calling
         * <code>SetTerminationProtection</code> on a cluster is similar to calling the
         * Amazon EC2 <code>DisableAPITermination</code> API on all Amazon EC2 instances in
         * a cluster.</p> <p> <code>SetTerminationProtection</code> is used to prevent
         * accidental termination of a cluster and to ensure that in the event of an error,
         * the instances persist so that you can recover any data stored in their ephemeral
         * instance storage.</p> <p> To terminate a cluster that has been locked by setting
         * <code>SetTerminationProtection</code> to <code>true</code>, you must first
         * unlock the job flow by a subsequent call to
         * <code>SetTerminationProtection</code> in which you set the value to
         * <code>false</code>. </p> <p> For more information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/UsingEMR_TerminationProtection.html">Managing
         * Cluster Termination</a> in the <i>Amazon EMR Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetTerminationProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTerminationProtectionOutcome SetTerminationProtection(const Model::SetTerminationProtectionRequest& request) const;

        /**
         * A Callable wrapper for SetTerminationProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetTerminationProtectionRequestT = Model::SetTerminationProtectionRequest>
        Model::SetTerminationProtectionOutcomeCallable SetTerminationProtectionCallable(const SetTerminationProtectionRequestT& request) const
        {
            return SubmitCallable(&EMRClient::SetTerminationProtection, request);
        }

        /**
         * An Async wrapper for SetTerminationProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetTerminationProtectionRequestT = Model::SetTerminationProtectionRequest>
        void SetTerminationProtectionAsync(const SetTerminationProtectionRequestT& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::SetTerminationProtection, request, handler, context);
        }

        /**
         * <p>Specify whether to enable unhealthy node replacement, which lets Amazon EMR
         * gracefully replace core nodes on a cluster if any nodes become unhealthy. For
         * example, a node becomes unhealthy if disk usage is above 90%. If unhealthy node
         * replacement is on and <code>TerminationProtected</code> are off, Amazon EMR
         * immediately terminates the unhealthy core nodes. To use unhealthy node
         * replacement and retain unhealthy core nodes, use to turn on termination
         * protection. In such cases, Amazon EMR adds the unhealthy nodes to a denylist,
         * reducing job interruptions and failures.</p> <p>If unhealthy node replacement is
         * on, Amazon EMR notifies YARN and other applications on the cluster to stop
         * scheduling tasks with these nodes, moves the data, and then terminates the
         * nodes.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/UsingEMR_UnhealthyNodeReplacement.html">graceful
         * node replacement</a> in the <i>Amazon EMR Management Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetUnhealthyNodeReplacement">AWS
         * API Reference</a></p>
         */
        virtual Model::SetUnhealthyNodeReplacementOutcome SetUnhealthyNodeReplacement(const Model::SetUnhealthyNodeReplacementRequest& request) const;

        /**
         * A Callable wrapper for SetUnhealthyNodeReplacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetUnhealthyNodeReplacementRequestT = Model::SetUnhealthyNodeReplacementRequest>
        Model::SetUnhealthyNodeReplacementOutcomeCallable SetUnhealthyNodeReplacementCallable(const SetUnhealthyNodeReplacementRequestT& request) const
        {
            return SubmitCallable(&EMRClient::SetUnhealthyNodeReplacement, request);
        }

        /**
         * An Async wrapper for SetUnhealthyNodeReplacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetUnhealthyNodeReplacementRequestT = Model::SetUnhealthyNodeReplacementRequest>
        void SetUnhealthyNodeReplacementAsync(const SetUnhealthyNodeReplacementRequestT& request, const SetUnhealthyNodeReplacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::SetUnhealthyNodeReplacement, request, handler, context);
        }

        /**
         *  <p>The SetVisibleToAllUsers parameter is no longer supported. Your
         * cluster may be visible to all users in your account. To restrict cluster access
         * using an IAM policy, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-access-IAM.html">Identity
         * and Access Management for Amazon EMR</a>. </p>  <p>Sets the
         * <a>Cluster$VisibleToAllUsers</a> value for an Amazon EMR cluster. When
         * <code>true</code>, IAM principals in the Amazon Web Services account can perform
         * Amazon EMR cluster actions that their IAM policies allow. When
         * <code>false</code>, only the IAM principal that created the cluster and the
         * Amazon Web Services account root user can perform Amazon EMR actions on the
         * cluster, regardless of IAM permissions policies attached to other IAM
         * principals.</p> <p>This action works on running clusters. When you create a
         * cluster, use the <a>RunJobFlowInput$VisibleToAllUsers</a> parameter.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/security_IAM_emr-with-IAM.html#security_set_visible_to_all_users">Understanding
         * the Amazon EMR Cluster VisibleToAllUsers Setting</a> in the <i>Amazon EMR
         * Management Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetVisibleToAllUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::SetVisibleToAllUsersOutcome SetVisibleToAllUsers(const Model::SetVisibleToAllUsersRequest& request) const;

        /**
         * A Callable wrapper for SetVisibleToAllUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetVisibleToAllUsersRequestT = Model::SetVisibleToAllUsersRequest>
        Model::SetVisibleToAllUsersOutcomeCallable SetVisibleToAllUsersCallable(const SetVisibleToAllUsersRequestT& request) const
        {
            return SubmitCallable(&EMRClient::SetVisibleToAllUsers, request);
        }

        /**
         * An Async wrapper for SetVisibleToAllUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetVisibleToAllUsersRequestT = Model::SetVisibleToAllUsersRequest>
        void SetVisibleToAllUsersAsync(const SetVisibleToAllUsersRequestT& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::SetVisibleToAllUsers, request, handler, context);
        }

        /**
         * <p>Starts a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StartNotebookExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNotebookExecutionOutcome StartNotebookExecution(const Model::StartNotebookExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartNotebookExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartNotebookExecutionRequestT = Model::StartNotebookExecutionRequest>
        Model::StartNotebookExecutionOutcomeCallable StartNotebookExecutionCallable(const StartNotebookExecutionRequestT& request) const
        {
            return SubmitCallable(&EMRClient::StartNotebookExecution, request);
        }

        /**
         * An Async wrapper for StartNotebookExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartNotebookExecutionRequestT = Model::StartNotebookExecutionRequest>
        void StartNotebookExecutionAsync(const StartNotebookExecutionRequestT& request, const StartNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::StartNotebookExecution, request, handler, context);
        }

        /**
         * <p>Stops a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StopNotebookExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopNotebookExecutionOutcome StopNotebookExecution(const Model::StopNotebookExecutionRequest& request) const;

        /**
         * A Callable wrapper for StopNotebookExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopNotebookExecutionRequestT = Model::StopNotebookExecutionRequest>
        Model::StopNotebookExecutionOutcomeCallable StopNotebookExecutionCallable(const StopNotebookExecutionRequestT& request) const
        {
            return SubmitCallable(&EMRClient::StopNotebookExecution, request);
        }

        /**
         * An Async wrapper for StopNotebookExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopNotebookExecutionRequestT = Model::StopNotebookExecutionRequest>
        void StopNotebookExecutionAsync(const StopNotebookExecutionRequestT& request, const StopNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::StopNotebookExecution, request, handler, context);
        }

        /**
         * <p>TerminateJobFlows shuts a list of clusters (job flows) down. When a job flow
         * is shut down, any step not yet completed is canceled and the Amazon EC2
         * instances on which the cluster is running are stopped. Any log files not already
         * saved are uploaded to Amazon S3 if a LogUri was specified when the cluster was
         * created.</p> <p>The maximum number of clusters allowed is 10. The call to
         * <code>TerminateJobFlows</code> is asynchronous. Depending on the configuration
         * of the cluster, it may take up to 1-5 minutes for the cluster to completely
         * terminate and release allocated resources, such as Amazon EC2
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/TerminateJobFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateJobFlowsOutcome TerminateJobFlows(const Model::TerminateJobFlowsRequest& request) const;

        /**
         * A Callable wrapper for TerminateJobFlows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TerminateJobFlowsRequestT = Model::TerminateJobFlowsRequest>
        Model::TerminateJobFlowsOutcomeCallable TerminateJobFlowsCallable(const TerminateJobFlowsRequestT& request) const
        {
            return SubmitCallable(&EMRClient::TerminateJobFlows, request);
        }

        /**
         * An Async wrapper for TerminateJobFlows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateJobFlowsRequestT = Model::TerminateJobFlowsRequest>
        void TerminateJobFlowsAsync(const TerminateJobFlowsRequestT& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::TerminateJobFlows, request, handler, context);
        }

        /**
         * <p>Updates an Amazon EMR Studio configuration, including attributes such as
         * name, description, and subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/UpdateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioOutcome UpdateStudio(const Model::UpdateStudioRequest& request) const;

        /**
         * A Callable wrapper for UpdateStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStudioRequestT = Model::UpdateStudioRequest>
        Model::UpdateStudioOutcomeCallable UpdateStudioCallable(const UpdateStudioRequestT& request) const
        {
            return SubmitCallable(&EMRClient::UpdateStudio, request);
        }

        /**
         * An Async wrapper for UpdateStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStudioRequestT = Model::UpdateStudioRequest>
        void UpdateStudioAsync(const UpdateStudioRequestT& request, const UpdateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::UpdateStudio, request, handler, context);
        }

        /**
         * <p>Updates the session policy attached to the user or group for the specified
         * Amazon EMR Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/UpdateStudioSessionMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioSessionMappingOutcome UpdateStudioSessionMapping(const Model::UpdateStudioSessionMappingRequest& request) const;

        /**
         * A Callable wrapper for UpdateStudioSessionMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStudioSessionMappingRequestT = Model::UpdateStudioSessionMappingRequest>
        Model::UpdateStudioSessionMappingOutcomeCallable UpdateStudioSessionMappingCallable(const UpdateStudioSessionMappingRequestT& request) const
        {
            return SubmitCallable(&EMRClient::UpdateStudioSessionMapping, request);
        }

        /**
         * An Async wrapper for UpdateStudioSessionMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStudioSessionMappingRequestT = Model::UpdateStudioSessionMappingRequest>
        void UpdateStudioSessionMappingAsync(const UpdateStudioSessionMappingRequestT& request, const UpdateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EMRClient::UpdateStudioSessionMapping, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<EMREndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<EMRClient>;
      void init(const EMRClientConfiguration& clientConfiguration);

      EMRClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<EMREndpointProviderBase> m_endpointProvider;
  };

} // namespace EMR
} // namespace Aws
