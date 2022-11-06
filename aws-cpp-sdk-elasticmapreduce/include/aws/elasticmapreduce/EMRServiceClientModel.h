/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/elasticmapreduce/EMRErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/elasticmapreduce/EMREndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EMRClient header */
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
#include <aws/elasticmapreduce/model/DescribeReleaseLabelResult.h>
#include <aws/elasticmapreduce/model/DescribeSecurityConfigurationResult.h>
#include <aws/elasticmapreduce/model/DescribeStepResult.h>
#include <aws/elasticmapreduce/model/DescribeStudioResult.h>
#include <aws/elasticmapreduce/model/GetAutoTerminationPolicyResult.h>
#include <aws/elasticmapreduce/model/GetBlockPublicAccessConfigurationResult.h>
#include <aws/elasticmapreduce/model/GetManagedScalingPolicyResult.h>
#include <aws/elasticmapreduce/model/GetStudioSessionMappingResult.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsResult.h>
#include <aws/elasticmapreduce/model/ListClustersResult.h>
#include <aws/elasticmapreduce/model/ListInstanceFleetsResult.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsResult.h>
#include <aws/elasticmapreduce/model/ListInstancesResult.h>
#include <aws/elasticmapreduce/model/ListNotebookExecutionsResult.h>
#include <aws/elasticmapreduce/model/ListReleaseLabelsResult.h>
#include <aws/elasticmapreduce/model/ListSecurityConfigurationsResult.h>
#include <aws/elasticmapreduce/model/ListStepsResult.h>
#include <aws/elasticmapreduce/model/ListStudioSessionMappingsResult.h>
#include <aws/elasticmapreduce/model/ListStudiosResult.h>
#include <aws/elasticmapreduce/model/ModifyClusterResult.h>
#include <aws/elasticmapreduce/model/PutAutoScalingPolicyResult.h>
#include <aws/elasticmapreduce/model/PutAutoTerminationPolicyResult.h>
#include <aws/elasticmapreduce/model/PutBlockPublicAccessConfigurationResult.h>
#include <aws/elasticmapreduce/model/PutManagedScalingPolicyResult.h>
#include <aws/elasticmapreduce/model/RemoveAutoScalingPolicyResult.h>
#include <aws/elasticmapreduce/model/RemoveAutoTerminationPolicyResult.h>
#include <aws/elasticmapreduce/model/RemoveManagedScalingPolicyResult.h>
#include <aws/elasticmapreduce/model/RemoveTagsResult.h>
#include <aws/elasticmapreduce/model/RunJobFlowResult.h>
#include <aws/elasticmapreduce/model/StartNotebookExecutionResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in EMRClient header */

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
    using EMRClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using EMREndpointProviderBase = Aws::EMR::Endpoint::EMREndpointProviderBase;
    using EMREndpointProvider = Aws::EMR::Endpoint::EMREndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EMRClient header */
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
      class DescribeReleaseLabelRequest;
      class DescribeSecurityConfigurationRequest;
      class DescribeStepRequest;
      class DescribeStudioRequest;
      class GetAutoTerminationPolicyRequest;
      class GetBlockPublicAccessConfigurationRequest;
      class GetManagedScalingPolicyRequest;
      class GetStudioSessionMappingRequest;
      class ListBootstrapActionsRequest;
      class ListClustersRequest;
      class ListInstanceFleetsRequest;
      class ListInstanceGroupsRequest;
      class ListInstancesRequest;
      class ListNotebookExecutionsRequest;
      class ListReleaseLabelsRequest;
      class ListSecurityConfigurationsRequest;
      class ListStepsRequest;
      class ListStudioSessionMappingsRequest;
      class ListStudiosRequest;
      class ModifyClusterRequest;
      class ModifyInstanceFleetRequest;
      class ModifyInstanceGroupsRequest;
      class PutAutoScalingPolicyRequest;
      class PutAutoTerminationPolicyRequest;
      class PutBlockPublicAccessConfigurationRequest;
      class PutManagedScalingPolicyRequest;
      class RemoveAutoScalingPolicyRequest;
      class RemoveAutoTerminationPolicyRequest;
      class RemoveManagedScalingPolicyRequest;
      class RemoveTagsRequest;
      class RunJobFlowRequest;
      class SetTerminationProtectionRequest;
      class SetVisibleToAllUsersRequest;
      class StartNotebookExecutionRequest;
      class StopNotebookExecutionRequest;
      class TerminateJobFlowsRequest;
      class UpdateStudioRequest;
      class UpdateStudioSessionMappingRequest;
      /* End of service model forward declarations required in EMRClient header */

      /* Service model Outcome class definitions */
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
      typedef Aws::Utils::Outcome<DescribeReleaseLabelResult, EMRError> DescribeReleaseLabelOutcome;
      typedef Aws::Utils::Outcome<DescribeSecurityConfigurationResult, EMRError> DescribeSecurityConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeStepResult, EMRError> DescribeStepOutcome;
      typedef Aws::Utils::Outcome<DescribeStudioResult, EMRError> DescribeStudioOutcome;
      typedef Aws::Utils::Outcome<GetAutoTerminationPolicyResult, EMRError> GetAutoTerminationPolicyOutcome;
      typedef Aws::Utils::Outcome<GetBlockPublicAccessConfigurationResult, EMRError> GetBlockPublicAccessConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetManagedScalingPolicyResult, EMRError> GetManagedScalingPolicyOutcome;
      typedef Aws::Utils::Outcome<GetStudioSessionMappingResult, EMRError> GetStudioSessionMappingOutcome;
      typedef Aws::Utils::Outcome<ListBootstrapActionsResult, EMRError> ListBootstrapActionsOutcome;
      typedef Aws::Utils::Outcome<ListClustersResult, EMRError> ListClustersOutcome;
      typedef Aws::Utils::Outcome<ListInstanceFleetsResult, EMRError> ListInstanceFleetsOutcome;
      typedef Aws::Utils::Outcome<ListInstanceGroupsResult, EMRError> ListInstanceGroupsOutcome;
      typedef Aws::Utils::Outcome<ListInstancesResult, EMRError> ListInstancesOutcome;
      typedef Aws::Utils::Outcome<ListNotebookExecutionsResult, EMRError> ListNotebookExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListReleaseLabelsResult, EMRError> ListReleaseLabelsOutcome;
      typedef Aws::Utils::Outcome<ListSecurityConfigurationsResult, EMRError> ListSecurityConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListStepsResult, EMRError> ListStepsOutcome;
      typedef Aws::Utils::Outcome<ListStudioSessionMappingsResult, EMRError> ListStudioSessionMappingsOutcome;
      typedef Aws::Utils::Outcome<ListStudiosResult, EMRError> ListStudiosOutcome;
      typedef Aws::Utils::Outcome<ModifyClusterResult, EMRError> ModifyClusterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> ModifyInstanceFleetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> ModifyInstanceGroupsOutcome;
      typedef Aws::Utils::Outcome<PutAutoScalingPolicyResult, EMRError> PutAutoScalingPolicyOutcome;
      typedef Aws::Utils::Outcome<PutAutoTerminationPolicyResult, EMRError> PutAutoTerminationPolicyOutcome;
      typedef Aws::Utils::Outcome<PutBlockPublicAccessConfigurationResult, EMRError> PutBlockPublicAccessConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutManagedScalingPolicyResult, EMRError> PutManagedScalingPolicyOutcome;
      typedef Aws::Utils::Outcome<RemoveAutoScalingPolicyResult, EMRError> RemoveAutoScalingPolicyOutcome;
      typedef Aws::Utils::Outcome<RemoveAutoTerminationPolicyResult, EMRError> RemoveAutoTerminationPolicyOutcome;
      typedef Aws::Utils::Outcome<RemoveManagedScalingPolicyResult, EMRError> RemoveManagedScalingPolicyOutcome;
      typedef Aws::Utils::Outcome<RemoveTagsResult, EMRError> RemoveTagsOutcome;
      typedef Aws::Utils::Outcome<RunJobFlowResult, EMRError> RunJobFlowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> SetTerminationProtectionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> SetVisibleToAllUsersOutcome;
      typedef Aws::Utils::Outcome<StartNotebookExecutionResult, EMRError> StartNotebookExecutionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> StopNotebookExecutionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> TerminateJobFlowsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> UpdateStudioOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EMRError> UpdateStudioSessionMappingOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      typedef std::future<DescribeReleaseLabelOutcome> DescribeReleaseLabelOutcomeCallable;
      typedef std::future<DescribeSecurityConfigurationOutcome> DescribeSecurityConfigurationOutcomeCallable;
      typedef std::future<DescribeStepOutcome> DescribeStepOutcomeCallable;
      typedef std::future<DescribeStudioOutcome> DescribeStudioOutcomeCallable;
      typedef std::future<GetAutoTerminationPolicyOutcome> GetAutoTerminationPolicyOutcomeCallable;
      typedef std::future<GetBlockPublicAccessConfigurationOutcome> GetBlockPublicAccessConfigurationOutcomeCallable;
      typedef std::future<GetManagedScalingPolicyOutcome> GetManagedScalingPolicyOutcomeCallable;
      typedef std::future<GetStudioSessionMappingOutcome> GetStudioSessionMappingOutcomeCallable;
      typedef std::future<ListBootstrapActionsOutcome> ListBootstrapActionsOutcomeCallable;
      typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
      typedef std::future<ListInstanceFleetsOutcome> ListInstanceFleetsOutcomeCallable;
      typedef std::future<ListInstanceGroupsOutcome> ListInstanceGroupsOutcomeCallable;
      typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
      typedef std::future<ListNotebookExecutionsOutcome> ListNotebookExecutionsOutcomeCallable;
      typedef std::future<ListReleaseLabelsOutcome> ListReleaseLabelsOutcomeCallable;
      typedef std::future<ListSecurityConfigurationsOutcome> ListSecurityConfigurationsOutcomeCallable;
      typedef std::future<ListStepsOutcome> ListStepsOutcomeCallable;
      typedef std::future<ListStudioSessionMappingsOutcome> ListStudioSessionMappingsOutcomeCallable;
      typedef std::future<ListStudiosOutcome> ListStudiosOutcomeCallable;
      typedef std::future<ModifyClusterOutcome> ModifyClusterOutcomeCallable;
      typedef std::future<ModifyInstanceFleetOutcome> ModifyInstanceFleetOutcomeCallable;
      typedef std::future<ModifyInstanceGroupsOutcome> ModifyInstanceGroupsOutcomeCallable;
      typedef std::future<PutAutoScalingPolicyOutcome> PutAutoScalingPolicyOutcomeCallable;
      typedef std::future<PutAutoTerminationPolicyOutcome> PutAutoTerminationPolicyOutcomeCallable;
      typedef std::future<PutBlockPublicAccessConfigurationOutcome> PutBlockPublicAccessConfigurationOutcomeCallable;
      typedef std::future<PutManagedScalingPolicyOutcome> PutManagedScalingPolicyOutcomeCallable;
      typedef std::future<RemoveAutoScalingPolicyOutcome> RemoveAutoScalingPolicyOutcomeCallable;
      typedef std::future<RemoveAutoTerminationPolicyOutcome> RemoveAutoTerminationPolicyOutcomeCallable;
      typedef std::future<RemoveManagedScalingPolicyOutcome> RemoveManagedScalingPolicyOutcomeCallable;
      typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
      typedef std::future<RunJobFlowOutcome> RunJobFlowOutcomeCallable;
      typedef std::future<SetTerminationProtectionOutcome> SetTerminationProtectionOutcomeCallable;
      typedef std::future<SetVisibleToAllUsersOutcome> SetVisibleToAllUsersOutcomeCallable;
      typedef std::future<StartNotebookExecutionOutcome> StartNotebookExecutionOutcomeCallable;
      typedef std::future<StopNotebookExecutionOutcome> StopNotebookExecutionOutcomeCallable;
      typedef std::future<TerminateJobFlowsOutcome> TerminateJobFlowsOutcomeCallable;
      typedef std::future<UpdateStudioOutcome> UpdateStudioOutcomeCallable;
      typedef std::future<UpdateStudioSessionMappingOutcome> UpdateStudioSessionMappingOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EMRClient;

    /* Service model async handlers definitions */
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
    typedef std::function<void(const EMRClient*, const Model::DescribeReleaseLabelRequest&, const Model::DescribeReleaseLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReleaseLabelResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DescribeSecurityConfigurationRequest&, const Model::DescribeSecurityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityConfigurationResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DescribeStepRequest&, const Model::DescribeStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStepResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::DescribeStudioRequest&, const Model::DescribeStudioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStudioResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::GetAutoTerminationPolicyRequest&, const Model::GetAutoTerminationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutoTerminationPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::GetBlockPublicAccessConfigurationRequest&, const Model::GetBlockPublicAccessConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlockPublicAccessConfigurationResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::GetManagedScalingPolicyRequest&, const Model::GetManagedScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetManagedScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::GetStudioSessionMappingRequest&, const Model::GetStudioSessionMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStudioSessionMappingResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListBootstrapActionsRequest&, const Model::ListBootstrapActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBootstrapActionsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListInstanceFleetsRequest&, const Model::ListInstanceFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceFleetsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListInstanceGroupsRequest&, const Model::ListInstanceGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceGroupsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListNotebookExecutionsRequest&, const Model::ListNotebookExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotebookExecutionsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListReleaseLabelsRequest&, const Model::ListReleaseLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReleaseLabelsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListSecurityConfigurationsRequest&, const Model::ListSecurityConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityConfigurationsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListStepsRequest&, const Model::ListStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStepsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListStudioSessionMappingsRequest&, const Model::ListStudioSessionMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStudioSessionMappingsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ListStudiosRequest&, const Model::ListStudiosOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStudiosResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ModifyClusterRequest&, const Model::ModifyClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClusterResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ModifyInstanceFleetRequest&, const Model::ModifyInstanceFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceFleetResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::ModifyInstanceGroupsRequest&, const Model::ModifyInstanceGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceGroupsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::PutAutoScalingPolicyRequest&, const Model::PutAutoScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAutoScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::PutAutoTerminationPolicyRequest&, const Model::PutAutoTerminationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAutoTerminationPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::PutBlockPublicAccessConfigurationRequest&, const Model::PutBlockPublicAccessConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBlockPublicAccessConfigurationResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::PutManagedScalingPolicyRequest&, const Model::PutManagedScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutManagedScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::RemoveAutoScalingPolicyRequest&, const Model::RemoveAutoScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAutoScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::RemoveAutoTerminationPolicyRequest&, const Model::RemoveAutoTerminationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAutoTerminationPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::RemoveManagedScalingPolicyRequest&, const Model::RemoveManagedScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveManagedScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::RunJobFlowRequest&, const Model::RunJobFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunJobFlowResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::SetTerminationProtectionRequest&, const Model::SetTerminationProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTerminationProtectionResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::SetVisibleToAllUsersRequest&, const Model::SetVisibleToAllUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetVisibleToAllUsersResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::StartNotebookExecutionRequest&, const Model::StartNotebookExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartNotebookExecutionResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::StopNotebookExecutionRequest&, const Model::StopNotebookExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopNotebookExecutionResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::TerminateJobFlowsRequest&, const Model::TerminateJobFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateJobFlowsResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::UpdateStudioRequest&, const Model::UpdateStudioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStudioResponseReceivedHandler;
    typedef std::function<void(const EMRClient*, const Model::UpdateStudioSessionMappingRequest&, const Model::UpdateStudioSessionMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStudioSessionMappingResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace EMR
} // namespace Aws
