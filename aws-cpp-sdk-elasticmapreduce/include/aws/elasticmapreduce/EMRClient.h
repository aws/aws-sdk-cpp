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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/AddInstanceFleetResult.h>
#include <aws/elasticmapreduce/model/AddInstanceGroupsResult.h>
#include <aws/elasticmapreduce/model/AddJobFlowStepsResult.h>
#include <aws/elasticmapreduce/model/AddTagsResult.h>
#include <aws/elasticmapreduce/model/CancelStepsResult.h>
#include <aws/elasticmapreduce/model/CreateSecurityConfigurationResult.h>
#include <aws/elasticmapreduce/model/DeleteSecurityConfigurationResult.h>
#include <aws/elasticmapreduce/model/DescribeClusterResult.h>
#include <aws/elasticmapreduce/model/DescribeSecurityConfigurationResult.h>
#include <aws/elasticmapreduce/model/DescribeStepResult.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsResult.h>
#include <aws/elasticmapreduce/model/ListClustersResult.h>
#include <aws/elasticmapreduce/model/ListInstanceFleetsResult.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsResult.h>
#include <aws/elasticmapreduce/model/ListInstancesResult.h>
#include <aws/elasticmapreduce/model/ListSecurityConfigurationsResult.h>
#include <aws/elasticmapreduce/model/ListStepsResult.h>
#include <aws/elasticmapreduce/model/PutAutoScalingPolicyResult.h>
#include <aws/elasticmapreduce/model/RemoveAutoScalingPolicyResult.h>
#include <aws/elasticmapreduce/model/RemoveTagsResult.h>
#include <aws/elasticmapreduce/model/RunJobFlowResult.h>
#include <aws/core/NoResult.h>
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

namespace EMR
{

namespace Model
{
        class AddInstanceFleetRequest;
        class AddInstanceGroupsRequest;
        class AddJobFlowStepsRequest;
        class AddTagsRequest;
        class CancelStepsRequest;
        class CreateSecurityConfigurationRequest;
        class DeleteSecurityConfigurationRequest;
        class DescribeClusterRequest;
        class DescribeSecurityConfigurationRequest;
        class DescribeStepRequest;
        class ListBootstrapActionsRequest;
        class ListClustersRequest;
        class ListInstanceFleetsRequest;
        class ListInstanceGroupsRequest;
        class ListInstancesRequest;
        class ListSecurityConfigurationsRequest;
        class ListStepsRequest;
        class ModifyInstanceFleetRequest;
        class ModifyInstanceGroupsRequest;
        class PutAutoScalingPolicyRequest;
        class RemoveAutoScalingPolicyRequest;
        class RemoveTagsRequest;
        class RunJobFlowRequest;
        class SetTerminationProtectionRequest;
        class SetVisibleToAllUsersRequest;
        class TerminateJobFlowsRequest;

