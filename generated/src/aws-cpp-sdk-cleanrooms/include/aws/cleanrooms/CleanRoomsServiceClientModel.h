/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cleanrooms/CleanRoomsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cleanrooms/CleanRoomsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CleanRoomsClient header */
#include <aws/cleanrooms/model/BatchGetCollaborationAnalysisTemplateResult.h>
#include <aws/cleanrooms/model/BatchGetSchemaResult.h>
#include <aws/cleanrooms/model/BatchGetSchemaAnalysisRuleResult.h>
#include <aws/cleanrooms/model/CreateAnalysisTemplateResult.h>
#include <aws/cleanrooms/model/CreateCollaborationResult.h>
#include <aws/cleanrooms/model/CreateCollaborationChangeRequestResult.h>
#include <aws/cleanrooms/model/CreateConfiguredAudienceModelAssociationResult.h>
#include <aws/cleanrooms/model/CreateConfiguredTableResult.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAnalysisRuleResult.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAssociationResult.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAssociationAnalysisRuleResult.h>
#include <aws/cleanrooms/model/CreateIdMappingTableResult.h>
#include <aws/cleanrooms/model/CreateIdNamespaceAssociationResult.h>
#include <aws/cleanrooms/model/CreateMembershipResult.h>
#include <aws/cleanrooms/model/CreatePrivacyBudgetTemplateResult.h>
#include <aws/cleanrooms/model/DeleteAnalysisTemplateResult.h>
#include <aws/cleanrooms/model/DeleteCollaborationResult.h>
#include <aws/cleanrooms/model/DeleteConfiguredAudienceModelAssociationResult.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableResult.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAnalysisRuleResult.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAssociationResult.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAssociationAnalysisRuleResult.h>
#include <aws/cleanrooms/model/DeleteIdMappingTableResult.h>
#include <aws/cleanrooms/model/DeleteIdNamespaceAssociationResult.h>
#include <aws/cleanrooms/model/DeleteMemberResult.h>
#include <aws/cleanrooms/model/DeleteMembershipResult.h>
#include <aws/cleanrooms/model/DeletePrivacyBudgetTemplateResult.h>
#include <aws/cleanrooms/model/GetAnalysisTemplateResult.h>
#include <aws/cleanrooms/model/GetCollaborationResult.h>
#include <aws/cleanrooms/model/GetCollaborationAnalysisTemplateResult.h>
#include <aws/cleanrooms/model/GetCollaborationChangeRequestResult.h>
#include <aws/cleanrooms/model/GetCollaborationConfiguredAudienceModelAssociationResult.h>
#include <aws/cleanrooms/model/GetCollaborationIdNamespaceAssociationResult.h>
#include <aws/cleanrooms/model/GetCollaborationPrivacyBudgetTemplateResult.h>
#include <aws/cleanrooms/model/GetConfiguredAudienceModelAssociationResult.h>
#include <aws/cleanrooms/model/GetConfiguredTableResult.h>
#include <aws/cleanrooms/model/GetConfiguredTableAnalysisRuleResult.h>
#include <aws/cleanrooms/model/GetConfiguredTableAssociationResult.h>
#include <aws/cleanrooms/model/GetConfiguredTableAssociationAnalysisRuleResult.h>
#include <aws/cleanrooms/model/GetIdMappingTableResult.h>
#include <aws/cleanrooms/model/GetIdNamespaceAssociationResult.h>
#include <aws/cleanrooms/model/GetMembershipResult.h>
#include <aws/cleanrooms/model/GetPrivacyBudgetTemplateResult.h>
#include <aws/cleanrooms/model/GetProtectedJobResult.h>
#include <aws/cleanrooms/model/GetProtectedQueryResult.h>
#include <aws/cleanrooms/model/GetSchemaResult.h>
#include <aws/cleanrooms/model/GetSchemaAnalysisRuleResult.h>
#include <aws/cleanrooms/model/ListAnalysisTemplatesResult.h>
#include <aws/cleanrooms/model/ListCollaborationAnalysisTemplatesResult.h>
#include <aws/cleanrooms/model/ListCollaborationChangeRequestsResult.h>
#include <aws/cleanrooms/model/ListCollaborationConfiguredAudienceModelAssociationsResult.h>
#include <aws/cleanrooms/model/ListCollaborationIdNamespaceAssociationsResult.h>
#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetTemplatesResult.h>
#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetsResult.h>
#include <aws/cleanrooms/model/ListCollaborationsResult.h>
#include <aws/cleanrooms/model/ListConfiguredAudienceModelAssociationsResult.h>
#include <aws/cleanrooms/model/ListConfiguredTableAssociationsResult.h>
#include <aws/cleanrooms/model/ListConfiguredTablesResult.h>
#include <aws/cleanrooms/model/ListIdMappingTablesResult.h>
#include <aws/cleanrooms/model/ListIdNamespaceAssociationsResult.h>
#include <aws/cleanrooms/model/ListMembersResult.h>
#include <aws/cleanrooms/model/ListMembershipsResult.h>
#include <aws/cleanrooms/model/ListPrivacyBudgetTemplatesResult.h>
#include <aws/cleanrooms/model/ListPrivacyBudgetsResult.h>
#include <aws/cleanrooms/model/ListProtectedJobsResult.h>
#include <aws/cleanrooms/model/ListProtectedQueriesResult.h>
#include <aws/cleanrooms/model/ListSchemasResult.h>
#include <aws/cleanrooms/model/ListTagsForResourceResult.h>
#include <aws/cleanrooms/model/PopulateIdMappingTableResult.h>
#include <aws/cleanrooms/model/PreviewPrivacyImpactResult.h>
#include <aws/cleanrooms/model/StartProtectedJobResult.h>
#include <aws/cleanrooms/model/StartProtectedQueryResult.h>
#include <aws/cleanrooms/model/TagResourceResult.h>
#include <aws/cleanrooms/model/UntagResourceResult.h>
#include <aws/cleanrooms/model/UpdateAnalysisTemplateResult.h>
#include <aws/cleanrooms/model/UpdateCollaborationResult.h>
#include <aws/cleanrooms/model/UpdateConfiguredAudienceModelAssociationResult.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableResult.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAnalysisRuleResult.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAssociationResult.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAssociationAnalysisRuleResult.h>
#include <aws/cleanrooms/model/UpdateIdMappingTableResult.h>
#include <aws/cleanrooms/model/UpdateIdNamespaceAssociationResult.h>
#include <aws/cleanrooms/model/UpdateMembershipResult.h>
#include <aws/cleanrooms/model/UpdatePrivacyBudgetTemplateResult.h>
#include <aws/cleanrooms/model/UpdateProtectedJobResult.h>
#include <aws/cleanrooms/model/UpdateProtectedQueryResult.h>
#include <aws/cleanrooms/model/ListCollaborationsRequest.h>
#include <aws/cleanrooms/model/ListConfiguredTablesRequest.h>
#include <aws/cleanrooms/model/ListMembershipsRequest.h>
/* End of service model headers required in CleanRoomsClient header */

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

  namespace CleanRooms
  {
    using CleanRoomsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using CleanRoomsEndpointProviderBase = Aws::CleanRooms::Endpoint::CleanRoomsEndpointProviderBase;
    using CleanRoomsEndpointProvider = Aws::CleanRooms::Endpoint::CleanRoomsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CleanRoomsClient header */
      class BatchGetCollaborationAnalysisTemplateRequest;
      class BatchGetSchemaRequest;
      class BatchGetSchemaAnalysisRuleRequest;
      class CreateAnalysisTemplateRequest;
      class CreateCollaborationRequest;
      class CreateCollaborationChangeRequestRequest;
      class CreateConfiguredAudienceModelAssociationRequest;
      class CreateConfiguredTableRequest;
      class CreateConfiguredTableAnalysisRuleRequest;
      class CreateConfiguredTableAssociationRequest;
      class CreateConfiguredTableAssociationAnalysisRuleRequest;
      class CreateIdMappingTableRequest;
      class CreateIdNamespaceAssociationRequest;
      class CreateMembershipRequest;
      class CreatePrivacyBudgetTemplateRequest;
      class DeleteAnalysisTemplateRequest;
      class DeleteCollaborationRequest;
      class DeleteConfiguredAudienceModelAssociationRequest;
      class DeleteConfiguredTableRequest;
      class DeleteConfiguredTableAnalysisRuleRequest;
      class DeleteConfiguredTableAssociationRequest;
      class DeleteConfiguredTableAssociationAnalysisRuleRequest;
      class DeleteIdMappingTableRequest;
      class DeleteIdNamespaceAssociationRequest;
      class DeleteMemberRequest;
      class DeleteMembershipRequest;
      class DeletePrivacyBudgetTemplateRequest;
      class GetAnalysisTemplateRequest;
      class GetCollaborationRequest;
      class GetCollaborationAnalysisTemplateRequest;
      class GetCollaborationChangeRequestRequest;
      class GetCollaborationConfiguredAudienceModelAssociationRequest;
      class GetCollaborationIdNamespaceAssociationRequest;
      class GetCollaborationPrivacyBudgetTemplateRequest;
      class GetConfiguredAudienceModelAssociationRequest;
      class GetConfiguredTableRequest;
      class GetConfiguredTableAnalysisRuleRequest;
      class GetConfiguredTableAssociationRequest;
      class GetConfiguredTableAssociationAnalysisRuleRequest;
      class GetIdMappingTableRequest;
      class GetIdNamespaceAssociationRequest;
      class GetMembershipRequest;
      class GetPrivacyBudgetTemplateRequest;
      class GetProtectedJobRequest;
      class GetProtectedQueryRequest;
      class GetSchemaRequest;
      class GetSchemaAnalysisRuleRequest;
      class ListAnalysisTemplatesRequest;
      class ListCollaborationAnalysisTemplatesRequest;
      class ListCollaborationChangeRequestsRequest;
      class ListCollaborationConfiguredAudienceModelAssociationsRequest;
      class ListCollaborationIdNamespaceAssociationsRequest;
      class ListCollaborationPrivacyBudgetTemplatesRequest;
      class ListCollaborationPrivacyBudgetsRequest;
      class ListCollaborationsRequest;
      class ListConfiguredAudienceModelAssociationsRequest;
      class ListConfiguredTableAssociationsRequest;
      class ListConfiguredTablesRequest;
      class ListIdMappingTablesRequest;
      class ListIdNamespaceAssociationsRequest;
      class ListMembersRequest;
      class ListMembershipsRequest;
      class ListPrivacyBudgetTemplatesRequest;
      class ListPrivacyBudgetsRequest;
      class ListProtectedJobsRequest;
      class ListProtectedQueriesRequest;
      class ListSchemasRequest;
      class ListTagsForResourceRequest;
      class PopulateIdMappingTableRequest;
      class PreviewPrivacyImpactRequest;
      class StartProtectedJobRequest;
      class StartProtectedQueryRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAnalysisTemplateRequest;
      class UpdateCollaborationRequest;
      class UpdateConfiguredAudienceModelAssociationRequest;
      class UpdateConfiguredTableRequest;
      class UpdateConfiguredTableAnalysisRuleRequest;
      class UpdateConfiguredTableAssociationRequest;
      class UpdateConfiguredTableAssociationAnalysisRuleRequest;
      class UpdateIdMappingTableRequest;
      class UpdateIdNamespaceAssociationRequest;
      class UpdateMembershipRequest;
      class UpdatePrivacyBudgetTemplateRequest;
      class UpdateProtectedJobRequest;
      class UpdateProtectedQueryRequest;
      /* End of service model forward declarations required in CleanRoomsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetCollaborationAnalysisTemplateResult, CleanRoomsError> BatchGetCollaborationAnalysisTemplateOutcome;
      typedef Aws::Utils::Outcome<BatchGetSchemaResult, CleanRoomsError> BatchGetSchemaOutcome;
      typedef Aws::Utils::Outcome<BatchGetSchemaAnalysisRuleResult, CleanRoomsError> BatchGetSchemaAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<CreateAnalysisTemplateResult, CleanRoomsError> CreateAnalysisTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateCollaborationResult, CleanRoomsError> CreateCollaborationOutcome;
      typedef Aws::Utils::Outcome<CreateCollaborationChangeRequestResult, CleanRoomsError> CreateCollaborationChangeRequestOutcome;
      typedef Aws::Utils::Outcome<CreateConfiguredAudienceModelAssociationResult, CleanRoomsError> CreateConfiguredAudienceModelAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateConfiguredTableResult, CleanRoomsError> CreateConfiguredTableOutcome;
      typedef Aws::Utils::Outcome<CreateConfiguredTableAnalysisRuleResult, CleanRoomsError> CreateConfiguredTableAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<CreateConfiguredTableAssociationResult, CleanRoomsError> CreateConfiguredTableAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateConfiguredTableAssociationAnalysisRuleResult, CleanRoomsError> CreateConfiguredTableAssociationAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<CreateIdMappingTableResult, CleanRoomsError> CreateIdMappingTableOutcome;
      typedef Aws::Utils::Outcome<CreateIdNamespaceAssociationResult, CleanRoomsError> CreateIdNamespaceAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateMembershipResult, CleanRoomsError> CreateMembershipOutcome;
      typedef Aws::Utils::Outcome<CreatePrivacyBudgetTemplateResult, CleanRoomsError> CreatePrivacyBudgetTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteAnalysisTemplateResult, CleanRoomsError> DeleteAnalysisTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteCollaborationResult, CleanRoomsError> DeleteCollaborationOutcome;
      typedef Aws::Utils::Outcome<DeleteConfiguredAudienceModelAssociationResult, CleanRoomsError> DeleteConfiguredAudienceModelAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteConfiguredTableResult, CleanRoomsError> DeleteConfiguredTableOutcome;
      typedef Aws::Utils::Outcome<DeleteConfiguredTableAnalysisRuleResult, CleanRoomsError> DeleteConfiguredTableAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteConfiguredTableAssociationResult, CleanRoomsError> DeleteConfiguredTableAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteConfiguredTableAssociationAnalysisRuleResult, CleanRoomsError> DeleteConfiguredTableAssociationAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteIdMappingTableResult, CleanRoomsError> DeleteIdMappingTableOutcome;
      typedef Aws::Utils::Outcome<DeleteIdNamespaceAssociationResult, CleanRoomsError> DeleteIdNamespaceAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteMemberResult, CleanRoomsError> DeleteMemberOutcome;
      typedef Aws::Utils::Outcome<DeleteMembershipResult, CleanRoomsError> DeleteMembershipOutcome;
      typedef Aws::Utils::Outcome<DeletePrivacyBudgetTemplateResult, CleanRoomsError> DeletePrivacyBudgetTemplateOutcome;
      typedef Aws::Utils::Outcome<GetAnalysisTemplateResult, CleanRoomsError> GetAnalysisTemplateOutcome;
      typedef Aws::Utils::Outcome<GetCollaborationResult, CleanRoomsError> GetCollaborationOutcome;
      typedef Aws::Utils::Outcome<GetCollaborationAnalysisTemplateResult, CleanRoomsError> GetCollaborationAnalysisTemplateOutcome;
      typedef Aws::Utils::Outcome<GetCollaborationChangeRequestResult, CleanRoomsError> GetCollaborationChangeRequestOutcome;
      typedef Aws::Utils::Outcome<GetCollaborationConfiguredAudienceModelAssociationResult, CleanRoomsError> GetCollaborationConfiguredAudienceModelAssociationOutcome;
      typedef Aws::Utils::Outcome<GetCollaborationIdNamespaceAssociationResult, CleanRoomsError> GetCollaborationIdNamespaceAssociationOutcome;
      typedef Aws::Utils::Outcome<GetCollaborationPrivacyBudgetTemplateResult, CleanRoomsError> GetCollaborationPrivacyBudgetTemplateOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredAudienceModelAssociationResult, CleanRoomsError> GetConfiguredAudienceModelAssociationOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredTableResult, CleanRoomsError> GetConfiguredTableOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredTableAnalysisRuleResult, CleanRoomsError> GetConfiguredTableAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredTableAssociationResult, CleanRoomsError> GetConfiguredTableAssociationOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredTableAssociationAnalysisRuleResult, CleanRoomsError> GetConfiguredTableAssociationAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<GetIdMappingTableResult, CleanRoomsError> GetIdMappingTableOutcome;
      typedef Aws::Utils::Outcome<GetIdNamespaceAssociationResult, CleanRoomsError> GetIdNamespaceAssociationOutcome;
      typedef Aws::Utils::Outcome<GetMembershipResult, CleanRoomsError> GetMembershipOutcome;
      typedef Aws::Utils::Outcome<GetPrivacyBudgetTemplateResult, CleanRoomsError> GetPrivacyBudgetTemplateOutcome;
      typedef Aws::Utils::Outcome<GetProtectedJobResult, CleanRoomsError> GetProtectedJobOutcome;
      typedef Aws::Utils::Outcome<GetProtectedQueryResult, CleanRoomsError> GetProtectedQueryOutcome;
      typedef Aws::Utils::Outcome<GetSchemaResult, CleanRoomsError> GetSchemaOutcome;
      typedef Aws::Utils::Outcome<GetSchemaAnalysisRuleResult, CleanRoomsError> GetSchemaAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<ListAnalysisTemplatesResult, CleanRoomsError> ListAnalysisTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationAnalysisTemplatesResult, CleanRoomsError> ListCollaborationAnalysisTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationChangeRequestsResult, CleanRoomsError> ListCollaborationChangeRequestsOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationConfiguredAudienceModelAssociationsResult, CleanRoomsError> ListCollaborationConfiguredAudienceModelAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationIdNamespaceAssociationsResult, CleanRoomsError> ListCollaborationIdNamespaceAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationPrivacyBudgetTemplatesResult, CleanRoomsError> ListCollaborationPrivacyBudgetTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationPrivacyBudgetsResult, CleanRoomsError> ListCollaborationPrivacyBudgetsOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationsResult, CleanRoomsError> ListCollaborationsOutcome;
      typedef Aws::Utils::Outcome<ListConfiguredAudienceModelAssociationsResult, CleanRoomsError> ListConfiguredAudienceModelAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListConfiguredTableAssociationsResult, CleanRoomsError> ListConfiguredTableAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListConfiguredTablesResult, CleanRoomsError> ListConfiguredTablesOutcome;
      typedef Aws::Utils::Outcome<ListIdMappingTablesResult, CleanRoomsError> ListIdMappingTablesOutcome;
      typedef Aws::Utils::Outcome<ListIdNamespaceAssociationsResult, CleanRoomsError> ListIdNamespaceAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListMembersResult, CleanRoomsError> ListMembersOutcome;
      typedef Aws::Utils::Outcome<ListMembershipsResult, CleanRoomsError> ListMembershipsOutcome;
      typedef Aws::Utils::Outcome<ListPrivacyBudgetTemplatesResult, CleanRoomsError> ListPrivacyBudgetTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListPrivacyBudgetsResult, CleanRoomsError> ListPrivacyBudgetsOutcome;
      typedef Aws::Utils::Outcome<ListProtectedJobsResult, CleanRoomsError> ListProtectedJobsOutcome;
      typedef Aws::Utils::Outcome<ListProtectedQueriesResult, CleanRoomsError> ListProtectedQueriesOutcome;
      typedef Aws::Utils::Outcome<ListSchemasResult, CleanRoomsError> ListSchemasOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CleanRoomsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PopulateIdMappingTableResult, CleanRoomsError> PopulateIdMappingTableOutcome;
      typedef Aws::Utils::Outcome<PreviewPrivacyImpactResult, CleanRoomsError> PreviewPrivacyImpactOutcome;
      typedef Aws::Utils::Outcome<StartProtectedJobResult, CleanRoomsError> StartProtectedJobOutcome;
      typedef Aws::Utils::Outcome<StartProtectedQueryResult, CleanRoomsError> StartProtectedQueryOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CleanRoomsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CleanRoomsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAnalysisTemplateResult, CleanRoomsError> UpdateAnalysisTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateCollaborationResult, CleanRoomsError> UpdateCollaborationOutcome;
      typedef Aws::Utils::Outcome<UpdateConfiguredAudienceModelAssociationResult, CleanRoomsError> UpdateConfiguredAudienceModelAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateConfiguredTableResult, CleanRoomsError> UpdateConfiguredTableOutcome;
      typedef Aws::Utils::Outcome<UpdateConfiguredTableAnalysisRuleResult, CleanRoomsError> UpdateConfiguredTableAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateConfiguredTableAssociationResult, CleanRoomsError> UpdateConfiguredTableAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateConfiguredTableAssociationAnalysisRuleResult, CleanRoomsError> UpdateConfiguredTableAssociationAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateIdMappingTableResult, CleanRoomsError> UpdateIdMappingTableOutcome;
      typedef Aws::Utils::Outcome<UpdateIdNamespaceAssociationResult, CleanRoomsError> UpdateIdNamespaceAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateMembershipResult, CleanRoomsError> UpdateMembershipOutcome;
      typedef Aws::Utils::Outcome<UpdatePrivacyBudgetTemplateResult, CleanRoomsError> UpdatePrivacyBudgetTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateProtectedJobResult, CleanRoomsError> UpdateProtectedJobOutcome;
      typedef Aws::Utils::Outcome<UpdateProtectedQueryResult, CleanRoomsError> UpdateProtectedQueryOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetCollaborationAnalysisTemplateOutcome> BatchGetCollaborationAnalysisTemplateOutcomeCallable;
      typedef std::future<BatchGetSchemaOutcome> BatchGetSchemaOutcomeCallable;
      typedef std::future<BatchGetSchemaAnalysisRuleOutcome> BatchGetSchemaAnalysisRuleOutcomeCallable;
      typedef std::future<CreateAnalysisTemplateOutcome> CreateAnalysisTemplateOutcomeCallable;
      typedef std::future<CreateCollaborationOutcome> CreateCollaborationOutcomeCallable;
      typedef std::future<CreateCollaborationChangeRequestOutcome> CreateCollaborationChangeRequestOutcomeCallable;
      typedef std::future<CreateConfiguredAudienceModelAssociationOutcome> CreateConfiguredAudienceModelAssociationOutcomeCallable;
      typedef std::future<CreateConfiguredTableOutcome> CreateConfiguredTableOutcomeCallable;
      typedef std::future<CreateConfiguredTableAnalysisRuleOutcome> CreateConfiguredTableAnalysisRuleOutcomeCallable;
      typedef std::future<CreateConfiguredTableAssociationOutcome> CreateConfiguredTableAssociationOutcomeCallable;
      typedef std::future<CreateConfiguredTableAssociationAnalysisRuleOutcome> CreateConfiguredTableAssociationAnalysisRuleOutcomeCallable;
      typedef std::future<CreateIdMappingTableOutcome> CreateIdMappingTableOutcomeCallable;
      typedef std::future<CreateIdNamespaceAssociationOutcome> CreateIdNamespaceAssociationOutcomeCallable;
      typedef std::future<CreateMembershipOutcome> CreateMembershipOutcomeCallable;
      typedef std::future<CreatePrivacyBudgetTemplateOutcome> CreatePrivacyBudgetTemplateOutcomeCallable;
      typedef std::future<DeleteAnalysisTemplateOutcome> DeleteAnalysisTemplateOutcomeCallable;
      typedef std::future<DeleteCollaborationOutcome> DeleteCollaborationOutcomeCallable;
      typedef std::future<DeleteConfiguredAudienceModelAssociationOutcome> DeleteConfiguredAudienceModelAssociationOutcomeCallable;
      typedef std::future<DeleteConfiguredTableOutcome> DeleteConfiguredTableOutcomeCallable;
      typedef std::future<DeleteConfiguredTableAnalysisRuleOutcome> DeleteConfiguredTableAnalysisRuleOutcomeCallable;
      typedef std::future<DeleteConfiguredTableAssociationOutcome> DeleteConfiguredTableAssociationOutcomeCallable;
      typedef std::future<DeleteConfiguredTableAssociationAnalysisRuleOutcome> DeleteConfiguredTableAssociationAnalysisRuleOutcomeCallable;
      typedef std::future<DeleteIdMappingTableOutcome> DeleteIdMappingTableOutcomeCallable;
      typedef std::future<DeleteIdNamespaceAssociationOutcome> DeleteIdNamespaceAssociationOutcomeCallable;
      typedef std::future<DeleteMemberOutcome> DeleteMemberOutcomeCallable;
      typedef std::future<DeleteMembershipOutcome> DeleteMembershipOutcomeCallable;
      typedef std::future<DeletePrivacyBudgetTemplateOutcome> DeletePrivacyBudgetTemplateOutcomeCallable;
      typedef std::future<GetAnalysisTemplateOutcome> GetAnalysisTemplateOutcomeCallable;
      typedef std::future<GetCollaborationOutcome> GetCollaborationOutcomeCallable;
      typedef std::future<GetCollaborationAnalysisTemplateOutcome> GetCollaborationAnalysisTemplateOutcomeCallable;
      typedef std::future<GetCollaborationChangeRequestOutcome> GetCollaborationChangeRequestOutcomeCallable;
      typedef std::future<GetCollaborationConfiguredAudienceModelAssociationOutcome> GetCollaborationConfiguredAudienceModelAssociationOutcomeCallable;
      typedef std::future<GetCollaborationIdNamespaceAssociationOutcome> GetCollaborationIdNamespaceAssociationOutcomeCallable;
      typedef std::future<GetCollaborationPrivacyBudgetTemplateOutcome> GetCollaborationPrivacyBudgetTemplateOutcomeCallable;
      typedef std::future<GetConfiguredAudienceModelAssociationOutcome> GetConfiguredAudienceModelAssociationOutcomeCallable;
      typedef std::future<GetConfiguredTableOutcome> GetConfiguredTableOutcomeCallable;
      typedef std::future<GetConfiguredTableAnalysisRuleOutcome> GetConfiguredTableAnalysisRuleOutcomeCallable;
      typedef std::future<GetConfiguredTableAssociationOutcome> GetConfiguredTableAssociationOutcomeCallable;
      typedef std::future<GetConfiguredTableAssociationAnalysisRuleOutcome> GetConfiguredTableAssociationAnalysisRuleOutcomeCallable;
      typedef std::future<GetIdMappingTableOutcome> GetIdMappingTableOutcomeCallable;
      typedef std::future<GetIdNamespaceAssociationOutcome> GetIdNamespaceAssociationOutcomeCallable;
      typedef std::future<GetMembershipOutcome> GetMembershipOutcomeCallable;
      typedef std::future<GetPrivacyBudgetTemplateOutcome> GetPrivacyBudgetTemplateOutcomeCallable;
      typedef std::future<GetProtectedJobOutcome> GetProtectedJobOutcomeCallable;
      typedef std::future<GetProtectedQueryOutcome> GetProtectedQueryOutcomeCallable;
      typedef std::future<GetSchemaOutcome> GetSchemaOutcomeCallable;
      typedef std::future<GetSchemaAnalysisRuleOutcome> GetSchemaAnalysisRuleOutcomeCallable;
      typedef std::future<ListAnalysisTemplatesOutcome> ListAnalysisTemplatesOutcomeCallable;
      typedef std::future<ListCollaborationAnalysisTemplatesOutcome> ListCollaborationAnalysisTemplatesOutcomeCallable;
      typedef std::future<ListCollaborationChangeRequestsOutcome> ListCollaborationChangeRequestsOutcomeCallable;
      typedef std::future<ListCollaborationConfiguredAudienceModelAssociationsOutcome> ListCollaborationConfiguredAudienceModelAssociationsOutcomeCallable;
      typedef std::future<ListCollaborationIdNamespaceAssociationsOutcome> ListCollaborationIdNamespaceAssociationsOutcomeCallable;
      typedef std::future<ListCollaborationPrivacyBudgetTemplatesOutcome> ListCollaborationPrivacyBudgetTemplatesOutcomeCallable;
      typedef std::future<ListCollaborationPrivacyBudgetsOutcome> ListCollaborationPrivacyBudgetsOutcomeCallable;
      typedef std::future<ListCollaborationsOutcome> ListCollaborationsOutcomeCallable;
      typedef std::future<ListConfiguredAudienceModelAssociationsOutcome> ListConfiguredAudienceModelAssociationsOutcomeCallable;
      typedef std::future<ListConfiguredTableAssociationsOutcome> ListConfiguredTableAssociationsOutcomeCallable;
      typedef std::future<ListConfiguredTablesOutcome> ListConfiguredTablesOutcomeCallable;
      typedef std::future<ListIdMappingTablesOutcome> ListIdMappingTablesOutcomeCallable;
      typedef std::future<ListIdNamespaceAssociationsOutcome> ListIdNamespaceAssociationsOutcomeCallable;
      typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
      typedef std::future<ListMembershipsOutcome> ListMembershipsOutcomeCallable;
      typedef std::future<ListPrivacyBudgetTemplatesOutcome> ListPrivacyBudgetTemplatesOutcomeCallable;
      typedef std::future<ListPrivacyBudgetsOutcome> ListPrivacyBudgetsOutcomeCallable;
      typedef std::future<ListProtectedJobsOutcome> ListProtectedJobsOutcomeCallable;
      typedef std::future<ListProtectedQueriesOutcome> ListProtectedQueriesOutcomeCallable;
      typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PopulateIdMappingTableOutcome> PopulateIdMappingTableOutcomeCallable;
      typedef std::future<PreviewPrivacyImpactOutcome> PreviewPrivacyImpactOutcomeCallable;
      typedef std::future<StartProtectedJobOutcome> StartProtectedJobOutcomeCallable;
      typedef std::future<StartProtectedQueryOutcome> StartProtectedQueryOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAnalysisTemplateOutcome> UpdateAnalysisTemplateOutcomeCallable;
      typedef std::future<UpdateCollaborationOutcome> UpdateCollaborationOutcomeCallable;
      typedef std::future<UpdateConfiguredAudienceModelAssociationOutcome> UpdateConfiguredAudienceModelAssociationOutcomeCallable;
      typedef std::future<UpdateConfiguredTableOutcome> UpdateConfiguredTableOutcomeCallable;
      typedef std::future<UpdateConfiguredTableAnalysisRuleOutcome> UpdateConfiguredTableAnalysisRuleOutcomeCallable;
      typedef std::future<UpdateConfiguredTableAssociationOutcome> UpdateConfiguredTableAssociationOutcomeCallable;
      typedef std::future<UpdateConfiguredTableAssociationAnalysisRuleOutcome> UpdateConfiguredTableAssociationAnalysisRuleOutcomeCallable;
      typedef std::future<UpdateIdMappingTableOutcome> UpdateIdMappingTableOutcomeCallable;
      typedef std::future<UpdateIdNamespaceAssociationOutcome> UpdateIdNamespaceAssociationOutcomeCallable;
      typedef std::future<UpdateMembershipOutcome> UpdateMembershipOutcomeCallable;
      typedef std::future<UpdatePrivacyBudgetTemplateOutcome> UpdatePrivacyBudgetTemplateOutcomeCallable;
      typedef std::future<UpdateProtectedJobOutcome> UpdateProtectedJobOutcomeCallable;
      typedef std::future<UpdateProtectedQueryOutcome> UpdateProtectedQueryOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CleanRoomsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CleanRoomsClient*, const Model::BatchGetCollaborationAnalysisTemplateRequest&, const Model::BatchGetCollaborationAnalysisTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetCollaborationAnalysisTemplateResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::BatchGetSchemaRequest&, const Model::BatchGetSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetSchemaResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::BatchGetSchemaAnalysisRuleRequest&, const Model::BatchGetSchemaAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetSchemaAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateAnalysisTemplateRequest&, const Model::CreateAnalysisTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAnalysisTemplateResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateCollaborationRequest&, const Model::CreateCollaborationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCollaborationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateCollaborationChangeRequestRequest&, const Model::CreateCollaborationChangeRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCollaborationChangeRequestResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateConfiguredAudienceModelAssociationRequest&, const Model::CreateConfiguredAudienceModelAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfiguredAudienceModelAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateConfiguredTableRequest&, const Model::CreateConfiguredTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfiguredTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateConfiguredTableAnalysisRuleRequest&, const Model::CreateConfiguredTableAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfiguredTableAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateConfiguredTableAssociationRequest&, const Model::CreateConfiguredTableAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfiguredTableAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateConfiguredTableAssociationAnalysisRuleRequest&, const Model::CreateConfiguredTableAssociationAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfiguredTableAssociationAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateIdMappingTableRequest&, const Model::CreateIdMappingTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIdMappingTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateIdNamespaceAssociationRequest&, const Model::CreateIdNamespaceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIdNamespaceAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateMembershipRequest&, const Model::CreateMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMembershipResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreatePrivacyBudgetTemplateRequest&, const Model::CreatePrivacyBudgetTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePrivacyBudgetTemplateResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteAnalysisTemplateRequest&, const Model::DeleteAnalysisTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnalysisTemplateResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteCollaborationRequest&, const Model::DeleteCollaborationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCollaborationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteConfiguredAudienceModelAssociationRequest&, const Model::DeleteConfiguredAudienceModelAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredAudienceModelAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteConfiguredTableRequest&, const Model::DeleteConfiguredTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteConfiguredTableAnalysisRuleRequest&, const Model::DeleteConfiguredTableAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredTableAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteConfiguredTableAssociationRequest&, const Model::DeleteConfiguredTableAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredTableAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteConfiguredTableAssociationAnalysisRuleRequest&, const Model::DeleteConfiguredTableAssociationAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredTableAssociationAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteIdMappingTableRequest&, const Model::DeleteIdMappingTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdMappingTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteIdNamespaceAssociationRequest&, const Model::DeleteIdNamespaceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdNamespaceAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteMemberRequest&, const Model::DeleteMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMemberResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteMembershipRequest&, const Model::DeleteMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMembershipResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeletePrivacyBudgetTemplateRequest&, const Model::DeletePrivacyBudgetTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePrivacyBudgetTemplateResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetAnalysisTemplateRequest&, const Model::GetAnalysisTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnalysisTemplateResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetCollaborationRequest&, const Model::GetCollaborationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCollaborationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetCollaborationAnalysisTemplateRequest&, const Model::GetCollaborationAnalysisTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCollaborationAnalysisTemplateResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetCollaborationChangeRequestRequest&, const Model::GetCollaborationChangeRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCollaborationChangeRequestResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetCollaborationConfiguredAudienceModelAssociationRequest&, const Model::GetCollaborationConfiguredAudienceModelAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCollaborationConfiguredAudienceModelAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetCollaborationIdNamespaceAssociationRequest&, const Model::GetCollaborationIdNamespaceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCollaborationIdNamespaceAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetCollaborationPrivacyBudgetTemplateRequest&, const Model::GetCollaborationPrivacyBudgetTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCollaborationPrivacyBudgetTemplateResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetConfiguredAudienceModelAssociationRequest&, const Model::GetConfiguredAudienceModelAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredAudienceModelAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetConfiguredTableRequest&, const Model::GetConfiguredTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetConfiguredTableAnalysisRuleRequest&, const Model::GetConfiguredTableAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredTableAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetConfiguredTableAssociationRequest&, const Model::GetConfiguredTableAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredTableAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetConfiguredTableAssociationAnalysisRuleRequest&, const Model::GetConfiguredTableAssociationAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredTableAssociationAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetIdMappingTableRequest&, const Model::GetIdMappingTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdMappingTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetIdNamespaceAssociationRequest&, const Model::GetIdNamespaceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdNamespaceAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetMembershipRequest&, const Model::GetMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMembershipResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetPrivacyBudgetTemplateRequest&, const Model::GetPrivacyBudgetTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPrivacyBudgetTemplateResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetProtectedJobRequest&, const Model::GetProtectedJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProtectedJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetProtectedQueryRequest&, const Model::GetProtectedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProtectedQueryResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetSchemaRequest&, const Model::GetSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetSchemaAnalysisRuleRequest&, const Model::GetSchemaAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListAnalysisTemplatesRequest&, const Model::ListAnalysisTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnalysisTemplatesResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListCollaborationAnalysisTemplatesRequest&, const Model::ListCollaborationAnalysisTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationAnalysisTemplatesResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListCollaborationChangeRequestsRequest&, const Model::ListCollaborationChangeRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationChangeRequestsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListCollaborationConfiguredAudienceModelAssociationsRequest&, const Model::ListCollaborationConfiguredAudienceModelAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationConfiguredAudienceModelAssociationsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListCollaborationIdNamespaceAssociationsRequest&, const Model::ListCollaborationIdNamespaceAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationIdNamespaceAssociationsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListCollaborationPrivacyBudgetTemplatesRequest&, const Model::ListCollaborationPrivacyBudgetTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationPrivacyBudgetTemplatesResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListCollaborationPrivacyBudgetsRequest&, const Model::ListCollaborationPrivacyBudgetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationPrivacyBudgetsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListCollaborationsRequest&, const Model::ListCollaborationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListConfiguredAudienceModelAssociationsRequest&, const Model::ListConfiguredAudienceModelAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfiguredAudienceModelAssociationsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListConfiguredTableAssociationsRequest&, const Model::ListConfiguredTableAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfiguredTableAssociationsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListConfiguredTablesRequest&, const Model::ListConfiguredTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfiguredTablesResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListIdMappingTablesRequest&, const Model::ListIdMappingTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdMappingTablesResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListIdNamespaceAssociationsRequest&, const Model::ListIdNamespaceAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdNamespaceAssociationsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListMembershipsRequest&, const Model::ListMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembershipsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListPrivacyBudgetTemplatesRequest&, const Model::ListPrivacyBudgetTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrivacyBudgetTemplatesResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListPrivacyBudgetsRequest&, const Model::ListPrivacyBudgetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrivacyBudgetsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListProtectedJobsRequest&, const Model::ListProtectedJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtectedJobsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListProtectedQueriesRequest&, const Model::ListProtectedQueriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtectedQueriesResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListSchemasRequest&, const Model::ListSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemasResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::PopulateIdMappingTableRequest&, const Model::PopulateIdMappingTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PopulateIdMappingTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::PreviewPrivacyImpactRequest&, const Model::PreviewPrivacyImpactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PreviewPrivacyImpactResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::StartProtectedJobRequest&, const Model::StartProtectedJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartProtectedJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::StartProtectedQueryRequest&, const Model::StartProtectedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartProtectedQueryResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateAnalysisTemplateRequest&, const Model::UpdateAnalysisTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnalysisTemplateResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateCollaborationRequest&, const Model::UpdateCollaborationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCollaborationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateConfiguredAudienceModelAssociationRequest&, const Model::UpdateConfiguredAudienceModelAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfiguredAudienceModelAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateConfiguredTableRequest&, const Model::UpdateConfiguredTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfiguredTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateConfiguredTableAnalysisRuleRequest&, const Model::UpdateConfiguredTableAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfiguredTableAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateConfiguredTableAssociationRequest&, const Model::UpdateConfiguredTableAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfiguredTableAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateConfiguredTableAssociationAnalysisRuleRequest&, const Model::UpdateConfiguredTableAssociationAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfiguredTableAssociationAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateIdMappingTableRequest&, const Model::UpdateIdMappingTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIdMappingTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateIdNamespaceAssociationRequest&, const Model::UpdateIdNamespaceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIdNamespaceAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateMembershipRequest&, const Model::UpdateMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMembershipResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdatePrivacyBudgetTemplateRequest&, const Model::UpdatePrivacyBudgetTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePrivacyBudgetTemplateResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateProtectedJobRequest&, const Model::UpdateProtectedJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProtectedJobResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateProtectedQueryRequest&, const Model::UpdateProtectedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProtectedQueryResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CleanRooms
} // namespace Aws
