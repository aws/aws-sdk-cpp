/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/deadline/DeadlineErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/deadline/DeadlineEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DeadlineClient header */
#include <aws/deadline/model/AssociateMemberToFarmResult.h>
#include <aws/deadline/model/AssociateMemberToFleetResult.h>
#include <aws/deadline/model/AssociateMemberToJobResult.h>
#include <aws/deadline/model/AssociateMemberToQueueResult.h>
#include <aws/deadline/model/AssumeFleetRoleForReadResult.h>
#include <aws/deadline/model/AssumeFleetRoleForWorkerResult.h>
#include <aws/deadline/model/AssumeQueueRoleForReadResult.h>
#include <aws/deadline/model/AssumeQueueRoleForUserResult.h>
#include <aws/deadline/model/AssumeQueueRoleForWorkerResult.h>
#include <aws/deadline/model/BatchGetJobEntityResult.h>
#include <aws/deadline/model/CopyJobTemplateResult.h>
#include <aws/deadline/model/CreateBudgetResult.h>
#include <aws/deadline/model/CreateFarmResult.h>
#include <aws/deadline/model/CreateFleetResult.h>
#include <aws/deadline/model/CreateJobResult.h>
#include <aws/deadline/model/CreateLicenseEndpointResult.h>
#include <aws/deadline/model/CreateLimitResult.h>
#include <aws/deadline/model/CreateMonitorResult.h>
#include <aws/deadline/model/CreateQueueResult.h>
#include <aws/deadline/model/CreateQueueEnvironmentResult.h>
#include <aws/deadline/model/CreateQueueFleetAssociationResult.h>
#include <aws/deadline/model/CreateQueueLimitAssociationResult.h>
#include <aws/deadline/model/CreateStorageProfileResult.h>
#include <aws/deadline/model/CreateWorkerResult.h>
#include <aws/deadline/model/DeleteBudgetResult.h>
#include <aws/deadline/model/DeleteFarmResult.h>
#include <aws/deadline/model/DeleteFleetResult.h>
#include <aws/deadline/model/DeleteLicenseEndpointResult.h>
#include <aws/deadline/model/DeleteLimitResult.h>
#include <aws/deadline/model/DeleteMeteredProductResult.h>
#include <aws/deadline/model/DeleteMonitorResult.h>
#include <aws/deadline/model/DeleteQueueResult.h>
#include <aws/deadline/model/DeleteQueueEnvironmentResult.h>
#include <aws/deadline/model/DeleteQueueFleetAssociationResult.h>
#include <aws/deadline/model/DeleteQueueLimitAssociationResult.h>
#include <aws/deadline/model/DeleteStorageProfileResult.h>
#include <aws/deadline/model/DeleteWorkerResult.h>
#include <aws/deadline/model/DisassociateMemberFromFarmResult.h>
#include <aws/deadline/model/DisassociateMemberFromFleetResult.h>
#include <aws/deadline/model/DisassociateMemberFromJobResult.h>
#include <aws/deadline/model/DisassociateMemberFromQueueResult.h>
#include <aws/deadline/model/GetBudgetResult.h>
#include <aws/deadline/model/GetFarmResult.h>
#include <aws/deadline/model/GetFleetResult.h>
#include <aws/deadline/model/GetJobResult.h>
#include <aws/deadline/model/GetLicenseEndpointResult.h>
#include <aws/deadline/model/GetLimitResult.h>
#include <aws/deadline/model/GetMonitorResult.h>
#include <aws/deadline/model/GetQueueResult.h>
#include <aws/deadline/model/GetQueueEnvironmentResult.h>
#include <aws/deadline/model/GetQueueFleetAssociationResult.h>
#include <aws/deadline/model/GetQueueLimitAssociationResult.h>
#include <aws/deadline/model/GetSessionResult.h>
#include <aws/deadline/model/GetSessionActionResult.h>
#include <aws/deadline/model/GetSessionsStatisticsAggregationResult.h>
#include <aws/deadline/model/GetStepResult.h>
#include <aws/deadline/model/GetStorageProfileResult.h>
#include <aws/deadline/model/GetStorageProfileForQueueResult.h>
#include <aws/deadline/model/GetTaskResult.h>
#include <aws/deadline/model/GetWorkerResult.h>
#include <aws/deadline/model/ListAvailableMeteredProductsResult.h>
#include <aws/deadline/model/ListBudgetsResult.h>
#include <aws/deadline/model/ListFarmMembersResult.h>
#include <aws/deadline/model/ListFarmsResult.h>
#include <aws/deadline/model/ListFleetMembersResult.h>
#include <aws/deadline/model/ListFleetsResult.h>
#include <aws/deadline/model/ListJobMembersResult.h>
#include <aws/deadline/model/ListJobParameterDefinitionsResult.h>
#include <aws/deadline/model/ListJobsResult.h>
#include <aws/deadline/model/ListLicenseEndpointsResult.h>
#include <aws/deadline/model/ListLimitsResult.h>
#include <aws/deadline/model/ListMeteredProductsResult.h>
#include <aws/deadline/model/ListMonitorsResult.h>
#include <aws/deadline/model/ListQueueEnvironmentsResult.h>
#include <aws/deadline/model/ListQueueFleetAssociationsResult.h>
#include <aws/deadline/model/ListQueueLimitAssociationsResult.h>
#include <aws/deadline/model/ListQueueMembersResult.h>
#include <aws/deadline/model/ListQueuesResult.h>
#include <aws/deadline/model/ListSessionActionsResult.h>
#include <aws/deadline/model/ListSessionsResult.h>
#include <aws/deadline/model/ListSessionsForWorkerResult.h>
#include <aws/deadline/model/ListStepConsumersResult.h>
#include <aws/deadline/model/ListStepDependenciesResult.h>
#include <aws/deadline/model/ListStepsResult.h>
#include <aws/deadline/model/ListStorageProfilesResult.h>
#include <aws/deadline/model/ListStorageProfilesForQueueResult.h>
#include <aws/deadline/model/ListTagsForResourceResult.h>
#include <aws/deadline/model/ListTasksResult.h>
#include <aws/deadline/model/ListWorkersResult.h>
#include <aws/deadline/model/PutMeteredProductResult.h>
#include <aws/deadline/model/SearchJobsResult.h>
#include <aws/deadline/model/SearchStepsResult.h>
#include <aws/deadline/model/SearchTasksResult.h>
#include <aws/deadline/model/SearchWorkersResult.h>
#include <aws/deadline/model/StartSessionsStatisticsAggregationResult.h>
#include <aws/deadline/model/TagResourceResult.h>
#include <aws/deadline/model/UntagResourceResult.h>
#include <aws/deadline/model/UpdateBudgetResult.h>
#include <aws/deadline/model/UpdateFarmResult.h>
#include <aws/deadline/model/UpdateFleetResult.h>
#include <aws/deadline/model/UpdateJobResult.h>
#include <aws/deadline/model/UpdateLimitResult.h>
#include <aws/deadline/model/UpdateMonitorResult.h>
#include <aws/deadline/model/UpdateQueueResult.h>
#include <aws/deadline/model/UpdateQueueEnvironmentResult.h>
#include <aws/deadline/model/UpdateQueueFleetAssociationResult.h>
#include <aws/deadline/model/UpdateQueueLimitAssociationResult.h>
#include <aws/deadline/model/UpdateSessionResult.h>
#include <aws/deadline/model/UpdateStepResult.h>
#include <aws/deadline/model/UpdateStorageProfileResult.h>
#include <aws/deadline/model/UpdateTaskResult.h>
#include <aws/deadline/model/UpdateWorkerResult.h>
#include <aws/deadline/model/UpdateWorkerScheduleResult.h>
#include <aws/deadline/model/ListLicenseEndpointsRequest.h>
#include <aws/deadline/model/ListAvailableMeteredProductsRequest.h>
#include <aws/deadline/model/ListFarmsRequest.h>
#include <aws/deadline/model/ListMonitorsRequest.h>
/* End of service model headers required in DeadlineClient header */

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

  namespace deadline
  {
    using DeadlineClientConfiguration = Aws::Client::GenericClientConfiguration;
    using DeadlineEndpointProviderBase = Aws::deadline::Endpoint::DeadlineEndpointProviderBase;
    using DeadlineEndpointProvider = Aws::deadline::Endpoint::DeadlineEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DeadlineClient header */
      class AssociateMemberToFarmRequest;
      class AssociateMemberToFleetRequest;
      class AssociateMemberToJobRequest;
      class AssociateMemberToQueueRequest;
      class AssumeFleetRoleForReadRequest;
      class AssumeFleetRoleForWorkerRequest;
      class AssumeQueueRoleForReadRequest;
      class AssumeQueueRoleForUserRequest;
      class AssumeQueueRoleForWorkerRequest;
      class BatchGetJobEntityRequest;
      class CopyJobTemplateRequest;
      class CreateBudgetRequest;
      class CreateFarmRequest;
      class CreateFleetRequest;
      class CreateJobRequest;
      class CreateLicenseEndpointRequest;
      class CreateLimitRequest;
      class CreateMonitorRequest;
      class CreateQueueRequest;
      class CreateQueueEnvironmentRequest;
      class CreateQueueFleetAssociationRequest;
      class CreateQueueLimitAssociationRequest;
      class CreateStorageProfileRequest;
      class CreateWorkerRequest;
      class DeleteBudgetRequest;
      class DeleteFarmRequest;
      class DeleteFleetRequest;
      class DeleteLicenseEndpointRequest;
      class DeleteLimitRequest;
      class DeleteMeteredProductRequest;
      class DeleteMonitorRequest;
      class DeleteQueueRequest;
      class DeleteQueueEnvironmentRequest;
      class DeleteQueueFleetAssociationRequest;
      class DeleteQueueLimitAssociationRequest;
      class DeleteStorageProfileRequest;
      class DeleteWorkerRequest;
      class DisassociateMemberFromFarmRequest;
      class DisassociateMemberFromFleetRequest;
      class DisassociateMemberFromJobRequest;
      class DisassociateMemberFromQueueRequest;
      class GetBudgetRequest;
      class GetFarmRequest;
      class GetFleetRequest;
      class GetJobRequest;
      class GetLicenseEndpointRequest;
      class GetLimitRequest;
      class GetMonitorRequest;
      class GetQueueRequest;
      class GetQueueEnvironmentRequest;
      class GetQueueFleetAssociationRequest;
      class GetQueueLimitAssociationRequest;
      class GetSessionRequest;
      class GetSessionActionRequest;
      class GetSessionsStatisticsAggregationRequest;
      class GetStepRequest;
      class GetStorageProfileRequest;
      class GetStorageProfileForQueueRequest;
      class GetTaskRequest;
      class GetWorkerRequest;
      class ListAvailableMeteredProductsRequest;
      class ListBudgetsRequest;
      class ListFarmMembersRequest;
      class ListFarmsRequest;
      class ListFleetMembersRequest;
      class ListFleetsRequest;
      class ListJobMembersRequest;
      class ListJobParameterDefinitionsRequest;
      class ListJobsRequest;
      class ListLicenseEndpointsRequest;
      class ListLimitsRequest;
      class ListMeteredProductsRequest;
      class ListMonitorsRequest;
      class ListQueueEnvironmentsRequest;
      class ListQueueFleetAssociationsRequest;
      class ListQueueLimitAssociationsRequest;
      class ListQueueMembersRequest;
      class ListQueuesRequest;
      class ListSessionActionsRequest;
      class ListSessionsRequest;
      class ListSessionsForWorkerRequest;
      class ListStepConsumersRequest;
      class ListStepDependenciesRequest;
      class ListStepsRequest;
      class ListStorageProfilesRequest;
      class ListStorageProfilesForQueueRequest;
      class ListTagsForResourceRequest;
      class ListTasksRequest;
      class ListWorkersRequest;
      class PutMeteredProductRequest;
      class SearchJobsRequest;
      class SearchStepsRequest;
      class SearchTasksRequest;
      class SearchWorkersRequest;
      class StartSessionsStatisticsAggregationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateBudgetRequest;
      class UpdateFarmRequest;
      class UpdateFleetRequest;
      class UpdateJobRequest;
      class UpdateLimitRequest;
      class UpdateMonitorRequest;
      class UpdateQueueRequest;
      class UpdateQueueEnvironmentRequest;
      class UpdateQueueFleetAssociationRequest;
      class UpdateQueueLimitAssociationRequest;
      class UpdateSessionRequest;
      class UpdateStepRequest;
      class UpdateStorageProfileRequest;
      class UpdateTaskRequest;
      class UpdateWorkerRequest;
      class UpdateWorkerScheduleRequest;
      /* End of service model forward declarations required in DeadlineClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateMemberToFarmResult, DeadlineError> AssociateMemberToFarmOutcome;
      typedef Aws::Utils::Outcome<AssociateMemberToFleetResult, DeadlineError> AssociateMemberToFleetOutcome;
      typedef Aws::Utils::Outcome<AssociateMemberToJobResult, DeadlineError> AssociateMemberToJobOutcome;
      typedef Aws::Utils::Outcome<AssociateMemberToQueueResult, DeadlineError> AssociateMemberToQueueOutcome;
      typedef Aws::Utils::Outcome<AssumeFleetRoleForReadResult, DeadlineError> AssumeFleetRoleForReadOutcome;
      typedef Aws::Utils::Outcome<AssumeFleetRoleForWorkerResult, DeadlineError> AssumeFleetRoleForWorkerOutcome;
      typedef Aws::Utils::Outcome<AssumeQueueRoleForReadResult, DeadlineError> AssumeQueueRoleForReadOutcome;
      typedef Aws::Utils::Outcome<AssumeQueueRoleForUserResult, DeadlineError> AssumeQueueRoleForUserOutcome;
      typedef Aws::Utils::Outcome<AssumeQueueRoleForWorkerResult, DeadlineError> AssumeQueueRoleForWorkerOutcome;
      typedef Aws::Utils::Outcome<BatchGetJobEntityResult, DeadlineError> BatchGetJobEntityOutcome;
      typedef Aws::Utils::Outcome<CopyJobTemplateResult, DeadlineError> CopyJobTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateBudgetResult, DeadlineError> CreateBudgetOutcome;
      typedef Aws::Utils::Outcome<CreateFarmResult, DeadlineError> CreateFarmOutcome;
      typedef Aws::Utils::Outcome<CreateFleetResult, DeadlineError> CreateFleetOutcome;
      typedef Aws::Utils::Outcome<CreateJobResult, DeadlineError> CreateJobOutcome;
      typedef Aws::Utils::Outcome<CreateLicenseEndpointResult, DeadlineError> CreateLicenseEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateLimitResult, DeadlineError> CreateLimitOutcome;
      typedef Aws::Utils::Outcome<CreateMonitorResult, DeadlineError> CreateMonitorOutcome;
      typedef Aws::Utils::Outcome<CreateQueueResult, DeadlineError> CreateQueueOutcome;
      typedef Aws::Utils::Outcome<CreateQueueEnvironmentResult, DeadlineError> CreateQueueEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateQueueFleetAssociationResult, DeadlineError> CreateQueueFleetAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateQueueLimitAssociationResult, DeadlineError> CreateQueueLimitAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateStorageProfileResult, DeadlineError> CreateStorageProfileOutcome;
      typedef Aws::Utils::Outcome<CreateWorkerResult, DeadlineError> CreateWorkerOutcome;
      typedef Aws::Utils::Outcome<DeleteBudgetResult, DeadlineError> DeleteBudgetOutcome;
      typedef Aws::Utils::Outcome<DeleteFarmResult, DeadlineError> DeleteFarmOutcome;
      typedef Aws::Utils::Outcome<DeleteFleetResult, DeadlineError> DeleteFleetOutcome;
      typedef Aws::Utils::Outcome<DeleteLicenseEndpointResult, DeadlineError> DeleteLicenseEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteLimitResult, DeadlineError> DeleteLimitOutcome;
      typedef Aws::Utils::Outcome<DeleteMeteredProductResult, DeadlineError> DeleteMeteredProductOutcome;
      typedef Aws::Utils::Outcome<DeleteMonitorResult, DeadlineError> DeleteMonitorOutcome;
      typedef Aws::Utils::Outcome<DeleteQueueResult, DeadlineError> DeleteQueueOutcome;
      typedef Aws::Utils::Outcome<DeleteQueueEnvironmentResult, DeadlineError> DeleteQueueEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteQueueFleetAssociationResult, DeadlineError> DeleteQueueFleetAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteQueueLimitAssociationResult, DeadlineError> DeleteQueueLimitAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteStorageProfileResult, DeadlineError> DeleteStorageProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkerResult, DeadlineError> DeleteWorkerOutcome;
      typedef Aws::Utils::Outcome<DisassociateMemberFromFarmResult, DeadlineError> DisassociateMemberFromFarmOutcome;
      typedef Aws::Utils::Outcome<DisassociateMemberFromFleetResult, DeadlineError> DisassociateMemberFromFleetOutcome;
      typedef Aws::Utils::Outcome<DisassociateMemberFromJobResult, DeadlineError> DisassociateMemberFromJobOutcome;
      typedef Aws::Utils::Outcome<DisassociateMemberFromQueueResult, DeadlineError> DisassociateMemberFromQueueOutcome;
      typedef Aws::Utils::Outcome<GetBudgetResult, DeadlineError> GetBudgetOutcome;
      typedef Aws::Utils::Outcome<GetFarmResult, DeadlineError> GetFarmOutcome;
      typedef Aws::Utils::Outcome<GetFleetResult, DeadlineError> GetFleetOutcome;
      typedef Aws::Utils::Outcome<GetJobResult, DeadlineError> GetJobOutcome;
      typedef Aws::Utils::Outcome<GetLicenseEndpointResult, DeadlineError> GetLicenseEndpointOutcome;
      typedef Aws::Utils::Outcome<GetLimitResult, DeadlineError> GetLimitOutcome;
      typedef Aws::Utils::Outcome<GetMonitorResult, DeadlineError> GetMonitorOutcome;
      typedef Aws::Utils::Outcome<GetQueueResult, DeadlineError> GetQueueOutcome;
      typedef Aws::Utils::Outcome<GetQueueEnvironmentResult, DeadlineError> GetQueueEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetQueueFleetAssociationResult, DeadlineError> GetQueueFleetAssociationOutcome;
      typedef Aws::Utils::Outcome<GetQueueLimitAssociationResult, DeadlineError> GetQueueLimitAssociationOutcome;
      typedef Aws::Utils::Outcome<GetSessionResult, DeadlineError> GetSessionOutcome;
      typedef Aws::Utils::Outcome<GetSessionActionResult, DeadlineError> GetSessionActionOutcome;
      typedef Aws::Utils::Outcome<GetSessionsStatisticsAggregationResult, DeadlineError> GetSessionsStatisticsAggregationOutcome;
      typedef Aws::Utils::Outcome<GetStepResult, DeadlineError> GetStepOutcome;
      typedef Aws::Utils::Outcome<GetStorageProfileResult, DeadlineError> GetStorageProfileOutcome;
      typedef Aws::Utils::Outcome<GetStorageProfileForQueueResult, DeadlineError> GetStorageProfileForQueueOutcome;
      typedef Aws::Utils::Outcome<GetTaskResult, DeadlineError> GetTaskOutcome;
      typedef Aws::Utils::Outcome<GetWorkerResult, DeadlineError> GetWorkerOutcome;
      typedef Aws::Utils::Outcome<ListAvailableMeteredProductsResult, DeadlineError> ListAvailableMeteredProductsOutcome;
      typedef Aws::Utils::Outcome<ListBudgetsResult, DeadlineError> ListBudgetsOutcome;
      typedef Aws::Utils::Outcome<ListFarmMembersResult, DeadlineError> ListFarmMembersOutcome;
      typedef Aws::Utils::Outcome<ListFarmsResult, DeadlineError> ListFarmsOutcome;
      typedef Aws::Utils::Outcome<ListFleetMembersResult, DeadlineError> ListFleetMembersOutcome;
      typedef Aws::Utils::Outcome<ListFleetsResult, DeadlineError> ListFleetsOutcome;
      typedef Aws::Utils::Outcome<ListJobMembersResult, DeadlineError> ListJobMembersOutcome;
      typedef Aws::Utils::Outcome<ListJobParameterDefinitionsResult, DeadlineError> ListJobParameterDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, DeadlineError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<ListLicenseEndpointsResult, DeadlineError> ListLicenseEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListLimitsResult, DeadlineError> ListLimitsOutcome;
      typedef Aws::Utils::Outcome<ListMeteredProductsResult, DeadlineError> ListMeteredProductsOutcome;
      typedef Aws::Utils::Outcome<ListMonitorsResult, DeadlineError> ListMonitorsOutcome;
      typedef Aws::Utils::Outcome<ListQueueEnvironmentsResult, DeadlineError> ListQueueEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListQueueFleetAssociationsResult, DeadlineError> ListQueueFleetAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListQueueLimitAssociationsResult, DeadlineError> ListQueueLimitAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListQueueMembersResult, DeadlineError> ListQueueMembersOutcome;
      typedef Aws::Utils::Outcome<ListQueuesResult, DeadlineError> ListQueuesOutcome;
      typedef Aws::Utils::Outcome<ListSessionActionsResult, DeadlineError> ListSessionActionsOutcome;
      typedef Aws::Utils::Outcome<ListSessionsResult, DeadlineError> ListSessionsOutcome;
      typedef Aws::Utils::Outcome<ListSessionsForWorkerResult, DeadlineError> ListSessionsForWorkerOutcome;
      typedef Aws::Utils::Outcome<ListStepConsumersResult, DeadlineError> ListStepConsumersOutcome;
      typedef Aws::Utils::Outcome<ListStepDependenciesResult, DeadlineError> ListStepDependenciesOutcome;
      typedef Aws::Utils::Outcome<ListStepsResult, DeadlineError> ListStepsOutcome;
      typedef Aws::Utils::Outcome<ListStorageProfilesResult, DeadlineError> ListStorageProfilesOutcome;
      typedef Aws::Utils::Outcome<ListStorageProfilesForQueueResult, DeadlineError> ListStorageProfilesForQueueOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, DeadlineError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTasksResult, DeadlineError> ListTasksOutcome;
      typedef Aws::Utils::Outcome<ListWorkersResult, DeadlineError> ListWorkersOutcome;
      typedef Aws::Utils::Outcome<PutMeteredProductResult, DeadlineError> PutMeteredProductOutcome;
      typedef Aws::Utils::Outcome<SearchJobsResult, DeadlineError> SearchJobsOutcome;
      typedef Aws::Utils::Outcome<SearchStepsResult, DeadlineError> SearchStepsOutcome;
      typedef Aws::Utils::Outcome<SearchTasksResult, DeadlineError> SearchTasksOutcome;
      typedef Aws::Utils::Outcome<SearchWorkersResult, DeadlineError> SearchWorkersOutcome;
      typedef Aws::Utils::Outcome<StartSessionsStatisticsAggregationResult, DeadlineError> StartSessionsStatisticsAggregationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, DeadlineError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, DeadlineError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateBudgetResult, DeadlineError> UpdateBudgetOutcome;
      typedef Aws::Utils::Outcome<UpdateFarmResult, DeadlineError> UpdateFarmOutcome;
      typedef Aws::Utils::Outcome<UpdateFleetResult, DeadlineError> UpdateFleetOutcome;
      typedef Aws::Utils::Outcome<UpdateJobResult, DeadlineError> UpdateJobOutcome;
      typedef Aws::Utils::Outcome<UpdateLimitResult, DeadlineError> UpdateLimitOutcome;
      typedef Aws::Utils::Outcome<UpdateMonitorResult, DeadlineError> UpdateMonitorOutcome;
      typedef Aws::Utils::Outcome<UpdateQueueResult, DeadlineError> UpdateQueueOutcome;
      typedef Aws::Utils::Outcome<UpdateQueueEnvironmentResult, DeadlineError> UpdateQueueEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateQueueFleetAssociationResult, DeadlineError> UpdateQueueFleetAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateQueueLimitAssociationResult, DeadlineError> UpdateQueueLimitAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateSessionResult, DeadlineError> UpdateSessionOutcome;
      typedef Aws::Utils::Outcome<UpdateStepResult, DeadlineError> UpdateStepOutcome;
      typedef Aws::Utils::Outcome<UpdateStorageProfileResult, DeadlineError> UpdateStorageProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateTaskResult, DeadlineError> UpdateTaskOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkerResult, DeadlineError> UpdateWorkerOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkerScheduleResult, DeadlineError> UpdateWorkerScheduleOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateMemberToFarmOutcome> AssociateMemberToFarmOutcomeCallable;
      typedef std::future<AssociateMemberToFleetOutcome> AssociateMemberToFleetOutcomeCallable;
      typedef std::future<AssociateMemberToJobOutcome> AssociateMemberToJobOutcomeCallable;
      typedef std::future<AssociateMemberToQueueOutcome> AssociateMemberToQueueOutcomeCallable;
      typedef std::future<AssumeFleetRoleForReadOutcome> AssumeFleetRoleForReadOutcomeCallable;
      typedef std::future<AssumeFleetRoleForWorkerOutcome> AssumeFleetRoleForWorkerOutcomeCallable;
      typedef std::future<AssumeQueueRoleForReadOutcome> AssumeQueueRoleForReadOutcomeCallable;
      typedef std::future<AssumeQueueRoleForUserOutcome> AssumeQueueRoleForUserOutcomeCallable;
      typedef std::future<AssumeQueueRoleForWorkerOutcome> AssumeQueueRoleForWorkerOutcomeCallable;
      typedef std::future<BatchGetJobEntityOutcome> BatchGetJobEntityOutcomeCallable;
      typedef std::future<CopyJobTemplateOutcome> CopyJobTemplateOutcomeCallable;
      typedef std::future<CreateBudgetOutcome> CreateBudgetOutcomeCallable;
      typedef std::future<CreateFarmOutcome> CreateFarmOutcomeCallable;
      typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
      typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
      typedef std::future<CreateLicenseEndpointOutcome> CreateLicenseEndpointOutcomeCallable;
      typedef std::future<CreateLimitOutcome> CreateLimitOutcomeCallable;
      typedef std::future<CreateMonitorOutcome> CreateMonitorOutcomeCallable;
      typedef std::future<CreateQueueOutcome> CreateQueueOutcomeCallable;
      typedef std::future<CreateQueueEnvironmentOutcome> CreateQueueEnvironmentOutcomeCallable;
      typedef std::future<CreateQueueFleetAssociationOutcome> CreateQueueFleetAssociationOutcomeCallable;
      typedef std::future<CreateQueueLimitAssociationOutcome> CreateQueueLimitAssociationOutcomeCallable;
      typedef std::future<CreateStorageProfileOutcome> CreateStorageProfileOutcomeCallable;
      typedef std::future<CreateWorkerOutcome> CreateWorkerOutcomeCallable;
      typedef std::future<DeleteBudgetOutcome> DeleteBudgetOutcomeCallable;
      typedef std::future<DeleteFarmOutcome> DeleteFarmOutcomeCallable;
      typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
      typedef std::future<DeleteLicenseEndpointOutcome> DeleteLicenseEndpointOutcomeCallable;
      typedef std::future<DeleteLimitOutcome> DeleteLimitOutcomeCallable;
      typedef std::future<DeleteMeteredProductOutcome> DeleteMeteredProductOutcomeCallable;
      typedef std::future<DeleteMonitorOutcome> DeleteMonitorOutcomeCallable;
      typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
      typedef std::future<DeleteQueueEnvironmentOutcome> DeleteQueueEnvironmentOutcomeCallable;
      typedef std::future<DeleteQueueFleetAssociationOutcome> DeleteQueueFleetAssociationOutcomeCallable;
      typedef std::future<DeleteQueueLimitAssociationOutcome> DeleteQueueLimitAssociationOutcomeCallable;
      typedef std::future<DeleteStorageProfileOutcome> DeleteStorageProfileOutcomeCallable;
      typedef std::future<DeleteWorkerOutcome> DeleteWorkerOutcomeCallable;
      typedef std::future<DisassociateMemberFromFarmOutcome> DisassociateMemberFromFarmOutcomeCallable;
      typedef std::future<DisassociateMemberFromFleetOutcome> DisassociateMemberFromFleetOutcomeCallable;
      typedef std::future<DisassociateMemberFromJobOutcome> DisassociateMemberFromJobOutcomeCallable;
      typedef std::future<DisassociateMemberFromQueueOutcome> DisassociateMemberFromQueueOutcomeCallable;
      typedef std::future<GetBudgetOutcome> GetBudgetOutcomeCallable;
      typedef std::future<GetFarmOutcome> GetFarmOutcomeCallable;
      typedef std::future<GetFleetOutcome> GetFleetOutcomeCallable;
      typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
      typedef std::future<GetLicenseEndpointOutcome> GetLicenseEndpointOutcomeCallable;
      typedef std::future<GetLimitOutcome> GetLimitOutcomeCallable;
      typedef std::future<GetMonitorOutcome> GetMonitorOutcomeCallable;
      typedef std::future<GetQueueOutcome> GetQueueOutcomeCallable;
      typedef std::future<GetQueueEnvironmentOutcome> GetQueueEnvironmentOutcomeCallable;
      typedef std::future<GetQueueFleetAssociationOutcome> GetQueueFleetAssociationOutcomeCallable;
      typedef std::future<GetQueueLimitAssociationOutcome> GetQueueLimitAssociationOutcomeCallable;
      typedef std::future<GetSessionOutcome> GetSessionOutcomeCallable;
      typedef std::future<GetSessionActionOutcome> GetSessionActionOutcomeCallable;
      typedef std::future<GetSessionsStatisticsAggregationOutcome> GetSessionsStatisticsAggregationOutcomeCallable;
      typedef std::future<GetStepOutcome> GetStepOutcomeCallable;
      typedef std::future<GetStorageProfileOutcome> GetStorageProfileOutcomeCallable;
      typedef std::future<GetStorageProfileForQueueOutcome> GetStorageProfileForQueueOutcomeCallable;
      typedef std::future<GetTaskOutcome> GetTaskOutcomeCallable;
      typedef std::future<GetWorkerOutcome> GetWorkerOutcomeCallable;
      typedef std::future<ListAvailableMeteredProductsOutcome> ListAvailableMeteredProductsOutcomeCallable;
      typedef std::future<ListBudgetsOutcome> ListBudgetsOutcomeCallable;
      typedef std::future<ListFarmMembersOutcome> ListFarmMembersOutcomeCallable;
      typedef std::future<ListFarmsOutcome> ListFarmsOutcomeCallable;
      typedef std::future<ListFleetMembersOutcome> ListFleetMembersOutcomeCallable;
      typedef std::future<ListFleetsOutcome> ListFleetsOutcomeCallable;
      typedef std::future<ListJobMembersOutcome> ListJobMembersOutcomeCallable;
      typedef std::future<ListJobParameterDefinitionsOutcome> ListJobParameterDefinitionsOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<ListLicenseEndpointsOutcome> ListLicenseEndpointsOutcomeCallable;
      typedef std::future<ListLimitsOutcome> ListLimitsOutcomeCallable;
      typedef std::future<ListMeteredProductsOutcome> ListMeteredProductsOutcomeCallable;
      typedef std::future<ListMonitorsOutcome> ListMonitorsOutcomeCallable;
      typedef std::future<ListQueueEnvironmentsOutcome> ListQueueEnvironmentsOutcomeCallable;
      typedef std::future<ListQueueFleetAssociationsOutcome> ListQueueFleetAssociationsOutcomeCallable;
      typedef std::future<ListQueueLimitAssociationsOutcome> ListQueueLimitAssociationsOutcomeCallable;
      typedef std::future<ListQueueMembersOutcome> ListQueueMembersOutcomeCallable;
      typedef std::future<ListQueuesOutcome> ListQueuesOutcomeCallable;
      typedef std::future<ListSessionActionsOutcome> ListSessionActionsOutcomeCallable;
      typedef std::future<ListSessionsOutcome> ListSessionsOutcomeCallable;
      typedef std::future<ListSessionsForWorkerOutcome> ListSessionsForWorkerOutcomeCallable;
      typedef std::future<ListStepConsumersOutcome> ListStepConsumersOutcomeCallable;
      typedef std::future<ListStepDependenciesOutcome> ListStepDependenciesOutcomeCallable;
      typedef std::future<ListStepsOutcome> ListStepsOutcomeCallable;
      typedef std::future<ListStorageProfilesOutcome> ListStorageProfilesOutcomeCallable;
      typedef std::future<ListStorageProfilesForQueueOutcome> ListStorageProfilesForQueueOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
      typedef std::future<ListWorkersOutcome> ListWorkersOutcomeCallable;
      typedef std::future<PutMeteredProductOutcome> PutMeteredProductOutcomeCallable;
      typedef std::future<SearchJobsOutcome> SearchJobsOutcomeCallable;
      typedef std::future<SearchStepsOutcome> SearchStepsOutcomeCallable;
      typedef std::future<SearchTasksOutcome> SearchTasksOutcomeCallable;
      typedef std::future<SearchWorkersOutcome> SearchWorkersOutcomeCallable;
      typedef std::future<StartSessionsStatisticsAggregationOutcome> StartSessionsStatisticsAggregationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateBudgetOutcome> UpdateBudgetOutcomeCallable;
      typedef std::future<UpdateFarmOutcome> UpdateFarmOutcomeCallable;
      typedef std::future<UpdateFleetOutcome> UpdateFleetOutcomeCallable;
      typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
      typedef std::future<UpdateLimitOutcome> UpdateLimitOutcomeCallable;
      typedef std::future<UpdateMonitorOutcome> UpdateMonitorOutcomeCallable;
      typedef std::future<UpdateQueueOutcome> UpdateQueueOutcomeCallable;
      typedef std::future<UpdateQueueEnvironmentOutcome> UpdateQueueEnvironmentOutcomeCallable;
      typedef std::future<UpdateQueueFleetAssociationOutcome> UpdateQueueFleetAssociationOutcomeCallable;
      typedef std::future<UpdateQueueLimitAssociationOutcome> UpdateQueueLimitAssociationOutcomeCallable;
      typedef std::future<UpdateSessionOutcome> UpdateSessionOutcomeCallable;
      typedef std::future<UpdateStepOutcome> UpdateStepOutcomeCallable;
      typedef std::future<UpdateStorageProfileOutcome> UpdateStorageProfileOutcomeCallable;
      typedef std::future<UpdateTaskOutcome> UpdateTaskOutcomeCallable;
      typedef std::future<UpdateWorkerOutcome> UpdateWorkerOutcomeCallable;
      typedef std::future<UpdateWorkerScheduleOutcome> UpdateWorkerScheduleOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DeadlineClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DeadlineClient*, const Model::AssociateMemberToFarmRequest&, const Model::AssociateMemberToFarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMemberToFarmResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::AssociateMemberToFleetRequest&, const Model::AssociateMemberToFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMemberToFleetResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::AssociateMemberToJobRequest&, const Model::AssociateMemberToJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMemberToJobResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::AssociateMemberToQueueRequest&, const Model::AssociateMemberToQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMemberToQueueResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::AssumeFleetRoleForReadRequest&, const Model::AssumeFleetRoleForReadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssumeFleetRoleForReadResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::AssumeFleetRoleForWorkerRequest&, const Model::AssumeFleetRoleForWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssumeFleetRoleForWorkerResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::AssumeQueueRoleForReadRequest&, const Model::AssumeQueueRoleForReadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssumeQueueRoleForReadResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::AssumeQueueRoleForUserRequest&, const Model::AssumeQueueRoleForUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssumeQueueRoleForUserResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::AssumeQueueRoleForWorkerRequest&, const Model::AssumeQueueRoleForWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssumeQueueRoleForWorkerResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::BatchGetJobEntityRequest&, const Model::BatchGetJobEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetJobEntityResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CopyJobTemplateRequest&, const Model::CopyJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyJobTemplateResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateBudgetRequest&, const Model::CreateBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBudgetResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateFarmRequest&, const Model::CreateFarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFarmResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateFleetRequest&, const Model::CreateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateLicenseEndpointRequest&, const Model::CreateLicenseEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLicenseEndpointResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateLimitRequest&, const Model::CreateLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLimitResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateMonitorRequest&, const Model::CreateMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMonitorResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateQueueRequest&, const Model::CreateQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQueueResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateQueueEnvironmentRequest&, const Model::CreateQueueEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQueueEnvironmentResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateQueueFleetAssociationRequest&, const Model::CreateQueueFleetAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQueueFleetAssociationResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateQueueLimitAssociationRequest&, const Model::CreateQueueLimitAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQueueLimitAssociationResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateStorageProfileRequest&, const Model::CreateStorageProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStorageProfileResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::CreateWorkerRequest&, const Model::CreateWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkerResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteBudgetRequest&, const Model::DeleteBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBudgetResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteFarmRequest&, const Model::DeleteFarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFarmResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteFleetRequest&, const Model::DeleteFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteLicenseEndpointRequest&, const Model::DeleteLicenseEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLicenseEndpointResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteLimitRequest&, const Model::DeleteLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLimitResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteMeteredProductRequest&, const Model::DeleteMeteredProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMeteredProductResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteMonitorRequest&, const Model::DeleteMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMonitorResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteQueueRequest&, const Model::DeleteQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueueResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteQueueEnvironmentRequest&, const Model::DeleteQueueEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueueEnvironmentResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteQueueFleetAssociationRequest&, const Model::DeleteQueueFleetAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueueFleetAssociationResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteQueueLimitAssociationRequest&, const Model::DeleteQueueLimitAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueueLimitAssociationResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteStorageProfileRequest&, const Model::DeleteStorageProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStorageProfileResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DeleteWorkerRequest&, const Model::DeleteWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkerResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DisassociateMemberFromFarmRequest&, const Model::DisassociateMemberFromFarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMemberFromFarmResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DisassociateMemberFromFleetRequest&, const Model::DisassociateMemberFromFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMemberFromFleetResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DisassociateMemberFromJobRequest&, const Model::DisassociateMemberFromJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMemberFromJobResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::DisassociateMemberFromQueueRequest&, const Model::DisassociateMemberFromQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMemberFromQueueResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetBudgetRequest&, const Model::GetBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBudgetResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetFarmRequest&, const Model::GetFarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFarmResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetFleetRequest&, const Model::GetFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFleetResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetJobRequest&, const Model::GetJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetLicenseEndpointRequest&, const Model::GetLicenseEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLicenseEndpointResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetLimitRequest&, const Model::GetLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLimitResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetMonitorRequest&, const Model::GetMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMonitorResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetQueueRequest&, const Model::GetQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueueResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetQueueEnvironmentRequest&, const Model::GetQueueEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueueEnvironmentResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetQueueFleetAssociationRequest&, const Model::GetQueueFleetAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueueFleetAssociationResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetQueueLimitAssociationRequest&, const Model::GetQueueLimitAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueueLimitAssociationResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetSessionRequest&, const Model::GetSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetSessionActionRequest&, const Model::GetSessionActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionActionResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetSessionsStatisticsAggregationRequest&, const Model::GetSessionsStatisticsAggregationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionsStatisticsAggregationResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetStepRequest&, const Model::GetStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStepResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetStorageProfileRequest&, const Model::GetStorageProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStorageProfileResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetStorageProfileForQueueRequest&, const Model::GetStorageProfileForQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStorageProfileForQueueResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetTaskRequest&, const Model::GetTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTaskResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::GetWorkerRequest&, const Model::GetWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkerResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListAvailableMeteredProductsRequest&, const Model::ListAvailableMeteredProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableMeteredProductsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListBudgetsRequest&, const Model::ListBudgetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBudgetsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListFarmMembersRequest&, const Model::ListFarmMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFarmMembersResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListFarmsRequest&, const Model::ListFarmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFarmsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListFleetMembersRequest&, const Model::ListFleetMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetMembersResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListFleetsRequest&, const Model::ListFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListJobMembersRequest&, const Model::ListJobMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobMembersResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListJobParameterDefinitionsRequest&, const Model::ListJobParameterDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobParameterDefinitionsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListLicenseEndpointsRequest&, const Model::ListLicenseEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLicenseEndpointsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListLimitsRequest&, const Model::ListLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLimitsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListMeteredProductsRequest&, const Model::ListMeteredProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMeteredProductsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListMonitorsRequest&, const Model::ListMonitorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitorsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListQueueEnvironmentsRequest&, const Model::ListQueueEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueueEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListQueueFleetAssociationsRequest&, const Model::ListQueueFleetAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueueFleetAssociationsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListQueueLimitAssociationsRequest&, const Model::ListQueueLimitAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueueLimitAssociationsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListQueueMembersRequest&, const Model::ListQueueMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueueMembersResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListQueuesRequest&, const Model::ListQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueuesResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListSessionActionsRequest&, const Model::ListSessionActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSessionActionsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListSessionsRequest&, const Model::ListSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSessionsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListSessionsForWorkerRequest&, const Model::ListSessionsForWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSessionsForWorkerResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListStepConsumersRequest&, const Model::ListStepConsumersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStepConsumersResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListStepDependenciesRequest&, const Model::ListStepDependenciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStepDependenciesResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListStepsRequest&, const Model::ListStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStepsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListStorageProfilesRequest&, const Model::ListStorageProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStorageProfilesResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListStorageProfilesForQueueRequest&, const Model::ListStorageProfilesForQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStorageProfilesForQueueResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListTasksRequest&, const Model::ListTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTasksResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::ListWorkersRequest&, const Model::ListWorkersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkersResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::PutMeteredProductRequest&, const Model::PutMeteredProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMeteredProductResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::SearchJobsRequest&, const Model::SearchJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchJobsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::SearchStepsRequest&, const Model::SearchStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchStepsResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::SearchTasksRequest&, const Model::SearchTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchTasksResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::SearchWorkersRequest&, const Model::SearchWorkersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchWorkersResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::StartSessionsStatisticsAggregationRequest&, const Model::StartSessionsStatisticsAggregationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSessionsStatisticsAggregationResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateBudgetRequest&, const Model::UpdateBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBudgetResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateFarmRequest&, const Model::UpdateFarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFarmResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateFleetRequest&, const Model::UpdateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateJobRequest&, const Model::UpdateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateLimitRequest&, const Model::UpdateLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLimitResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateMonitorRequest&, const Model::UpdateMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMonitorResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateQueueRequest&, const Model::UpdateQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateQueueEnvironmentRequest&, const Model::UpdateQueueEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueEnvironmentResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateQueueFleetAssociationRequest&, const Model::UpdateQueueFleetAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueFleetAssociationResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateQueueLimitAssociationRequest&, const Model::UpdateQueueLimitAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueLimitAssociationResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateSessionRequest&, const Model::UpdateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSessionResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateStepRequest&, const Model::UpdateStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStepResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateStorageProfileRequest&, const Model::UpdateStorageProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStorageProfileResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateTaskRequest&, const Model::UpdateTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTaskResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateWorkerRequest&, const Model::UpdateWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkerResponseReceivedHandler;
    typedef std::function<void(const DeadlineClient*, const Model::UpdateWorkerScheduleRequest&, const Model::UpdateWorkerScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkerScheduleResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace deadline
} // namespace Aws