        typedef Aws::Utils::Outcome<AddInstanceFleetResult, Aws::Client::AWSError<EMRErrors>> AddInstanceFleetOutcome;
        typedef Aws::Utils::Outcome<AddInstanceGroupsResult, Aws::Client::AWSError<EMRErrors>> AddInstanceGroupsOutcome;
        typedef Aws::Utils::Outcome<AddJobFlowStepsResult, Aws::Client::AWSError<EMRErrors>> AddJobFlowStepsOutcome;
        typedef Aws::Utils::Outcome<AddTagsResult, Aws::Client::AWSError<EMRErrors>> AddTagsOutcome;
        typedef Aws::Utils::Outcome<CancelStepsResult, Aws::Client::AWSError<EMRErrors>> CancelStepsOutcome;
        typedef Aws::Utils::Outcome<CreateSecurityConfigurationResult, Aws::Client::AWSError<EMRErrors>> CreateSecurityConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteSecurityConfigurationResult, Aws::Client::AWSError<EMRErrors>> DeleteSecurityConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterResult, Aws::Client::AWSError<EMRErrors>> DescribeClusterOutcome;
        typedef Aws::Utils::Outcome<DescribeSecurityConfigurationResult, Aws::Client::AWSError<EMRErrors>> DescribeSecurityConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeStepResult, Aws::Client::AWSError<EMRErrors>> DescribeStepOutcome;
        typedef Aws::Utils::Outcome<ListBootstrapActionsResult, Aws::Client::AWSError<EMRErrors>> ListBootstrapActionsOutcome;
        typedef Aws::Utils::Outcome<ListClustersResult, Aws::Client::AWSError<EMRErrors>> ListClustersOutcome;
        typedef Aws::Utils::Outcome<ListInstanceFleetsResult, Aws::Client::AWSError<EMRErrors>> ListInstanceFleetsOutcome;
        typedef Aws::Utils::Outcome<ListInstanceGroupsResult, Aws::Client::AWSError<EMRErrors>> ListInstanceGroupsOutcome;
        typedef Aws::Utils::Outcome<ListInstancesResult, Aws::Client::AWSError<EMRErrors>> ListInstancesOutcome;
        typedef Aws::Utils::Outcome<ListSecurityConfigurationsResult, Aws::Client::AWSError<EMRErrors>> ListSecurityConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListStepsResult, Aws::Client::AWSError<EMRErrors>> ListStepsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EMRErrors>> ModifyInstanceFleetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EMRErrors>> ModifyInstanceGroupsOutcome;
        typedef Aws::Utils::Outcome<PutAutoScalingPolicyResult, Aws::Client::AWSError<EMRErrors>> PutAutoScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<RemoveAutoScalingPolicyResult, Aws::Client::AWSError<EMRErrors>> RemoveAutoScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsResult, Aws::Client::AWSError<EMRErrors>> RemoveTagsOutcome;
        typedef Aws::Utils::Outcome<RunJobFlowResult, Aws::Client::AWSError<EMRErrors>> RunJobFlowOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EMRErrors>> SetTerminationProtectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EMRErrors>> SetVisibleToAllUsersOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EMRErrors>> TerminateJobFlowsOutcome;

        typedef std::future<AddInstanceFleetOutcome> AddInstanceFleetOutcomeCallable;
        typedef std::future<AddInstanceGroupsOutcome> AddInstanceGroupsOutcomeCallable;
        typedef std::future<AddJobFlowStepsOutcome> AddJobFlowStepsOutcomeCallable;
        typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
        typedef std::future<CancelStepsOutcome> CancelStepsOutcomeCallable;
        typedef std::future<CreateSecurityConfigurationOutcome> CreateSecurityConfigurationOutcomeCallable;
        typedef std::future<DeleteSecurityConfigurationOutcome> DeleteSecurityConfigurationOutcomeCallable;
        typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
        typedef std::future<DescribeSecurityConfigurationOutcome> DescribeSecurityConfigurationOutcomeCallable;
        typedef std::future<DescribeStepOutcome> DescribeStepOutcomeCallable;
        typedef std::future<ListBootstrapActionsOutcome> ListBootstrapActionsOutcomeCallable;
        typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
        typedef std::future<ListInstanceFleetsOutcome> ListInstanceFleetsOutcomeCallable;
        typedef std::future<ListInstanceGroupsOutcome> ListInstanceGroupsOutcomeCallable;
        typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
        typedef std::future<ListSecurityConfigurationsOutcome> ListSecurityConfigurationsOutcomeCallable;
        typedef std::future<ListStepsOutcome> ListStepsOutcomeCallable;
        typedef std::future<ModifyInstanceFleetOutcome> ModifyInstanceFleetOutcomeCallable;
        typedef std::future<ModifyInstanceGroupsOutcome> ModifyInstanceGroupsOutcomeCallable;
        typedef std::future<PutAutoScalingPolicyOutcome> PutAutoScalingPolicyOutcomeCallable;
        typedef std::future<RemoveAutoScalingPolicyOutcome> RemoveAutoScalingPolicyOutcomeCallable;
        typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
        typedef std::future<RunJobFlowOutcome> RunJobFlowOutcomeCallable;
        typedef std::future<SetTerminationProtectionOutcome> SetTerminationProtectionOutcomeCallable;
        typedef std::future<SetVisibleToAllUsersOutcome> SetVisibleToAllUsersOutcomeCallable;
        typedef std::future<TerminateJobFlowsOutcome> TerminateJobFlowsOutcomeCallable;
} // namespace Model

  class EMRClient;

