/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/datazone/DataZoneErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/datazone/DataZoneEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DataZoneClient header */
#include <aws/datazone/model/AcceptPredictionsResult.h>
#include <aws/datazone/model/AcceptSubscriptionRequestResult.h>
#include <aws/datazone/model/AddEntityOwnerResult.h>
#include <aws/datazone/model/AddPolicyGrantResult.h>
#include <aws/datazone/model/AssociateEnvironmentRoleResult.h>
#include <aws/datazone/model/AssociateGovernedTermsResult.h>
#include <aws/datazone/model/CancelMetadataGenerationRunResult.h>
#include <aws/datazone/model/CancelSubscriptionResult.h>
#include <aws/datazone/model/CreateAccountPoolResult.h>
#include <aws/datazone/model/CreateAssetResult.h>
#include <aws/datazone/model/CreateAssetFilterResult.h>
#include <aws/datazone/model/CreateAssetRevisionResult.h>
#include <aws/datazone/model/CreateAssetTypeResult.h>
#include <aws/datazone/model/CreateConnectionResult.h>
#include <aws/datazone/model/CreateDataProductResult.h>
#include <aws/datazone/model/CreateDataProductRevisionResult.h>
#include <aws/datazone/model/CreateDataSourceResult.h>
#include <aws/datazone/model/CreateDomainResult.h>
#include <aws/datazone/model/CreateDomainUnitResult.h>
#include <aws/datazone/model/CreateEnvironmentResult.h>
#include <aws/datazone/model/CreateEnvironmentActionResult.h>
#include <aws/datazone/model/CreateEnvironmentBlueprintResult.h>
#include <aws/datazone/model/CreateEnvironmentProfileResult.h>
#include <aws/datazone/model/CreateFormTypeResult.h>
#include <aws/datazone/model/CreateGlossaryResult.h>
#include <aws/datazone/model/CreateGlossaryTermResult.h>
#include <aws/datazone/model/CreateGroupProfileResult.h>
#include <aws/datazone/model/CreateListingChangeSetResult.h>
#include <aws/datazone/model/CreateProjectResult.h>
#include <aws/datazone/model/CreateProjectMembershipResult.h>
#include <aws/datazone/model/CreateProjectProfileResult.h>
#include <aws/datazone/model/CreateRuleResult.h>
#include <aws/datazone/model/CreateSubscriptionGrantResult.h>
#include <aws/datazone/model/CreateSubscriptionRequestResult.h>
#include <aws/datazone/model/CreateSubscriptionTargetResult.h>
#include <aws/datazone/model/CreateUserProfileResult.h>
#include <aws/datazone/model/DeleteAccountPoolResult.h>
#include <aws/datazone/model/DeleteAssetResult.h>
#include <aws/datazone/model/DeleteAssetTypeResult.h>
#include <aws/datazone/model/DeleteConnectionResult.h>
#include <aws/datazone/model/DeleteDataProductResult.h>
#include <aws/datazone/model/DeleteDataSourceResult.h>
#include <aws/datazone/model/DeleteDomainResult.h>
#include <aws/datazone/model/DeleteDomainUnitResult.h>
#include <aws/datazone/model/DeleteEnvironmentBlueprintConfigurationResult.h>
#include <aws/datazone/model/DeleteFormTypeResult.h>
#include <aws/datazone/model/DeleteGlossaryResult.h>
#include <aws/datazone/model/DeleteGlossaryTermResult.h>
#include <aws/datazone/model/DeleteListingResult.h>
#include <aws/datazone/model/DeleteProjectResult.h>
#include <aws/datazone/model/DeleteProjectMembershipResult.h>
#include <aws/datazone/model/DeleteProjectProfileResult.h>
#include <aws/datazone/model/DeleteRuleResult.h>
#include <aws/datazone/model/DeleteSubscriptionGrantResult.h>
#include <aws/datazone/model/DeleteTimeSeriesDataPointsResult.h>
#include <aws/datazone/model/DisassociateEnvironmentRoleResult.h>
#include <aws/datazone/model/DisassociateGovernedTermsResult.h>
#include <aws/datazone/model/GetAccountPoolResult.h>
#include <aws/datazone/model/GetAssetResult.h>
#include <aws/datazone/model/GetAssetFilterResult.h>
#include <aws/datazone/model/GetAssetTypeResult.h>
#include <aws/datazone/model/GetConnectionResult.h>
#include <aws/datazone/model/GetDataProductResult.h>
#include <aws/datazone/model/GetDataSourceResult.h>
#include <aws/datazone/model/GetDataSourceRunResult.h>
#include <aws/datazone/model/GetDomainResult.h>
#include <aws/datazone/model/GetDomainUnitResult.h>
#include <aws/datazone/model/GetEnvironmentResult.h>
#include <aws/datazone/model/GetEnvironmentActionResult.h>
#include <aws/datazone/model/GetEnvironmentBlueprintResult.h>
#include <aws/datazone/model/GetEnvironmentBlueprintConfigurationResult.h>
#include <aws/datazone/model/GetEnvironmentCredentialsResult.h>
#include <aws/datazone/model/GetEnvironmentProfileResult.h>
#include <aws/datazone/model/GetFormTypeResult.h>
#include <aws/datazone/model/GetGlossaryResult.h>
#include <aws/datazone/model/GetGlossaryTermResult.h>
#include <aws/datazone/model/GetGroupProfileResult.h>
#include <aws/datazone/model/GetIamPortalLoginUrlResult.h>
#include <aws/datazone/model/GetJobRunResult.h>
#include <aws/datazone/model/GetLineageEventResult.h>
#include <aws/datazone/model/GetLineageNodeResult.h>
#include <aws/datazone/model/GetListingResult.h>
#include <aws/datazone/model/GetMetadataGenerationRunResult.h>
#include <aws/datazone/model/GetProjectResult.h>
#include <aws/datazone/model/GetProjectProfileResult.h>
#include <aws/datazone/model/GetRuleResult.h>
#include <aws/datazone/model/GetSubscriptionResult.h>
#include <aws/datazone/model/GetSubscriptionGrantResult.h>
#include <aws/datazone/model/GetSubscriptionRequestDetailsResult.h>
#include <aws/datazone/model/GetSubscriptionTargetResult.h>
#include <aws/datazone/model/GetTimeSeriesDataPointResult.h>
#include <aws/datazone/model/GetUserProfileResult.h>
#include <aws/datazone/model/ListAccountPoolsResult.h>
#include <aws/datazone/model/ListAccountsInAccountPoolResult.h>
#include <aws/datazone/model/ListAssetFiltersResult.h>
#include <aws/datazone/model/ListAssetRevisionsResult.h>
#include <aws/datazone/model/ListConnectionsResult.h>
#include <aws/datazone/model/ListDataProductRevisionsResult.h>
#include <aws/datazone/model/ListDataSourceRunActivitiesResult.h>
#include <aws/datazone/model/ListDataSourceRunsResult.h>
#include <aws/datazone/model/ListDataSourcesResult.h>
#include <aws/datazone/model/ListDomainUnitsForParentResult.h>
#include <aws/datazone/model/ListDomainsResult.h>
#include <aws/datazone/model/ListEntityOwnersResult.h>
#include <aws/datazone/model/ListEnvironmentActionsResult.h>
#include <aws/datazone/model/ListEnvironmentBlueprintConfigurationsResult.h>
#include <aws/datazone/model/ListEnvironmentBlueprintsResult.h>
#include <aws/datazone/model/ListEnvironmentProfilesResult.h>
#include <aws/datazone/model/ListEnvironmentsResult.h>
#include <aws/datazone/model/ListJobRunsResult.h>
#include <aws/datazone/model/ListLineageEventsResult.h>
#include <aws/datazone/model/ListLineageNodeHistoryResult.h>
#include <aws/datazone/model/ListMetadataGenerationRunsResult.h>
#include <aws/datazone/model/ListNotificationsResult.h>
#include <aws/datazone/model/ListPolicyGrantsResult.h>
#include <aws/datazone/model/ListProjectMembershipsResult.h>
#include <aws/datazone/model/ListProjectProfilesResult.h>
#include <aws/datazone/model/ListProjectsResult.h>
#include <aws/datazone/model/ListRulesResult.h>
#include <aws/datazone/model/ListSubscriptionGrantsResult.h>
#include <aws/datazone/model/ListSubscriptionRequestsResult.h>
#include <aws/datazone/model/ListSubscriptionTargetsResult.h>
#include <aws/datazone/model/ListSubscriptionsResult.h>
#include <aws/datazone/model/ListTagsForResourceResult.h>
#include <aws/datazone/model/ListTimeSeriesDataPointsResult.h>
#include <aws/datazone/model/PostLineageEventResult.h>
#include <aws/datazone/model/PostTimeSeriesDataPointsResult.h>
#include <aws/datazone/model/PutEnvironmentBlueprintConfigurationResult.h>
#include <aws/datazone/model/RejectPredictionsResult.h>
#include <aws/datazone/model/RejectSubscriptionRequestResult.h>
#include <aws/datazone/model/RemoveEntityOwnerResult.h>
#include <aws/datazone/model/RemovePolicyGrantResult.h>
#include <aws/datazone/model/RevokeSubscriptionResult.h>
#include <aws/datazone/model/SearchResult.h>
#include <aws/datazone/model/SearchGroupProfilesResult.h>
#include <aws/datazone/model/SearchListingsResult.h>
#include <aws/datazone/model/SearchTypesResult.h>
#include <aws/datazone/model/SearchUserProfilesResult.h>
#include <aws/datazone/model/StartDataSourceRunResult.h>
#include <aws/datazone/model/StartMetadataGenerationRunResult.h>
#include <aws/datazone/model/TagResourceResult.h>
#include <aws/datazone/model/UntagResourceResult.h>
#include <aws/datazone/model/UpdateAccountPoolResult.h>
#include <aws/datazone/model/UpdateAssetFilterResult.h>
#include <aws/datazone/model/UpdateConnectionResult.h>
#include <aws/datazone/model/UpdateDataSourceResult.h>
#include <aws/datazone/model/UpdateDomainResult.h>
#include <aws/datazone/model/UpdateDomainUnitResult.h>
#include <aws/datazone/model/UpdateEnvironmentResult.h>
#include <aws/datazone/model/UpdateEnvironmentActionResult.h>
#include <aws/datazone/model/UpdateEnvironmentBlueprintResult.h>
#include <aws/datazone/model/UpdateEnvironmentProfileResult.h>
#include <aws/datazone/model/UpdateGlossaryResult.h>
#include <aws/datazone/model/UpdateGlossaryTermResult.h>
#include <aws/datazone/model/UpdateGroupProfileResult.h>
#include <aws/datazone/model/UpdateProjectResult.h>
#include <aws/datazone/model/UpdateProjectProfileResult.h>
#include <aws/datazone/model/UpdateRuleResult.h>
#include <aws/datazone/model/UpdateSubscriptionGrantStatusResult.h>
#include <aws/datazone/model/UpdateSubscriptionRequestResult.h>
#include <aws/datazone/model/UpdateSubscriptionTargetResult.h>
#include <aws/datazone/model/UpdateUserProfileResult.h>
#include <aws/datazone/model/ListDomainsRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in DataZoneClient header */

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

  namespace DataZone
  {
    using DataZoneClientConfiguration = Aws::Client::GenericClientConfiguration;
    using DataZoneEndpointProviderBase = Aws::DataZone::Endpoint::DataZoneEndpointProviderBase;
    using DataZoneEndpointProvider = Aws::DataZone::Endpoint::DataZoneEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DataZoneClient header */
      class AcceptPredictionsRequest;
      class AcceptSubscriptionRequestRequest;
      class AddEntityOwnerRequest;
      class AddPolicyGrantRequest;
      class AssociateEnvironmentRoleRequest;
      class AssociateGovernedTermsRequest;
      class CancelMetadataGenerationRunRequest;
      class CancelSubscriptionRequest;
      class CreateAccountPoolRequest;
      class CreateAssetRequest;
      class CreateAssetFilterRequest;
      class CreateAssetRevisionRequest;
      class CreateAssetTypeRequest;
      class CreateConnectionRequest;
      class CreateDataProductRequest;
      class CreateDataProductRevisionRequest;
      class CreateDataSourceRequest;
      class CreateDomainRequest;
      class CreateDomainUnitRequest;
      class CreateEnvironmentRequest;
      class CreateEnvironmentActionRequest;
      class CreateEnvironmentBlueprintRequest;
      class CreateEnvironmentProfileRequest;
      class CreateFormTypeRequest;
      class CreateGlossaryRequest;
      class CreateGlossaryTermRequest;
      class CreateGroupProfileRequest;
      class CreateListingChangeSetRequest;
      class CreateProjectRequest;
      class CreateProjectMembershipRequest;
      class CreateProjectProfileRequest;
      class CreateRuleRequest;
      class CreateSubscriptionGrantRequest;
      class CreateSubscriptionRequestRequest;
      class CreateSubscriptionTargetRequest;
      class CreateUserProfileRequest;
      class DeleteAccountPoolRequest;
      class DeleteAssetRequest;
      class DeleteAssetFilterRequest;
      class DeleteAssetTypeRequest;
      class DeleteConnectionRequest;
      class DeleteDataProductRequest;
      class DeleteDataSourceRequest;
      class DeleteDomainRequest;
      class DeleteDomainUnitRequest;
      class DeleteEnvironmentRequest;
      class DeleteEnvironmentActionRequest;
      class DeleteEnvironmentBlueprintRequest;
      class DeleteEnvironmentBlueprintConfigurationRequest;
      class DeleteEnvironmentProfileRequest;
      class DeleteFormTypeRequest;
      class DeleteGlossaryRequest;
      class DeleteGlossaryTermRequest;
      class DeleteListingRequest;
      class DeleteProjectRequest;
      class DeleteProjectMembershipRequest;
      class DeleteProjectProfileRequest;
      class DeleteRuleRequest;
      class DeleteSubscriptionGrantRequest;
      class DeleteSubscriptionRequestRequest;
      class DeleteSubscriptionTargetRequest;
      class DeleteTimeSeriesDataPointsRequest;
      class DisassociateEnvironmentRoleRequest;
      class DisassociateGovernedTermsRequest;
      class GetAccountPoolRequest;
      class GetAssetRequest;
      class GetAssetFilterRequest;
      class GetAssetTypeRequest;
      class GetConnectionRequest;
      class GetDataProductRequest;
      class GetDataSourceRequest;
      class GetDataSourceRunRequest;
      class GetDomainRequest;
      class GetDomainUnitRequest;
      class GetEnvironmentRequest;
      class GetEnvironmentActionRequest;
      class GetEnvironmentBlueprintRequest;
      class GetEnvironmentBlueprintConfigurationRequest;
      class GetEnvironmentCredentialsRequest;
      class GetEnvironmentProfileRequest;
      class GetFormTypeRequest;
      class GetGlossaryRequest;
      class GetGlossaryTermRequest;
      class GetGroupProfileRequest;
      class GetIamPortalLoginUrlRequest;
      class GetJobRunRequest;
      class GetLineageEventRequest;
      class GetLineageNodeRequest;
      class GetListingRequest;
      class GetMetadataGenerationRunRequest;
      class GetProjectRequest;
      class GetProjectProfileRequest;
      class GetRuleRequest;
      class GetSubscriptionRequest;
      class GetSubscriptionGrantRequest;
      class GetSubscriptionRequestDetailsRequest;
      class GetSubscriptionTargetRequest;
      class GetTimeSeriesDataPointRequest;
      class GetUserProfileRequest;
      class ListAccountPoolsRequest;
      class ListAccountsInAccountPoolRequest;
      class ListAssetFiltersRequest;
      class ListAssetRevisionsRequest;
      class ListConnectionsRequest;
      class ListDataProductRevisionsRequest;
      class ListDataSourceRunActivitiesRequest;
      class ListDataSourceRunsRequest;
      class ListDataSourcesRequest;
      class ListDomainUnitsForParentRequest;
      class ListDomainsRequest;
      class ListEntityOwnersRequest;
      class ListEnvironmentActionsRequest;
      class ListEnvironmentBlueprintConfigurationsRequest;
      class ListEnvironmentBlueprintsRequest;
      class ListEnvironmentProfilesRequest;
      class ListEnvironmentsRequest;
      class ListJobRunsRequest;
      class ListLineageEventsRequest;
      class ListLineageNodeHistoryRequest;
      class ListMetadataGenerationRunsRequest;
      class ListNotificationsRequest;
      class ListPolicyGrantsRequest;
      class ListProjectMembershipsRequest;
      class ListProjectProfilesRequest;
      class ListProjectsRequest;
      class ListRulesRequest;
      class ListSubscriptionGrantsRequest;
      class ListSubscriptionRequestsRequest;
      class ListSubscriptionTargetsRequest;
      class ListSubscriptionsRequest;
      class ListTagsForResourceRequest;
      class ListTimeSeriesDataPointsRequest;
      class PostLineageEventRequest;
      class PostTimeSeriesDataPointsRequest;
      class PutEnvironmentBlueprintConfigurationRequest;
      class RejectPredictionsRequest;
      class RejectSubscriptionRequestRequest;
      class RemoveEntityOwnerRequest;
      class RemovePolicyGrantRequest;
      class RevokeSubscriptionRequest;
      class SearchRequest;
      class SearchGroupProfilesRequest;
      class SearchListingsRequest;
      class SearchTypesRequest;
      class SearchUserProfilesRequest;
      class StartDataSourceRunRequest;
      class StartMetadataGenerationRunRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAccountPoolRequest;
      class UpdateAssetFilterRequest;
      class UpdateConnectionRequest;
      class UpdateDataSourceRequest;
      class UpdateDomainRequest;
      class UpdateDomainUnitRequest;
      class UpdateEnvironmentRequest;
      class UpdateEnvironmentActionRequest;
      class UpdateEnvironmentBlueprintRequest;
      class UpdateEnvironmentProfileRequest;
      class UpdateGlossaryRequest;
      class UpdateGlossaryTermRequest;
      class UpdateGroupProfileRequest;
      class UpdateProjectRequest;
      class UpdateProjectProfileRequest;
      class UpdateRuleRequest;
      class UpdateSubscriptionGrantStatusRequest;
      class UpdateSubscriptionRequestRequest;
      class UpdateSubscriptionTargetRequest;
      class UpdateUserProfileRequest;
      /* End of service model forward declarations required in DataZoneClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptPredictionsResult, DataZoneError> AcceptPredictionsOutcome;
      typedef Aws::Utils::Outcome<AcceptSubscriptionRequestResult, DataZoneError> AcceptSubscriptionRequestOutcome;
      typedef Aws::Utils::Outcome<AddEntityOwnerResult, DataZoneError> AddEntityOwnerOutcome;
      typedef Aws::Utils::Outcome<AddPolicyGrantResult, DataZoneError> AddPolicyGrantOutcome;
      typedef Aws::Utils::Outcome<AssociateEnvironmentRoleResult, DataZoneError> AssociateEnvironmentRoleOutcome;
      typedef Aws::Utils::Outcome<AssociateGovernedTermsResult, DataZoneError> AssociateGovernedTermsOutcome;
      typedef Aws::Utils::Outcome<CancelMetadataGenerationRunResult, DataZoneError> CancelMetadataGenerationRunOutcome;
      typedef Aws::Utils::Outcome<CancelSubscriptionResult, DataZoneError> CancelSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateAccountPoolResult, DataZoneError> CreateAccountPoolOutcome;
      typedef Aws::Utils::Outcome<CreateAssetResult, DataZoneError> CreateAssetOutcome;
      typedef Aws::Utils::Outcome<CreateAssetFilterResult, DataZoneError> CreateAssetFilterOutcome;
      typedef Aws::Utils::Outcome<CreateAssetRevisionResult, DataZoneError> CreateAssetRevisionOutcome;
      typedef Aws::Utils::Outcome<CreateAssetTypeResult, DataZoneError> CreateAssetTypeOutcome;
      typedef Aws::Utils::Outcome<CreateConnectionResult, DataZoneError> CreateConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateDataProductResult, DataZoneError> CreateDataProductOutcome;
      typedef Aws::Utils::Outcome<CreateDataProductRevisionResult, DataZoneError> CreateDataProductRevisionOutcome;
      typedef Aws::Utils::Outcome<CreateDataSourceResult, DataZoneError> CreateDataSourceOutcome;
      typedef Aws::Utils::Outcome<CreateDomainResult, DataZoneError> CreateDomainOutcome;
      typedef Aws::Utils::Outcome<CreateDomainUnitResult, DataZoneError> CreateDomainUnitOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentResult, DataZoneError> CreateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentActionResult, DataZoneError> CreateEnvironmentActionOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentBlueprintResult, DataZoneError> CreateEnvironmentBlueprintOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentProfileResult, DataZoneError> CreateEnvironmentProfileOutcome;
      typedef Aws::Utils::Outcome<CreateFormTypeResult, DataZoneError> CreateFormTypeOutcome;
      typedef Aws::Utils::Outcome<CreateGlossaryResult, DataZoneError> CreateGlossaryOutcome;
      typedef Aws::Utils::Outcome<CreateGlossaryTermResult, DataZoneError> CreateGlossaryTermOutcome;
      typedef Aws::Utils::Outcome<CreateGroupProfileResult, DataZoneError> CreateGroupProfileOutcome;
      typedef Aws::Utils::Outcome<CreateListingChangeSetResult, DataZoneError> CreateListingChangeSetOutcome;
      typedef Aws::Utils::Outcome<CreateProjectResult, DataZoneError> CreateProjectOutcome;
      typedef Aws::Utils::Outcome<CreateProjectMembershipResult, DataZoneError> CreateProjectMembershipOutcome;
      typedef Aws::Utils::Outcome<CreateProjectProfileResult, DataZoneError> CreateProjectProfileOutcome;
      typedef Aws::Utils::Outcome<CreateRuleResult, DataZoneError> CreateRuleOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriptionGrantResult, DataZoneError> CreateSubscriptionGrantOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriptionRequestResult, DataZoneError> CreateSubscriptionRequestOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriptionTargetResult, DataZoneError> CreateSubscriptionTargetOutcome;
      typedef Aws::Utils::Outcome<CreateUserProfileResult, DataZoneError> CreateUserProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteAccountPoolResult, DataZoneError> DeleteAccountPoolOutcome;
      typedef Aws::Utils::Outcome<DeleteAssetResult, DataZoneError> DeleteAssetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataZoneError> DeleteAssetFilterOutcome;
      typedef Aws::Utils::Outcome<DeleteAssetTypeResult, DataZoneError> DeleteAssetTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionResult, DataZoneError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteDataProductResult, DataZoneError> DeleteDataProductOutcome;
      typedef Aws::Utils::Outcome<DeleteDataSourceResult, DataZoneError> DeleteDataSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainResult, DataZoneError> DeleteDomainOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainUnitResult, DataZoneError> DeleteDomainUnitOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataZoneError> DeleteEnvironmentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataZoneError> DeleteEnvironmentActionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataZoneError> DeleteEnvironmentBlueprintOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentBlueprintConfigurationResult, DataZoneError> DeleteEnvironmentBlueprintConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataZoneError> DeleteEnvironmentProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteFormTypeResult, DataZoneError> DeleteFormTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteGlossaryResult, DataZoneError> DeleteGlossaryOutcome;
      typedef Aws::Utils::Outcome<DeleteGlossaryTermResult, DataZoneError> DeleteGlossaryTermOutcome;
      typedef Aws::Utils::Outcome<DeleteListingResult, DataZoneError> DeleteListingOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectResult, DataZoneError> DeleteProjectOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectMembershipResult, DataZoneError> DeleteProjectMembershipOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectProfileResult, DataZoneError> DeleteProjectProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteRuleResult, DataZoneError> DeleteRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteSubscriptionGrantResult, DataZoneError> DeleteSubscriptionGrantOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataZoneError> DeleteSubscriptionRequestOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataZoneError> DeleteSubscriptionTargetOutcome;
      typedef Aws::Utils::Outcome<DeleteTimeSeriesDataPointsResult, DataZoneError> DeleteTimeSeriesDataPointsOutcome;
      typedef Aws::Utils::Outcome<DisassociateEnvironmentRoleResult, DataZoneError> DisassociateEnvironmentRoleOutcome;
      typedef Aws::Utils::Outcome<DisassociateGovernedTermsResult, DataZoneError> DisassociateGovernedTermsOutcome;
      typedef Aws::Utils::Outcome<GetAccountPoolResult, DataZoneError> GetAccountPoolOutcome;
      typedef Aws::Utils::Outcome<GetAssetResult, DataZoneError> GetAssetOutcome;
      typedef Aws::Utils::Outcome<GetAssetFilterResult, DataZoneError> GetAssetFilterOutcome;
      typedef Aws::Utils::Outcome<GetAssetTypeResult, DataZoneError> GetAssetTypeOutcome;
      typedef Aws::Utils::Outcome<GetConnectionResult, DataZoneError> GetConnectionOutcome;
      typedef Aws::Utils::Outcome<GetDataProductResult, DataZoneError> GetDataProductOutcome;
      typedef Aws::Utils::Outcome<GetDataSourceResult, DataZoneError> GetDataSourceOutcome;
      typedef Aws::Utils::Outcome<GetDataSourceRunResult, DataZoneError> GetDataSourceRunOutcome;
      typedef Aws::Utils::Outcome<GetDomainResult, DataZoneError> GetDomainOutcome;
      typedef Aws::Utils::Outcome<GetDomainUnitResult, DataZoneError> GetDomainUnitOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentResult, DataZoneError> GetEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentActionResult, DataZoneError> GetEnvironmentActionOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentBlueprintResult, DataZoneError> GetEnvironmentBlueprintOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentBlueprintConfigurationResult, DataZoneError> GetEnvironmentBlueprintConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentCredentialsResult, DataZoneError> GetEnvironmentCredentialsOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentProfileResult, DataZoneError> GetEnvironmentProfileOutcome;
      typedef Aws::Utils::Outcome<GetFormTypeResult, DataZoneError> GetFormTypeOutcome;
      typedef Aws::Utils::Outcome<GetGlossaryResult, DataZoneError> GetGlossaryOutcome;
      typedef Aws::Utils::Outcome<GetGlossaryTermResult, DataZoneError> GetGlossaryTermOutcome;
      typedef Aws::Utils::Outcome<GetGroupProfileResult, DataZoneError> GetGroupProfileOutcome;
      typedef Aws::Utils::Outcome<GetIamPortalLoginUrlResult, DataZoneError> GetIamPortalLoginUrlOutcome;
      typedef Aws::Utils::Outcome<GetJobRunResult, DataZoneError> GetJobRunOutcome;
      typedef Aws::Utils::Outcome<GetLineageEventResult, DataZoneError> GetLineageEventOutcome;
      typedef Aws::Utils::Outcome<GetLineageNodeResult, DataZoneError> GetLineageNodeOutcome;
      typedef Aws::Utils::Outcome<GetListingResult, DataZoneError> GetListingOutcome;
      typedef Aws::Utils::Outcome<GetMetadataGenerationRunResult, DataZoneError> GetMetadataGenerationRunOutcome;
      typedef Aws::Utils::Outcome<GetProjectResult, DataZoneError> GetProjectOutcome;
      typedef Aws::Utils::Outcome<GetProjectProfileResult, DataZoneError> GetProjectProfileOutcome;
      typedef Aws::Utils::Outcome<GetRuleResult, DataZoneError> GetRuleOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionResult, DataZoneError> GetSubscriptionOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionGrantResult, DataZoneError> GetSubscriptionGrantOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionRequestDetailsResult, DataZoneError> GetSubscriptionRequestDetailsOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionTargetResult, DataZoneError> GetSubscriptionTargetOutcome;
      typedef Aws::Utils::Outcome<GetTimeSeriesDataPointResult, DataZoneError> GetTimeSeriesDataPointOutcome;
      typedef Aws::Utils::Outcome<GetUserProfileResult, DataZoneError> GetUserProfileOutcome;
      typedef Aws::Utils::Outcome<ListAccountPoolsResult, DataZoneError> ListAccountPoolsOutcome;
      typedef Aws::Utils::Outcome<ListAccountsInAccountPoolResult, DataZoneError> ListAccountsInAccountPoolOutcome;
      typedef Aws::Utils::Outcome<ListAssetFiltersResult, DataZoneError> ListAssetFiltersOutcome;
      typedef Aws::Utils::Outcome<ListAssetRevisionsResult, DataZoneError> ListAssetRevisionsOutcome;
      typedef Aws::Utils::Outcome<ListConnectionsResult, DataZoneError> ListConnectionsOutcome;
      typedef Aws::Utils::Outcome<ListDataProductRevisionsResult, DataZoneError> ListDataProductRevisionsOutcome;
      typedef Aws::Utils::Outcome<ListDataSourceRunActivitiesResult, DataZoneError> ListDataSourceRunActivitiesOutcome;
      typedef Aws::Utils::Outcome<ListDataSourceRunsResult, DataZoneError> ListDataSourceRunsOutcome;
      typedef Aws::Utils::Outcome<ListDataSourcesResult, DataZoneError> ListDataSourcesOutcome;
      typedef Aws::Utils::Outcome<ListDomainUnitsForParentResult, DataZoneError> ListDomainUnitsForParentOutcome;
      typedef Aws::Utils::Outcome<ListDomainsResult, DataZoneError> ListDomainsOutcome;
      typedef Aws::Utils::Outcome<ListEntityOwnersResult, DataZoneError> ListEntityOwnersOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentActionsResult, DataZoneError> ListEnvironmentActionsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentBlueprintConfigurationsResult, DataZoneError> ListEnvironmentBlueprintConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentBlueprintsResult, DataZoneError> ListEnvironmentBlueprintsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentProfilesResult, DataZoneError> ListEnvironmentProfilesOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentsResult, DataZoneError> ListEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListJobRunsResult, DataZoneError> ListJobRunsOutcome;
      typedef Aws::Utils::Outcome<ListLineageEventsResult, DataZoneError> ListLineageEventsOutcome;
      typedef Aws::Utils::Outcome<ListLineageNodeHistoryResult, DataZoneError> ListLineageNodeHistoryOutcome;
      typedef Aws::Utils::Outcome<ListMetadataGenerationRunsResult, DataZoneError> ListMetadataGenerationRunsOutcome;
      typedef Aws::Utils::Outcome<ListNotificationsResult, DataZoneError> ListNotificationsOutcome;
      typedef Aws::Utils::Outcome<ListPolicyGrantsResult, DataZoneError> ListPolicyGrantsOutcome;
      typedef Aws::Utils::Outcome<ListProjectMembershipsResult, DataZoneError> ListProjectMembershipsOutcome;
      typedef Aws::Utils::Outcome<ListProjectProfilesResult, DataZoneError> ListProjectProfilesOutcome;
      typedef Aws::Utils::Outcome<ListProjectsResult, DataZoneError> ListProjectsOutcome;
      typedef Aws::Utils::Outcome<ListRulesResult, DataZoneError> ListRulesOutcome;
      typedef Aws::Utils::Outcome<ListSubscriptionGrantsResult, DataZoneError> ListSubscriptionGrantsOutcome;
      typedef Aws::Utils::Outcome<ListSubscriptionRequestsResult, DataZoneError> ListSubscriptionRequestsOutcome;
      typedef Aws::Utils::Outcome<ListSubscriptionTargetsResult, DataZoneError> ListSubscriptionTargetsOutcome;
      typedef Aws::Utils::Outcome<ListSubscriptionsResult, DataZoneError> ListSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, DataZoneError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTimeSeriesDataPointsResult, DataZoneError> ListTimeSeriesDataPointsOutcome;
      typedef Aws::Utils::Outcome<PostLineageEventResult, DataZoneError> PostLineageEventOutcome;
      typedef Aws::Utils::Outcome<PostTimeSeriesDataPointsResult, DataZoneError> PostTimeSeriesDataPointsOutcome;
      typedef Aws::Utils::Outcome<PutEnvironmentBlueprintConfigurationResult, DataZoneError> PutEnvironmentBlueprintConfigurationOutcome;
      typedef Aws::Utils::Outcome<RejectPredictionsResult, DataZoneError> RejectPredictionsOutcome;
      typedef Aws::Utils::Outcome<RejectSubscriptionRequestResult, DataZoneError> RejectSubscriptionRequestOutcome;
      typedef Aws::Utils::Outcome<RemoveEntityOwnerResult, DataZoneError> RemoveEntityOwnerOutcome;
      typedef Aws::Utils::Outcome<RemovePolicyGrantResult, DataZoneError> RemovePolicyGrantOutcome;
      typedef Aws::Utils::Outcome<RevokeSubscriptionResult, DataZoneError> RevokeSubscriptionOutcome;
      typedef Aws::Utils::Outcome<SearchResult, DataZoneError> SearchOutcome;
      typedef Aws::Utils::Outcome<SearchGroupProfilesResult, DataZoneError> SearchGroupProfilesOutcome;
      typedef Aws::Utils::Outcome<SearchListingsResult, DataZoneError> SearchListingsOutcome;
      typedef Aws::Utils::Outcome<SearchTypesResult, DataZoneError> SearchTypesOutcome;
      typedef Aws::Utils::Outcome<SearchUserProfilesResult, DataZoneError> SearchUserProfilesOutcome;
      typedef Aws::Utils::Outcome<StartDataSourceRunResult, DataZoneError> StartDataSourceRunOutcome;
      typedef Aws::Utils::Outcome<StartMetadataGenerationRunResult, DataZoneError> StartMetadataGenerationRunOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, DataZoneError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, DataZoneError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountPoolResult, DataZoneError> UpdateAccountPoolOutcome;
      typedef Aws::Utils::Outcome<UpdateAssetFilterResult, DataZoneError> UpdateAssetFilterOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectionResult, DataZoneError> UpdateConnectionOutcome;
      typedef Aws::Utils::Outcome<UpdateDataSourceResult, DataZoneError> UpdateDataSourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainResult, DataZoneError> UpdateDomainOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainUnitResult, DataZoneError> UpdateDomainUnitOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentResult, DataZoneError> UpdateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentActionResult, DataZoneError> UpdateEnvironmentActionOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentBlueprintResult, DataZoneError> UpdateEnvironmentBlueprintOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentProfileResult, DataZoneError> UpdateEnvironmentProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateGlossaryResult, DataZoneError> UpdateGlossaryOutcome;
      typedef Aws::Utils::Outcome<UpdateGlossaryTermResult, DataZoneError> UpdateGlossaryTermOutcome;
      typedef Aws::Utils::Outcome<UpdateGroupProfileResult, DataZoneError> UpdateGroupProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateProjectResult, DataZoneError> UpdateProjectOutcome;
      typedef Aws::Utils::Outcome<UpdateProjectProfileResult, DataZoneError> UpdateProjectProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleResult, DataZoneError> UpdateRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriptionGrantStatusResult, DataZoneError> UpdateSubscriptionGrantStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriptionRequestResult, DataZoneError> UpdateSubscriptionRequestOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriptionTargetResult, DataZoneError> UpdateSubscriptionTargetOutcome;
      typedef Aws::Utils::Outcome<UpdateUserProfileResult, DataZoneError> UpdateUserProfileOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptPredictionsOutcome> AcceptPredictionsOutcomeCallable;
      typedef std::future<AcceptSubscriptionRequestOutcome> AcceptSubscriptionRequestOutcomeCallable;
      typedef std::future<AddEntityOwnerOutcome> AddEntityOwnerOutcomeCallable;
      typedef std::future<AddPolicyGrantOutcome> AddPolicyGrantOutcomeCallable;
      typedef std::future<AssociateEnvironmentRoleOutcome> AssociateEnvironmentRoleOutcomeCallable;
      typedef std::future<AssociateGovernedTermsOutcome> AssociateGovernedTermsOutcomeCallable;
      typedef std::future<CancelMetadataGenerationRunOutcome> CancelMetadataGenerationRunOutcomeCallable;
      typedef std::future<CancelSubscriptionOutcome> CancelSubscriptionOutcomeCallable;
      typedef std::future<CreateAccountPoolOutcome> CreateAccountPoolOutcomeCallable;
      typedef std::future<CreateAssetOutcome> CreateAssetOutcomeCallable;
      typedef std::future<CreateAssetFilterOutcome> CreateAssetFilterOutcomeCallable;
      typedef std::future<CreateAssetRevisionOutcome> CreateAssetRevisionOutcomeCallable;
      typedef std::future<CreateAssetTypeOutcome> CreateAssetTypeOutcomeCallable;
      typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
      typedef std::future<CreateDataProductOutcome> CreateDataProductOutcomeCallable;
      typedef std::future<CreateDataProductRevisionOutcome> CreateDataProductRevisionOutcomeCallable;
      typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
      typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
      typedef std::future<CreateDomainUnitOutcome> CreateDomainUnitOutcomeCallable;
      typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
      typedef std::future<CreateEnvironmentActionOutcome> CreateEnvironmentActionOutcomeCallable;
      typedef std::future<CreateEnvironmentBlueprintOutcome> CreateEnvironmentBlueprintOutcomeCallable;
      typedef std::future<CreateEnvironmentProfileOutcome> CreateEnvironmentProfileOutcomeCallable;
      typedef std::future<CreateFormTypeOutcome> CreateFormTypeOutcomeCallable;
      typedef std::future<CreateGlossaryOutcome> CreateGlossaryOutcomeCallable;
      typedef std::future<CreateGlossaryTermOutcome> CreateGlossaryTermOutcomeCallable;
      typedef std::future<CreateGroupProfileOutcome> CreateGroupProfileOutcomeCallable;
      typedef std::future<CreateListingChangeSetOutcome> CreateListingChangeSetOutcomeCallable;
      typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
      typedef std::future<CreateProjectMembershipOutcome> CreateProjectMembershipOutcomeCallable;
      typedef std::future<CreateProjectProfileOutcome> CreateProjectProfileOutcomeCallable;
      typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
      typedef std::future<CreateSubscriptionGrantOutcome> CreateSubscriptionGrantOutcomeCallable;
      typedef std::future<CreateSubscriptionRequestOutcome> CreateSubscriptionRequestOutcomeCallable;
      typedef std::future<CreateSubscriptionTargetOutcome> CreateSubscriptionTargetOutcomeCallable;
      typedef std::future<CreateUserProfileOutcome> CreateUserProfileOutcomeCallable;
      typedef std::future<DeleteAccountPoolOutcome> DeleteAccountPoolOutcomeCallable;
      typedef std::future<DeleteAssetOutcome> DeleteAssetOutcomeCallable;
      typedef std::future<DeleteAssetFilterOutcome> DeleteAssetFilterOutcomeCallable;
      typedef std::future<DeleteAssetTypeOutcome> DeleteAssetTypeOutcomeCallable;
      typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
      typedef std::future<DeleteDataProductOutcome> DeleteDataProductOutcomeCallable;
      typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
      typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
      typedef std::future<DeleteDomainUnitOutcome> DeleteDomainUnitOutcomeCallable;
      typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
      typedef std::future<DeleteEnvironmentActionOutcome> DeleteEnvironmentActionOutcomeCallable;
      typedef std::future<DeleteEnvironmentBlueprintOutcome> DeleteEnvironmentBlueprintOutcomeCallable;
      typedef std::future<DeleteEnvironmentBlueprintConfigurationOutcome> DeleteEnvironmentBlueprintConfigurationOutcomeCallable;
      typedef std::future<DeleteEnvironmentProfileOutcome> DeleteEnvironmentProfileOutcomeCallable;
      typedef std::future<DeleteFormTypeOutcome> DeleteFormTypeOutcomeCallable;
      typedef std::future<DeleteGlossaryOutcome> DeleteGlossaryOutcomeCallable;
      typedef std::future<DeleteGlossaryTermOutcome> DeleteGlossaryTermOutcomeCallable;
      typedef std::future<DeleteListingOutcome> DeleteListingOutcomeCallable;
      typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
      typedef std::future<DeleteProjectMembershipOutcome> DeleteProjectMembershipOutcomeCallable;
      typedef std::future<DeleteProjectProfileOutcome> DeleteProjectProfileOutcomeCallable;
      typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
      typedef std::future<DeleteSubscriptionGrantOutcome> DeleteSubscriptionGrantOutcomeCallable;
      typedef std::future<DeleteSubscriptionRequestOutcome> DeleteSubscriptionRequestOutcomeCallable;
      typedef std::future<DeleteSubscriptionTargetOutcome> DeleteSubscriptionTargetOutcomeCallable;
      typedef std::future<DeleteTimeSeriesDataPointsOutcome> DeleteTimeSeriesDataPointsOutcomeCallable;
      typedef std::future<DisassociateEnvironmentRoleOutcome> DisassociateEnvironmentRoleOutcomeCallable;
      typedef std::future<DisassociateGovernedTermsOutcome> DisassociateGovernedTermsOutcomeCallable;
      typedef std::future<GetAccountPoolOutcome> GetAccountPoolOutcomeCallable;
      typedef std::future<GetAssetOutcome> GetAssetOutcomeCallable;
      typedef std::future<GetAssetFilterOutcome> GetAssetFilterOutcomeCallable;
      typedef std::future<GetAssetTypeOutcome> GetAssetTypeOutcomeCallable;
      typedef std::future<GetConnectionOutcome> GetConnectionOutcomeCallable;
      typedef std::future<GetDataProductOutcome> GetDataProductOutcomeCallable;
      typedef std::future<GetDataSourceOutcome> GetDataSourceOutcomeCallable;
      typedef std::future<GetDataSourceRunOutcome> GetDataSourceRunOutcomeCallable;
      typedef std::future<GetDomainOutcome> GetDomainOutcomeCallable;
      typedef std::future<GetDomainUnitOutcome> GetDomainUnitOutcomeCallable;
      typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
      typedef std::future<GetEnvironmentActionOutcome> GetEnvironmentActionOutcomeCallable;
      typedef std::future<GetEnvironmentBlueprintOutcome> GetEnvironmentBlueprintOutcomeCallable;
      typedef std::future<GetEnvironmentBlueprintConfigurationOutcome> GetEnvironmentBlueprintConfigurationOutcomeCallable;
      typedef std::future<GetEnvironmentCredentialsOutcome> GetEnvironmentCredentialsOutcomeCallable;
      typedef std::future<GetEnvironmentProfileOutcome> GetEnvironmentProfileOutcomeCallable;
      typedef std::future<GetFormTypeOutcome> GetFormTypeOutcomeCallable;
      typedef std::future<GetGlossaryOutcome> GetGlossaryOutcomeCallable;
      typedef std::future<GetGlossaryTermOutcome> GetGlossaryTermOutcomeCallable;
      typedef std::future<GetGroupProfileOutcome> GetGroupProfileOutcomeCallable;
      typedef std::future<GetIamPortalLoginUrlOutcome> GetIamPortalLoginUrlOutcomeCallable;
      typedef std::future<GetJobRunOutcome> GetJobRunOutcomeCallable;
      typedef std::future<GetLineageEventOutcome> GetLineageEventOutcomeCallable;
      typedef std::future<GetLineageNodeOutcome> GetLineageNodeOutcomeCallable;
      typedef std::future<GetListingOutcome> GetListingOutcomeCallable;
      typedef std::future<GetMetadataGenerationRunOutcome> GetMetadataGenerationRunOutcomeCallable;
      typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
      typedef std::future<GetProjectProfileOutcome> GetProjectProfileOutcomeCallable;
      typedef std::future<GetRuleOutcome> GetRuleOutcomeCallable;
      typedef std::future<GetSubscriptionOutcome> GetSubscriptionOutcomeCallable;
      typedef std::future<GetSubscriptionGrantOutcome> GetSubscriptionGrantOutcomeCallable;
      typedef std::future<GetSubscriptionRequestDetailsOutcome> GetSubscriptionRequestDetailsOutcomeCallable;
      typedef std::future<GetSubscriptionTargetOutcome> GetSubscriptionTargetOutcomeCallable;
      typedef std::future<GetTimeSeriesDataPointOutcome> GetTimeSeriesDataPointOutcomeCallable;
      typedef std::future<GetUserProfileOutcome> GetUserProfileOutcomeCallable;
      typedef std::future<ListAccountPoolsOutcome> ListAccountPoolsOutcomeCallable;
      typedef std::future<ListAccountsInAccountPoolOutcome> ListAccountsInAccountPoolOutcomeCallable;
      typedef std::future<ListAssetFiltersOutcome> ListAssetFiltersOutcomeCallable;
      typedef std::future<ListAssetRevisionsOutcome> ListAssetRevisionsOutcomeCallable;
      typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
      typedef std::future<ListDataProductRevisionsOutcome> ListDataProductRevisionsOutcomeCallable;
      typedef std::future<ListDataSourceRunActivitiesOutcome> ListDataSourceRunActivitiesOutcomeCallable;
      typedef std::future<ListDataSourceRunsOutcome> ListDataSourceRunsOutcomeCallable;
      typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
      typedef std::future<ListDomainUnitsForParentOutcome> ListDomainUnitsForParentOutcomeCallable;
      typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
      typedef std::future<ListEntityOwnersOutcome> ListEntityOwnersOutcomeCallable;
      typedef std::future<ListEnvironmentActionsOutcome> ListEnvironmentActionsOutcomeCallable;
      typedef std::future<ListEnvironmentBlueprintConfigurationsOutcome> ListEnvironmentBlueprintConfigurationsOutcomeCallable;
      typedef std::future<ListEnvironmentBlueprintsOutcome> ListEnvironmentBlueprintsOutcomeCallable;
      typedef std::future<ListEnvironmentProfilesOutcome> ListEnvironmentProfilesOutcomeCallable;
      typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
      typedef std::future<ListJobRunsOutcome> ListJobRunsOutcomeCallable;
      typedef std::future<ListLineageEventsOutcome> ListLineageEventsOutcomeCallable;
      typedef std::future<ListLineageNodeHistoryOutcome> ListLineageNodeHistoryOutcomeCallable;
      typedef std::future<ListMetadataGenerationRunsOutcome> ListMetadataGenerationRunsOutcomeCallable;
      typedef std::future<ListNotificationsOutcome> ListNotificationsOutcomeCallable;
      typedef std::future<ListPolicyGrantsOutcome> ListPolicyGrantsOutcomeCallable;
      typedef std::future<ListProjectMembershipsOutcome> ListProjectMembershipsOutcomeCallable;
      typedef std::future<ListProjectProfilesOutcome> ListProjectProfilesOutcomeCallable;
      typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
      typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
      typedef std::future<ListSubscriptionGrantsOutcome> ListSubscriptionGrantsOutcomeCallable;
      typedef std::future<ListSubscriptionRequestsOutcome> ListSubscriptionRequestsOutcomeCallable;
      typedef std::future<ListSubscriptionTargetsOutcome> ListSubscriptionTargetsOutcomeCallable;
      typedef std::future<ListSubscriptionsOutcome> ListSubscriptionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTimeSeriesDataPointsOutcome> ListTimeSeriesDataPointsOutcomeCallable;
      typedef std::future<PostLineageEventOutcome> PostLineageEventOutcomeCallable;
      typedef std::future<PostTimeSeriesDataPointsOutcome> PostTimeSeriesDataPointsOutcomeCallable;
      typedef std::future<PutEnvironmentBlueprintConfigurationOutcome> PutEnvironmentBlueprintConfigurationOutcomeCallable;
      typedef std::future<RejectPredictionsOutcome> RejectPredictionsOutcomeCallable;
      typedef std::future<RejectSubscriptionRequestOutcome> RejectSubscriptionRequestOutcomeCallable;
      typedef std::future<RemoveEntityOwnerOutcome> RemoveEntityOwnerOutcomeCallable;
      typedef std::future<RemovePolicyGrantOutcome> RemovePolicyGrantOutcomeCallable;
      typedef std::future<RevokeSubscriptionOutcome> RevokeSubscriptionOutcomeCallable;
      typedef std::future<SearchOutcome> SearchOutcomeCallable;
      typedef std::future<SearchGroupProfilesOutcome> SearchGroupProfilesOutcomeCallable;
      typedef std::future<SearchListingsOutcome> SearchListingsOutcomeCallable;
      typedef std::future<SearchTypesOutcome> SearchTypesOutcomeCallable;
      typedef std::future<SearchUserProfilesOutcome> SearchUserProfilesOutcomeCallable;
      typedef std::future<StartDataSourceRunOutcome> StartDataSourceRunOutcomeCallable;
      typedef std::future<StartMetadataGenerationRunOutcome> StartMetadataGenerationRunOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccountPoolOutcome> UpdateAccountPoolOutcomeCallable;
      typedef std::future<UpdateAssetFilterOutcome> UpdateAssetFilterOutcomeCallable;
      typedef std::future<UpdateConnectionOutcome> UpdateConnectionOutcomeCallable;
      typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
      typedef std::future<UpdateDomainOutcome> UpdateDomainOutcomeCallable;
      typedef std::future<UpdateDomainUnitOutcome> UpdateDomainUnitOutcomeCallable;
      typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
      typedef std::future<UpdateEnvironmentActionOutcome> UpdateEnvironmentActionOutcomeCallable;
      typedef std::future<UpdateEnvironmentBlueprintOutcome> UpdateEnvironmentBlueprintOutcomeCallable;
      typedef std::future<UpdateEnvironmentProfileOutcome> UpdateEnvironmentProfileOutcomeCallable;
      typedef std::future<UpdateGlossaryOutcome> UpdateGlossaryOutcomeCallable;
      typedef std::future<UpdateGlossaryTermOutcome> UpdateGlossaryTermOutcomeCallable;
      typedef std::future<UpdateGroupProfileOutcome> UpdateGroupProfileOutcomeCallable;
      typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
      typedef std::future<UpdateProjectProfileOutcome> UpdateProjectProfileOutcomeCallable;
      typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
      typedef std::future<UpdateSubscriptionGrantStatusOutcome> UpdateSubscriptionGrantStatusOutcomeCallable;
      typedef std::future<UpdateSubscriptionRequestOutcome> UpdateSubscriptionRequestOutcomeCallable;
      typedef std::future<UpdateSubscriptionTargetOutcome> UpdateSubscriptionTargetOutcomeCallable;
      typedef std::future<UpdateUserProfileOutcome> UpdateUserProfileOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DataZoneClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DataZoneClient*, const Model::AcceptPredictionsRequest&, const Model::AcceptPredictionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptPredictionsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::AcceptSubscriptionRequestRequest&, const Model::AcceptSubscriptionRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptSubscriptionRequestResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::AddEntityOwnerRequest&, const Model::AddEntityOwnerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddEntityOwnerResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::AddPolicyGrantRequest&, const Model::AddPolicyGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddPolicyGrantResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::AssociateEnvironmentRoleRequest&, const Model::AssociateEnvironmentRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateEnvironmentRoleResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::AssociateGovernedTermsRequest&, const Model::AssociateGovernedTermsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateGovernedTermsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CancelMetadataGenerationRunRequest&, const Model::CancelMetadataGenerationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMetadataGenerationRunResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CancelSubscriptionRequest&, const Model::CancelSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateAccountPoolRequest&, const Model::CreateAccountPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountPoolResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateAssetRequest&, const Model::CreateAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateAssetFilterRequest&, const Model::CreateAssetFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssetFilterResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateAssetRevisionRequest&, const Model::CreateAssetRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssetRevisionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateAssetTypeRequest&, const Model::CreateAssetTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssetTypeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateDataProductRequest&, const Model::CreateDataProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataProductResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateDataProductRevisionRequest&, const Model::CreateDataProductRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataProductRevisionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateDataSourceRequest&, const Model::CreateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateDomainUnitRequest&, const Model::CreateDomainUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainUnitResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateEnvironmentActionRequest&, const Model::CreateEnvironmentActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentActionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateEnvironmentBlueprintRequest&, const Model::CreateEnvironmentBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentBlueprintResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateEnvironmentProfileRequest&, const Model::CreateEnvironmentProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateFormTypeRequest&, const Model::CreateFormTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFormTypeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateGlossaryRequest&, const Model::CreateGlossaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlossaryResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateGlossaryTermRequest&, const Model::CreateGlossaryTermOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlossaryTermResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateGroupProfileRequest&, const Model::CreateGroupProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateListingChangeSetRequest&, const Model::CreateListingChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateListingChangeSetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateProjectMembershipRequest&, const Model::CreateProjectMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectMembershipResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateProjectProfileRequest&, const Model::CreateProjectProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateRuleRequest&, const Model::CreateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateSubscriptionGrantRequest&, const Model::CreateSubscriptionGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionGrantResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateSubscriptionRequestRequest&, const Model::CreateSubscriptionRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionRequestResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateSubscriptionTargetRequest&, const Model::CreateSubscriptionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionTargetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateUserProfileRequest&, const Model::CreateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteAccountPoolRequest&, const Model::DeleteAccountPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountPoolResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteAssetRequest&, const Model::DeleteAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteAssetFilterRequest&, const Model::DeleteAssetFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssetFilterResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteAssetTypeRequest&, const Model::DeleteAssetTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssetTypeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteDataProductRequest&, const Model::DeleteDataProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataProductResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteDomainUnitRequest&, const Model::DeleteDomainUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainUnitResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteEnvironmentActionRequest&, const Model::DeleteEnvironmentActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentActionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteEnvironmentBlueprintRequest&, const Model::DeleteEnvironmentBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentBlueprintResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteEnvironmentBlueprintConfigurationRequest&, const Model::DeleteEnvironmentBlueprintConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentBlueprintConfigurationResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteEnvironmentProfileRequest&, const Model::DeleteEnvironmentProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteFormTypeRequest&, const Model::DeleteFormTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFormTypeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteGlossaryRequest&, const Model::DeleteGlossaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGlossaryResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteGlossaryTermRequest&, const Model::DeleteGlossaryTermOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGlossaryTermResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteListingRequest&, const Model::DeleteListingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteListingResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteProjectMembershipRequest&, const Model::DeleteProjectMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectMembershipResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteProjectProfileRequest&, const Model::DeleteProjectProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteSubscriptionGrantRequest&, const Model::DeleteSubscriptionGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionGrantResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteSubscriptionRequestRequest&, const Model::DeleteSubscriptionRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionRequestResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteSubscriptionTargetRequest&, const Model::DeleteSubscriptionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionTargetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteTimeSeriesDataPointsRequest&, const Model::DeleteTimeSeriesDataPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTimeSeriesDataPointsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DisassociateEnvironmentRoleRequest&, const Model::DisassociateEnvironmentRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateEnvironmentRoleResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DisassociateGovernedTermsRequest&, const Model::DisassociateGovernedTermsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateGovernedTermsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetAccountPoolRequest&, const Model::GetAccountPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountPoolResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetAssetRequest&, const Model::GetAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetAssetFilterRequest&, const Model::GetAssetFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssetFilterResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetAssetTypeRequest&, const Model::GetAssetTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssetTypeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetConnectionRequest&, const Model::GetConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetDataProductRequest&, const Model::GetDataProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataProductResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetDataSourceRequest&, const Model::GetDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetDataSourceRunRequest&, const Model::GetDataSourceRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSourceRunResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetDomainRequest&, const Model::GetDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetDomainUnitRequest&, const Model::GetDomainUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainUnitResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetEnvironmentActionRequest&, const Model::GetEnvironmentActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentActionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetEnvironmentBlueprintRequest&, const Model::GetEnvironmentBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentBlueprintResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetEnvironmentBlueprintConfigurationRequest&, const Model::GetEnvironmentBlueprintConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentBlueprintConfigurationResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetEnvironmentCredentialsRequest&, const Model::GetEnvironmentCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentCredentialsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetEnvironmentProfileRequest&, const Model::GetEnvironmentProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetFormTypeRequest&, const Model::GetFormTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFormTypeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetGlossaryRequest&, const Model::GetGlossaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGlossaryResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetGlossaryTermRequest&, const Model::GetGlossaryTermOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGlossaryTermResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetGroupProfileRequest&, const Model::GetGroupProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetIamPortalLoginUrlRequest&, const Model::GetIamPortalLoginUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIamPortalLoginUrlResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetJobRunRequest&, const Model::GetJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobRunResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetLineageEventRequest&, Model::GetLineageEventOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLineageEventResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetLineageNodeRequest&, const Model::GetLineageNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLineageNodeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetListingRequest&, const Model::GetListingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetListingResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetMetadataGenerationRunRequest&, const Model::GetMetadataGenerationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetadataGenerationRunResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetProjectRequest&, const Model::GetProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProjectResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetProjectProfileRequest&, const Model::GetProjectProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProjectProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetRuleRequest&, const Model::GetRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRuleResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetSubscriptionRequest&, const Model::GetSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetSubscriptionGrantRequest&, const Model::GetSubscriptionGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionGrantResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetSubscriptionRequestDetailsRequest&, const Model::GetSubscriptionRequestDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionRequestDetailsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetSubscriptionTargetRequest&, const Model::GetSubscriptionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionTargetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetTimeSeriesDataPointRequest&, const Model::GetTimeSeriesDataPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTimeSeriesDataPointResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetUserProfileRequest&, const Model::GetUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListAccountPoolsRequest&, const Model::ListAccountPoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountPoolsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListAccountsInAccountPoolRequest&, const Model::ListAccountsInAccountPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountsInAccountPoolResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListAssetFiltersRequest&, const Model::ListAssetFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssetFiltersResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListAssetRevisionsRequest&, const Model::ListAssetRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssetRevisionsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListConnectionsRequest&, const Model::ListConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectionsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListDataProductRevisionsRequest&, const Model::ListDataProductRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataProductRevisionsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListDataSourceRunActivitiesRequest&, const Model::ListDataSourceRunActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourceRunActivitiesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListDataSourceRunsRequest&, const Model::ListDataSourceRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourceRunsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListDataSourcesRequest&, const Model::ListDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourcesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListDomainUnitsForParentRequest&, const Model::ListDomainUnitsForParentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainUnitsForParentResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListEntityOwnersRequest&, const Model::ListEntityOwnersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntityOwnersResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListEnvironmentActionsRequest&, const Model::ListEnvironmentActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentActionsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListEnvironmentBlueprintConfigurationsRequest&, const Model::ListEnvironmentBlueprintConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentBlueprintConfigurationsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListEnvironmentBlueprintsRequest&, const Model::ListEnvironmentBlueprintsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentBlueprintsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListEnvironmentProfilesRequest&, const Model::ListEnvironmentProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentProfilesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListJobRunsRequest&, const Model::ListJobRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobRunsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListLineageEventsRequest&, const Model::ListLineageEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLineageEventsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListLineageNodeHistoryRequest&, const Model::ListLineageNodeHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLineageNodeHistoryResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListMetadataGenerationRunsRequest&, const Model::ListMetadataGenerationRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMetadataGenerationRunsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListNotificationsRequest&, const Model::ListNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotificationsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListPolicyGrantsRequest&, const Model::ListPolicyGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyGrantsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListProjectMembershipsRequest&, const Model::ListProjectMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectMembershipsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListProjectProfilesRequest&, const Model::ListProjectProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectProfilesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListSubscriptionGrantsRequest&, const Model::ListSubscriptionGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionGrantsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListSubscriptionRequestsRequest&, const Model::ListSubscriptionRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionRequestsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListSubscriptionTargetsRequest&, const Model::ListSubscriptionTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionTargetsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListSubscriptionsRequest&, const Model::ListSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListTimeSeriesDataPointsRequest&, const Model::ListTimeSeriesDataPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTimeSeriesDataPointsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::PostLineageEventRequest&, const Model::PostLineageEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostLineageEventResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::PostTimeSeriesDataPointsRequest&, const Model::PostTimeSeriesDataPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostTimeSeriesDataPointsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::PutEnvironmentBlueprintConfigurationRequest&, const Model::PutEnvironmentBlueprintConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEnvironmentBlueprintConfigurationResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::RejectPredictionsRequest&, const Model::RejectPredictionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectPredictionsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::RejectSubscriptionRequestRequest&, const Model::RejectSubscriptionRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectSubscriptionRequestResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::RemoveEntityOwnerRequest&, const Model::RemoveEntityOwnerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveEntityOwnerResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::RemovePolicyGrantRequest&, const Model::RemovePolicyGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePolicyGrantResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::RevokeSubscriptionRequest&, const Model::RevokeSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::SearchRequest&, const Model::SearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::SearchGroupProfilesRequest&, const Model::SearchGroupProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchGroupProfilesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::SearchListingsRequest&, const Model::SearchListingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchListingsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::SearchTypesRequest&, const Model::SearchTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchTypesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::SearchUserProfilesRequest&, const Model::SearchUserProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchUserProfilesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::StartDataSourceRunRequest&, const Model::StartDataSourceRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataSourceRunResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::StartMetadataGenerationRunRequest&, const Model::StartMetadataGenerationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMetadataGenerationRunResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateAccountPoolRequest&, const Model::UpdateAccountPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountPoolResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateAssetFilterRequest&, const Model::UpdateAssetFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssetFilterResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateConnectionRequest&, const Model::UpdateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateDomainRequest&, const Model::UpdateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateDomainUnitRequest&, const Model::UpdateDomainUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainUnitResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateEnvironmentActionRequest&, const Model::UpdateEnvironmentActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentActionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateEnvironmentBlueprintRequest&, const Model::UpdateEnvironmentBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentBlueprintResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateEnvironmentProfileRequest&, const Model::UpdateEnvironmentProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateGlossaryRequest&, const Model::UpdateGlossaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlossaryResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateGlossaryTermRequest&, const Model::UpdateGlossaryTermOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlossaryTermResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateGroupProfileRequest&, const Model::UpdateGroupProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateProjectProfileRequest&, const Model::UpdateProjectProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateRuleRequest&, const Model::UpdateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateSubscriptionGrantStatusRequest&, const Model::UpdateSubscriptionGrantStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriptionGrantStatusResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateSubscriptionRequestRequest&, const Model::UpdateSubscriptionRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriptionRequestResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateSubscriptionTargetRequest&, const Model::UpdateSubscriptionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriptionTargetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateUserProfileRequest&, const Model::UpdateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserProfileResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DataZone
} // namespace Aws
