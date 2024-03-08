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
#include <aws/datazone/model/CancelSubscriptionResult.h>
#include <aws/datazone/model/CreateAssetResult.h>
#include <aws/datazone/model/CreateAssetRevisionResult.h>
#include <aws/datazone/model/CreateAssetTypeResult.h>
#include <aws/datazone/model/CreateDataSourceResult.h>
#include <aws/datazone/model/CreateDomainResult.h>
#include <aws/datazone/model/CreateEnvironmentResult.h>
#include <aws/datazone/model/CreateEnvironmentProfileResult.h>
#include <aws/datazone/model/CreateFormTypeResult.h>
#include <aws/datazone/model/CreateGlossaryResult.h>
#include <aws/datazone/model/CreateGlossaryTermResult.h>
#include <aws/datazone/model/CreateGroupProfileResult.h>
#include <aws/datazone/model/CreateListingChangeSetResult.h>
#include <aws/datazone/model/CreateProjectResult.h>
#include <aws/datazone/model/CreateProjectMembershipResult.h>
#include <aws/datazone/model/CreateSubscriptionGrantResult.h>
#include <aws/datazone/model/CreateSubscriptionRequestResult.h>
#include <aws/datazone/model/CreateSubscriptionTargetResult.h>
#include <aws/datazone/model/CreateUserProfileResult.h>
#include <aws/datazone/model/DeleteAssetResult.h>
#include <aws/datazone/model/DeleteAssetTypeResult.h>
#include <aws/datazone/model/DeleteDataSourceResult.h>
#include <aws/datazone/model/DeleteDomainResult.h>
#include <aws/datazone/model/DeleteEnvironmentBlueprintConfigurationResult.h>
#include <aws/datazone/model/DeleteFormTypeResult.h>
#include <aws/datazone/model/DeleteGlossaryResult.h>
#include <aws/datazone/model/DeleteGlossaryTermResult.h>
#include <aws/datazone/model/DeleteListingResult.h>
#include <aws/datazone/model/DeleteProjectResult.h>
#include <aws/datazone/model/DeleteProjectMembershipResult.h>
#include <aws/datazone/model/DeleteSubscriptionGrantResult.h>
#include <aws/datazone/model/GetAssetResult.h>
#include <aws/datazone/model/GetAssetTypeResult.h>
#include <aws/datazone/model/GetDataSourceResult.h>
#include <aws/datazone/model/GetDataSourceRunResult.h>
#include <aws/datazone/model/GetDomainResult.h>
#include <aws/datazone/model/GetEnvironmentResult.h>
#include <aws/datazone/model/GetEnvironmentBlueprintResult.h>
#include <aws/datazone/model/GetEnvironmentBlueprintConfigurationResult.h>
#include <aws/datazone/model/GetEnvironmentProfileResult.h>
#include <aws/datazone/model/GetFormTypeResult.h>
#include <aws/datazone/model/GetGlossaryResult.h>
#include <aws/datazone/model/GetGlossaryTermResult.h>
#include <aws/datazone/model/GetGroupProfileResult.h>
#include <aws/datazone/model/GetIamPortalLoginUrlResult.h>
#include <aws/datazone/model/GetListingResult.h>
#include <aws/datazone/model/GetProjectResult.h>
#include <aws/datazone/model/GetSubscriptionResult.h>
#include <aws/datazone/model/GetSubscriptionGrantResult.h>
#include <aws/datazone/model/GetSubscriptionRequestDetailsResult.h>
#include <aws/datazone/model/GetSubscriptionTargetResult.h>
#include <aws/datazone/model/GetUserProfileResult.h>
#include <aws/datazone/model/ListAssetRevisionsResult.h>
#include <aws/datazone/model/ListDataSourceRunActivitiesResult.h>
#include <aws/datazone/model/ListDataSourceRunsResult.h>
#include <aws/datazone/model/ListDataSourcesResult.h>
#include <aws/datazone/model/ListDomainsResult.h>
#include <aws/datazone/model/ListEnvironmentBlueprintConfigurationsResult.h>
#include <aws/datazone/model/ListEnvironmentBlueprintsResult.h>
#include <aws/datazone/model/ListEnvironmentProfilesResult.h>
#include <aws/datazone/model/ListEnvironmentsResult.h>
#include <aws/datazone/model/ListNotificationsResult.h>
#include <aws/datazone/model/ListProjectMembershipsResult.h>
#include <aws/datazone/model/ListProjectsResult.h>
#include <aws/datazone/model/ListSubscriptionGrantsResult.h>
#include <aws/datazone/model/ListSubscriptionRequestsResult.h>
#include <aws/datazone/model/ListSubscriptionTargetsResult.h>
#include <aws/datazone/model/ListSubscriptionsResult.h>
#include <aws/datazone/model/ListTagsForResourceResult.h>
#include <aws/datazone/model/PutEnvironmentBlueprintConfigurationResult.h>
#include <aws/datazone/model/RejectPredictionsResult.h>
#include <aws/datazone/model/RejectSubscriptionRequestResult.h>
#include <aws/datazone/model/RevokeSubscriptionResult.h>
#include <aws/datazone/model/SearchResult.h>
#include <aws/datazone/model/SearchGroupProfilesResult.h>
#include <aws/datazone/model/SearchListingsResult.h>
#include <aws/datazone/model/SearchTypesResult.h>
#include <aws/datazone/model/SearchUserProfilesResult.h>
#include <aws/datazone/model/StartDataSourceRunResult.h>
#include <aws/datazone/model/TagResourceResult.h>
#include <aws/datazone/model/UntagResourceResult.h>
#include <aws/datazone/model/UpdateDataSourceResult.h>
#include <aws/datazone/model/UpdateDomainResult.h>
#include <aws/datazone/model/UpdateEnvironmentResult.h>
#include <aws/datazone/model/UpdateEnvironmentProfileResult.h>
#include <aws/datazone/model/UpdateGlossaryResult.h>
#include <aws/datazone/model/UpdateGlossaryTermResult.h>
#include <aws/datazone/model/UpdateGroupProfileResult.h>
#include <aws/datazone/model/UpdateProjectResult.h>
#include <aws/datazone/model/UpdateSubscriptionGrantStatusResult.h>
#include <aws/datazone/model/UpdateSubscriptionRequestResult.h>
#include <aws/datazone/model/UpdateSubscriptionTargetResult.h>
#include <aws/datazone/model/UpdateUserProfileResult.h>
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
    using DataZoneClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DataZoneEndpointProviderBase = Aws::DataZone::Endpoint::DataZoneEndpointProviderBase;
    using DataZoneEndpointProvider = Aws::DataZone::Endpoint::DataZoneEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DataZoneClient header */
      class AcceptPredictionsRequest;
      class AcceptSubscriptionRequestRequest;
      class CancelSubscriptionRequest;
      class CreateAssetRequest;
      class CreateAssetRevisionRequest;
      class CreateAssetTypeRequest;
      class CreateDataSourceRequest;
      class CreateDomainRequest;
      class CreateEnvironmentRequest;
      class CreateEnvironmentProfileRequest;
      class CreateFormTypeRequest;
      class CreateGlossaryRequest;
      class CreateGlossaryTermRequest;
      class CreateGroupProfileRequest;
      class CreateListingChangeSetRequest;
      class CreateProjectRequest;
      class CreateProjectMembershipRequest;
      class CreateSubscriptionGrantRequest;
      class CreateSubscriptionRequestRequest;
      class CreateSubscriptionTargetRequest;
      class CreateUserProfileRequest;
      class DeleteAssetRequest;
      class DeleteAssetTypeRequest;
      class DeleteDataSourceRequest;
      class DeleteDomainRequest;
      class DeleteEnvironmentRequest;
      class DeleteEnvironmentBlueprintConfigurationRequest;
      class DeleteEnvironmentProfileRequest;
      class DeleteFormTypeRequest;
      class DeleteGlossaryRequest;
      class DeleteGlossaryTermRequest;
      class DeleteListingRequest;
      class DeleteProjectRequest;
      class DeleteProjectMembershipRequest;
      class DeleteSubscriptionGrantRequest;
      class DeleteSubscriptionRequestRequest;
      class DeleteSubscriptionTargetRequest;
      class GetAssetRequest;
      class GetAssetTypeRequest;
      class GetDataSourceRequest;
      class GetDataSourceRunRequest;
      class GetDomainRequest;
      class GetEnvironmentRequest;
      class GetEnvironmentBlueprintRequest;
      class GetEnvironmentBlueprintConfigurationRequest;
      class GetEnvironmentProfileRequest;
      class GetFormTypeRequest;
      class GetGlossaryRequest;
      class GetGlossaryTermRequest;
      class GetGroupProfileRequest;
      class GetIamPortalLoginUrlRequest;
      class GetListingRequest;
      class GetProjectRequest;
      class GetSubscriptionRequest;
      class GetSubscriptionGrantRequest;
      class GetSubscriptionRequestDetailsRequest;
      class GetSubscriptionTargetRequest;
      class GetUserProfileRequest;
      class ListAssetRevisionsRequest;
      class ListDataSourceRunActivitiesRequest;
      class ListDataSourceRunsRequest;
      class ListDataSourcesRequest;
      class ListDomainsRequest;
      class ListEnvironmentBlueprintConfigurationsRequest;
      class ListEnvironmentBlueprintsRequest;
      class ListEnvironmentProfilesRequest;
      class ListEnvironmentsRequest;
      class ListNotificationsRequest;
      class ListProjectMembershipsRequest;
      class ListProjectsRequest;
      class ListSubscriptionGrantsRequest;
      class ListSubscriptionRequestsRequest;
      class ListSubscriptionTargetsRequest;
      class ListSubscriptionsRequest;
      class ListTagsForResourceRequest;
      class PutEnvironmentBlueprintConfigurationRequest;
      class RejectPredictionsRequest;
      class RejectSubscriptionRequestRequest;
      class RevokeSubscriptionRequest;
      class SearchRequest;
      class SearchGroupProfilesRequest;
      class SearchListingsRequest;
      class SearchTypesRequest;
      class SearchUserProfilesRequest;
      class StartDataSourceRunRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDataSourceRequest;
      class UpdateDomainRequest;
      class UpdateEnvironmentRequest;
      class UpdateEnvironmentProfileRequest;
      class UpdateGlossaryRequest;
      class UpdateGlossaryTermRequest;
      class UpdateGroupProfileRequest;
      class UpdateProjectRequest;
      class UpdateSubscriptionGrantStatusRequest;
      class UpdateSubscriptionRequestRequest;
      class UpdateSubscriptionTargetRequest;
      class UpdateUserProfileRequest;
      /* End of service model forward declarations required in DataZoneClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptPredictionsResult, DataZoneError> AcceptPredictionsOutcome;
      typedef Aws::Utils::Outcome<AcceptSubscriptionRequestResult, DataZoneError> AcceptSubscriptionRequestOutcome;
      typedef Aws::Utils::Outcome<CancelSubscriptionResult, DataZoneError> CancelSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateAssetResult, DataZoneError> CreateAssetOutcome;
      typedef Aws::Utils::Outcome<CreateAssetRevisionResult, DataZoneError> CreateAssetRevisionOutcome;
      typedef Aws::Utils::Outcome<CreateAssetTypeResult, DataZoneError> CreateAssetTypeOutcome;
      typedef Aws::Utils::Outcome<CreateDataSourceResult, DataZoneError> CreateDataSourceOutcome;
      typedef Aws::Utils::Outcome<CreateDomainResult, DataZoneError> CreateDomainOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentResult, DataZoneError> CreateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentProfileResult, DataZoneError> CreateEnvironmentProfileOutcome;
      typedef Aws::Utils::Outcome<CreateFormTypeResult, DataZoneError> CreateFormTypeOutcome;
      typedef Aws::Utils::Outcome<CreateGlossaryResult, DataZoneError> CreateGlossaryOutcome;
      typedef Aws::Utils::Outcome<CreateGlossaryTermResult, DataZoneError> CreateGlossaryTermOutcome;
      typedef Aws::Utils::Outcome<CreateGroupProfileResult, DataZoneError> CreateGroupProfileOutcome;
      typedef Aws::Utils::Outcome<CreateListingChangeSetResult, DataZoneError> CreateListingChangeSetOutcome;
      typedef Aws::Utils::Outcome<CreateProjectResult, DataZoneError> CreateProjectOutcome;
      typedef Aws::Utils::Outcome<CreateProjectMembershipResult, DataZoneError> CreateProjectMembershipOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriptionGrantResult, DataZoneError> CreateSubscriptionGrantOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriptionRequestResult, DataZoneError> CreateSubscriptionRequestOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriptionTargetResult, DataZoneError> CreateSubscriptionTargetOutcome;
      typedef Aws::Utils::Outcome<CreateUserProfileResult, DataZoneError> CreateUserProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteAssetResult, DataZoneError> DeleteAssetOutcome;
      typedef Aws::Utils::Outcome<DeleteAssetTypeResult, DataZoneError> DeleteAssetTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteDataSourceResult, DataZoneError> DeleteDataSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainResult, DataZoneError> DeleteDomainOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataZoneError> DeleteEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentBlueprintConfigurationResult, DataZoneError> DeleteEnvironmentBlueprintConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataZoneError> DeleteEnvironmentProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteFormTypeResult, DataZoneError> DeleteFormTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteGlossaryResult, DataZoneError> DeleteGlossaryOutcome;
      typedef Aws::Utils::Outcome<DeleteGlossaryTermResult, DataZoneError> DeleteGlossaryTermOutcome;
      typedef Aws::Utils::Outcome<DeleteListingResult, DataZoneError> DeleteListingOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectResult, DataZoneError> DeleteProjectOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectMembershipResult, DataZoneError> DeleteProjectMembershipOutcome;
      typedef Aws::Utils::Outcome<DeleteSubscriptionGrantResult, DataZoneError> DeleteSubscriptionGrantOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataZoneError> DeleteSubscriptionRequestOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataZoneError> DeleteSubscriptionTargetOutcome;
      typedef Aws::Utils::Outcome<GetAssetResult, DataZoneError> GetAssetOutcome;
      typedef Aws::Utils::Outcome<GetAssetTypeResult, DataZoneError> GetAssetTypeOutcome;
      typedef Aws::Utils::Outcome<GetDataSourceResult, DataZoneError> GetDataSourceOutcome;
      typedef Aws::Utils::Outcome<GetDataSourceRunResult, DataZoneError> GetDataSourceRunOutcome;
      typedef Aws::Utils::Outcome<GetDomainResult, DataZoneError> GetDomainOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentResult, DataZoneError> GetEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentBlueprintResult, DataZoneError> GetEnvironmentBlueprintOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentBlueprintConfigurationResult, DataZoneError> GetEnvironmentBlueprintConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentProfileResult, DataZoneError> GetEnvironmentProfileOutcome;
      typedef Aws::Utils::Outcome<GetFormTypeResult, DataZoneError> GetFormTypeOutcome;
      typedef Aws::Utils::Outcome<GetGlossaryResult, DataZoneError> GetGlossaryOutcome;
      typedef Aws::Utils::Outcome<GetGlossaryTermResult, DataZoneError> GetGlossaryTermOutcome;
      typedef Aws::Utils::Outcome<GetGroupProfileResult, DataZoneError> GetGroupProfileOutcome;
      typedef Aws::Utils::Outcome<GetIamPortalLoginUrlResult, DataZoneError> GetIamPortalLoginUrlOutcome;
      typedef Aws::Utils::Outcome<GetListingResult, DataZoneError> GetListingOutcome;
      typedef Aws::Utils::Outcome<GetProjectResult, DataZoneError> GetProjectOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionResult, DataZoneError> GetSubscriptionOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionGrantResult, DataZoneError> GetSubscriptionGrantOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionRequestDetailsResult, DataZoneError> GetSubscriptionRequestDetailsOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionTargetResult, DataZoneError> GetSubscriptionTargetOutcome;
      typedef Aws::Utils::Outcome<GetUserProfileResult, DataZoneError> GetUserProfileOutcome;
      typedef Aws::Utils::Outcome<ListAssetRevisionsResult, DataZoneError> ListAssetRevisionsOutcome;
      typedef Aws::Utils::Outcome<ListDataSourceRunActivitiesResult, DataZoneError> ListDataSourceRunActivitiesOutcome;
      typedef Aws::Utils::Outcome<ListDataSourceRunsResult, DataZoneError> ListDataSourceRunsOutcome;
      typedef Aws::Utils::Outcome<ListDataSourcesResult, DataZoneError> ListDataSourcesOutcome;
      typedef Aws::Utils::Outcome<ListDomainsResult, DataZoneError> ListDomainsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentBlueprintConfigurationsResult, DataZoneError> ListEnvironmentBlueprintConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentBlueprintsResult, DataZoneError> ListEnvironmentBlueprintsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentProfilesResult, DataZoneError> ListEnvironmentProfilesOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentsResult, DataZoneError> ListEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListNotificationsResult, DataZoneError> ListNotificationsOutcome;
      typedef Aws::Utils::Outcome<ListProjectMembershipsResult, DataZoneError> ListProjectMembershipsOutcome;
      typedef Aws::Utils::Outcome<ListProjectsResult, DataZoneError> ListProjectsOutcome;
      typedef Aws::Utils::Outcome<ListSubscriptionGrantsResult, DataZoneError> ListSubscriptionGrantsOutcome;
      typedef Aws::Utils::Outcome<ListSubscriptionRequestsResult, DataZoneError> ListSubscriptionRequestsOutcome;
      typedef Aws::Utils::Outcome<ListSubscriptionTargetsResult, DataZoneError> ListSubscriptionTargetsOutcome;
      typedef Aws::Utils::Outcome<ListSubscriptionsResult, DataZoneError> ListSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, DataZoneError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutEnvironmentBlueprintConfigurationResult, DataZoneError> PutEnvironmentBlueprintConfigurationOutcome;
      typedef Aws::Utils::Outcome<RejectPredictionsResult, DataZoneError> RejectPredictionsOutcome;
      typedef Aws::Utils::Outcome<RejectSubscriptionRequestResult, DataZoneError> RejectSubscriptionRequestOutcome;
      typedef Aws::Utils::Outcome<RevokeSubscriptionResult, DataZoneError> RevokeSubscriptionOutcome;
      typedef Aws::Utils::Outcome<SearchResult, DataZoneError> SearchOutcome;
      typedef Aws::Utils::Outcome<SearchGroupProfilesResult, DataZoneError> SearchGroupProfilesOutcome;
      typedef Aws::Utils::Outcome<SearchListingsResult, DataZoneError> SearchListingsOutcome;
      typedef Aws::Utils::Outcome<SearchTypesResult, DataZoneError> SearchTypesOutcome;
      typedef Aws::Utils::Outcome<SearchUserProfilesResult, DataZoneError> SearchUserProfilesOutcome;
      typedef Aws::Utils::Outcome<StartDataSourceRunResult, DataZoneError> StartDataSourceRunOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, DataZoneError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, DataZoneError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDataSourceResult, DataZoneError> UpdateDataSourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainResult, DataZoneError> UpdateDomainOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentResult, DataZoneError> UpdateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentProfileResult, DataZoneError> UpdateEnvironmentProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateGlossaryResult, DataZoneError> UpdateGlossaryOutcome;
      typedef Aws::Utils::Outcome<UpdateGlossaryTermResult, DataZoneError> UpdateGlossaryTermOutcome;
      typedef Aws::Utils::Outcome<UpdateGroupProfileResult, DataZoneError> UpdateGroupProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateProjectResult, DataZoneError> UpdateProjectOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriptionGrantStatusResult, DataZoneError> UpdateSubscriptionGrantStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriptionRequestResult, DataZoneError> UpdateSubscriptionRequestOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriptionTargetResult, DataZoneError> UpdateSubscriptionTargetOutcome;
      typedef Aws::Utils::Outcome<UpdateUserProfileResult, DataZoneError> UpdateUserProfileOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptPredictionsOutcome> AcceptPredictionsOutcomeCallable;
      typedef std::future<AcceptSubscriptionRequestOutcome> AcceptSubscriptionRequestOutcomeCallable;
      typedef std::future<CancelSubscriptionOutcome> CancelSubscriptionOutcomeCallable;
      typedef std::future<CreateAssetOutcome> CreateAssetOutcomeCallable;
      typedef std::future<CreateAssetRevisionOutcome> CreateAssetRevisionOutcomeCallable;
      typedef std::future<CreateAssetTypeOutcome> CreateAssetTypeOutcomeCallable;
      typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
      typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
      typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
      typedef std::future<CreateEnvironmentProfileOutcome> CreateEnvironmentProfileOutcomeCallable;
      typedef std::future<CreateFormTypeOutcome> CreateFormTypeOutcomeCallable;
      typedef std::future<CreateGlossaryOutcome> CreateGlossaryOutcomeCallable;
      typedef std::future<CreateGlossaryTermOutcome> CreateGlossaryTermOutcomeCallable;
      typedef std::future<CreateGroupProfileOutcome> CreateGroupProfileOutcomeCallable;
      typedef std::future<CreateListingChangeSetOutcome> CreateListingChangeSetOutcomeCallable;
      typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
      typedef std::future<CreateProjectMembershipOutcome> CreateProjectMembershipOutcomeCallable;
      typedef std::future<CreateSubscriptionGrantOutcome> CreateSubscriptionGrantOutcomeCallable;
      typedef std::future<CreateSubscriptionRequestOutcome> CreateSubscriptionRequestOutcomeCallable;
      typedef std::future<CreateSubscriptionTargetOutcome> CreateSubscriptionTargetOutcomeCallable;
      typedef std::future<CreateUserProfileOutcome> CreateUserProfileOutcomeCallable;
      typedef std::future<DeleteAssetOutcome> DeleteAssetOutcomeCallable;
      typedef std::future<DeleteAssetTypeOutcome> DeleteAssetTypeOutcomeCallable;
      typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
      typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
      typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
      typedef std::future<DeleteEnvironmentBlueprintConfigurationOutcome> DeleteEnvironmentBlueprintConfigurationOutcomeCallable;
      typedef std::future<DeleteEnvironmentProfileOutcome> DeleteEnvironmentProfileOutcomeCallable;
      typedef std::future<DeleteFormTypeOutcome> DeleteFormTypeOutcomeCallable;
      typedef std::future<DeleteGlossaryOutcome> DeleteGlossaryOutcomeCallable;
      typedef std::future<DeleteGlossaryTermOutcome> DeleteGlossaryTermOutcomeCallable;
      typedef std::future<DeleteListingOutcome> DeleteListingOutcomeCallable;
      typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
      typedef std::future<DeleteProjectMembershipOutcome> DeleteProjectMembershipOutcomeCallable;
      typedef std::future<DeleteSubscriptionGrantOutcome> DeleteSubscriptionGrantOutcomeCallable;
      typedef std::future<DeleteSubscriptionRequestOutcome> DeleteSubscriptionRequestOutcomeCallable;
      typedef std::future<DeleteSubscriptionTargetOutcome> DeleteSubscriptionTargetOutcomeCallable;
      typedef std::future<GetAssetOutcome> GetAssetOutcomeCallable;
      typedef std::future<GetAssetTypeOutcome> GetAssetTypeOutcomeCallable;
      typedef std::future<GetDataSourceOutcome> GetDataSourceOutcomeCallable;
      typedef std::future<GetDataSourceRunOutcome> GetDataSourceRunOutcomeCallable;
      typedef std::future<GetDomainOutcome> GetDomainOutcomeCallable;
      typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
      typedef std::future<GetEnvironmentBlueprintOutcome> GetEnvironmentBlueprintOutcomeCallable;
      typedef std::future<GetEnvironmentBlueprintConfigurationOutcome> GetEnvironmentBlueprintConfigurationOutcomeCallable;
      typedef std::future<GetEnvironmentProfileOutcome> GetEnvironmentProfileOutcomeCallable;
      typedef std::future<GetFormTypeOutcome> GetFormTypeOutcomeCallable;
      typedef std::future<GetGlossaryOutcome> GetGlossaryOutcomeCallable;
      typedef std::future<GetGlossaryTermOutcome> GetGlossaryTermOutcomeCallable;
      typedef std::future<GetGroupProfileOutcome> GetGroupProfileOutcomeCallable;
      typedef std::future<GetIamPortalLoginUrlOutcome> GetIamPortalLoginUrlOutcomeCallable;
      typedef std::future<GetListingOutcome> GetListingOutcomeCallable;
      typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
      typedef std::future<GetSubscriptionOutcome> GetSubscriptionOutcomeCallable;
      typedef std::future<GetSubscriptionGrantOutcome> GetSubscriptionGrantOutcomeCallable;
      typedef std::future<GetSubscriptionRequestDetailsOutcome> GetSubscriptionRequestDetailsOutcomeCallable;
      typedef std::future<GetSubscriptionTargetOutcome> GetSubscriptionTargetOutcomeCallable;
      typedef std::future<GetUserProfileOutcome> GetUserProfileOutcomeCallable;
      typedef std::future<ListAssetRevisionsOutcome> ListAssetRevisionsOutcomeCallable;
      typedef std::future<ListDataSourceRunActivitiesOutcome> ListDataSourceRunActivitiesOutcomeCallable;
      typedef std::future<ListDataSourceRunsOutcome> ListDataSourceRunsOutcomeCallable;
      typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
      typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
      typedef std::future<ListEnvironmentBlueprintConfigurationsOutcome> ListEnvironmentBlueprintConfigurationsOutcomeCallable;
      typedef std::future<ListEnvironmentBlueprintsOutcome> ListEnvironmentBlueprintsOutcomeCallable;
      typedef std::future<ListEnvironmentProfilesOutcome> ListEnvironmentProfilesOutcomeCallable;
      typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
      typedef std::future<ListNotificationsOutcome> ListNotificationsOutcomeCallable;
      typedef std::future<ListProjectMembershipsOutcome> ListProjectMembershipsOutcomeCallable;
      typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
      typedef std::future<ListSubscriptionGrantsOutcome> ListSubscriptionGrantsOutcomeCallable;
      typedef std::future<ListSubscriptionRequestsOutcome> ListSubscriptionRequestsOutcomeCallable;
      typedef std::future<ListSubscriptionTargetsOutcome> ListSubscriptionTargetsOutcomeCallable;
      typedef std::future<ListSubscriptionsOutcome> ListSubscriptionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutEnvironmentBlueprintConfigurationOutcome> PutEnvironmentBlueprintConfigurationOutcomeCallable;
      typedef std::future<RejectPredictionsOutcome> RejectPredictionsOutcomeCallable;
      typedef std::future<RejectSubscriptionRequestOutcome> RejectSubscriptionRequestOutcomeCallable;
      typedef std::future<RevokeSubscriptionOutcome> RevokeSubscriptionOutcomeCallable;
      typedef std::future<SearchOutcome> SearchOutcomeCallable;
      typedef std::future<SearchGroupProfilesOutcome> SearchGroupProfilesOutcomeCallable;
      typedef std::future<SearchListingsOutcome> SearchListingsOutcomeCallable;
      typedef std::future<SearchTypesOutcome> SearchTypesOutcomeCallable;
      typedef std::future<SearchUserProfilesOutcome> SearchUserProfilesOutcomeCallable;
      typedef std::future<StartDataSourceRunOutcome> StartDataSourceRunOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
      typedef std::future<UpdateDomainOutcome> UpdateDomainOutcomeCallable;
      typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
      typedef std::future<UpdateEnvironmentProfileOutcome> UpdateEnvironmentProfileOutcomeCallable;
      typedef std::future<UpdateGlossaryOutcome> UpdateGlossaryOutcomeCallable;
      typedef std::future<UpdateGlossaryTermOutcome> UpdateGlossaryTermOutcomeCallable;
      typedef std::future<UpdateGroupProfileOutcome> UpdateGroupProfileOutcomeCallable;
      typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
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
    typedef std::function<void(const DataZoneClient*, const Model::CancelSubscriptionRequest&, const Model::CancelSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateAssetRequest&, const Model::CreateAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateAssetRevisionRequest&, const Model::CreateAssetRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssetRevisionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateAssetTypeRequest&, const Model::CreateAssetTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssetTypeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateDataSourceRequest&, const Model::CreateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateEnvironmentProfileRequest&, const Model::CreateEnvironmentProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateFormTypeRequest&, const Model::CreateFormTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFormTypeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateGlossaryRequest&, const Model::CreateGlossaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlossaryResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateGlossaryTermRequest&, const Model::CreateGlossaryTermOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlossaryTermResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateGroupProfileRequest&, const Model::CreateGroupProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateListingChangeSetRequest&, const Model::CreateListingChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateListingChangeSetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateProjectMembershipRequest&, const Model::CreateProjectMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectMembershipResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateSubscriptionGrantRequest&, const Model::CreateSubscriptionGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionGrantResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateSubscriptionRequestRequest&, const Model::CreateSubscriptionRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionRequestResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateSubscriptionTargetRequest&, const Model::CreateSubscriptionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionTargetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::CreateUserProfileRequest&, const Model::CreateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteAssetRequest&, const Model::DeleteAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteAssetTypeRequest&, const Model::DeleteAssetTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssetTypeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteEnvironmentBlueprintConfigurationRequest&, const Model::DeleteEnvironmentBlueprintConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentBlueprintConfigurationResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteEnvironmentProfileRequest&, const Model::DeleteEnvironmentProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteFormTypeRequest&, const Model::DeleteFormTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFormTypeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteGlossaryRequest&, const Model::DeleteGlossaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGlossaryResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteGlossaryTermRequest&, const Model::DeleteGlossaryTermOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGlossaryTermResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteListingRequest&, const Model::DeleteListingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteListingResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteProjectMembershipRequest&, const Model::DeleteProjectMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectMembershipResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteSubscriptionGrantRequest&, const Model::DeleteSubscriptionGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionGrantResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteSubscriptionRequestRequest&, const Model::DeleteSubscriptionRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionRequestResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::DeleteSubscriptionTargetRequest&, const Model::DeleteSubscriptionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionTargetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetAssetRequest&, const Model::GetAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetAssetTypeRequest&, const Model::GetAssetTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssetTypeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetDataSourceRequest&, const Model::GetDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetDataSourceRunRequest&, const Model::GetDataSourceRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSourceRunResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetDomainRequest&, const Model::GetDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetEnvironmentBlueprintRequest&, const Model::GetEnvironmentBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentBlueprintResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetEnvironmentBlueprintConfigurationRequest&, const Model::GetEnvironmentBlueprintConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentBlueprintConfigurationResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetEnvironmentProfileRequest&, const Model::GetEnvironmentProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetFormTypeRequest&, const Model::GetFormTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFormTypeResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetGlossaryRequest&, const Model::GetGlossaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGlossaryResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetGlossaryTermRequest&, const Model::GetGlossaryTermOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGlossaryTermResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetGroupProfileRequest&, const Model::GetGroupProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetIamPortalLoginUrlRequest&, const Model::GetIamPortalLoginUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIamPortalLoginUrlResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetListingRequest&, const Model::GetListingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetListingResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetProjectRequest&, const Model::GetProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProjectResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetSubscriptionRequest&, const Model::GetSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetSubscriptionGrantRequest&, const Model::GetSubscriptionGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionGrantResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetSubscriptionRequestDetailsRequest&, const Model::GetSubscriptionRequestDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionRequestDetailsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetSubscriptionTargetRequest&, const Model::GetSubscriptionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionTargetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::GetUserProfileRequest&, const Model::GetUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListAssetRevisionsRequest&, const Model::ListAssetRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssetRevisionsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListDataSourceRunActivitiesRequest&, const Model::ListDataSourceRunActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourceRunActivitiesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListDataSourceRunsRequest&, const Model::ListDataSourceRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourceRunsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListDataSourcesRequest&, const Model::ListDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourcesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListEnvironmentBlueprintConfigurationsRequest&, const Model::ListEnvironmentBlueprintConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentBlueprintConfigurationsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListEnvironmentBlueprintsRequest&, const Model::ListEnvironmentBlueprintsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentBlueprintsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListEnvironmentProfilesRequest&, const Model::ListEnvironmentProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentProfilesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListNotificationsRequest&, const Model::ListNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotificationsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListProjectMembershipsRequest&, const Model::ListProjectMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectMembershipsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListSubscriptionGrantsRequest&, const Model::ListSubscriptionGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionGrantsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListSubscriptionRequestsRequest&, const Model::ListSubscriptionRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionRequestsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListSubscriptionTargetsRequest&, const Model::ListSubscriptionTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionTargetsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListSubscriptionsRequest&, const Model::ListSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::PutEnvironmentBlueprintConfigurationRequest&, const Model::PutEnvironmentBlueprintConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEnvironmentBlueprintConfigurationResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::RejectPredictionsRequest&, const Model::RejectPredictionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectPredictionsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::RejectSubscriptionRequestRequest&, const Model::RejectSubscriptionRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectSubscriptionRequestResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::RevokeSubscriptionRequest&, const Model::RevokeSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::SearchRequest&, const Model::SearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::SearchGroupProfilesRequest&, const Model::SearchGroupProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchGroupProfilesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::SearchListingsRequest&, const Model::SearchListingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchListingsResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::SearchTypesRequest&, const Model::SearchTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchTypesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::SearchUserProfilesRequest&, const Model::SearchUserProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchUserProfilesResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::StartDataSourceRunRequest&, const Model::StartDataSourceRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataSourceRunResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateDomainRequest&, const Model::UpdateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateEnvironmentProfileRequest&, const Model::UpdateEnvironmentProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateGlossaryRequest&, const Model::UpdateGlossaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlossaryResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateGlossaryTermRequest&, const Model::UpdateGlossaryTermOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlossaryTermResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateGroupProfileRequest&, const Model::UpdateGroupProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupProfileResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateSubscriptionGrantStatusRequest&, const Model::UpdateSubscriptionGrantStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriptionGrantStatusResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateSubscriptionRequestRequest&, const Model::UpdateSubscriptionRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriptionRequestResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateSubscriptionTargetRequest&, const Model::UpdateSubscriptionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriptionTargetResponseReceivedHandler;
    typedef std::function<void(const DataZoneClient*, const Model::UpdateUserProfileRequest&, const Model::UpdateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserProfileResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DataZone
} // namespace Aws
