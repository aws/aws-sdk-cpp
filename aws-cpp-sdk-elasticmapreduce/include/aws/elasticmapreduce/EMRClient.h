/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/AddInstanceGroupsResult.h>
#include <aws/elasticmapreduce/model/AddJobFlowStepsResult.h>
#include <aws/elasticmapreduce/model/AddTagsResult.h>
#include <aws/elasticmapreduce/model/DescribeClusterResult.h>
#include <aws/elasticmapreduce/model/DescribeStepResult.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsResult.h>
#include <aws/elasticmapreduce/model/ListClustersResult.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsResult.h>
#include <aws/elasticmapreduce/model/ListInstancesResult.h>
#include <aws/elasticmapreduce/model/ListStepsResult.h>
#include <aws/elasticmapreduce/model/RemoveTagsResult.h>
#include <aws/elasticmapreduce/model/RunJobFlowResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <future>

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

namespace Json
{
  class JsonValue;
} // namespace Json
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
    class AddInstanceGroupsRequest;
    class AddJobFlowStepsRequest;
    class AddTagsRequest;
    class DescribeClusterRequest;
    class DescribeStepRequest;
    class ListBootstrapActionsRequest;
    class ListClustersRequest;
    class ListInstanceGroupsRequest;
    class ListInstancesRequest;
    class ListStepsRequest;
    class ModifyInstanceGroupsRequest;
    class RemoveTagsRequest;
    class RunJobFlowRequest;
    class SetTerminationProtectionRequest;
    class SetVisibleToAllUsersRequest;
    class TerminateJobFlowsRequest;

  typedef Utils::Outcome<AddInstanceGroupsResult, Client::AWSError<EMRErrors>> AddInstanceGroupsOutcome;
  typedef Utils::Outcome<AddJobFlowStepsResult, Client::AWSError<EMRErrors>> AddJobFlowStepsOutcome;
  typedef Utils::Outcome<AddTagsResult, Client::AWSError<EMRErrors>> AddTagsOutcome;
  typedef Utils::Outcome<DescribeClusterResult, Client::AWSError<EMRErrors>> DescribeClusterOutcome;
  typedef Utils::Outcome<DescribeStepResult, Client::AWSError<EMRErrors>> DescribeStepOutcome;
  typedef Utils::Outcome<ListBootstrapActionsResult, Client::AWSError<EMRErrors>> ListBootstrapActionsOutcome;
  typedef Utils::Outcome<ListClustersResult, Client::AWSError<EMRErrors>> ListClustersOutcome;
  typedef Utils::Outcome<ListInstanceGroupsResult, Client::AWSError<EMRErrors>> ListInstanceGroupsOutcome;
  typedef Utils::Outcome<ListInstancesResult, Client::AWSError<EMRErrors>> ListInstancesOutcome;
  typedef Utils::Outcome<ListStepsResult, Client::AWSError<EMRErrors>> ListStepsOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<EMRErrors>> ModifyInstanceGroupsOutcome;
  typedef Utils::Outcome<RemoveTagsResult, Client::AWSError<EMRErrors>> RemoveTagsOutcome;
  typedef Utils::Outcome<RunJobFlowResult, Client::AWSError<EMRErrors>> RunJobFlowOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<EMRErrors>> SetTerminationProtectionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<EMRErrors>> SetVisibleToAllUsersOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<EMRErrors>> TerminateJobFlowsOutcome;

  typedef std::future<AddInstanceGroupsOutcome> AddInstanceGroupsOutcomeCallable;
  typedef std::future<AddJobFlowStepsOutcome> AddJobFlowStepsOutcomeCallable;
  typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
  typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
  typedef std::future<DescribeStepOutcome> DescribeStepOutcomeCallable;
  typedef std::future<ListBootstrapActionsOutcome> ListBootstrapActionsOutcomeCallable;
  typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
  typedef std::future<ListInstanceGroupsOutcome> ListInstanceGroupsOutcomeCallable;
  typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
  typedef std::future<ListStepsOutcome> ListStepsOutcomeCallable;
  typedef std::future<ModifyInstanceGroupsOutcome> ModifyInstanceGroupsOutcomeCallable;
  typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
  typedef std::future<RunJobFlowOutcome> RunJobFlowOutcomeCallable;
  typedef std::future<SetTerminationProtectionOutcome> SetTerminationProtectionOutcomeCallable;
  typedef std::future<SetVisibleToAllUsersOutcome> SetVisibleToAllUsersOutcomeCallable;
  typedef std::future<TerminateJobFlowsOutcome> TerminateJobFlowsOutcomeCallable;
} // namespace Model

    class EMRClient;

  typedef Aws::Utils::Event<EMRClient, const Model::AddInstanceGroupsRequest&, const Model::AddInstanceGroupsOutcome&, const Aws::Client::AsyncCallerContext*> AddInstanceGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::AddJobFlowStepsRequest&, const Model::AddJobFlowStepsOutcome&, const Aws::Client::AsyncCallerContext*> AddJobFlowStepsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const Aws::Client::AsyncCallerContext*> AddTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const Aws::Client::AsyncCallerContext*> DescribeClusterOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::DescribeStepRequest&, const Model::DescribeStepOutcome&, const Aws::Client::AsyncCallerContext*> DescribeStepOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::ListBootstrapActionsRequest&, const Model::ListBootstrapActionsOutcome&, const Aws::Client::AsyncCallerContext*> ListBootstrapActionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const Aws::Client::AsyncCallerContext*> ListClustersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::ListInstanceGroupsRequest&, const Model::ListInstanceGroupsOutcome&, const Aws::Client::AsyncCallerContext*> ListInstanceGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const Aws::Client::AsyncCallerContext*> ListInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::ListStepsRequest&, const Model::ListStepsOutcome&, const Aws::Client::AsyncCallerContext*> ListStepsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::ModifyInstanceGroupsRequest&, const Model::ModifyInstanceGroupsOutcome&, const Aws::Client::AsyncCallerContext*> ModifyInstanceGroupsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const Aws::Client::AsyncCallerContext*> RemoveTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::RunJobFlowRequest&, const Model::RunJobFlowOutcome&, const Aws::Client::AsyncCallerContext*> RunJobFlowOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::SetTerminationProtectionRequest&, const Model::SetTerminationProtectionOutcome&, const Aws::Client::AsyncCallerContext*> SetTerminationProtectionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::SetVisibleToAllUsersRequest&, const Model::SetVisibleToAllUsersOutcome&, const Aws::Client::AsyncCallerContext*> SetVisibleToAllUsersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<EMRClient, const Model::TerminateJobFlowsRequest&, const Model::TerminateJobFlowsOutcome&, const Aws::Client::AsyncCallerContext*> TerminateJobFlowsOutcomeReceivedEvent;

  /*
    <p>Amazon Elastic MapReduce (Amazon EMR) is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine learning, scientific simulation, and data warehousing.</p>
  */
  class AWS_EMR_API EMRClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      EMRClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      EMRClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      EMRClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~EMRClient();

     /*
       <p>AddInstanceGroups adds an instance group to a running cluster.</p>
     */
     Model::AddInstanceGroupsOutcome AddInstanceGroups(const Model::AddInstanceGroupsRequest& request) const;

     /*
       <p>AddInstanceGroups adds an instance group to a running cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AddInstanceGroupsOutcomeCallable AddInstanceGroupsCallable(const Model::AddInstanceGroupsRequest& request) const;

     /*
       <p>AddInstanceGroups adds an instance group to a running cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AddInstanceGroupsAsync(const Model::AddInstanceGroupsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> AddJobFlowSteps adds new steps to a running job flow. A maximum of 256 steps are allowed in each job flow. </p> <p>If your job flow is long-running (such as a Hive data warehouse) or complex, you may require more than 256 steps to process your data. You can bypass the 256-step limitation in various ways, including using the SSH shell to connect to the master node and submitting queries directly to the software running on the master node, such as Hive and Hadoop. For more information on how to do this, go to <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/AddMoreThan256Steps.html">Add More than 256 Steps to a Job Flow</a> in the <i>Amazon Elastic MapReduce Developer's Guide</i>.</p> <p> A step specifies the location of a JAR file stored either on the master node of the job flow or in Amazon S3. Each step is performed by the main function of the main class of the JAR file. The main class can be specified either in the manifest of the JAR or by using the MainFunction parameter of the step. </p> <p> Elastic MapReduce executes each step in the order listed. For a step to be considered complete, the main function must exit with a zero exit code and all Hadoop jobs started while the step was running must have completed and run successfully. </p> <p> You can only add steps to a job flow that is in one of the following states: STARTING, BOOTSTRAPPING, RUNNING, or WAITING.</p>
     */
     Model::AddJobFlowStepsOutcome AddJobFlowSteps(const Model::AddJobFlowStepsRequest& request) const;

     /*
       <p> AddJobFlowSteps adds new steps to a running job flow. A maximum of 256 steps are allowed in each job flow. </p> <p>If your job flow is long-running (such as a Hive data warehouse) or complex, you may require more than 256 steps to process your data. You can bypass the 256-step limitation in various ways, including using the SSH shell to connect to the master node and submitting queries directly to the software running on the master node, such as Hive and Hadoop. For more information on how to do this, go to <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/AddMoreThan256Steps.html">Add More than 256 Steps to a Job Flow</a> in the <i>Amazon Elastic MapReduce Developer's Guide</i>.</p> <p> A step specifies the location of a JAR file stored either on the master node of the job flow or in Amazon S3. Each step is performed by the main function of the main class of the JAR file. The main class can be specified either in the manifest of the JAR or by using the MainFunction parameter of the step. </p> <p> Elastic MapReduce executes each step in the order listed. For a step to be considered complete, the main function must exit with a zero exit code and all Hadoop jobs started while the step was running must have completed and run successfully. </p> <p> You can only add steps to a job flow that is in one of the following states: STARTING, BOOTSTRAPPING, RUNNING, or WAITING.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AddJobFlowStepsOutcomeCallable AddJobFlowStepsCallable(const Model::AddJobFlowStepsRequest& request) const;

     /*
       <p> AddJobFlowSteps adds new steps to a running job flow. A maximum of 256 steps are allowed in each job flow. </p> <p>If your job flow is long-running (such as a Hive data warehouse) or complex, you may require more than 256 steps to process your data. You can bypass the 256-step limitation in various ways, including using the SSH shell to connect to the master node and submitting queries directly to the software running on the master node, such as Hive and Hadoop. For more information on how to do this, go to <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/AddMoreThan256Steps.html">Add More than 256 Steps to a Job Flow</a> in the <i>Amazon Elastic MapReduce Developer's Guide</i>.</p> <p> A step specifies the location of a JAR file stored either on the master node of the job flow or in Amazon S3. Each step is performed by the main function of the main class of the JAR file. The main class can be specified either in the manifest of the JAR or by using the MainFunction parameter of the step. </p> <p> Elastic MapReduce executes each step in the order listed. For a step to be considered complete, the main function must exit with a zero exit code and all Hadoop jobs started while the step was running must have completed and run successfully. </p> <p> You can only add steps to a job flow that is in one of the following states: STARTING, BOOTSTRAPPING, RUNNING, or WAITING.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AddJobFlowStepsAsync(const Model::AddJobFlowStepsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Adds tags to an Amazon EMR resource. Tags make it easier to associate clusters in various ways, such as grouping clusters to track your Amazon EMR resource allocation costs. For more information, see <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging Amazon EMR Resources</a>. </p>
     */
     Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

     /*
       <p>Adds tags to an Amazon EMR resource. Tags make it easier to associate clusters in various ways, such as grouping clusters to track your Amazon EMR resource allocation costs. For more information, see <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging Amazon EMR Resources</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

     /*
       <p>Adds tags to an Amazon EMR resource. Tags make it easier to associate clusters in various ways, such as grouping clusters to track your Amazon EMR resource allocation costs. For more information, see <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging Amazon EMR Resources</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AddTagsAsync(const Model::AddTagsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Provides cluster-level details including status, hardware and software configuration, VPC settings, and so on. For information about the cluster steps, see <a>ListSteps</a>.</p>
     */
     Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

     /*
       <p>Provides cluster-level details including status, hardware and software configuration, VPC settings, and so on. For information about the cluster steps, see <a>ListSteps</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const Model::DescribeClusterRequest& request) const;

     /*
       <p>Provides cluster-level details including status, hardware and software configuration, VPC settings, and so on. For information about the cluster steps, see <a>ListSteps</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeClusterAsync(const Model::DescribeClusterRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Provides more detail about the cluster step.</p>
     */
     Model::DescribeStepOutcome DescribeStep(const Model::DescribeStepRequest& request) const;

     /*
       <p>Provides more detail about the cluster step.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeStepOutcomeCallable DescribeStepCallable(const Model::DescribeStepRequest& request) const;

     /*
       <p>Provides more detail about the cluster step.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeStepAsync(const Model::DescribeStepRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Provides information about the bootstrap actions associated with a cluster.</p>
     */
     Model::ListBootstrapActionsOutcome ListBootstrapActions(const Model::ListBootstrapActionsRequest& request) const;

     /*
       <p>Provides information about the bootstrap actions associated with a cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListBootstrapActionsOutcomeCallable ListBootstrapActionsCallable(const Model::ListBootstrapActionsRequest& request) const;

     /*
       <p>Provides information about the bootstrap actions associated with a cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListBootstrapActionsAsync(const Model::ListBootstrapActionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Provides the status of all clusters visible to this AWS account. Allows you to filter the list of clusters based on certain criteria; for example, filtering by cluster creation date and time or by status. This call returns a maximum of 50 clusters per call, but returns a marker to track the paging of the cluster list across multiple ListClusters calls. </p>
     */
     Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

     /*
       <p>Provides the status of all clusters visible to this AWS account. Allows you to filter the list of clusters based on certain criteria; for example, filtering by cluster creation date and time or by status. This call returns a maximum of 50 clusters per call, but returns a marker to track the paging of the cluster list across multiple ListClusters calls. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

     /*
       <p>Provides the status of all clusters visible to this AWS account. Allows you to filter the list of clusters based on certain criteria; for example, filtering by cluster creation date and time or by status. This call returns a maximum of 50 clusters per call, but returns a marker to track the paging of the cluster list across multiple ListClusters calls. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListClustersAsync(const Model::ListClustersRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Provides all available details about the instance groups in a cluster.</p>
     */
     Model::ListInstanceGroupsOutcome ListInstanceGroups(const Model::ListInstanceGroupsRequest& request) const;

     /*
       <p>Provides all available details about the instance groups in a cluster.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListInstanceGroupsOutcomeCallable ListInstanceGroupsCallable(const Model::ListInstanceGroupsRequest& request) const;

     /*
       <p>Provides all available details about the instance groups in a cluster.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListInstanceGroupsAsync(const Model::ListInstanceGroupsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Provides information about the cluster instances that Amazon EMR provisions on behalf of a user when it creates the cluster. For example, this operation indicates when the EC2 instances reach the Ready state, when instances become available to Amazon EMR to use for jobs, and the IP addresses for cluster instances, etc. </p>
     */
     Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;

     /*
       <p>Provides information about the cluster instances that Amazon EMR provisions on behalf of a user when it creates the cluster. For example, this operation indicates when the EC2 instances reach the Ready state, when instances become available to Amazon EMR to use for jobs, and the IP addresses for cluster instances, etc. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListInstancesOutcomeCallable ListInstancesCallable(const Model::ListInstancesRequest& request) const;

     /*
       <p>Provides information about the cluster instances that Amazon EMR provisions on behalf of a user when it creates the cluster. For example, this operation indicates when the EC2 instances reach the Ready state, when instances become available to Amazon EMR to use for jobs, and the IP addresses for cluster instances, etc. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListInstancesAsync(const Model::ListInstancesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Provides a list of steps for the cluster. </p>
     */
     Model::ListStepsOutcome ListSteps(const Model::ListStepsRequest& request) const;

     /*
       <p>Provides a list of steps for the cluster. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListStepsOutcomeCallable ListStepsCallable(const Model::ListStepsRequest& request) const;

     /*
       <p>Provides a list of steps for the cluster. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListStepsAsync(const Model::ListStepsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>ModifyInstanceGroups modifies the number of nodes and configuration settings of an instance group. The input parameters include the new target instance count for the group and the instance group ID. The call will either succeed or fail atomically.</p>
     */
     Model::ModifyInstanceGroupsOutcome ModifyInstanceGroups(const Model::ModifyInstanceGroupsRequest& request) const;

     /*
       <p>ModifyInstanceGroups modifies the number of nodes and configuration settings of an instance group. The input parameters include the new target instance count for the group and the instance group ID. The call will either succeed or fail atomically.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ModifyInstanceGroupsOutcomeCallable ModifyInstanceGroupsCallable(const Model::ModifyInstanceGroupsRequest& request) const;

     /*
       <p>ModifyInstanceGroups modifies the number of nodes and configuration settings of an instance group. The input parameters include the new target instance count for the group and the instance group ID. The call will either succeed or fail atomically.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ModifyInstanceGroupsAsync(const Model::ModifyInstanceGroupsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Removes tags from an Amazon EMR resource. Tags make it easier to associate clusters in various ways, such as grouping clusters to track your Amazon EMR resource allocation costs. For more information, see <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging Amazon EMR Resources</a>. </p> <p>The following example removes the stack tag with value Prod from a cluster:</p>
     */
     Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

     /*
       <p>Removes tags from an Amazon EMR resource. Tags make it easier to associate clusters in various ways, such as grouping clusters to track your Amazon EMR resource allocation costs. For more information, see <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging Amazon EMR Resources</a>. </p> <p>The following example removes the stack tag with value Prod from a cluster:</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

     /*
       <p>Removes tags from an Amazon EMR resource. Tags make it easier to associate clusters in various ways, such as grouping clusters to track your Amazon EMR resource allocation costs. For more information, see <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/emr-plan-tags.html">Tagging Amazon EMR Resources</a>. </p> <p>The following example removes the stack tag with value Prod from a cluster:</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> RunJobFlow creates and starts running a new job flow. The job flow will run the steps specified. Once the job flow completes, the cluster is stopped and the HDFS partition is lost. To prevent loss of data, configure the last step of the job flow to store results in Amazon S3. If the <a>JobFlowInstancesConfig</a> <code>KeepJobFlowAliveWhenNoSteps</code> parameter is set to <code>TRUE</code>, the job flow will transition to the WAITING state rather than shutting down once the steps have completed. </p> <p>For additional protection, you can set the <a>JobFlowInstancesConfig</a> <code>TerminationProtected</code> parameter to <code>TRUE</code> to lock the job flow and prevent it from being terminated by API call, user intervention, or in the event of a job flow error.</p> <p>A maximum of 256 steps are allowed in each job flow.</p> <p>If your job flow is long-running (such as a Hive data warehouse) or complex, you may require more than 256 steps to process your data. You can bypass the 256-step limitation in various ways, including using the SSH shell to connect to the master node and submitting queries directly to the software running on the master node, such as Hive and Hadoop. For more information on how to do this, go to <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/AddMoreThan256Steps.html">Add More than 256 Steps to a Job Flow</a> in the <i>Amazon Elastic MapReduce Developer's Guide</i>.</p> <p>For long running job flows, we recommend that you periodically store your results.</p>
     */
     Model::RunJobFlowOutcome RunJobFlow(const Model::RunJobFlowRequest& request) const;

     /*
       <p> RunJobFlow creates and starts running a new job flow. The job flow will run the steps specified. Once the job flow completes, the cluster is stopped and the HDFS partition is lost. To prevent loss of data, configure the last step of the job flow to store results in Amazon S3. If the <a>JobFlowInstancesConfig</a> <code>KeepJobFlowAliveWhenNoSteps</code> parameter is set to <code>TRUE</code>, the job flow will transition to the WAITING state rather than shutting down once the steps have completed. </p> <p>For additional protection, you can set the <a>JobFlowInstancesConfig</a> <code>TerminationProtected</code> parameter to <code>TRUE</code> to lock the job flow and prevent it from being terminated by API call, user intervention, or in the event of a job flow error.</p> <p>A maximum of 256 steps are allowed in each job flow.</p> <p>If your job flow is long-running (such as a Hive data warehouse) or complex, you may require more than 256 steps to process your data. You can bypass the 256-step limitation in various ways, including using the SSH shell to connect to the master node and submitting queries directly to the software running on the master node, such as Hive and Hadoop. For more information on how to do this, go to <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/AddMoreThan256Steps.html">Add More than 256 Steps to a Job Flow</a> in the <i>Amazon Elastic MapReduce Developer's Guide</i>.</p> <p>For long running job flows, we recommend that you periodically store your results.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RunJobFlowOutcomeCallable RunJobFlowCallable(const Model::RunJobFlowRequest& request) const;

     /*
       <p> RunJobFlow creates and starts running a new job flow. The job flow will run the steps specified. Once the job flow completes, the cluster is stopped and the HDFS partition is lost. To prevent loss of data, configure the last step of the job flow to store results in Amazon S3. If the <a>JobFlowInstancesConfig</a> <code>KeepJobFlowAliveWhenNoSteps</code> parameter is set to <code>TRUE</code>, the job flow will transition to the WAITING state rather than shutting down once the steps have completed. </p> <p>For additional protection, you can set the <a>JobFlowInstancesConfig</a> <code>TerminationProtected</code> parameter to <code>TRUE</code> to lock the job flow and prevent it from being terminated by API call, user intervention, or in the event of a job flow error.</p> <p>A maximum of 256 steps are allowed in each job flow.</p> <p>If your job flow is long-running (such as a Hive data warehouse) or complex, you may require more than 256 steps to process your data. You can bypass the 256-step limitation in various ways, including using the SSH shell to connect to the master node and submitting queries directly to the software running on the master node, such as Hive and Hadoop. For more information on how to do this, go to <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/AddMoreThan256Steps.html">Add More than 256 Steps to a Job Flow</a> in the <i>Amazon Elastic MapReduce Developer's Guide</i>.</p> <p>For long running job flows, we recommend that you periodically store your results.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RunJobFlowAsync(const Model::RunJobFlowRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> SetTerminationProtection locks a job flow so the Amazon EC2 instances in the cluster cannot be terminated by user intervention, an API call, or in the event of a job-flow error. The cluster still terminates upon successful completion of the job flow. Calling SetTerminationProtection on a job flow is analogous to calling the Amazon EC2 DisableAPITermination API on all of the EC2 instances in a cluster.</p> <p> SetTerminationProtection is used to prevent accidental termination of a job flow and to ensure that in the event of an error, the instances will persist so you can recover any data stored in their ephemeral instance storage.</p> <p> To terminate a job flow that has been locked by setting SetTerminationProtection to <code>true</code>, you must first unlock the job flow by a subsequent call to SetTerminationProtection in which you set the value to <code>false</code>. </p> <p> For more information, go to <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/UsingEMR_TerminationProtection.html">Protecting a Job Flow from Termination</a> in the <i>Amazon Elastic MapReduce Developer's Guide.</i></p>
     */
     Model::SetTerminationProtectionOutcome SetTerminationProtection(const Model::SetTerminationProtectionRequest& request) const;

     /*
       <p> SetTerminationProtection locks a job flow so the Amazon EC2 instances in the cluster cannot be terminated by user intervention, an API call, or in the event of a job-flow error. The cluster still terminates upon successful completion of the job flow. Calling SetTerminationProtection on a job flow is analogous to calling the Amazon EC2 DisableAPITermination API on all of the EC2 instances in a cluster.</p> <p> SetTerminationProtection is used to prevent accidental termination of a job flow and to ensure that in the event of an error, the instances will persist so you can recover any data stored in their ephemeral instance storage.</p> <p> To terminate a job flow that has been locked by setting SetTerminationProtection to <code>true</code>, you must first unlock the job flow by a subsequent call to SetTerminationProtection in which you set the value to <code>false</code>. </p> <p> For more information, go to <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/UsingEMR_TerminationProtection.html">Protecting a Job Flow from Termination</a> in the <i>Amazon Elastic MapReduce Developer's Guide.</i></p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetTerminationProtectionOutcomeCallable SetTerminationProtectionCallable(const Model::SetTerminationProtectionRequest& request) const;

     /*
       <p> SetTerminationProtection locks a job flow so the Amazon EC2 instances in the cluster cannot be terminated by user intervention, an API call, or in the event of a job-flow error. The cluster still terminates upon successful completion of the job flow. Calling SetTerminationProtection on a job flow is analogous to calling the Amazon EC2 DisableAPITermination API on all of the EC2 instances in a cluster.</p> <p> SetTerminationProtection is used to prevent accidental termination of a job flow and to ensure that in the event of an error, the instances will persist so you can recover any data stored in their ephemeral instance storage.</p> <p> To terminate a job flow that has been locked by setting SetTerminationProtection to <code>true</code>, you must first unlock the job flow by a subsequent call to SetTerminationProtection in which you set the value to <code>false</code>. </p> <p> For more information, go to <a href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/UsingEMR_TerminationProtection.html">Protecting a Job Flow from Termination</a> in the <i>Amazon Elastic MapReduce Developer's Guide.</i></p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetTerminationProtectionAsync(const Model::SetTerminationProtectionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Sets whether all AWS Identity and Access Management (IAM) users under your account can access the specified job flows. This action works on running job flows. You can also set the visibility of a job flow when you launch it using the <code>VisibleToAllUsers</code> parameter of <a>RunJobFlow</a>. The SetVisibleToAllUsers action can be called only by an IAM user who created the job flow or the AWS account that owns the job flow.</p>
     */
     Model::SetVisibleToAllUsersOutcome SetVisibleToAllUsers(const Model::SetVisibleToAllUsersRequest& request) const;

     /*
       <p>Sets whether all AWS Identity and Access Management (IAM) users under your account can access the specified job flows. This action works on running job flows. You can also set the visibility of a job flow when you launch it using the <code>VisibleToAllUsers</code> parameter of <a>RunJobFlow</a>. The SetVisibleToAllUsers action can be called only by an IAM user who created the job flow or the AWS account that owns the job flow.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetVisibleToAllUsersOutcomeCallable SetVisibleToAllUsersCallable(const Model::SetVisibleToAllUsersRequest& request) const;

     /*
       <p>Sets whether all AWS Identity and Access Management (IAM) users under your account can access the specified job flows. This action works on running job flows. You can also set the visibility of a job flow when you launch it using the <code>VisibleToAllUsers</code> parameter of <a>RunJobFlow</a>. The SetVisibleToAllUsers action can be called only by an IAM user who created the job flow or the AWS account that owns the job flow.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetVisibleToAllUsersAsync(const Model::SetVisibleToAllUsersRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> TerminateJobFlows shuts a list of job flows down. When a job flow is shut down, any step not yet completed is canceled and the EC2 instances on which the job flow is running are stopped. Any log files not already saved are uploaded to Amazon S3 if a LogUri was specified when the job flow was created. </p> <p> The maximum number of JobFlows allowed is 10. The call to TerminateJobFlows is asynchronous. Depending on the configuration of the job flow, it may take up to 5-20 minutes for the job flow to completely terminate and release allocated resources, such as Amazon EC2 instances. </p>
     */
     Model::TerminateJobFlowsOutcome TerminateJobFlows(const Model::TerminateJobFlowsRequest& request) const;

     /*
       <p> TerminateJobFlows shuts a list of job flows down. When a job flow is shut down, any step not yet completed is canceled and the EC2 instances on which the job flow is running are stopped. Any log files not already saved are uploaded to Amazon S3 if a LogUri was specified when the job flow was created. </p> <p> The maximum number of JobFlows allowed is 10. The call to TerminateJobFlows is asynchronous. Depending on the configuration of the job flow, it may take up to 5-20 minutes for the job flow to completely terminate and release allocated resources, such as Amazon EC2 instances. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::TerminateJobFlowsOutcomeCallable TerminateJobFlowsCallable(const Model::TerminateJobFlowsRequest& request) const;

     /*
       <p> TerminateJobFlows shuts a list of job flows down. When a job flow is shut down, any step not yet completed is canceled and the EC2 instances on which the job flow is running are stopped. Any log files not already saved are uploaded to Amazon S3 if a LogUri was specified when the job flow was created. </p> <p> The maximum number of JobFlows allowed is 10. The call to TerminateJobFlows is asynchronous. Depending on the configuration of the job flow, it may take up to 5-20 minutes for the job flow to completely terminate and release allocated resources, such as Amazon EC2 instances. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void TerminateJobFlowsAsync(const Model::TerminateJobFlowsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

   /**
    * Adds an event handler for AddInstanceGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use AddInstanceGroupsAsync.
    */
    inline void RegisterAddInstanceGroupsOutcomeReceivedHandler(const AddInstanceGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAddInstanceGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AddInstanceGroups.
    */
    inline void ClearAllAddInstanceGroupsOutcomeReceivedHandlers()
    {
      m_onAddInstanceGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AddJobFlowStepsAsync to call upon completion to the handler chain. You need to call this to
    * use AddJobFlowStepsAsync.
    */
    inline void RegisterAddJobFlowStepsOutcomeReceivedHandler(const AddJobFlowStepsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAddJobFlowStepsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AddJobFlowSteps.
    */
    inline void ClearAllAddJobFlowStepsOutcomeReceivedHandlers()
    {
      m_onAddJobFlowStepsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AddTagsAsync to call upon completion to the handler chain. You need to call this to
    * use AddTagsAsync.
    */
    inline void RegisterAddTagsOutcomeReceivedHandler(const AddTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAddTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AddTags.
    */
    inline void ClearAllAddTagsOutcomeReceivedHandlers()
    {
      m_onAddTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeClusterAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeClusterAsync.
    */
    inline void RegisterDescribeClusterOutcomeReceivedHandler(const DescribeClusterOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeClusterOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeCluster.
    */
    inline void ClearAllDescribeClusterOutcomeReceivedHandlers()
    {
      m_onDescribeClusterOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeStepAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeStepAsync.
    */
    inline void RegisterDescribeStepOutcomeReceivedHandler(const DescribeStepOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeStepOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeStep.
    */
    inline void ClearAllDescribeStepOutcomeReceivedHandlers()
    {
      m_onDescribeStepOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListBootstrapActionsAsync to call upon completion to the handler chain. You need to call this to
    * use ListBootstrapActionsAsync.
    */
    inline void RegisterListBootstrapActionsOutcomeReceivedHandler(const ListBootstrapActionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListBootstrapActionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListBootstrapActions.
    */
    inline void ClearAllListBootstrapActionsOutcomeReceivedHandlers()
    {
      m_onListBootstrapActionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListClustersAsync to call upon completion to the handler chain. You need to call this to
    * use ListClustersAsync.
    */
    inline void RegisterListClustersOutcomeReceivedHandler(const ListClustersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListClustersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListClusters.
    */
    inline void ClearAllListClustersOutcomeReceivedHandlers()
    {
      m_onListClustersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListInstanceGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use ListInstanceGroupsAsync.
    */
    inline void RegisterListInstanceGroupsOutcomeReceivedHandler(const ListInstanceGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListInstanceGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListInstanceGroups.
    */
    inline void ClearAllListInstanceGroupsOutcomeReceivedHandlers()
    {
      m_onListInstanceGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use ListInstancesAsync.
    */
    inline void RegisterListInstancesOutcomeReceivedHandler(const ListInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListInstances.
    */
    inline void ClearAllListInstancesOutcomeReceivedHandlers()
    {
      m_onListInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListStepsAsync to call upon completion to the handler chain. You need to call this to
    * use ListStepsAsync.
    */
    inline void RegisterListStepsOutcomeReceivedHandler(const ListStepsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListStepsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListSteps.
    */
    inline void ClearAllListStepsOutcomeReceivedHandlers()
    {
      m_onListStepsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ModifyInstanceGroupsAsync to call upon completion to the handler chain. You need to call this to
    * use ModifyInstanceGroupsAsync.
    */
    inline void RegisterModifyInstanceGroupsOutcomeReceivedHandler(const ModifyInstanceGroupsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onModifyInstanceGroupsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ModifyInstanceGroups.
    */
    inline void ClearAllModifyInstanceGroupsOutcomeReceivedHandlers()
    {
      m_onModifyInstanceGroupsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RemoveTagsAsync to call upon completion to the handler chain. You need to call this to
    * use RemoveTagsAsync.
    */
    inline void RegisterRemoveTagsOutcomeReceivedHandler(const RemoveTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRemoveTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RemoveTags.
    */
    inline void ClearAllRemoveTagsOutcomeReceivedHandlers()
    {
      m_onRemoveTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RunJobFlowAsync to call upon completion to the handler chain. You need to call this to
    * use RunJobFlowAsync.
    */
    inline void RegisterRunJobFlowOutcomeReceivedHandler(const RunJobFlowOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRunJobFlowOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RunJobFlow.
    */
    inline void ClearAllRunJobFlowOutcomeReceivedHandlers()
    {
      m_onRunJobFlowOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetTerminationProtectionAsync to call upon completion to the handler chain. You need to call this to
    * use SetTerminationProtectionAsync.
    */
    inline void RegisterSetTerminationProtectionOutcomeReceivedHandler(const SetTerminationProtectionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetTerminationProtectionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetTerminationProtection.
    */
    inline void ClearAllSetTerminationProtectionOutcomeReceivedHandlers()
    {
      m_onSetTerminationProtectionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetVisibleToAllUsersAsync to call upon completion to the handler chain. You need to call this to
    * use SetVisibleToAllUsersAsync.
    */
    inline void RegisterSetVisibleToAllUsersOutcomeReceivedHandler(const SetVisibleToAllUsersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetVisibleToAllUsersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetVisibleToAllUsers.
    */
    inline void ClearAllSetVisibleToAllUsersOutcomeReceivedHandlers()
    {
      m_onSetVisibleToAllUsersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for TerminateJobFlowsAsync to call upon completion to the handler chain. You need to call this to
    * use TerminateJobFlowsAsync.
    */
    inline void RegisterTerminateJobFlowsOutcomeReceivedHandler(const TerminateJobFlowsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onTerminateJobFlowsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for TerminateJobFlows.
    */
    inline void ClearAllTerminateJobFlowsOutcomeReceivedHandlers()
    {
      m_onTerminateJobFlowsOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void AddInstanceGroupsAsyncHelper(const Model::AddInstanceGroupsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void AddJobFlowStepsAsyncHelper(const Model::AddJobFlowStepsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeClusterAsyncHelper(const Model::DescribeClusterRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeStepAsyncHelper(const Model::DescribeStepRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListBootstrapActionsAsyncHelper(const Model::ListBootstrapActionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListInstanceGroupsAsyncHelper(const Model::ListInstanceGroupsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListInstancesAsyncHelper(const Model::ListInstancesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListStepsAsyncHelper(const Model::ListStepsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ModifyInstanceGroupsAsyncHelper(const Model::ModifyInstanceGroupsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RunJobFlowAsyncHelper(const Model::RunJobFlowRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetTerminationProtectionAsyncHelper(const Model::SetTerminationProtectionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetVisibleToAllUsersAsyncHelper(const Model::SetVisibleToAllUsersRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void TerminateJobFlowsAsyncHelper(const Model::TerminateJobFlowsRequest& request, const Aws::Client::AsyncCallerContext* context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    AddInstanceGroupsOutcomeReceivedEvent m_onAddInstanceGroupsOutcomeReceived;
    AddJobFlowStepsOutcomeReceivedEvent m_onAddJobFlowStepsOutcomeReceived;
    AddTagsOutcomeReceivedEvent m_onAddTagsOutcomeReceived;
    DescribeClusterOutcomeReceivedEvent m_onDescribeClusterOutcomeReceived;
    DescribeStepOutcomeReceivedEvent m_onDescribeStepOutcomeReceived;
    ListBootstrapActionsOutcomeReceivedEvent m_onListBootstrapActionsOutcomeReceived;
    ListClustersOutcomeReceivedEvent m_onListClustersOutcomeReceived;
    ListInstanceGroupsOutcomeReceivedEvent m_onListInstanceGroupsOutcomeReceived;
    ListInstancesOutcomeReceivedEvent m_onListInstancesOutcomeReceived;
    ListStepsOutcomeReceivedEvent m_onListStepsOutcomeReceived;
    ModifyInstanceGroupsOutcomeReceivedEvent m_onModifyInstanceGroupsOutcomeReceived;
    RemoveTagsOutcomeReceivedEvent m_onRemoveTagsOutcomeReceived;
    RunJobFlowOutcomeReceivedEvent m_onRunJobFlowOutcomeReceived;
    SetTerminationProtectionOutcomeReceivedEvent m_onSetTerminationProtectionOutcomeReceived;
    SetVisibleToAllUsersOutcomeReceivedEvent m_onSetVisibleToAllUsersOutcomeReceived;
    TerminateJobFlowsOutcomeReceivedEvent m_onTerminateJobFlowsOutcomeReceived;
  };

} // namespace EMR
} // namespace Aws
