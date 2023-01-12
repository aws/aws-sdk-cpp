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
#include <aws/cleanrooms/model/BatchGetSchemaResult.h>
#include <aws/cleanrooms/model/CreateCollaborationResult.h>
#include <aws/cleanrooms/model/CreateConfiguredTableResult.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAnalysisRuleResult.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAssociationResult.h>
#include <aws/cleanrooms/model/CreateMembershipResult.h>
#include <aws/cleanrooms/model/DeleteCollaborationResult.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableResult.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAnalysisRuleResult.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAssociationResult.h>
#include <aws/cleanrooms/model/DeleteMemberResult.h>
#include <aws/cleanrooms/model/DeleteMembershipResult.h>
#include <aws/cleanrooms/model/GetCollaborationResult.h>
#include <aws/cleanrooms/model/GetConfiguredTableResult.h>
#include <aws/cleanrooms/model/GetConfiguredTableAnalysisRuleResult.h>
#include <aws/cleanrooms/model/GetConfiguredTableAssociationResult.h>
#include <aws/cleanrooms/model/GetMembershipResult.h>
#include <aws/cleanrooms/model/GetProtectedQueryResult.h>
#include <aws/cleanrooms/model/GetSchemaResult.h>
#include <aws/cleanrooms/model/GetSchemaAnalysisRuleResult.h>
#include <aws/cleanrooms/model/ListCollaborationsResult.h>
#include <aws/cleanrooms/model/ListConfiguredTableAssociationsResult.h>
#include <aws/cleanrooms/model/ListConfiguredTablesResult.h>
#include <aws/cleanrooms/model/ListMembersResult.h>
#include <aws/cleanrooms/model/ListMembershipsResult.h>
#include <aws/cleanrooms/model/ListProtectedQueriesResult.h>
#include <aws/cleanrooms/model/ListSchemasResult.h>
#include <aws/cleanrooms/model/StartProtectedQueryResult.h>
#include <aws/cleanrooms/model/UpdateCollaborationResult.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableResult.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAnalysisRuleResult.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAssociationResult.h>
#include <aws/cleanrooms/model/UpdateMembershipResult.h>
#include <aws/cleanrooms/model/UpdateProtectedQueryResult.h>
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
    using CleanRoomsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CleanRoomsEndpointProviderBase = Aws::CleanRooms::Endpoint::CleanRoomsEndpointProviderBase;
    using CleanRoomsEndpointProvider = Aws::CleanRooms::Endpoint::CleanRoomsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CleanRoomsClient header */
      class BatchGetSchemaRequest;
      class CreateCollaborationRequest;
      class CreateConfiguredTableRequest;
      class CreateConfiguredTableAnalysisRuleRequest;
      class CreateConfiguredTableAssociationRequest;
      class CreateMembershipRequest;
      class DeleteCollaborationRequest;
      class DeleteConfiguredTableRequest;
      class DeleteConfiguredTableAnalysisRuleRequest;
      class DeleteConfiguredTableAssociationRequest;
      class DeleteMemberRequest;
      class DeleteMembershipRequest;
      class GetCollaborationRequest;
      class GetConfiguredTableRequest;
      class GetConfiguredTableAnalysisRuleRequest;
      class GetConfiguredTableAssociationRequest;
      class GetMembershipRequest;
      class GetProtectedQueryRequest;
      class GetSchemaRequest;
      class GetSchemaAnalysisRuleRequest;
      class ListCollaborationsRequest;
      class ListConfiguredTableAssociationsRequest;
      class ListConfiguredTablesRequest;
      class ListMembersRequest;
      class ListMembershipsRequest;
      class ListProtectedQueriesRequest;
      class ListSchemasRequest;
      class StartProtectedQueryRequest;
      class UpdateCollaborationRequest;
      class UpdateConfiguredTableRequest;
      class UpdateConfiguredTableAnalysisRuleRequest;
      class UpdateConfiguredTableAssociationRequest;
      class UpdateMembershipRequest;
      class UpdateProtectedQueryRequest;
      /* End of service model forward declarations required in CleanRoomsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetSchemaResult, CleanRoomsError> BatchGetSchemaOutcome;
      typedef Aws::Utils::Outcome<CreateCollaborationResult, CleanRoomsError> CreateCollaborationOutcome;
      typedef Aws::Utils::Outcome<CreateConfiguredTableResult, CleanRoomsError> CreateConfiguredTableOutcome;
      typedef Aws::Utils::Outcome<CreateConfiguredTableAnalysisRuleResult, CleanRoomsError> CreateConfiguredTableAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<CreateConfiguredTableAssociationResult, CleanRoomsError> CreateConfiguredTableAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateMembershipResult, CleanRoomsError> CreateMembershipOutcome;
      typedef Aws::Utils::Outcome<DeleteCollaborationResult, CleanRoomsError> DeleteCollaborationOutcome;
      typedef Aws::Utils::Outcome<DeleteConfiguredTableResult, CleanRoomsError> DeleteConfiguredTableOutcome;
      typedef Aws::Utils::Outcome<DeleteConfiguredTableAnalysisRuleResult, CleanRoomsError> DeleteConfiguredTableAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteConfiguredTableAssociationResult, CleanRoomsError> DeleteConfiguredTableAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteMemberResult, CleanRoomsError> DeleteMemberOutcome;
      typedef Aws::Utils::Outcome<DeleteMembershipResult, CleanRoomsError> DeleteMembershipOutcome;
      typedef Aws::Utils::Outcome<GetCollaborationResult, CleanRoomsError> GetCollaborationOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredTableResult, CleanRoomsError> GetConfiguredTableOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredTableAnalysisRuleResult, CleanRoomsError> GetConfiguredTableAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<GetConfiguredTableAssociationResult, CleanRoomsError> GetConfiguredTableAssociationOutcome;
      typedef Aws::Utils::Outcome<GetMembershipResult, CleanRoomsError> GetMembershipOutcome;
      typedef Aws::Utils::Outcome<GetProtectedQueryResult, CleanRoomsError> GetProtectedQueryOutcome;
      typedef Aws::Utils::Outcome<GetSchemaResult, CleanRoomsError> GetSchemaOutcome;
      typedef Aws::Utils::Outcome<GetSchemaAnalysisRuleResult, CleanRoomsError> GetSchemaAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<ListCollaborationsResult, CleanRoomsError> ListCollaborationsOutcome;
      typedef Aws::Utils::Outcome<ListConfiguredTableAssociationsResult, CleanRoomsError> ListConfiguredTableAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListConfiguredTablesResult, CleanRoomsError> ListConfiguredTablesOutcome;
      typedef Aws::Utils::Outcome<ListMembersResult, CleanRoomsError> ListMembersOutcome;
      typedef Aws::Utils::Outcome<ListMembershipsResult, CleanRoomsError> ListMembershipsOutcome;
      typedef Aws::Utils::Outcome<ListProtectedQueriesResult, CleanRoomsError> ListProtectedQueriesOutcome;
      typedef Aws::Utils::Outcome<ListSchemasResult, CleanRoomsError> ListSchemasOutcome;
      typedef Aws::Utils::Outcome<StartProtectedQueryResult, CleanRoomsError> StartProtectedQueryOutcome;
      typedef Aws::Utils::Outcome<UpdateCollaborationResult, CleanRoomsError> UpdateCollaborationOutcome;
      typedef Aws::Utils::Outcome<UpdateConfiguredTableResult, CleanRoomsError> UpdateConfiguredTableOutcome;
      typedef Aws::Utils::Outcome<UpdateConfiguredTableAnalysisRuleResult, CleanRoomsError> UpdateConfiguredTableAnalysisRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateConfiguredTableAssociationResult, CleanRoomsError> UpdateConfiguredTableAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateMembershipResult, CleanRoomsError> UpdateMembershipOutcome;
      typedef Aws::Utils::Outcome<UpdateProtectedQueryResult, CleanRoomsError> UpdateProtectedQueryOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetSchemaOutcome> BatchGetSchemaOutcomeCallable;
      typedef std::future<CreateCollaborationOutcome> CreateCollaborationOutcomeCallable;
      typedef std::future<CreateConfiguredTableOutcome> CreateConfiguredTableOutcomeCallable;
      typedef std::future<CreateConfiguredTableAnalysisRuleOutcome> CreateConfiguredTableAnalysisRuleOutcomeCallable;
      typedef std::future<CreateConfiguredTableAssociationOutcome> CreateConfiguredTableAssociationOutcomeCallable;
      typedef std::future<CreateMembershipOutcome> CreateMembershipOutcomeCallable;
      typedef std::future<DeleteCollaborationOutcome> DeleteCollaborationOutcomeCallable;
      typedef std::future<DeleteConfiguredTableOutcome> DeleteConfiguredTableOutcomeCallable;
      typedef std::future<DeleteConfiguredTableAnalysisRuleOutcome> DeleteConfiguredTableAnalysisRuleOutcomeCallable;
      typedef std::future<DeleteConfiguredTableAssociationOutcome> DeleteConfiguredTableAssociationOutcomeCallable;
      typedef std::future<DeleteMemberOutcome> DeleteMemberOutcomeCallable;
      typedef std::future<DeleteMembershipOutcome> DeleteMembershipOutcomeCallable;
      typedef std::future<GetCollaborationOutcome> GetCollaborationOutcomeCallable;
      typedef std::future<GetConfiguredTableOutcome> GetConfiguredTableOutcomeCallable;
      typedef std::future<GetConfiguredTableAnalysisRuleOutcome> GetConfiguredTableAnalysisRuleOutcomeCallable;
      typedef std::future<GetConfiguredTableAssociationOutcome> GetConfiguredTableAssociationOutcomeCallable;
      typedef std::future<GetMembershipOutcome> GetMembershipOutcomeCallable;
      typedef std::future<GetProtectedQueryOutcome> GetProtectedQueryOutcomeCallable;
      typedef std::future<GetSchemaOutcome> GetSchemaOutcomeCallable;
      typedef std::future<GetSchemaAnalysisRuleOutcome> GetSchemaAnalysisRuleOutcomeCallable;
      typedef std::future<ListCollaborationsOutcome> ListCollaborationsOutcomeCallable;
      typedef std::future<ListConfiguredTableAssociationsOutcome> ListConfiguredTableAssociationsOutcomeCallable;
      typedef std::future<ListConfiguredTablesOutcome> ListConfiguredTablesOutcomeCallable;
      typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
      typedef std::future<ListMembershipsOutcome> ListMembershipsOutcomeCallable;
      typedef std::future<ListProtectedQueriesOutcome> ListProtectedQueriesOutcomeCallable;
      typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
      typedef std::future<StartProtectedQueryOutcome> StartProtectedQueryOutcomeCallable;
      typedef std::future<UpdateCollaborationOutcome> UpdateCollaborationOutcomeCallable;
      typedef std::future<UpdateConfiguredTableOutcome> UpdateConfiguredTableOutcomeCallable;
      typedef std::future<UpdateConfiguredTableAnalysisRuleOutcome> UpdateConfiguredTableAnalysisRuleOutcomeCallable;
      typedef std::future<UpdateConfiguredTableAssociationOutcome> UpdateConfiguredTableAssociationOutcomeCallable;
      typedef std::future<UpdateMembershipOutcome> UpdateMembershipOutcomeCallable;
      typedef std::future<UpdateProtectedQueryOutcome> UpdateProtectedQueryOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CleanRoomsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CleanRoomsClient*, const Model::BatchGetSchemaRequest&, const Model::BatchGetSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetSchemaResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateCollaborationRequest&, const Model::CreateCollaborationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCollaborationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateConfiguredTableRequest&, const Model::CreateConfiguredTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfiguredTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateConfiguredTableAnalysisRuleRequest&, const Model::CreateConfiguredTableAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfiguredTableAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateConfiguredTableAssociationRequest&, const Model::CreateConfiguredTableAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfiguredTableAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::CreateMembershipRequest&, const Model::CreateMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMembershipResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteCollaborationRequest&, const Model::DeleteCollaborationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCollaborationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteConfiguredTableRequest&, const Model::DeleteConfiguredTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteConfiguredTableAnalysisRuleRequest&, const Model::DeleteConfiguredTableAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredTableAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteConfiguredTableAssociationRequest&, const Model::DeleteConfiguredTableAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfiguredTableAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteMemberRequest&, const Model::DeleteMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMemberResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::DeleteMembershipRequest&, const Model::DeleteMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMembershipResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetCollaborationRequest&, const Model::GetCollaborationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCollaborationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetConfiguredTableRequest&, const Model::GetConfiguredTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetConfiguredTableAnalysisRuleRequest&, const Model::GetConfiguredTableAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredTableAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetConfiguredTableAssociationRequest&, const Model::GetConfiguredTableAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfiguredTableAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetMembershipRequest&, const Model::GetMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMembershipResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetProtectedQueryRequest&, const Model::GetProtectedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProtectedQueryResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetSchemaRequest&, const Model::GetSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::GetSchemaAnalysisRuleRequest&, const Model::GetSchemaAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListCollaborationsRequest&, const Model::ListCollaborationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollaborationsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListConfiguredTableAssociationsRequest&, const Model::ListConfiguredTableAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfiguredTableAssociationsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListConfiguredTablesRequest&, const Model::ListConfiguredTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfiguredTablesResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListMembershipsRequest&, const Model::ListMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembershipsResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListProtectedQueriesRequest&, const Model::ListProtectedQueriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtectedQueriesResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::ListSchemasRequest&, const Model::ListSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemasResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::StartProtectedQueryRequest&, const Model::StartProtectedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartProtectedQueryResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateCollaborationRequest&, const Model::UpdateCollaborationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCollaborationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateConfiguredTableRequest&, const Model::UpdateConfiguredTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfiguredTableResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateConfiguredTableAnalysisRuleRequest&, const Model::UpdateConfiguredTableAnalysisRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfiguredTableAnalysisRuleResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateConfiguredTableAssociationRequest&, const Model::UpdateConfiguredTableAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfiguredTableAssociationResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateMembershipRequest&, const Model::UpdateMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMembershipResponseReceivedHandler;
    typedef std::function<void(const CleanRoomsClient*, const Model::UpdateProtectedQueryRequest&, const Model::UpdateProtectedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProtectedQueryResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CleanRooms
} // namespace Aws
