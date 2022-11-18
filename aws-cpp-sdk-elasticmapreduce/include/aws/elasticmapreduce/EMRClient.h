/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/EMRServiceClientModel.h>
#include <aws/elasticmapreduce/EMRLegacyAsyncMacros.h>

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
  class AWS_EMR_API EMRClient : public Aws::Client::AWSJsonClient
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
         * <p>Adds an instance fleet to a running cluster.</p>  <p>The instance fleet
         * configuration is available only in Amazon EMR versions 4.8.0 and later,
         * excluding 5.0.x.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AddInstanceFleetOutcome AddInstanceFleet(const Model::AddInstanceFleetRequest& request) const;


        /**
         * <p>Adds one or more instance groups to a running cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::AddInstanceGroupsOutcome AddInstanceGroups(const Model::AddInstanceGroupsRequest& request) const;


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
         * <p>Creates a security configuration, which is stored in the service and can be
         * specified when a cluster is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityConfigurationOutcome CreateSecurityConfiguration(const Model::CreateSecurityConfigurationRequest& request) const;


        /**
         * <p>Creates a new Amazon EMR Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioOutcome CreateStudio(const Model::CreateStudioRequest& request) const;


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
         * <p>Deletes a security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityConfigurationOutcome DeleteSecurityConfiguration(const Model::DeleteSecurityConfigurationRequest& request) const;


        /**
         * <p>Removes an Amazon EMR Studio from the Studio metadata store.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioOutcome DeleteStudio(const Model::DeleteStudioRequest& request) const;


        /**
         * <p>Removes a user or group from an Amazon EMR Studio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteStudioSessionMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioSessionMappingOutcome DeleteStudioSessionMapping(const Model::DeleteStudioSessionMappingRequest& request) const;


        /**
         * <p>Provides cluster-level details including status, hardware and software
         * configuration, VPC settings, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;


        /**
         * <p>Provides details of a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeNotebookExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotebookExecutionOutcome DescribeNotebookExecution(const Model::DescribeNotebookExecutionRequest& request) const;


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
         * <p>Provides the details of a security configuration by returning the
         * configuration JSON.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityConfigurationOutcome DescribeSecurityConfiguration(const Model::DescribeSecurityConfigurationRequest& request) const;


        /**
         * <p>Provides more detail about the cluster step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStep">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStepOutcome DescribeStep(const Model::DescribeStepRequest& request) const;


        /**
         * <p>Returns details for the specified Amazon EMR Studio including ID, Name, VPC,
         * Studio access URL, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStudioOutcome DescribeStudio(const Model::DescribeStudioRequest& request) const;


        /**
         * <p>Returns the auto-termination policy for an Amazon EMR cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetAutoTerminationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutoTerminationPolicyOutcome GetAutoTerminationPolicy(const Model::GetAutoTerminationPolicyRequest& request) const;


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
         * <p>Fetches the attached managed scaling policy for an Amazon EMR cluster.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetManagedScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedScalingPolicyOutcome GetManagedScalingPolicy(const Model::GetManagedScalingPolicyRequest& request) const;


        /**
         * <p>Fetches mapping details for the specified Amazon EMR Studio and identity
         * (user or group).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetStudioSessionMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioSessionMappingOutcome GetStudioSessionMapping(const Model::GetStudioSessionMappingRequest& request) const;


        /**
         * <p>Provides information about the bootstrap actions associated with a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListBootstrapActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBootstrapActionsOutcome ListBootstrapActions(const Model::ListBootstrapActionsRequest& request) const;


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
         * <p>Lists all available details about the instance fleets in a cluster.</p>
         *  <p>The instance fleet configuration is available only in Amazon EMR
         * versions 4.8.0 and later, excluding 5.0.x versions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceFleetsOutcome ListInstanceFleets(const Model::ListInstanceFleetsRequest& request) const;


        /**
         * <p>Provides all available details about the instance groups in a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceGroupsOutcome ListInstanceGroups(const Model::ListInstanceGroupsRequest& request) const;


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
         * <p>Retrieves release labels of EMR services in the region where the API is
         * called.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListReleaseLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReleaseLabelsOutcome ListReleaseLabels(const Model::ListReleaseLabelsRequest& request) const;


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
         * <p>Returns a list of all user or group session mappings for the Amazon EMR
         * Studio specified by <code>StudioId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListStudioSessionMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioSessionMappingsOutcome ListStudioSessionMappings(const Model::ListStudioSessionMappingsRequest& request) const;


        /**
         * <p>Returns a list of all Amazon EMR Studios associated with the Amazon Web
         * Services account. The list includes details such as ID, Studio Access URL, and
         * creation time for each Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListStudios">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudiosOutcome ListStudios(const Model::ListStudiosRequest& request) const;


        /**
         * <p>Modifies the number of steps that can be executed concurrently for the
         * cluster specified using ClusterID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClusterOutcome ModifyCluster(const Model::ModifyClusterRequest& request) const;


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
         * <p>ModifyInstanceGroups modifies the number of nodes and configuration settings
         * of an instance group. The input parameters include the new target instance count
         * for the group and the instance group ID. The call will either succeed or fail
         * atomically.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyInstanceGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceGroupsOutcome ModifyInstanceGroups(const Model::ModifyInstanceGroupsRequest& request) const;


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
         * <p>Removes an automatic scaling policy from a specified instance group within an
         * EMR cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveAutoScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAutoScalingPolicyOutcome RemoveAutoScalingPolicy(const Model::RemoveAutoScalingPolicyRequest& request) const;


        /**
         * <p>Removes an auto-termination policy from an Amazon EMR cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveAutoTerminationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAutoTerminationPolicyOutcome RemoveAutoTerminationPolicy(const Model::RemoveAutoTerminationPolicyRequest& request) const;


        /**
         * <p> Removes a managed scaling policy from a specified EMR cluster.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveManagedScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveManagedScalingPolicyOutcome RemoveManagedScalingPolicy(const Model::RemoveManagedScalingPolicyRequest& request) const;


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
         * <p>Starts a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StartNotebookExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNotebookExecutionOutcome StartNotebookExecution(const Model::StartNotebookExecutionRequest& request) const;


        /**
         * <p>Stops a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StopNotebookExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopNotebookExecutionOutcome StopNotebookExecution(const Model::StopNotebookExecutionRequest& request) const;


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
         * <p>Updates an Amazon EMR Studio configuration, including attributes such as
         * name, description, and subnets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/UpdateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioOutcome UpdateStudio(const Model::UpdateStudioRequest& request) const;


        /**
         * <p>Updates the session policy attached to the user or group for the specified
         * Amazon EMR Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/UpdateStudioSessionMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioSessionMappingOutcome UpdateStudioSessionMapping(const Model::UpdateStudioSessionMappingRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<EMREndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const EMRClientConfiguration& clientConfiguration);

      EMRClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<EMREndpointProviderBase> m_endpointProvider;
  };

} // namespace EMR
} // namespace Aws