    typedef std::function<void(const EMRClient*, const Model::AddInstanceFleetRequest&, const Model::AddInstanceFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddInstanceFleetResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::AddInstanceGroupsRequest&, const Model::AddInstanceGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddInstanceGroupsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::AddJobFlowStepsRequest&, const Model::AddJobFlowStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddJobFlowStepsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::CancelStepsRequest&, const Model::CancelStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelStepsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::CreateSecurityConfigurationRequest&, const Model::CreateSecurityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSecurityConfigurationResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DeleteSecurityConfigurationRequest&, const Model::DeleteSecurityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecurityConfigurationResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DescribeSecurityConfigurationRequest&, const Model::DescribeSecurityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityConfigurationResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DescribeStepRequest&, const Model::DescribeStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStepResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListBootstrapActionsRequest&, const Model::ListBootstrapActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBootstrapActionsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListInstanceFleetsRequest&, const Model::ListInstanceFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceFleetsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListInstanceGroupsRequest&, const Model::ListInstanceGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceGroupsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListSecurityConfigurationsRequest&, const Model::ListSecurityConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityConfigurationsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListStepsRequest&, const Model::ListStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStepsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ModifyInstanceFleetRequest&, const Model::ModifyInstanceFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceFleetResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ModifyInstanceGroupsRequest&, const Model::ModifyInstanceGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceGroupsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::PutAutoScalingPolicyRequest&, const Model::PutAutoScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAutoScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::RemoveAutoScalingPolicyRequest&, const Model::RemoveAutoScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAutoScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::RunJobFlowRequest&, const Model::RunJobFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunJobFlowResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::SetTerminationProtectionRequest&, const Model::SetTerminationProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTerminationProtectionResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::SetVisibleToAllUsersRequest&, const Model::SetVisibleToAllUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetVisibleToAllUsersResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::TerminateJobFlowsRequest&, const Model::TerminateJobFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateJobFlowsResponseReceivedHandler;

  /**
   * <p>Amazon EMR is a web service that makes it easy to process large amounts of
   * data efficiently. Amazon EMR uses Hadoop processing combined with several AWS
   * products to do tasks such as web indexing, data mining, log file analysis,
   * machine learning, scientific simulation, and data warehousing.</p>
   */
  class AWS_EMR_API EMRClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EMRClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EMRClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~EMRClient();

        inline virtual const char* GetServiceClientName() const override { return "EMR"; }


        /**
         * <p>Adds an instance fleet to a running cluster.</p> <note> <p>The instance fleet
         * configuration is available only in Amazon EMR versions 4.8.0 and later,
         * excluding 5.0.x.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AddInstanceFleetOutcome AddInstanceFleet(const Model::AddInstanceFleetRequest& request) const;

        /**
         * <p>Adds an instance fleet to a running cluster.</p> <note> <p>The instance fleet
         * configuration is available only in Amazon EMR versions 4.8.0 and later,
         * excluding 5.0.x.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddInstanceFleetOutcomeCallable AddInstanceFleetCallable(const Model::AddInstanceFleetRequest& request) const;

        /**
         * <p>Adds an instance fleet to a running cluster.</p> <note> <p>The instance fleet
         * configuration is available only in Amazon EMR versions 4.8.0 and later,
         * excluding 5.0.x.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Adds one or more instance groups to a running cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddInstanceGroupsOutcomeCallable AddInstanceGroupsCallable(const Model::AddInstanceGroupsRequest& request) const;

        /**
         * <p>Adds one or more instance groups to a running cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * following states: STARTING, BOOTSTRAPPING, RUNNING, or WAITING.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddJobFlowSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::AddJobFlowStepsOutcome AddJobFlowSteps(const Model::AddJobFlowStepsRequest& request) const;

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
         * following states: STARTING, BOOTSTRAPPING, RUNNING, or WAITING.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddJobFlowSteps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddJobFlowStepsOutcomeCallable AddJobFlowStepsCallable(const Model::AddJobFlowStepsRequest& request) const;

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
         * following states: STARTING, BOOTSTRAPPING, RUNNING, or WAITING.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddJobFlowSteps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddJobFlowStepsAsync(const Model::AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to an Amazon EMR resource. Tags make it easier to associate
         * clusters in various ways, such as grouping clusters to track your Amazon EMR
         * resource allocation costs. For more information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-tags.html">Tag
         * Clusters</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds tags to an Amazon EMR resource. Tags make it easier to associate
         * clusters in various ways, such as grouping clusters to track your Amazon EMR
         * resource allocation costs. For more information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-tags.html">Tag
         * Clusters</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds tags to an Amazon EMR resource. Tags make it easier to associate
         * clusters in various ways, such as grouping clusters to track your Amazon EMR
         * resource allocation costs. For more information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-tags.html">Tag
         * Clusters</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a pending step or steps in a running cluster. Available only in
         * Amazon EMR versions 4.8.0 and later, excluding version 5.0.0. A maximum of 256
         * steps are allowed in each CancelSteps request. CancelSteps is idempotent but
         * asynchronous; it does not guarantee a step will be canceled, even if the request
         * is successfully submitted. You can only cancel steps that are in a
         * <code>PENDING</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CancelSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelStepsOutcome CancelSteps(const Model::CancelStepsRequest& request) const;

        /**
         * <p>Cancels a pending step or steps in a running cluster. Available only in
         * Amazon EMR versions 4.8.0 and later, excluding version 5.0.0. A maximum of 256
         * steps are allowed in each CancelSteps request. CancelSteps is idempotent but
         * asynchronous; it does not guarantee a step will be canceled, even if the request
         * is successfully submitted. You can only cancel steps that are in a
         * <code>PENDING</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CancelSteps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelStepsOutcomeCallable CancelStepsCallable(const Model::CancelStepsRequest& request) const;

        /**
         * <p>Cancels a pending step or steps in a running cluster. Available only in
         * Amazon EMR versions 4.8.0 and later, excluding version 5.0.0. A maximum of 256
         * steps are allowed in each CancelSteps request. CancelSteps is idempotent but
         * asynchronous; it does not guarantee a step will be canceled, even if the request
         * is successfully submitted. You can only cancel steps that are in a
         * <code>PENDING</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CancelSteps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a security configuration, which is stored in the service and can be
         * specified when a cluster is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateSecurityConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSecurityConfigurationOutcomeCallable CreateSecurityConfigurationCallable(const Model::CreateSecurityConfigurationRequest& request) const;

        /**
         * <p>Creates a security configuration, which is stored in the service and can be
         * specified when a cluster is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateSecurityConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSecurityConfigurationAsync(const Model::CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityConfigurationOutcome DeleteSecurityConfiguration(const Model::DeleteSecurityConfigurationRequest& request) const;

        /**
         * <p>Deletes a security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteSecurityConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSecurityConfigurationOutcomeCallable DeleteSecurityConfigurationCallable(const Model::DeleteSecurityConfigurationRequest& request) const;

        /**
         * <p>Deletes a security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteSecurityConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSecurityConfigurationAsync(const Model::DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides cluster-level details including status, hardware and software
         * configuration, VPC settings, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

        /**
         * <p>Provides cluster-level details including status, hardware and software
         * configuration, VPC settings, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const Model::DescribeClusterRequest& request) const;

        /**
         * <p>Provides cluster-level details including status, hardware and software
         * configuration, VPC settings, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the details of a security configuration by returning the
         * configuration JSON.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityConfigurationOutcome DescribeSecurityConfiguration(const Model::DescribeSecurityConfigurationRequest& request) const;

        /**
         * <p>Provides the details of a security configuration by returning the
         * configuration JSON.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeSecurityConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSecurityConfigurationOutcomeCallable DescribeSecurityConfigurationCallable(const Model::DescribeSecurityConfigurationRequest& request) const;

        /**
         * <p>Provides the details of a security configuration by returning the
         * configuration JSON.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeSecurityConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSecurityConfigurationAsync(const Model::DescribeSecurityConfigurationRequest& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides more detail about the cluster step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStep">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStepOutcome DescribeStep(const Model::DescribeStepRequest& request) const;

        /**
         * <p>Provides more detail about the cluster step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStep">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStepOutcomeCallable DescribeStepCallable(const Model::DescribeStepRequest& request) const;

        /**
         * <p>Provides more detail about the cluster step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStep">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStepAsync(const Model::DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about the bootstrap actions associated with a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListBootstrapActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBootstrapActionsOutcome ListBootstrapActions(const Model::ListBootstrapActionsRequest& request) const;

        /**
         * <p>Provides information about the bootstrap actions associated with a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListBootstrapActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBootstrapActionsOutcomeCallable ListBootstrapActionsCallable(const Model::ListBootstrapActionsRequest& request) const;

        /**
         * <p>Provides information about the bootstrap actions associated with a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListBootstrapActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBootstrapActionsAsync(const Model::ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the status of all clusters visible to this AWS account. Allows you
         * to filter the list of clusters based on certain criteria; for example, filtering
         * by cluster creation date and time or by status. This call returns a maximum of
         * 50 clusters per call, but returns a marker to track the paging of the cluster
         * list across multiple ListClusters calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * <p>Provides the status of all clusters visible to this AWS account. Allows you
         * to filter the list of clusters based on certain criteria; for example, filtering
         * by cluster creation date and time or by status. This call returns a maximum of
         * 50 clusters per call, but returns a marker to track the paging of the cluster
         * list across multiple ListClusters calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

        /**
         * <p>Provides the status of all clusters visible to this AWS account. Allows you
         * to filter the list of clusters based on certain criteria; for example, filtering
         * by cluster creation date and time or by status. This call returns a maximum of
         * 50 clusters per call, but returns a marker to track the paging of the cluster
         * list across multiple ListClusters calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClustersAsync(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all available details about the instance fleets in a cluster.</p>
         * <note> <p>The instance fleet configuration is available only in Amazon EMR
         * versions 4.8.0 and later, excluding 5.0.x versions.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceFleetsOutcome ListInstanceFleets(const Model::ListInstanceFleetsRequest& request) const;

        /**
         * <p>Lists all available details about the instance fleets in a cluster.</p>
         * <note> <p>The instance fleet configuration is available only in Amazon EMR
         * versions 4.8.0 and later, excluding 5.0.x versions.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceFleets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceFleetsOutcomeCallable ListInstanceFleetsCallable(const Model::ListInstanceFleetsRequest& request) const;

        /**
         * <p>Lists all available details about the instance fleets in a cluster.</p>
         * <note> <p>The instance fleet configuration is available only in Amazon EMR
         * versions 4.8.0 and later, excluding 5.0.x versions.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceFleets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Provides all available details about the instance groups in a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceGroupsOutcomeCallable ListInstanceGroupsCallable(const Model::ListInstanceGroupsRequest& request) const;

        /**
         * <p>Provides all available details about the instance groups in a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Provides information for all active EC2 instances and EC2 instances
         * terminated in the last 30 days, up to a maximum of 2,000. EC2 instances in any
         * of the following states are considered active: AWAITING_FULFILLMENT,
         * PROVISIONING, BOOTSTRAPPING, RUNNING.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstancesOutcomeCallable ListInstancesCallable(const Model::ListInstancesRequest& request) const;

        /**
         * <p>Provides information for all active EC2 instances and EC2 instances
         * terminated in the last 30 days, up to a maximum of 2,000. EC2 instances in any
         * of the following states are considered active: AWAITING_FULFILLMENT,
         * PROVISIONING, BOOTSTRAPPING, RUNNING.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists all the security configurations visible to this account, providing
         * their creation dates and times, and their names. This call returns a maximum of
         * 50 clusters per call, but returns a marker to track the paging of the cluster
         * list across multiple ListSecurityConfigurations calls.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSecurityConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityConfigurationsOutcomeCallable ListSecurityConfigurationsCallable(const Model::ListSecurityConfigurationsRequest& request) const;

        /**
         * <p>Lists all the security configurations visible to this account, providing
         * their creation dates and times, and their names. This call returns a maximum of
         * 50 clusters per call, but returns a marker to track the paging of the cluster
         * list across multiple ListSecurityConfigurations calls.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSecurityConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityConfigurationsAsync(const Model::ListSecurityConfigurationsRequest& request, const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of steps for the cluster in reverse order unless you specify
         * stepIds with the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStepsOutcome ListSteps(const Model::ListStepsRequest& request) const;

        /**
         * <p>Provides a list of steps for the cluster in reverse order unless you specify
         * stepIds with the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSteps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStepsOutcomeCallable ListStepsCallable(const Model::ListStepsRequest& request) const;

        /**
         * <p>Provides a list of steps for the cluster in reverse order unless you specify
         * stepIds with the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSteps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStepsAsync(const Model::ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the target On-Demand and target Spot capacities for the instance
         * fleet with the specified InstanceFleetID within the cluster specified using
         * ClusterID. The call either succeeds or fails atomically.</p> <note> <p>The
         * instance fleet configuration is available only in Amazon EMR versions 4.8.0 and
         * later, excluding 5.0.x versions.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyInstanceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceFleetOutcome ModifyInstanceFleet(const Model::ModifyInstanceFleetRequest& request) const;

        /**
         * <p>Modifies the target On-Demand and target Spot capacities for the instance
         * fleet with the specified InstanceFleetID within the cluster specified using
         * ClusterID. The call either succeeds or fails atomically.</p> <note> <p>The
         * instance fleet configuration is available only in Amazon EMR versions 4.8.0 and
         * later, excluding 5.0.x versions.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyInstanceFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstanceFleetOutcomeCallable ModifyInstanceFleetCallable(const Model::ModifyInstanceFleetRequest& request) const;

        /**
         * <p>Modifies the target On-Demand and target Spot capacities for the instance
         * fleet with the specified InstanceFleetID within the cluster specified using
         * ClusterID. The call either succeeds or fails atomically.</p> <note> <p>The
         * instance fleet configuration is available only in Amazon EMR versions 4.8.0 and
         * later, excluding 5.0.x versions.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyInstanceFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>ModifyInstanceGroups modifies the number of nodes and configuration settings
         * of an instance group. The input parameters include the new target instance count
         * for the group and the instance group ID. The call will either succeed or fail
         * atomically.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyInstanceGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstanceGroupsOutcomeCallable ModifyInstanceGroupsCallable(const Model::ModifyInstanceGroupsRequest& request) const;

        /**
         * <p>ModifyInstanceGroups modifies the number of nodes and configuration settings
         * of an instance group. The input parameters include the new target instance count
         * for the group and the instance group ID. The call will either succeed or fail
         * atomically.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyInstanceGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates or updates an automatic scaling policy for a core instance group or
         * task instance group in an Amazon EMR cluster. The automatic scaling policy
         * defines how an instance group dynamically adds and terminates EC2 instances in
         * response to the value of a CloudWatch metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutAutoScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAutoScalingPolicyOutcomeCallable PutAutoScalingPolicyCallable(const Model::PutAutoScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates an automatic scaling policy for a core instance group or
         * task instance group in an Amazon EMR cluster. The automatic scaling policy
         * defines how an instance group dynamically adds and terminates EC2 instances in
         * response to the value of a CloudWatch metric.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutAutoScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAutoScalingPolicyAsync(const Model::PutAutoScalingPolicyRequest& request, const PutAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an automatic scaling policy from a specified instance group within an
         * EMR cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveAutoScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAutoScalingPolicyOutcome RemoveAutoScalingPolicy(const Model::RemoveAutoScalingPolicyRequest& request) const;

        /**
         * <p>Removes an automatic scaling policy from a specified instance group within an
         * EMR cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveAutoScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveAutoScalingPolicyOutcomeCallable RemoveAutoScalingPolicyCallable(const Model::RemoveAutoScalingPolicyRequest& request) const;

        /**
         * <p>Removes an automatic scaling policy from a specified instance group within an
         * EMR cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveAutoScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveAutoScalingPolicyAsync(const Model::RemoveAutoScalingPolicyRequest& request, const RemoveAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from an Amazon EMR resource. Tags make it easier to associate
         * clusters in various ways, such as grouping clusters to track your Amazon EMR
         * resource allocation costs. For more information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-tags.html">Tag
         * Clusters</a>. </p> <p>The following example removes the stack tag with value
         * Prod from a cluster:</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes tags from an Amazon EMR resource. Tags make it easier to associate
         * clusters in various ways, such as grouping clusters to track your Amazon EMR
         * resource allocation costs. For more information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-tags.html">Tag
         * Clusters</a>. </p> <p>The following example removes the stack tag with value
         * Prod from a cluster:</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes tags from an Amazon EMR resource. Tags make it easier to associate
         * clusters in various ways, such as grouping clusters to track your Amazon EMR
         * resource allocation costs. For more information, see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-tags.html">Tag
         * Clusters</a>. </p> <p>The following example removes the stack tag with value
         * Prod from a cluster:</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * store your results.</p> <note> <p>The instance fleets configuration is available
         * only in Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions. The
         * RunJobFlow request can contain InstanceFleets parameters or InstanceGroups
         * parameters, but not both.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RunJobFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::RunJobFlowOutcome RunJobFlow(const Model::RunJobFlowRequest& request) const;

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
         * store your results.</p> <note> <p>The instance fleets configuration is available
         * only in Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions. The
         * RunJobFlow request can contain InstanceFleets parameters or InstanceGroups
         * parameters, but not both.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RunJobFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RunJobFlowOutcomeCallable RunJobFlowCallable(const Model::RunJobFlowRequest& request) const;

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
         * store your results.</p> <note> <p>The instance fleets configuration is available
         * only in Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions. The
         * RunJobFlow request can contain InstanceFleets parameters or InstanceGroups
         * parameters, but not both.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RunJobFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetTerminationProtectionOutcomeCallable SetTerminationProtectionCallable(const Model::SetTerminationProtectionRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetTerminationProtectionAsync(const Model::SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets whether all AWS Identity and Access Management (IAM) users under your
         * account can access the specified clusters (job flows). This action works on
         * running clusters. You can also set the visibility of a cluster when you launch
         * it using the <code>VisibleToAllUsers</code> parameter of <a>RunJobFlow</a>. The
         * SetVisibleToAllUsers action can be called only by an IAM user who created the
         * cluster or the AWS account that owns the cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetVisibleToAllUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::SetVisibleToAllUsersOutcome SetVisibleToAllUsers(const Model::SetVisibleToAllUsersRequest& request) const;

        /**
         * <p>Sets whether all AWS Identity and Access Management (IAM) users under your
         * account can access the specified clusters (job flows). This action works on
         * running clusters. You can also set the visibility of a cluster when you launch
         * it using the <code>VisibleToAllUsers</code> parameter of <a>RunJobFlow</a>. The
         * SetVisibleToAllUsers action can be called only by an IAM user who created the
         * cluster or the AWS account that owns the cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetVisibleToAllUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetVisibleToAllUsersOutcomeCallable SetVisibleToAllUsersCallable(const Model::SetVisibleToAllUsersRequest& request) const;

        /**
         * <p>Sets whether all AWS Identity and Access Management (IAM) users under your
         * account can access the specified clusters (job flows). This action works on
         * running clusters. You can also set the visibility of a cluster when you launch
         * it using the <code>VisibleToAllUsers</code> parameter of <a>RunJobFlow</a>. The
         * SetVisibleToAllUsers action can be called only by an IAM user who created the
         * cluster or the AWS account that owns the cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetVisibleToAllUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetVisibleToAllUsersAsync(const Model::SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateJobFlowsOutcomeCallable TerminateJobFlowsCallable(const Model::TerminateJobFlowsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateJobFlowsAsync(const Model::TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddInstanceFleetAsyncHelper(const Model::AddInstanceFleetRequest& request, const AddInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddInstanceGroupsAsyncHelper(const Model::AddInstanceGroupsRequest& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddJobFlowStepsAsyncHelper(const Model::AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelStepsAsyncHelper(const Model::CancelStepsRequest& request, const CancelStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSecurityConfigurationAsyncHelper(const Model::CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSecurityConfigurationAsyncHelper(const Model::DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterAsyncHelper(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSecurityConfigurationAsyncHelper(const Model::DescribeSecurityConfigurationRequest& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStepAsyncHelper(const Model::DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBootstrapActionsAsyncHelper(const Model::ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceFleetsAsyncHelper(const Model::ListInstanceFleetsRequest& request, const ListInstanceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceGroupsAsyncHelper(const Model::ListInstanceGroupsRequest& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstancesAsyncHelper(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSecurityConfigurationsAsyncHelper(const Model::ListSecurityConfigurationsRequest& request, const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStepsAsyncHelper(const Model::ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyInstanceFleetAsyncHelper(const Model::ModifyInstanceFleetRequest& request, const ModifyInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyInstanceGroupsAsyncHelper(const Model::ModifyInstanceGroupsRequest& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAutoScalingPolicyAsyncHelper(const Model::PutAutoScalingPolicyRequest& request, const PutAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveAutoScalingPolicyAsyncHelper(const Model::RemoveAutoScalingPolicyRequest& request, const RemoveAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RunJobFlowAsyncHelper(const Model::RunJobFlowRequest& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetTerminationProtectionAsyncHelper(const Model::SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetVisibleToAllUsersAsyncHelper(const Model::SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateJobFlowsAsyncHelper(const Model::TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EMR
} // namespace Aws
