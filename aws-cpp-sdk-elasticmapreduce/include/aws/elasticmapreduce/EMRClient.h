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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRClient(const Aws::EMR::EMRClientConfiguration& clientConfiguration = Aws::EMR::EMRClientConfiguration(),
                  std::shared_ptr<EMREndpointProviderBase> endpointProvider = Aws::MakeShared<EMREndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<EMREndpointProviderBase> endpointProvider = Aws::MakeShared<EMREndpointProvider>(ALLOCATION_TAG),
                  const Aws::EMR::EMRClientConfiguration& clientConfiguration = Aws::EMR::EMRClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<EMREndpointProviderBase> endpointProvider = Aws::MakeShared<EMREndpointProvider>(ALLOCATION_TAG),
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
         * configuration is available only in Amazon EMR versions 4.8.0 and later,
         * excluding 5.0.x.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AddInstanceFleetOutcome AddInstanceFleet(const Model::AddInstanceFleetRequest& request) const;

        /**
         * A Callable wrapper for AddInstanceFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddInstanceFleetOutcomeCallable AddInstanceFleetCallable(const Model::AddInstanceFleetRequest& request) const;

        /**
         * An Async wrapper for AddInstanceFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddInstanceFleetAsync(const Model::AddInstanceFleetRequest& request, const AddInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AddInstanceGroupsOutcomeCallable AddInstanceGroupsCallable(const Model::AddInstanceGroupsRequest& request) const;

        /**
         * An Async wrapper for AddInstanceGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddInstanceGroupsAsync(const Model::AddInstanceGroupsRequest& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>AddJobFlowSteps adds new steps to a running cluster. A maximum of 256 steps
         * are allowed in each job flow.</p> <p>If your cluster is long-running (such as a
         * Hive data warehouse) or complex, you may require more than 256 steps to process
         * your data. You can bypass the 256-step limitation in various ways, including
         * using SSH to connect to the master node and submitting queries directly to the
         * software running on the master node, such as Hive and Hadoop. For more
         * information on how to do this, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/AddMoreThan256Steps.html">Add
         * More than 256 Steps to a Cluster</a> in the <i>Amazon EMR Management
         * Guide</i>.</p> <p>A step specifies the location of a JAR file stored either on
         * the master node of the cluster or in Amazon S3. Each step is performed by the
         * main function of the main class of the JAR file. The main class can be specified
         * either in the manifest of the JAR or by using the MainFunction parameter of the
         * step.</p> <p>Amazon EMR executes each step in the order listed. For a step to be
         * considered complete, the main function must exit with a zero exit code and all
         * Hadoop jobs started while the step was running must have completed and run
         * successfully.</p> <p>You can only add steps to a cluster that is in one of the
         * following states: STARTING, BOOTSTRAPPING, RUNNING, or WAITING.</p> 
         * <p>The string values passed into <code>HadoopJarStep</code> object cannot exceed
         * a total of 10240 characters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddJobFlowSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::AddJobFlowStepsOutcome AddJobFlowSteps(const Model::AddJobFlowStepsRequest& request) const;

        /**
         * A Callable wrapper for AddJobFlowSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddJobFlowStepsOutcomeCallable AddJobFlowStepsCallable(const Model::AddJobFlowStepsRequest& request) const;

        /**
         * An Async wrapper for AddJobFlowSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddJobFlowStepsAsync(const Model::AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a pending step or steps in a running cluster. Available only in
         * Amazon EMR versions 4.8.0 and later, excluding version 5.0.0. A maximum of 256
         * steps are allowed in each CancelSteps request. CancelSteps is idempotent but
         * asynchronous; it does not guarantee that a step will be canceled, even if the
         * request is successfully submitted. When you use Amazon EMR versions 5.28.0 and
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
        virtual Model::CancelStepsOutcomeCallable CancelStepsCallable(const Model::CancelStepsRequest& request) const;

        /**
         * An Async wrapper for CancelSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelStepsAsync(const Model::CancelStepsRequest& request, const CancelStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSecurityConfigurationOutcomeCallable CreateSecurityConfigurationCallable(const Model::CreateSecurityConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSecurityConfigurationAsync(const Model::CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon EMR Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioOutcome CreateStudio(const Model::CreateStudioRequest& request) const;

        /**
         * A Callable wrapper for CreateStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStudioOutcomeCallable CreateStudioCallable(const Model::CreateStudioRequest& request) const;

        /**
         * An Async wrapper for CreateStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStudioAsync(const Model::CreateStudioRequest& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Maps a user or group to the Amazon EMR Studio specified by
         * <code>StudioId</code>, and applies a session policy to refine Studio permissions
         * for that user or group. Use <code>CreateStudioSessionMapping</code> to assign
         * users to a Studio when you use Amazon Web Services SSO authentication. For
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
        virtual Model::CreateStudioSessionMappingOutcomeCallable CreateStudioSessionMappingCallable(const Model::CreateStudioSessionMappingRequest& request) const;

        /**
         * An Async wrapper for CreateStudioSessionMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStudioSessionMappingAsync(const Model::CreateStudioSessionMappingRequest& request, const CreateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityConfigurationOutcome DeleteSecurityConfiguration(const Model::DeleteSecurityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecurityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSecurityConfigurationOutcomeCallable DeleteSecurityConfigurationCallable(const Model::DeleteSecurityConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSecurityConfigurationAsync(const Model::DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteStudioOutcomeCallable DeleteStudioCallable(const Model::DeleteStudioRequest& request) const;

        /**
         * An Async wrapper for DeleteStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStudioAsync(const Model::DeleteStudioRequest& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteStudioSessionMappingOutcomeCallable DeleteStudioSessionMappingCallable(const Model::DeleteStudioSessionMappingRequest& request) const;

        /**
         * An Async wrapper for DeleteStudioSessionMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStudioSessionMappingAsync(const Model::DeleteStudioSessionMappingRequest& request, const DeleteStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const Model::DescribeClusterRequest& request) const;

        /**
         * An Async wrapper for DescribeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides details of a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeNotebookExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotebookExecutionOutcome DescribeNotebookExecution(const Model::DescribeNotebookExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotebookExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotebookExecutionOutcomeCallable DescribeNotebookExecutionCallable(const Model::DescribeNotebookExecutionRequest& request) const;

        /**
         * An Async wrapper for DescribeNotebookExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotebookExecutionAsync(const Model::DescribeNotebookExecutionRequest& request, const DescribeNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides EMR release label details, such as releases available the region
         * where the API request is run, and the available applications for a specific EMR
         * release label. Can also list EMR release versions that support a specified
         * version of Spark.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeReleaseLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReleaseLabelOutcome DescribeReleaseLabel(const Model::DescribeReleaseLabelRequest& request) const;

        /**
         * A Callable wrapper for DescribeReleaseLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReleaseLabelOutcomeCallable DescribeReleaseLabelCallable(const Model::DescribeReleaseLabelRequest& request) const;

        /**
         * An Async wrapper for DescribeReleaseLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReleaseLabelAsync(const Model::DescribeReleaseLabelRequest& request, const DescribeReleaseLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeSecurityConfigurationOutcomeCallable DescribeSecurityConfigurationCallable(const Model::DescribeSecurityConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSecurityConfigurationAsync(const Model::DescribeSecurityConfigurationRequest& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides more detail about the cluster step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStep">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStepOutcome DescribeStep(const Model::DescribeStepRequest& request) const;

        /**
         * A Callable wrapper for DescribeStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStepOutcomeCallable DescribeStepCallable(const Model::DescribeStepRequest& request) const;

        /**
         * An Async wrapper for DescribeStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStepAsync(const Model::DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeStudioOutcomeCallable DescribeStudioCallable(const Model::DescribeStudioRequest& request) const;

        /**
         * An Async wrapper for DescribeStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStudioAsync(const Model::DescribeStudioRequest& request, const DescribeStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAutoTerminationPolicyOutcomeCallable GetAutoTerminationPolicyCallable(const Model::GetAutoTerminationPolicyRequest& request) const;

        /**
         * An Async wrapper for GetAutoTerminationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAutoTerminationPolicyAsync(const Model::GetAutoTerminationPolicyRequest& request, const GetAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetBlockPublicAccessConfigurationOutcomeCallable GetBlockPublicAccessConfigurationCallable(const Model::GetBlockPublicAccessConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetBlockPublicAccessConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBlockPublicAccessConfigurationAsync(const Model::GetBlockPublicAccessConfigurationRequest& request, const GetBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetManagedScalingPolicyOutcomeCallable GetManagedScalingPolicyCallable(const Model::GetManagedScalingPolicyRequest& request) const;

        /**
         * An Async wrapper for GetManagedScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetManagedScalingPolicyAsync(const Model::GetManagedScalingPolicyRequest& request, const GetManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetStudioSessionMappingOutcomeCallable GetStudioSessionMappingCallable(const Model::GetStudioSessionMappingRequest& request) const;

        /**
         * An Async wrapper for GetStudioSessionMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStudioSessionMappingAsync(const Model::GetStudioSessionMappingRequest& request, const GetStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListBootstrapActionsOutcomeCallable ListBootstrapActionsCallable(const Model::ListBootstrapActionsRequest& request) const;

        /**
         * An Async wrapper for ListBootstrapActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBootstrapActionsAsync(const Model::ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClustersAsync(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all available details about the instance fleets in a cluster.</p>
         *  <p>The instance fleet configuration is available only in Amazon EMR
         * versions 4.8.0 and later, excluding 5.0.x versions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceFleetsOutcome ListInstanceFleets(const Model::ListInstanceFleetsRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceFleetsOutcomeCallable ListInstanceFleetsCallable(const Model::ListInstanceFleetsRequest& request) const;

        /**
         * An Async wrapper for ListInstanceFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceFleetsAsync(const Model::ListInstanceFleetsRequest& request, const ListInstanceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListInstanceGroupsOutcomeCallable ListInstanceGroupsCallable(const Model::ListInstanceGroupsRequest& request) const;

        /**
         * An Async wrapper for ListInstanceGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceGroupsAsync(const Model::ListInstanceGroupsRequest& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information for all active EC2 instances and EC2 instances
         * terminated in the last 30 days, up to a maximum of 2,000. EC2 instances in any
         * of the following states are considered active: AWAITING_FULFILLMENT,
         * PROVISIONING, BOOTSTRAPPING, RUNNING.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstancesOutcomeCallable ListInstancesCallable(const Model::ListInstancesRequest& request) const;

        /**
         * An Async wrapper for ListInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides summaries of all notebook executions. You can filter the list based
         * on multiple criteria such as status, time range, and editor id. Returns a
         * maximum of 50 notebook executions and a marker to track the paging of a longer
         * notebook execution list across multiple <code>ListNotebookExecution</code>
         * calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListNotebookExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotebookExecutionsOutcome ListNotebookExecutions(const Model::ListNotebookExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListNotebookExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotebookExecutionsOutcomeCallable ListNotebookExecutionsCallable(const Model::ListNotebookExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListNotebookExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotebookExecutionsAsync(const Model::ListNotebookExecutionsRequest& request, const ListNotebookExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves release labels of EMR services in the region where the API is
         * called.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListReleaseLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReleaseLabelsOutcome ListReleaseLabels(const Model::ListReleaseLabelsRequest& request) const;

        /**
         * A Callable wrapper for ListReleaseLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReleaseLabelsOutcomeCallable ListReleaseLabelsCallable(const Model::ListReleaseLabelsRequest& request) const;

        /**
         * An Async wrapper for ListReleaseLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReleaseLabelsAsync(const Model::ListReleaseLabelsRequest& request, const ListReleaseLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSecurityConfigurationsOutcomeCallable ListSecurityConfigurationsCallable(const Model::ListSecurityConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListSecurityConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityConfigurationsAsync(const Model::ListSecurityConfigurationsRequest& request, const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListStepsOutcomeCallable ListStepsCallable(const Model::ListStepsRequest& request) const;

        /**
         * An Async wrapper for ListSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStepsAsync(const Model::ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListStudioSessionMappingsOutcomeCallable ListStudioSessionMappingsCallable(const Model::ListStudioSessionMappingsRequest& request) const;

        /**
         * An Async wrapper for ListStudioSessionMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStudioSessionMappingsAsync(const Model::ListStudioSessionMappingsRequest& request, const ListStudioSessionMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListStudiosOutcomeCallable ListStudiosCallable(const Model::ListStudiosRequest& request) const;

        /**
         * An Async wrapper for ListStudios that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStudiosAsync(const Model::ListStudiosRequest& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyClusterOutcomeCallable ModifyClusterCallable(const Model::ModifyClusterRequest& request) const;

        /**
         * An Async wrapper for ModifyCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClusterAsync(const Model::ModifyClusterRequest& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the target On-Demand and target Spot capacities for the instance
         * fleet with the specified InstanceFleetID within the cluster specified using
         * ClusterID. The call either succeeds or fails atomically.</p>  <p>The
         * instance fleet configuration is available only in Amazon EMR versions 4.8.0 and
         * later, excluding 5.0.x versions.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyInstanceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceFleetOutcome ModifyInstanceFleet(const Model::ModifyInstanceFleetRequest& request) const;

        /**
         * A Callable wrapper for ModifyInstanceFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstanceFleetOutcomeCallable ModifyInstanceFleetCallable(const Model::ModifyInstanceFleetRequest& request) const;

        /**
         * An Async wrapper for ModifyInstanceFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyInstanceFleetAsync(const Model::ModifyInstanceFleetRequest& request, const ModifyInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ModifyInstanceGroupsOutcomeCallable ModifyInstanceGroupsCallable(const Model::ModifyInstanceGroupsRequest& request) const;

        /**
         * An Async wrapper for ModifyInstanceGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyInstanceGroupsAsync(const Model::ModifyInstanceGroupsRequest& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an automatic scaling policy for a core instance group or
         * task instance group in an Amazon EMR cluster. The automatic scaling policy
         * defines how an instance group dynamically adds and terminates EC2 instances in
         * response to the value of a CloudWatch metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutAutoScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAutoScalingPolicyOutcome PutAutoScalingPolicy(const Model::PutAutoScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutAutoScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAutoScalingPolicyOutcomeCallable PutAutoScalingPolicyCallable(const Model::PutAutoScalingPolicyRequest& request) const;

        /**
         * An Async wrapper for PutAutoScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAutoScalingPolicyAsync(const Model::PutAutoScalingPolicyRequest& request, const PutAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>Auto-termination is supported in Amazon EMR versions 5.30.0 and 6.1.0
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
        virtual Model::PutAutoTerminationPolicyOutcomeCallable PutAutoTerminationPolicyCallable(const Model::PutAutoTerminationPolicyRequest& request) const;

        /**
         * An Async wrapper for PutAutoTerminationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAutoTerminationPolicyAsync(const Model::PutAutoTerminationPolicyRequest& request, const PutAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutBlockPublicAccessConfigurationOutcomeCallable PutBlockPublicAccessConfigurationCallable(const Model::PutBlockPublicAccessConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutBlockPublicAccessConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBlockPublicAccessConfigurationAsync(const Model::PutBlockPublicAccessConfigurationRequest& request, const PutBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a managed scaling policy for an Amazon EMR cluster. The
         * managed scaling policy defines the limits for resources, such as EC2 instances
         * that can be added or terminated from a cluster. The policy only applies to the
         * core and task nodes. The master node cannot be scaled after initial
         * configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutManagedScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutManagedScalingPolicyOutcome PutManagedScalingPolicy(const Model::PutManagedScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutManagedScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutManagedScalingPolicyOutcomeCallable PutManagedScalingPolicyCallable(const Model::PutManagedScalingPolicyRequest& request) const;

        /**
         * An Async wrapper for PutManagedScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutManagedScalingPolicyAsync(const Model::PutManagedScalingPolicyRequest& request, const PutManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an automatic scaling policy from a specified instance group within an
         * EMR cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveAutoScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAutoScalingPolicyOutcome RemoveAutoScalingPolicy(const Model::RemoveAutoScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for RemoveAutoScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveAutoScalingPolicyOutcomeCallable RemoveAutoScalingPolicyCallable(const Model::RemoveAutoScalingPolicyRequest& request) const;

        /**
         * An Async wrapper for RemoveAutoScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveAutoScalingPolicyAsync(const Model::RemoveAutoScalingPolicyRequest& request, const RemoveAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RemoveAutoTerminationPolicyOutcomeCallable RemoveAutoTerminationPolicyCallable(const Model::RemoveAutoTerminationPolicyRequest& request) const;

        /**
         * An Async wrapper for RemoveAutoTerminationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveAutoTerminationPolicyAsync(const Model::RemoveAutoTerminationPolicyRequest& request, const RemoveAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Removes a managed scaling policy from a specified EMR cluster.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveManagedScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveManagedScalingPolicyOutcome RemoveManagedScalingPolicy(const Model::RemoveManagedScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for RemoveManagedScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveManagedScalingPolicyOutcomeCallable RemoveManagedScalingPolicyCallable(const Model::RemoveManagedScalingPolicyRequest& request) const;

        /**
         * An Async wrapper for RemoveManagedScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveManagedScalingPolicyAsync(const Model::RemoveManagedScalingPolicyRequest& request, const RemoveManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

        /**
         * An Async wrapper for RemoveTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * Hive and Hadoop. For more information on how to do this, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/AddMoreThan256Steps.html">Add
         * More than 256 Steps to a Cluster</a> in the <i>Amazon EMR Management
         * Guide</i>.</p> <p>For long running clusters, we recommend that you periodically
         * store your results.</p>  <p>The instance fleets configuration is available
         * only in Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions. The
         * RunJobFlow request can contain InstanceFleets parameters or InstanceGroups
         * parameters, but not both.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RunJobFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::RunJobFlowOutcome RunJobFlow(const Model::RunJobFlowRequest& request) const;

        /**
         * A Callable wrapper for RunJobFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RunJobFlowOutcomeCallable RunJobFlowCallable(const Model::RunJobFlowRequest& request) const;

        /**
         * An Async wrapper for RunJobFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RunJobFlowAsync(const Model::RunJobFlowRequest& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>SetTerminationProtection locks a cluster (job flow) so the EC2 instances in
         * the cluster cannot be terminated by user intervention, an API call, or in the
         * event of a job-flow error. The cluster still terminates upon successful
         * completion of the job flow. Calling <code>SetTerminationProtection</code> on a
         * cluster is similar to calling the Amazon EC2 <code>DisableAPITermination</code>
         * API on all EC2 instances in a cluster.</p> <p>
         * <code>SetTerminationProtection</code> is used to prevent accidental termination
         * of a cluster and to ensure that in the event of an error, the instances persist
         * so that you can recover any data stored in their ephemeral instance storage.</p>
         * <p> To terminate a cluster that has been locked by setting
         * <code>SetTerminationProtection</code> to <code>true</code>, you must first
         * unlock the job flow by a subsequent call to
         * <code>SetTerminationProtection</code> in which you set the value to
         * <code>false</code>. </p> <p> For more information, see<a
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
        virtual Model::SetTerminationProtectionOutcomeCallable SetTerminationProtectionCallable(const Model::SetTerminationProtectionRequest& request) const;

        /**
         * An Async wrapper for SetTerminationProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetTerminationProtectionAsync(const Model::SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>The SetVisibleToAllUsers parameter is no longer supported. Your
         * cluster may be visible to all users in your account. To restrict cluster access
         * using an IAM policy, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-access-iam.html">Identity
         * and Access Management for EMR</a>. </p>  <p>Sets the
         * <a>Cluster$VisibleToAllUsers</a> value for an EMR cluster. When
         * <code>true</code>, IAM principals in the Amazon Web Services account can perform
         * EMR cluster actions that their IAM policies allow. When <code>false</code>, only
         * the IAM principal that created the cluster and the Amazon Web Services account
         * root user can perform EMR actions on the cluster, regardless of IAM permissions
         * policies attached to other IAM principals.</p> <p>This action works on running
         * clusters. When you create a cluster, use the
         * <a>RunJobFlowInput$VisibleToAllUsers</a> parameter.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/security_iam_emr-with-iam.html#security_set_visible_to_all_users">Understanding
         * the EMR Cluster VisibleToAllUsers Setting</a> in the <i>Amazon EMRManagement
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetVisibleToAllUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::SetVisibleToAllUsersOutcome SetVisibleToAllUsers(const Model::SetVisibleToAllUsersRequest& request) const;

        /**
         * A Callable wrapper for SetVisibleToAllUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetVisibleToAllUsersOutcomeCallable SetVisibleToAllUsersCallable(const Model::SetVisibleToAllUsersRequest& request) const;

        /**
         * An Async wrapper for SetVisibleToAllUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetVisibleToAllUsersAsync(const Model::SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StartNotebookExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNotebookExecutionOutcome StartNotebookExecution(const Model::StartNotebookExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartNotebookExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartNotebookExecutionOutcomeCallable StartNotebookExecutionCallable(const Model::StartNotebookExecutionRequest& request) const;

        /**
         * An Async wrapper for StartNotebookExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartNotebookExecutionAsync(const Model::StartNotebookExecutionRequest& request, const StartNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StopNotebookExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopNotebookExecutionOutcome StopNotebookExecution(const Model::StopNotebookExecutionRequest& request) const;

        /**
         * A Callable wrapper for StopNotebookExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopNotebookExecutionOutcomeCallable StopNotebookExecutionCallable(const Model::StopNotebookExecutionRequest& request) const;

        /**
         * An Async wrapper for StopNotebookExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopNotebookExecutionAsync(const Model::StopNotebookExecutionRequest& request, const StopNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>TerminateJobFlows shuts a list of clusters (job flows) down. When a job flow
         * is shut down, any step not yet completed is canceled and the EC2 instances on
         * which the cluster is running are stopped. Any log files not already saved are
         * uploaded to Amazon S3 if a LogUri was specified when the cluster was
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
        virtual Model::TerminateJobFlowsOutcomeCallable TerminateJobFlowsCallable(const Model::TerminateJobFlowsRequest& request) const;

        /**
         * An Async wrapper for TerminateJobFlows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateJobFlowsAsync(const Model::TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateStudioOutcomeCallable UpdateStudioCallable(const Model::UpdateStudioRequest& request) const;

        /**
         * An Async wrapper for UpdateStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStudioAsync(const Model::UpdateStudioRequest& request, const UpdateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateStudioSessionMappingOutcomeCallable UpdateStudioSessionMappingCallable(const Model::UpdateStudioSessionMappingRequest& request) const;

        /**
         * An Async wrapper for UpdateStudioSessionMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStudioSessionMappingAsync(const Model::UpdateStudioSessionMappingRequest& request, const UpdateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
