/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ecs/ECSErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ecs/ECSEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ECSClient header */
#include <aws/ecs/model/CreateCapacityProviderResult.h>
#include <aws/ecs/model/CreateClusterResult.h>
#include <aws/ecs/model/CreateServiceResult.h>
#include <aws/ecs/model/CreateTaskSetResult.h>
#include <aws/ecs/model/DeleteAccountSettingResult.h>
#include <aws/ecs/model/DeleteAttributesResult.h>
#include <aws/ecs/model/DeleteCapacityProviderResult.h>
#include <aws/ecs/model/DeleteClusterResult.h>
#include <aws/ecs/model/DeleteServiceResult.h>
#include <aws/ecs/model/DeleteTaskSetResult.h>
#include <aws/ecs/model/DeregisterContainerInstanceResult.h>
#include <aws/ecs/model/DeregisterTaskDefinitionResult.h>
#include <aws/ecs/model/DescribeCapacityProvidersResult.h>
#include <aws/ecs/model/DescribeClustersResult.h>
#include <aws/ecs/model/DescribeContainerInstancesResult.h>
#include <aws/ecs/model/DescribeServicesResult.h>
#include <aws/ecs/model/DescribeTaskDefinitionResult.h>
#include <aws/ecs/model/DescribeTaskSetsResult.h>
#include <aws/ecs/model/DescribeTasksResult.h>
#include <aws/ecs/model/DiscoverPollEndpointResult.h>
#include <aws/ecs/model/ExecuteCommandResult.h>
#include <aws/ecs/model/GetTaskProtectionResult.h>
#include <aws/ecs/model/ListAccountSettingsResult.h>
#include <aws/ecs/model/ListAttributesResult.h>
#include <aws/ecs/model/ListClustersResult.h>
#include <aws/ecs/model/ListContainerInstancesResult.h>
#include <aws/ecs/model/ListServicesResult.h>
#include <aws/ecs/model/ListServicesByNamespaceResult.h>
#include <aws/ecs/model/ListTagsForResourceResult.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesResult.h>
#include <aws/ecs/model/ListTaskDefinitionsResult.h>
#include <aws/ecs/model/ListTasksResult.h>
#include <aws/ecs/model/PutAccountSettingResult.h>
#include <aws/ecs/model/PutAccountSettingDefaultResult.h>
#include <aws/ecs/model/PutAttributesResult.h>
#include <aws/ecs/model/PutClusterCapacityProvidersResult.h>
#include <aws/ecs/model/RegisterContainerInstanceResult.h>
#include <aws/ecs/model/RegisterTaskDefinitionResult.h>
#include <aws/ecs/model/RunTaskResult.h>
#include <aws/ecs/model/StartTaskResult.h>
#include <aws/ecs/model/StopTaskResult.h>
#include <aws/ecs/model/SubmitAttachmentStateChangesResult.h>
#include <aws/ecs/model/SubmitContainerStateChangeResult.h>
#include <aws/ecs/model/SubmitTaskStateChangeResult.h>
#include <aws/ecs/model/TagResourceResult.h>
#include <aws/ecs/model/UntagResourceResult.h>
#include <aws/ecs/model/UpdateCapacityProviderResult.h>
#include <aws/ecs/model/UpdateClusterResult.h>
#include <aws/ecs/model/UpdateClusterSettingsResult.h>
#include <aws/ecs/model/UpdateContainerAgentResult.h>
#include <aws/ecs/model/UpdateContainerInstancesStateResult.h>
#include <aws/ecs/model/UpdateServiceResult.h>
#include <aws/ecs/model/UpdateServicePrimaryTaskSetResult.h>
#include <aws/ecs/model/UpdateTaskProtectionResult.h>
#include <aws/ecs/model/UpdateTaskSetResult.h>
/* End of service model headers required in ECSClient header */

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

  namespace ECS
  {
    using ECSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ECSEndpointProviderBase = Aws::ECS::Endpoint::ECSEndpointProviderBase;
    using ECSEndpointProvider = Aws::ECS::Endpoint::ECSEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ECSClient header */
      class CreateCapacityProviderRequest;
      class CreateClusterRequest;
      class CreateServiceRequest;
      class CreateTaskSetRequest;
      class DeleteAccountSettingRequest;
      class DeleteAttributesRequest;
      class DeleteCapacityProviderRequest;
      class DeleteClusterRequest;
      class DeleteServiceRequest;
      class DeleteTaskSetRequest;
      class DeregisterContainerInstanceRequest;
      class DeregisterTaskDefinitionRequest;
      class DescribeCapacityProvidersRequest;
      class DescribeClustersRequest;
      class DescribeContainerInstancesRequest;
      class DescribeServicesRequest;
      class DescribeTaskDefinitionRequest;
      class DescribeTaskSetsRequest;
      class DescribeTasksRequest;
      class DiscoverPollEndpointRequest;
      class ExecuteCommandRequest;
      class GetTaskProtectionRequest;
      class ListAccountSettingsRequest;
      class ListAttributesRequest;
      class ListClustersRequest;
      class ListContainerInstancesRequest;
      class ListServicesRequest;
      class ListServicesByNamespaceRequest;
      class ListTagsForResourceRequest;
      class ListTaskDefinitionFamiliesRequest;
      class ListTaskDefinitionsRequest;
      class ListTasksRequest;
      class PutAccountSettingRequest;
      class PutAccountSettingDefaultRequest;
      class PutAttributesRequest;
      class PutClusterCapacityProvidersRequest;
      class RegisterContainerInstanceRequest;
      class RegisterTaskDefinitionRequest;
      class RunTaskRequest;
      class StartTaskRequest;
      class StopTaskRequest;
      class SubmitAttachmentStateChangesRequest;
      class SubmitContainerStateChangeRequest;
      class SubmitTaskStateChangeRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCapacityProviderRequest;
      class UpdateClusterRequest;
      class UpdateClusterSettingsRequest;
      class UpdateContainerAgentRequest;
      class UpdateContainerInstancesStateRequest;
      class UpdateServiceRequest;
      class UpdateServicePrimaryTaskSetRequest;
      class UpdateTaskProtectionRequest;
      class UpdateTaskSetRequest;
      /* End of service model forward declarations required in ECSClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateCapacityProviderResult, ECSError> CreateCapacityProviderOutcome;
      typedef Aws::Utils::Outcome<CreateClusterResult, ECSError> CreateClusterOutcome;
      typedef Aws::Utils::Outcome<CreateServiceResult, ECSError> CreateServiceOutcome;
      typedef Aws::Utils::Outcome<CreateTaskSetResult, ECSError> CreateTaskSetOutcome;
      typedef Aws::Utils::Outcome<DeleteAccountSettingResult, ECSError> DeleteAccountSettingOutcome;
      typedef Aws::Utils::Outcome<DeleteAttributesResult, ECSError> DeleteAttributesOutcome;
      typedef Aws::Utils::Outcome<DeleteCapacityProviderResult, ECSError> DeleteCapacityProviderOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterResult, ECSError> DeleteClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceResult, ECSError> DeleteServiceOutcome;
      typedef Aws::Utils::Outcome<DeleteTaskSetResult, ECSError> DeleteTaskSetOutcome;
      typedef Aws::Utils::Outcome<DeregisterContainerInstanceResult, ECSError> DeregisterContainerInstanceOutcome;
      typedef Aws::Utils::Outcome<DeregisterTaskDefinitionResult, ECSError> DeregisterTaskDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeCapacityProvidersResult, ECSError> DescribeCapacityProvidersOutcome;
      typedef Aws::Utils::Outcome<DescribeClustersResult, ECSError> DescribeClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeContainerInstancesResult, ECSError> DescribeContainerInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeServicesResult, ECSError> DescribeServicesOutcome;
      typedef Aws::Utils::Outcome<DescribeTaskDefinitionResult, ECSError> DescribeTaskDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeTaskSetsResult, ECSError> DescribeTaskSetsOutcome;
      typedef Aws::Utils::Outcome<DescribeTasksResult, ECSError> DescribeTasksOutcome;
      typedef Aws::Utils::Outcome<DiscoverPollEndpointResult, ECSError> DiscoverPollEndpointOutcome;
      typedef Aws::Utils::Outcome<ExecuteCommandResult, ECSError> ExecuteCommandOutcome;
      typedef Aws::Utils::Outcome<GetTaskProtectionResult, ECSError> GetTaskProtectionOutcome;
      typedef Aws::Utils::Outcome<ListAccountSettingsResult, ECSError> ListAccountSettingsOutcome;
      typedef Aws::Utils::Outcome<ListAttributesResult, ECSError> ListAttributesOutcome;
      typedef Aws::Utils::Outcome<ListClustersResult, ECSError> ListClustersOutcome;
      typedef Aws::Utils::Outcome<ListContainerInstancesResult, ECSError> ListContainerInstancesOutcome;
      typedef Aws::Utils::Outcome<ListServicesResult, ECSError> ListServicesOutcome;
      typedef Aws::Utils::Outcome<ListServicesByNamespaceResult, ECSError> ListServicesByNamespaceOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ECSError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTaskDefinitionFamiliesResult, ECSError> ListTaskDefinitionFamiliesOutcome;
      typedef Aws::Utils::Outcome<ListTaskDefinitionsResult, ECSError> ListTaskDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListTasksResult, ECSError> ListTasksOutcome;
      typedef Aws::Utils::Outcome<PutAccountSettingResult, ECSError> PutAccountSettingOutcome;
      typedef Aws::Utils::Outcome<PutAccountSettingDefaultResult, ECSError> PutAccountSettingDefaultOutcome;
      typedef Aws::Utils::Outcome<PutAttributesResult, ECSError> PutAttributesOutcome;
      typedef Aws::Utils::Outcome<PutClusterCapacityProvidersResult, ECSError> PutClusterCapacityProvidersOutcome;
      typedef Aws::Utils::Outcome<RegisterContainerInstanceResult, ECSError> RegisterContainerInstanceOutcome;
      typedef Aws::Utils::Outcome<RegisterTaskDefinitionResult, ECSError> RegisterTaskDefinitionOutcome;
      typedef Aws::Utils::Outcome<RunTaskResult, ECSError> RunTaskOutcome;
      typedef Aws::Utils::Outcome<StartTaskResult, ECSError> StartTaskOutcome;
      typedef Aws::Utils::Outcome<StopTaskResult, ECSError> StopTaskOutcome;
      typedef Aws::Utils::Outcome<SubmitAttachmentStateChangesResult, ECSError> SubmitAttachmentStateChangesOutcome;
      typedef Aws::Utils::Outcome<SubmitContainerStateChangeResult, ECSError> SubmitContainerStateChangeOutcome;
      typedef Aws::Utils::Outcome<SubmitTaskStateChangeResult, ECSError> SubmitTaskStateChangeOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ECSError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ECSError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCapacityProviderResult, ECSError> UpdateCapacityProviderOutcome;
      typedef Aws::Utils::Outcome<UpdateClusterResult, ECSError> UpdateClusterOutcome;
      typedef Aws::Utils::Outcome<UpdateClusterSettingsResult, ECSError> UpdateClusterSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateContainerAgentResult, ECSError> UpdateContainerAgentOutcome;
      typedef Aws::Utils::Outcome<UpdateContainerInstancesStateResult, ECSError> UpdateContainerInstancesStateOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceResult, ECSError> UpdateServiceOutcome;
      typedef Aws::Utils::Outcome<UpdateServicePrimaryTaskSetResult, ECSError> UpdateServicePrimaryTaskSetOutcome;
      typedef Aws::Utils::Outcome<UpdateTaskProtectionResult, ECSError> UpdateTaskProtectionOutcome;
      typedef Aws::Utils::Outcome<UpdateTaskSetResult, ECSError> UpdateTaskSetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateCapacityProviderOutcome> CreateCapacityProviderOutcomeCallable;
      typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
      typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
      typedef std::future<CreateTaskSetOutcome> CreateTaskSetOutcomeCallable;
      typedef std::future<DeleteAccountSettingOutcome> DeleteAccountSettingOutcomeCallable;
      typedef std::future<DeleteAttributesOutcome> DeleteAttributesOutcomeCallable;
      typedef std::future<DeleteCapacityProviderOutcome> DeleteCapacityProviderOutcomeCallable;
      typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
      typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
      typedef std::future<DeleteTaskSetOutcome> DeleteTaskSetOutcomeCallable;
      typedef std::future<DeregisterContainerInstanceOutcome> DeregisterContainerInstanceOutcomeCallable;
      typedef std::future<DeregisterTaskDefinitionOutcome> DeregisterTaskDefinitionOutcomeCallable;
      typedef std::future<DescribeCapacityProvidersOutcome> DescribeCapacityProvidersOutcomeCallable;
      typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
      typedef std::future<DescribeContainerInstancesOutcome> DescribeContainerInstancesOutcomeCallable;
      typedef std::future<DescribeServicesOutcome> DescribeServicesOutcomeCallable;
      typedef std::future<DescribeTaskDefinitionOutcome> DescribeTaskDefinitionOutcomeCallable;
      typedef std::future<DescribeTaskSetsOutcome> DescribeTaskSetsOutcomeCallable;
      typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
      typedef std::future<DiscoverPollEndpointOutcome> DiscoverPollEndpointOutcomeCallable;
      typedef std::future<ExecuteCommandOutcome> ExecuteCommandOutcomeCallable;
      typedef std::future<GetTaskProtectionOutcome> GetTaskProtectionOutcomeCallable;
      typedef std::future<ListAccountSettingsOutcome> ListAccountSettingsOutcomeCallable;
      typedef std::future<ListAttributesOutcome> ListAttributesOutcomeCallable;
      typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
      typedef std::future<ListContainerInstancesOutcome> ListContainerInstancesOutcomeCallable;
      typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
      typedef std::future<ListServicesByNamespaceOutcome> ListServicesByNamespaceOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTaskDefinitionFamiliesOutcome> ListTaskDefinitionFamiliesOutcomeCallable;
      typedef std::future<ListTaskDefinitionsOutcome> ListTaskDefinitionsOutcomeCallable;
      typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
      typedef std::future<PutAccountSettingOutcome> PutAccountSettingOutcomeCallable;
      typedef std::future<PutAccountSettingDefaultOutcome> PutAccountSettingDefaultOutcomeCallable;
      typedef std::future<PutAttributesOutcome> PutAttributesOutcomeCallable;
      typedef std::future<PutClusterCapacityProvidersOutcome> PutClusterCapacityProvidersOutcomeCallable;
      typedef std::future<RegisterContainerInstanceOutcome> RegisterContainerInstanceOutcomeCallable;
      typedef std::future<RegisterTaskDefinitionOutcome> RegisterTaskDefinitionOutcomeCallable;
      typedef std::future<RunTaskOutcome> RunTaskOutcomeCallable;
      typedef std::future<StartTaskOutcome> StartTaskOutcomeCallable;
      typedef std::future<StopTaskOutcome> StopTaskOutcomeCallable;
      typedef std::future<SubmitAttachmentStateChangesOutcome> SubmitAttachmentStateChangesOutcomeCallable;
      typedef std::future<SubmitContainerStateChangeOutcome> SubmitContainerStateChangeOutcomeCallable;
      typedef std::future<SubmitTaskStateChangeOutcome> SubmitTaskStateChangeOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCapacityProviderOutcome> UpdateCapacityProviderOutcomeCallable;
      typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
      typedef std::future<UpdateClusterSettingsOutcome> UpdateClusterSettingsOutcomeCallable;
      typedef std::future<UpdateContainerAgentOutcome> UpdateContainerAgentOutcomeCallable;
      typedef std::future<UpdateContainerInstancesStateOutcome> UpdateContainerInstancesStateOutcomeCallable;
      typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
      typedef std::future<UpdateServicePrimaryTaskSetOutcome> UpdateServicePrimaryTaskSetOutcomeCallable;
      typedef std::future<UpdateTaskProtectionOutcome> UpdateTaskProtectionOutcomeCallable;
      typedef std::future<UpdateTaskSetOutcome> UpdateTaskSetOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ECSClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ECSClient*, const Model::CreateCapacityProviderRequest&, const Model::CreateCapacityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCapacityProviderResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::CreateTaskSetRequest&, const Model::CreateTaskSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTaskSetResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeleteAccountSettingRequest&, const Model::DeleteAccountSettingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountSettingResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeleteAttributesRequest&, const Model::DeleteAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAttributesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeleteCapacityProviderRequest&, const Model::DeleteCapacityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCapacityProviderResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeleteTaskSetRequest&, const Model::DeleteTaskSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTaskSetResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeregisterContainerInstanceRequest&, const Model::DeregisterContainerInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterContainerInstanceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DeregisterTaskDefinitionRequest&, const Model::DeregisterTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeCapacityProvidersRequest&, const Model::DescribeCapacityProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCapacityProvidersResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClustersResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeContainerInstancesRequest&, const Model::DescribeContainerInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContainerInstancesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeServicesRequest&, const Model::DescribeServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServicesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeTaskDefinitionRequest&, const Model::DescribeTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeTaskSetsRequest&, const Model::DescribeTaskSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTaskSetsResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DescribeTasksRequest&, const Model::DescribeTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTasksResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::DiscoverPollEndpointRequest&, const Model::DiscoverPollEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DiscoverPollEndpointResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ExecuteCommandRequest&, const Model::ExecuteCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteCommandResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::GetTaskProtectionRequest&, const Model::GetTaskProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTaskProtectionResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListAccountSettingsRequest&, const Model::ListAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListAttributesRequest&, const Model::ListAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttributesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListContainerInstancesRequest&, const Model::ListContainerInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContainerInstancesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListServicesByNamespaceRequest&, const Model::ListServicesByNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesByNamespaceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTaskDefinitionFamiliesRequest&, const Model::ListTaskDefinitionFamiliesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskDefinitionFamiliesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTaskDefinitionsRequest&, const Model::ListTaskDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskDefinitionsResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::ListTasksRequest&, const Model::ListTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTasksResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::PutAccountSettingRequest&, const Model::PutAccountSettingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountSettingResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::PutAccountSettingDefaultRequest&, const Model::PutAccountSettingDefaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountSettingDefaultResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::PutAttributesRequest&, const Model::PutAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAttributesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::PutClusterCapacityProvidersRequest&, const Model::PutClusterCapacityProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutClusterCapacityProvidersResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::RegisterContainerInstanceRequest&, const Model::RegisterContainerInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterContainerInstanceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::RegisterTaskDefinitionRequest&, const Model::RegisterTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::RunTaskRequest&, const Model::RunTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunTaskResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::StartTaskRequest&, const Model::StartTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTaskResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::StopTaskRequest&, const Model::StopTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTaskResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::SubmitAttachmentStateChangesRequest&, const Model::SubmitAttachmentStateChangesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitAttachmentStateChangesResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::SubmitContainerStateChangeRequest&, const Model::SubmitContainerStateChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitContainerStateChangeResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::SubmitTaskStateChangeRequest&, const Model::SubmitTaskStateChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitTaskStateChangeResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateCapacityProviderRequest&, const Model::UpdateCapacityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCapacityProviderResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateClusterRequest&, const Model::UpdateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateClusterSettingsRequest&, const Model::UpdateClusterSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterSettingsResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateContainerAgentRequest&, const Model::UpdateContainerAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContainerAgentResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateContainerInstancesStateRequest&, const Model::UpdateContainerInstancesStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContainerInstancesStateResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateServiceRequest&, const Model::UpdateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateServicePrimaryTaskSetRequest&, const Model::UpdateServicePrimaryTaskSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServicePrimaryTaskSetResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateTaskProtectionRequest&, const Model::UpdateTaskProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTaskProtectionResponseReceivedHandler;
    typedef std::function<void(const ECSClient*, const Model::UpdateTaskSetRequest&, const Model::UpdateTaskSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTaskSetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ECS
} // namespace Aws
