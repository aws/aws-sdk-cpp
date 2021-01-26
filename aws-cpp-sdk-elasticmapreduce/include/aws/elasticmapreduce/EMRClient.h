/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/elasticmapreduce/model/CreateStudioResult.h>
#include <aws/elasticmapreduce/model/DeleteSecurityConfigurationResult.h>
#include <aws/elasticmapreduce/model/DescribeClusterResult.h>
#include <aws/elasticmapreduce/model/DescribeNotebookExecutionResult.h>
#include <aws/elasticmapreduce/model/DescribeSecurityConfigurationResult.h>
#include <aws/elasticmapreduce/model/DescribeStepResult.h>
#include <aws/elasticmapreduce/model/DescribeStudioResult.h>
#include <aws/elasticmapreduce/model/GetBlockPublicAccessConfigurationResult.h>
#include <aws/elasticmapreduce/model/GetManagedScalingPolicyResult.h>
#include <aws/elasticmapreduce/model/GetStudioSessionMappingResult.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsResult.h>
#include <aws/elasticmapreduce/model/ListClustersResult.h>
#include <aws/elasticmapreduce/model/ListInstanceFleetsResult.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsResult.h>
#include <aws/elasticmapreduce/model/ListInstancesResult.h>
#include <aws/elasticmapreduce/model/ListNotebookExecutionsResult.h>
#include <aws/elasticmapreduce/model/ListSecurityConfigurationsResult.h>
#include <aws/elasticmapreduce/model/ListStepsResult.h>
#include <aws/elasticmapreduce/model/ListStudioSessionMappingsResult.h>
#include <aws/elasticmapreduce/model/ListStudiosResult.h>
#include <aws/elasticmapreduce/model/ModifyClusterResult.h>
#include <aws/elasticmapreduce/model/PutAutoScalingPolicyResult.h>
#include <aws/elasticmapreduce/model/PutBlockPublicAccessConfigurationResult.h>
#include <aws/elasticmapreduce/model/PutManagedScalingPolicyResult.h>
#include <aws/elasticmapreduce/model/RemoveAutoScalingPolicyResult.h>
#include <aws/elasticmapreduce/model/RemoveManagedScalingPolicyResult.h>
#include <aws/elasticmapreduce/model/RemoveTagsResult.h>
#include <aws/elasticmapreduce/model/RunJobFlowResult.h>
#include <aws/elasticmapreduce/model/StartNotebookExecutionResult.h>
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
        class CreateStudioRequest;
        class CreateStudioSessionMappingRequest;
        class DeleteSecurityConfigurationRequest;
        class DeleteStudioRequest;
        class DeleteStudioSessionMappingRequest;
        class DescribeClusterRequest;
        class DescribeNotebookExecutionRequest;
        class DescribeSecurityConfigurationRequest;
        class DescribeStepRequest;
        class DescribeStudioRequest;
        class GetBlockPublicAccessConfigurationRequest;
        class GetManagedScalingPolicyRequest;
        class GetStudioSessionMappingRequest;
        class ListBootstrapActionsRequest;
        class ListClustersRequest;
        class ListInstanceFleetsRequest;
        class ListInstanceGroupsRequest;
        class ListInstancesRequest;
        class ListNotebookExecutionsRequest;
        class ListSecurityConfigurationsRequest;
        class ListStepsRequest;
        class ListStudioSessionMappingsRequest;
        class ListStudiosRequest;
        class ModifyClusterRequest;
        class ModifyInstanceFleetRequest;
        class ModifyInstanceGroupsRequest;
        class PutAutoScalingPolicyRequest;
        class PutBlockPublicAccessConfigurationRequest;
        class PutManagedScalingPolicyRequest;
        class RemoveAutoScalingPolicyRequest;
        class RemoveManagedScalingPolicyRequest;
        class RemoveTagsRequest;
        class RunJobFlowRequest;
        class SetTerminationProtectionRequest;
        class SetVisibleToAllUsersRequest;
        class StartNotebookExecutionRequest;
        class StopNotebookExecutionRequest;
        class TerminateJobFlowsRequest;
        class UpdateStudioSessionMappingRequest;

        typedef Aws::Utils::Outcome<AddInstanceFleetResult, EMRError> AddInstanceFleetOutcome;
        typedef Aws::Utils::Outcome<AddInstanceGroupsResult, EMRError> AddInstanceGroupsOutcome;
        typedef Aws::Utils::Outcome<AddJobFlowStepsResult, EMRError> AddJobFlowStepsOutcome;
        typedef Aws::Utils::Outcome<AddTagsResult, EMRError> AddTagsOutcome;
        typedef Aws::Utils::Outcome<CancelStepsResult, EMRError> CancelStepsOutcome;
        typedef Aws::Utils::Outcome<CreateSecurityConfigurationResult, EMRError> CreateSecurityConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreateStudioResult, EMRError> CreateStudioOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> CreateStudioSessionMappingOutcome;
        typedef Aws::Utils::Outcome<DeleteSecurityConfigurationResult, EMRError> DeleteSecurityConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> DeleteStudioOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> DeleteStudioSessionMappingOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterResult, EMRError> DescribeClusterOutcome;
        typedef Aws::Utils::Outcome<DescribeNotebookExecutionResult, EMRError> DescribeNotebookExecutionOutcome;
        typedef Aws::Utils::Outcome<DescribeSecurityConfigurationResult, EMRError> DescribeSecurityConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeStepResult, EMRError> DescribeStepOutcome;
        typedef Aws::Utils::Outcome<DescribeStudioResult, EMRError> DescribeStudioOutcome;
        typedef Aws::Utils::Outcome<GetBlockPublicAccessConfigurationResult, EMRError> GetBlockPublicAccessConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetManagedScalingPolicyResult, EMRError> GetManagedScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<GetStudioSessionMappingResult, EMRError> GetStudioSessionMappingOutcome;
        typedef Aws::Utils::Outcome<ListBootstrapActionsResult, EMRError> ListBootstrapActionsOutcome;
        typedef Aws::Utils::Outcome<ListClustersResult, EMRError> ListClustersOutcome;
        typedef Aws::Utils::Outcome<ListInstanceFleetsResult, EMRError> ListInstanceFleetsOutcome;
        typedef Aws::Utils::Outcome<ListInstanceGroupsResult, EMRError> ListInstanceGroupsOutcome;
        typedef Aws::Utils::Outcome<ListInstancesResult, EMRError> ListInstancesOutcome;
        typedef Aws::Utils::Outcome<ListNotebookExecutionsResult, EMRError> ListNotebookExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListSecurityConfigurationsResult, EMRError> ListSecurityConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListStepsResult, EMRError> ListStepsOutcome;
        typedef Aws::Utils::Outcome<ListStudioSessionMappingsResult, EMRError> ListStudioSessionMappingsOutcome;
        typedef Aws::Utils::Outcome<ListStudiosResult, EMRError> ListStudiosOutcome;
        typedef Aws::Utils::Outcome<ModifyClusterResult, EMRError> ModifyClusterOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> ModifyInstanceFleetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> ModifyInstanceGroupsOutcome;
        typedef Aws::Utils::Outcome<PutAutoScalingPolicyResult, EMRError> PutAutoScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<PutBlockPublicAccessConfigurationResult, EMRError> PutBlockPublicAccessConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutManagedScalingPolicyResult, EMRError> PutManagedScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<RemoveAutoScalingPolicyResult, EMRError> RemoveAutoScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<RemoveManagedScalingPolicyResult, EMRError> RemoveManagedScalingPolicyOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsResult, EMRError> RemoveTagsOutcome;
        typedef Aws::Utils::Outcome<RunJobFlowResult, EMRError> RunJobFlowOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> SetTerminationProtectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> SetVisibleToAllUsersOutcome;
        typedef Aws::Utils::Outcome<StartNotebookExecutionResult, EMRError> StartNotebookExecutionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> StopNotebookExecutionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> TerminateJobFlowsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> UpdateStudioSessionMappingOutcome;

        typedef std::future<AddInstanceFleetOutcome> AddInstanceFleetOutcomeCallable;
        typedef std::future<AddInstanceGroupsOutcome> AddInstanceGroupsOutcomeCallable;
        typedef std::future<AddJobFlowStepsOutcome> AddJobFlowStepsOutcomeCallable;
        typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
        typedef std::future<CancelStepsOutcome> CancelStepsOutcomeCallable;
        typedef std::future<CreateSecurityConfigurationOutcome> CreateSecurityConfigurationOutcomeCallable;
        typedef std::future<CreateStudioOutcome> CreateStudioOutcomeCallable;
        typedef std::future<CreateStudioSessionMappingOutcome> CreateStudioSessionMappingOutcomeCallable;
        typedef std::future<DeleteSecurityConfigurationOutcome> DeleteSecurityConfigurationOutcomeCallable;
        typedef std::future<DeleteStudioOutcome> DeleteStudioOutcomeCallable;
        typedef std::future<DeleteStudioSessionMappingOutcome> DeleteStudioSessionMappingOutcomeCallable;
        typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
        typedef std::future<DescribeNotebookExecutionOutcome> DescribeNotebookExecutionOutcomeCallable;
        typedef std::future<DescribeSecurityConfigurationOutcome> DescribeSecurityConfigurationOutcomeCallable;
        typedef std::future<DescribeStepOutcome> DescribeStepOutcomeCallable;
        typedef std::future<DescribeStudioOutcome> DescribeStudioOutcomeCallable;
        typedef std::future<GetBlockPublicAccessConfigurationOutcome> GetBlockPublicAccessConfigurationOutcomeCallable;
        typedef std::future<GetManagedScalingPolicyOutcome> GetManagedScalingPolicyOutcomeCallable;
        typedef std::future<GetStudioSessionMappingOutcome> GetStudioSessionMappingOutcomeCallable;
        typedef std::future<ListBootstrapActionsOutcome> ListBootstrapActionsOutcomeCallable;
        typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
        typedef std::future<ListInstanceFleetsOutcome> ListInstanceFleetsOutcomeCallable;
        typedef std::future<ListInstanceGroupsOutcome> ListInstanceGroupsOutcomeCallable;
        typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
        typedef std::future<ListNotebookExecutionsOutcome> ListNotebookExecutionsOutcomeCallable;
        typedef std::future<ListSecurityConfigurationsOutcome> ListSecurityConfigurationsOutcomeCallable;
        typedef std::future<ListStepsOutcome> ListStepsOutcomeCallable;
        typedef std::future<ListStudioSessionMappingsOutcome> ListStudioSessionMappingsOutcomeCallable;
        typedef std::future<ListStudiosOutcome> ListStudiosOutcomeCallable;
        typedef std::future<ModifyClusterOutcome> ModifyClusterOutcomeCallable;
        typedef std::future<ModifyInstanceFleetOutcome> ModifyInstanceFleetOutcomeCallable;
        typedef std::future<ModifyInstanceGroupsOutcome> ModifyInstanceGroupsOutcomeCallable;
        typedef std::future<PutAutoScalingPolicyOutcome> PutAutoScalingPolicyOutcomeCallable;
        typedef std::future<PutBlockPublicAccessConfigurationOutcome> PutBlockPublicAccessConfigurationOutcomeCallable;
        typedef std::future<PutManagedScalingPolicyOutcome> PutManagedScalingPolicyOutcomeCallable;
        typedef std::future<RemoveAutoScalingPolicyOutcome> RemoveAutoScalingPolicyOutcomeCallable;
        typedef std::future<RemoveManagedScalingPolicyOutcome> RemoveManagedScalingPolicyOutcomeCallable;
        typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
        typedef std::future<RunJobFlowOutcome> RunJobFlowOutcomeCallable;
        typedef std::future<SetTerminationProtectionOutcome> SetTerminationProtectionOutcomeCallable;
        typedef std::future<SetVisibleToAllUsersOutcome> SetVisibleToAllUsersOutcomeCallable;
        typedef std::future<StartNotebookExecutionOutcome> StartNotebookExecutionOutcomeCallable;
        typedef std::future<StopNotebookExecutionOutcome> StopNotebookExecutionOutcomeCallable;
        typedef std::future<TerminateJobFlowsOutcome> TerminateJobFlowsOutcomeCallable;
        typedef std::future<UpdateStudioSessionMappingOutcome> UpdateStudioSessionMappingOutcomeCallable;
} // namespace Model

  class EMRClient;

    typedef std::function<void(const EMRClient*, const Model::AddInstanceFleetRequest&, const Model::AddInstanceFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddInstanceFleetResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::AddInstanceGroupsRequest&, const Model::AddInstanceGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddInstanceGroupsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::AddJobFlowStepsRequest&, const Model::AddJobFlowStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddJobFlowStepsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::CancelStepsRequest&, const Model::CancelStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelStepsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::CreateSecurityConfigurationRequest&, const Model::CreateSecurityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSecurityConfigurationResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::CreateStudioRequest&, const Model::CreateStudioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStudioResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::CreateStudioSessionMappingRequest&, const Model::CreateStudioSessionMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStudioSessionMappingResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DeleteSecurityConfigurationRequest&, const Model::DeleteSecurityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecurityConfigurationResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DeleteStudioRequest&, const Model::DeleteStudioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStudioResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DeleteStudioSessionMappingRequest&, const Model::DeleteStudioSessionMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStudioSessionMappingResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DescribeNotebookExecutionRequest&, const Model::DescribeNotebookExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotebookExecutionResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DescribeSecurityConfigurationRequest&, const Model::DescribeSecurityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityConfigurationResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DescribeStepRequest&, const Model::DescribeStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStepResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DescribeStudioRequest&, const Model::DescribeStudioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStudioResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::GetBlockPublicAccessConfigurationRequest&, const Model::GetBlockPublicAccessConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlockPublicAccessConfigurationResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::GetManagedScalingPolicyRequest&, const Model::GetManagedScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetManagedScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::GetStudioSessionMappingRequest&, const Model::GetStudioSessionMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStudioSessionMappingResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListBootstrapActionsRequest&, const Model::ListBootstrapActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBootstrapActionsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListInstanceFleetsRequest&, const Model::ListInstanceFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceFleetsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListInstanceGroupsRequest&, const Model::ListInstanceGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceGroupsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListNotebookExecutionsRequest&, const Model::ListNotebookExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotebookExecutionsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListSecurityConfigurationsRequest&, const Model::ListSecurityConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityConfigurationsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListStepsRequest&, const Model::ListStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStepsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListStudioSessionMappingsRequest&, const Model::ListStudioSessionMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStudioSessionMappingsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListStudiosRequest&, const Model::ListStudiosOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStudiosResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ModifyClusterRequest&, const Model::ModifyClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ModifyInstanceFleetRequest&, const Model::ModifyInstanceFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceFleetResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ModifyInstanceGroupsRequest&, const Model::ModifyInstanceGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceGroupsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::PutAutoScalingPolicyRequest&, const Model::PutAutoScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAutoScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::PutBlockPublicAccessConfigurationRequest&, const Model::PutBlockPublicAccessConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBlockPublicAccessConfigurationResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::PutManagedScalingPolicyRequest&, const Model::PutManagedScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutManagedScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::RemoveAutoScalingPolicyRequest&, const Model::RemoveAutoScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAutoScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::RemoveManagedScalingPolicyRequest&, const Model::RemoveManagedScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveManagedScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::RunJobFlowRequest&, const Model::RunJobFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunJobFlowResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::SetTerminationProtectionRequest&, const Model::SetTerminationProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTerminationProtectionResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::SetVisibleToAllUsersRequest&, const Model::SetVisibleToAllUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetVisibleToAllUsersResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::StartNotebookExecutionRequest&, const Model::StartNotebookExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartNotebookExecutionResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::StopNotebookExecutionRequest&, const Model::StopNotebookExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopNotebookExecutionResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::TerminateJobFlowsRequest&, const Model::TerminateJobFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateJobFlowsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::UpdateStudioSessionMappingRequest&, const Model::UpdateStudioSessionMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStudioSessionMappingResponseReceivedHandler;

  /**
   * <p>Amazon EMR is a web service that makes it easier to process large amounts of
   * data efficiently. Amazon EMR uses Hadoop processing combined with several AWS
   * services to do tasks such as web indexing, data mining, log file analysis,
   * machine learning, scientific simulation, and data warehouse management.</p>
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


        /**
         * <p>Adds an instance fleet to a running cluster.</p>  <p>The instance fleet
         * configuration is available only in Amazon EMR versions 4.8.0 and later,
         * excluding 5.0.x.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AddInstanceFleetOutcome AddInstanceFleet(const Model::AddInstanceFleetRequest& request) const;

        /**
         * <p>Adds an instance fleet to a running cluster.</p>  <p>The instance fleet
         * configuration is available only in Amazon EMR versions 4.8.0 and later,
         * excluding 5.0.x.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddInstanceFleetOutcomeCallable AddInstanceFleetCallable(const Model::AddInstanceFleetRequest& request) const;

        /**
         * <p>Adds an instance fleet to a running cluster.</p>  <p>The instance fleet
         * configuration is available only in Amazon EMR versions 4.8.0 and later,
         * excluding 5.0.x.</p> <p><h3>See Also:</h3>   <a
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
         * asynchronous; it does not guarantee that a step will be canceled, even if the
         * request is successfully submitted. You can only cancel steps that are in a
         * <code>PENDING</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CancelSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelStepsOutcome CancelSteps(const Model::CancelStepsRequest& request) const;

        /**
         * <p>Cancels a pending step or steps in a running cluster. Available only in
         * Amazon EMR versions 4.8.0 and later, excluding version 5.0.0. A maximum of 256
         * steps are allowed in each CancelSteps request. CancelSteps is idempotent but
         * asynchronous; it does not guarantee that a step will be canceled, even if the
         * request is successfully submitted. You can only cancel steps that are in a
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
         * asynchronous; it does not guarantee that a step will be canceled, even if the
         * request is successfully submitted. You can only cancel steps that are in a
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
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Creates a new Amazon EMR
         * Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioOutcome CreateStudio(const Model::CreateStudioRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Creates a new Amazon EMR
         * Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateStudio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStudioOutcomeCallable CreateStudioCallable(const Model::CreateStudioRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Creates a new Amazon EMR
         * Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateStudio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStudioAsync(const Model::CreateStudioRequest& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Maps a user or group to the Amazon EMR
         * Studio specified by <code>StudioId</code>, and applies a session policy to
         * refine Studio permissions for that user or group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateStudioSessionMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioSessionMappingOutcome CreateStudioSessionMapping(const Model::CreateStudioSessionMappingRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Maps a user or group to the Amazon EMR
         * Studio specified by <code>StudioId</code>, and applies a session policy to
         * refine Studio permissions for that user or group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateStudioSessionMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStudioSessionMappingOutcomeCallable CreateStudioSessionMappingCallable(const Model::CreateStudioSessionMappingRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Maps a user or group to the Amazon EMR
         * Studio specified by <code>StudioId</code>, and applies a session policy to
         * refine Studio permissions for that user or group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CreateStudioSessionMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStudioSessionMappingAsync(const Model::CreateStudioSessionMappingRequest& request, const CreateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Removes an Amazon EMR Studio from the
         * Studio metadata store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioOutcome DeleteStudio(const Model::DeleteStudioRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Removes an Amazon EMR Studio from the
         * Studio metadata store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteStudio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStudioOutcomeCallable DeleteStudioCallable(const Model::DeleteStudioRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Removes an Amazon EMR Studio from the
         * Studio metadata store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteStudio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStudioAsync(const Model::DeleteStudioRequest& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Removes a user or group from an Amazon EMR
         * Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteStudioSessionMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioSessionMappingOutcome DeleteStudioSessionMapping(const Model::DeleteStudioSessionMappingRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Removes a user or group from an Amazon EMR
         * Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteStudioSessionMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStudioSessionMappingOutcomeCallable DeleteStudioSessionMappingCallable(const Model::DeleteStudioSessionMappingRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Removes a user or group from an Amazon EMR
         * Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DeleteStudioSessionMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStudioSessionMappingAsync(const Model::DeleteStudioSessionMappingRequest& request, const DeleteStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Provides details of a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeNotebookExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotebookExecutionOutcome DescribeNotebookExecution(const Model::DescribeNotebookExecutionRequest& request) const;

        /**
         * <p>Provides details of a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeNotebookExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotebookExecutionOutcomeCallable DescribeNotebookExecutionCallable(const Model::DescribeNotebookExecutionRequest& request) const;

        /**
         * <p>Provides details of a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeNotebookExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotebookExecutionAsync(const Model::DescribeNotebookExecutionRequest& request, const DescribeNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Returns details for the specified Amazon
         * EMR Studio including ID, Name, VPC, Studio access URL, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStudioOutcome DescribeStudio(const Model::DescribeStudioRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Returns details for the specified Amazon
         * EMR Studio including ID, Name, VPC, Studio access URL, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStudio">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStudioOutcomeCallable DescribeStudioCallable(const Model::DescribeStudioRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Returns details for the specified Amazon
         * EMR Studio including ID, Name, VPC, Studio access URL, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/DescribeStudio">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStudioAsync(const Model::DescribeStudioRequest& request, const DescribeStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the Amazon EMR block public access configuration for your AWS account
         * in the current Region. For more information see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/configure-block-public-access.html">Configure
         * Block Public Access for Amazon EMR</a> in the <i>Amazon EMR Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetBlockPublicAccessConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlockPublicAccessConfigurationOutcome GetBlockPublicAccessConfiguration(const Model::GetBlockPublicAccessConfigurationRequest& request) const;

        /**
         * <p>Returns the Amazon EMR block public access configuration for your AWS account
         * in the current Region. For more information see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/configure-block-public-access.html">Configure
         * Block Public Access for Amazon EMR</a> in the <i>Amazon EMR Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetBlockPublicAccessConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBlockPublicAccessConfigurationOutcomeCallable GetBlockPublicAccessConfigurationCallable(const Model::GetBlockPublicAccessConfigurationRequest& request) const;

        /**
         * <p>Returns the Amazon EMR block public access configuration for your AWS account
         * in the current Region. For more information see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/configure-block-public-access.html">Configure
         * Block Public Access for Amazon EMR</a> in the <i>Amazon EMR Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetBlockPublicAccessConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Fetches the attached managed scaling policy for an Amazon EMR cluster.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetManagedScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetManagedScalingPolicyOutcomeCallable GetManagedScalingPolicyCallable(const Model::GetManagedScalingPolicyRequest& request) const;

        /**
         * <p>Fetches the attached managed scaling policy for an Amazon EMR cluster.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetManagedScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetManagedScalingPolicyAsync(const Model::GetManagedScalingPolicyRequest& request, const GetManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Fetches mapping details for the specified
         * Amazon EMR Studio and identity (user or group).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetStudioSessionMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioSessionMappingOutcome GetStudioSessionMapping(const Model::GetStudioSessionMappingRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Fetches mapping details for the specified
         * Amazon EMR Studio and identity (user or group).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetStudioSessionMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStudioSessionMappingOutcomeCallable GetStudioSessionMappingCallable(const Model::GetStudioSessionMappingRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Fetches mapping details for the specified
         * Amazon EMR Studio and identity (user or group).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetStudioSessionMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *  <p>The instance fleet configuration is available only in Amazon EMR
         * versions 4.8.0 and later, excluding 5.0.x versions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceFleetsOutcome ListInstanceFleets(const Model::ListInstanceFleetsRequest& request) const;

        /**
         * <p>Lists all available details about the instance fleets in a cluster.</p>
         *  <p>The instance fleet configuration is available only in Amazon EMR
         * versions 4.8.0 and later, excluding 5.0.x versions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceFleets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceFleetsOutcomeCallable ListInstanceFleetsCallable(const Model::ListInstanceFleetsRequest& request) const;

        /**
         * <p>Lists all available details about the instance fleets in a cluster.</p>
         *  <p>The instance fleet configuration is available only in Amazon EMR
         * versions 4.8.0 and later, excluding 5.0.x versions.</p> <p><h3>See
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
         * <p>Provides summaries of all notebook executions. You can filter the list based
         * on multiple criteria such as status, time range, and editor id. Returns a
         * maximum of 50 notebook executions and a marker to track the paging of a longer
         * notebook execution list across multiple <code>ListNotebookExecution</code>
         * calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListNotebookExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotebookExecutionsOutcomeCallable ListNotebookExecutionsCallable(const Model::ListNotebookExecutionsRequest& request) const;

        /**
         * <p>Provides summaries of all notebook executions. You can filter the list based
         * on multiple criteria such as status, time range, and editor id. Returns a
         * maximum of 50 notebook executions and a marker to track the paging of a longer
         * notebook execution list across multiple <code>ListNotebookExecution</code>
         * calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListNotebookExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotebookExecutionsAsync(const Model::ListNotebookExecutionsRequest& request, const ListNotebookExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <code>stepIds</code> with the request of filter by <code>StepStates</code>. You
         * can specify a maximum of ten <code>stepIDs</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStepsOutcome ListSteps(const Model::ListStepsRequest& request) const;

        /**
         * <p>Provides a list of steps for the cluster in reverse order unless you specify
         * <code>stepIds</code> with the request of filter by <code>StepStates</code>. You
         * can specify a maximum of ten <code>stepIDs</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSteps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStepsOutcomeCallable ListStepsCallable(const Model::ListStepsRequest& request) const;

        /**
         * <p>Provides a list of steps for the cluster in reverse order unless you specify
         * <code>stepIds</code> with the request of filter by <code>StepStates</code>. You
         * can specify a maximum of ten <code>stepIDs</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSteps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStepsAsync(const Model::ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Returns a list of all user or group
         * session mappings for the EMR Studio specified by
         * <code>StudioId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListStudioSessionMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioSessionMappingsOutcome ListStudioSessionMappings(const Model::ListStudioSessionMappingsRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Returns a list of all user or group
         * session mappings for the EMR Studio specified by
         * <code>StudioId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListStudioSessionMappings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStudioSessionMappingsOutcomeCallable ListStudioSessionMappingsCallable(const Model::ListStudioSessionMappingsRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Returns a list of all user or group
         * session mappings for the EMR Studio specified by
         * <code>StudioId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListStudioSessionMappings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStudioSessionMappingsAsync(const Model::ListStudioSessionMappingsRequest& request, const ListStudioSessionMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Returns a list of all Amazon EMR Studios
         * associated with the AWS account. The list includes details such as ID, Studio
         * Access URL, and creation time for each Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListStudios">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudiosOutcome ListStudios(const Model::ListStudiosRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Returns a list of all Amazon EMR Studios
         * associated with the AWS account. The list includes details such as ID, Studio
         * Access URL, and creation time for each Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListStudios">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStudiosOutcomeCallable ListStudiosCallable(const Model::ListStudiosRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Returns a list of all Amazon EMR Studios
         * associated with the AWS account. The list includes details such as ID, Studio
         * Access URL, and creation time for each Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListStudios">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Modifies the number of steps that can be executed concurrently for the
         * cluster specified using ClusterID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClusterOutcomeCallable ModifyClusterCallable(const Model::ModifyClusterRequest& request) const;

        /**
         * <p>Modifies the number of steps that can be executed concurrently for the
         * cluster specified using ClusterID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Modifies the target On-Demand and target Spot capacities for the instance
         * fleet with the specified InstanceFleetID within the cluster specified using
         * ClusterID. The call either succeeds or fails atomically.</p>  <p>The
         * instance fleet configuration is available only in Amazon EMR versions 4.8.0 and
         * later, excluding 5.0.x versions.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyInstanceFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstanceFleetOutcomeCallable ModifyInstanceFleetCallable(const Model::ModifyInstanceFleetRequest& request) const;

        /**
         * <p>Modifies the target On-Demand and target Spot capacities for the instance
         * fleet with the specified InstanceFleetID within the cluster specified using
         * ClusterID. The call either succeeds or fails atomically.</p>  <p>The
         * instance fleet configuration is available only in Amazon EMR versions 4.8.0 and
         * later, excluding 5.0.x versions.</p> <p><h3>See Also:</h3>   <a
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
         * <p>Creates or updates an Amazon EMR block public access configuration for your
         * AWS account in the current Region. For more information see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/configure-block-public-access.html">Configure
         * Block Public Access for Amazon EMR</a> in the <i>Amazon EMR Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutBlockPublicAccessConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBlockPublicAccessConfigurationOutcome PutBlockPublicAccessConfiguration(const Model::PutBlockPublicAccessConfigurationRequest& request) const;

        /**
         * <p>Creates or updates an Amazon EMR block public access configuration for your
         * AWS account in the current Region. For more information see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/configure-block-public-access.html">Configure
         * Block Public Access for Amazon EMR</a> in the <i>Amazon EMR Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutBlockPublicAccessConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBlockPublicAccessConfigurationOutcomeCallable PutBlockPublicAccessConfigurationCallable(const Model::PutBlockPublicAccessConfigurationRequest& request) const;

        /**
         * <p>Creates or updates an Amazon EMR block public access configuration for your
         * AWS account in the current Region. For more information see <a
         * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/configure-block-public-access.html">Configure
         * Block Public Access for Amazon EMR</a> in the <i>Amazon EMR Management
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutBlockPublicAccessConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates or updates a managed scaling policy for an Amazon EMR cluster. The
         * managed scaling policy defines the limits for resources, such as EC2 instances
         * that can be added or terminated from a cluster. The policy only applies to the
         * core and task nodes. The master node cannot be scaled after initial
         * configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutManagedScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutManagedScalingPolicyOutcomeCallable PutManagedScalingPolicyCallable(const Model::PutManagedScalingPolicyRequest& request) const;

        /**
         * <p>Creates or updates a managed scaling policy for an Amazon EMR cluster. The
         * managed scaling policy defines the limits for resources, such as EC2 instances
         * that can be added or terminated from a cluster. The policy only applies to the
         * core and task nodes. The master node cannot be scaled after initial
         * configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PutManagedScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Removes a managed scaling policy from a specified EMR cluster.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveManagedScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveManagedScalingPolicyOutcome RemoveManagedScalingPolicy(const Model::RemoveManagedScalingPolicyRequest& request) const;

        /**
         * <p> Removes a managed scaling policy from a specified EMR cluster.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveManagedScalingPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveManagedScalingPolicyOutcomeCallable RemoveManagedScalingPolicyCallable(const Model::RemoveManagedScalingPolicyRequest& request) const;

        /**
         * <p> Removes a managed scaling policy from a specified EMR cluster.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RemoveManagedScalingPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveManagedScalingPolicyAsync(const Model::RemoveManagedScalingPolicyRequest& request, const RemoveManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * store your results.</p>  <p>The instance fleets configuration is available
         * only in Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions. The
         * RunJobFlow request can contain InstanceFleets parameters or InstanceGroups
         * parameters, but not both.</p> <p><h3>See Also:</h3>   <a
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
         * store your results.</p>  <p>The instance fleets configuration is available
         * only in Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions. The
         * RunJobFlow request can contain InstanceFleets parameters or InstanceGroups
         * parameters, but not both.</p> <p><h3>See Also:</h3>   <a
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
         * store your results.</p>  <p>The instance fleets configuration is available
         * only in Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions. The
         * RunJobFlow request can contain InstanceFleets parameters or InstanceGroups
         * parameters, but not both.</p> <p><h3>See Also:</h3>   <a
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
         * <p>Sets the <a>Cluster$VisibleToAllUsers</a> value, which determines whether the
         * cluster is visible to all IAM users of the AWS account associated with the
         * cluster. Only the IAM user who created the cluster or the AWS account root user
         * can call this action. The default value, <code>true</code>, indicates that all
         * IAM users in the AWS account can perform cluster actions if they have the proper
         * IAM policy permissions. If set to <code>false</code>, only the IAM user that
         * created the cluster can perform actions. This action works on running clusters.
         * You can override the default <code>true</code> setting when you create a cluster
         * by using the <code>VisibleToAllUsers</code> parameter with
         * <code>RunJobFlow</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetVisibleToAllUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::SetVisibleToAllUsersOutcome SetVisibleToAllUsers(const Model::SetVisibleToAllUsersRequest& request) const;

        /**
         * <p>Sets the <a>Cluster$VisibleToAllUsers</a> value, which determines whether the
         * cluster is visible to all IAM users of the AWS account associated with the
         * cluster. Only the IAM user who created the cluster or the AWS account root user
         * can call this action. The default value, <code>true</code>, indicates that all
         * IAM users in the AWS account can perform cluster actions if they have the proper
         * IAM policy permissions. If set to <code>false</code>, only the IAM user that
         * created the cluster can perform actions. This action works on running clusters.
         * You can override the default <code>true</code> setting when you create a cluster
         * by using the <code>VisibleToAllUsers</code> parameter with
         * <code>RunJobFlow</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetVisibleToAllUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetVisibleToAllUsersOutcomeCallable SetVisibleToAllUsersCallable(const Model::SetVisibleToAllUsersRequest& request) const;

        /**
         * <p>Sets the <a>Cluster$VisibleToAllUsers</a> value, which determines whether the
         * cluster is visible to all IAM users of the AWS account associated with the
         * cluster. Only the IAM user who created the cluster or the AWS account root user
         * can call this action. The default value, <code>true</code>, indicates that all
         * IAM users in the AWS account can perform cluster actions if they have the proper
         * IAM policy permissions. If set to <code>false</code>, only the IAM user that
         * created the cluster can perform actions. This action works on running clusters.
         * You can override the default <code>true</code> setting when you create a cluster
         * by using the <code>VisibleToAllUsers</code> parameter with
         * <code>RunJobFlow</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetVisibleToAllUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetVisibleToAllUsersAsync(const Model::SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StartNotebookExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNotebookExecutionOutcome StartNotebookExecution(const Model::StartNotebookExecutionRequest& request) const;

        /**
         * <p>Starts a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StartNotebookExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartNotebookExecutionOutcomeCallable StartNotebookExecutionCallable(const Model::StartNotebookExecutionRequest& request) const;

        /**
         * <p>Starts a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StartNotebookExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartNotebookExecutionAsync(const Model::StartNotebookExecutionRequest& request, const StartNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StopNotebookExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopNotebookExecutionOutcome StopNotebookExecution(const Model::StopNotebookExecutionRequest& request) const;

        /**
         * <p>Stops a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StopNotebookExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopNotebookExecutionOutcomeCallable StopNotebookExecutionCallable(const Model::StopNotebookExecutionRequest& request) const;

        /**
         * <p>Stops a notebook execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StopNotebookExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Updates the session policy attached to the
         * user or group for the specified Amazon EMR Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/UpdateStudioSessionMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioSessionMappingOutcome UpdateStudioSessionMapping(const Model::UpdateStudioSessionMappingRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Updates the session policy attached to the
         * user or group for the specified Amazon EMR Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/UpdateStudioSessionMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStudioSessionMappingOutcomeCallable UpdateStudioSessionMappingCallable(const Model::UpdateStudioSessionMappingRequest& request) const;

        /**
         *  <p>The Amazon EMR Studio APIs are in preview release for Amazon EMR and
         * are subject to change.</p>  <p>Updates the session policy attached to the
         * user or group for the specified Amazon EMR Studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/UpdateStudioSessionMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStudioSessionMappingAsync(const Model::UpdateStudioSessionMappingRequest& request, const UpdateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddInstanceFleetAsyncHelper(const Model::AddInstanceFleetRequest& request, const AddInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddInstanceGroupsAsyncHelper(const Model::AddInstanceGroupsRequest& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddJobFlowStepsAsyncHelper(const Model::AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelStepsAsyncHelper(const Model::CancelStepsRequest& request, const CancelStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSecurityConfigurationAsyncHelper(const Model::CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStudioAsyncHelper(const Model::CreateStudioRequest& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStudioSessionMappingAsyncHelper(const Model::CreateStudioSessionMappingRequest& request, const CreateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSecurityConfigurationAsyncHelper(const Model::DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStudioAsyncHelper(const Model::DeleteStudioRequest& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStudioSessionMappingAsyncHelper(const Model::DeleteStudioSessionMappingRequest& request, const DeleteStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterAsyncHelper(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotebookExecutionAsyncHelper(const Model::DescribeNotebookExecutionRequest& request, const DescribeNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSecurityConfigurationAsyncHelper(const Model::DescribeSecurityConfigurationRequest& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStepAsyncHelper(const Model::DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStudioAsyncHelper(const Model::DescribeStudioRequest& request, const DescribeStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBlockPublicAccessConfigurationAsyncHelper(const Model::GetBlockPublicAccessConfigurationRequest& request, const GetBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetManagedScalingPolicyAsyncHelper(const Model::GetManagedScalingPolicyRequest& request, const GetManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStudioSessionMappingAsyncHelper(const Model::GetStudioSessionMappingRequest& request, const GetStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBootstrapActionsAsyncHelper(const Model::ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceFleetsAsyncHelper(const Model::ListInstanceFleetsRequest& request, const ListInstanceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceGroupsAsyncHelper(const Model::ListInstanceGroupsRequest& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstancesAsyncHelper(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNotebookExecutionsAsyncHelper(const Model::ListNotebookExecutionsRequest& request, const ListNotebookExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSecurityConfigurationsAsyncHelper(const Model::ListSecurityConfigurationsRequest& request, const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStepsAsyncHelper(const Model::ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStudioSessionMappingsAsyncHelper(const Model::ListStudioSessionMappingsRequest& request, const ListStudioSessionMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStudiosAsyncHelper(const Model::ListStudiosRequest& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyClusterAsyncHelper(const Model::ModifyClusterRequest& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyInstanceFleetAsyncHelper(const Model::ModifyInstanceFleetRequest& request, const ModifyInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyInstanceGroupsAsyncHelper(const Model::ModifyInstanceGroupsRequest& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAutoScalingPolicyAsyncHelper(const Model::PutAutoScalingPolicyRequest& request, const PutAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBlockPublicAccessConfigurationAsyncHelper(const Model::PutBlockPublicAccessConfigurationRequest& request, const PutBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutManagedScalingPolicyAsyncHelper(const Model::PutManagedScalingPolicyRequest& request, const PutManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveAutoScalingPolicyAsyncHelper(const Model::RemoveAutoScalingPolicyRequest& request, const RemoveAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveManagedScalingPolicyAsyncHelper(const Model::RemoveManagedScalingPolicyRequest& request, const RemoveManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RunJobFlowAsyncHelper(const Model::RunJobFlowRequest& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetTerminationProtectionAsyncHelper(const Model::SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetVisibleToAllUsersAsyncHelper(const Model::SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartNotebookExecutionAsyncHelper(const Model::StartNotebookExecutionRequest& request, const StartNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopNotebookExecutionAsyncHelper(const Model::StopNotebookExecutionRequest& request, const StopNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateJobFlowsAsyncHelper(const Model::TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStudioSessionMappingAsyncHelper(const Model::UpdateStudioSessionMappingRequest& request, const UpdateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EMR
} // namespace Aws
