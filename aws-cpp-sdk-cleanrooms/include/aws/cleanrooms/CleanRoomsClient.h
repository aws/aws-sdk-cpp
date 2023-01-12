/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cleanrooms/CleanRoomsServiceClientModel.h>

namespace Aws
{
namespace CleanRooms
{
  /**
   *  <p>AWS Clean Rooms is in preview release and is subject to change.</p>
   *  <p>Welcome to the <i>AWS Clean Rooms API Reference</i>.</p> <p>AWS Clean
   * Rooms is an AWS service that helps multiple parties to join their data together
   * in a secure collaboration workspace. In the collaboration, members who can query
   * and receive results can get insights into the combined data without either party
   * getting access to the other party's raw data.</p> <p>To learn more about AWS
   * Clean Rooms concepts, procedures, and best practices, see the <a
   * href="https://docs.aws.amazon.com/clean-rooms/latest/userguide/what-is.html">AWS
   * Clean Rooms User Guide</a>.</p>
   */
  class AWS_CLEANROOMS_API CleanRoomsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CleanRoomsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CleanRoomsClient(const Aws::CleanRooms::CleanRoomsClientConfiguration& clientConfiguration = Aws::CleanRooms::CleanRoomsClientConfiguration(),
                         std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider = Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CleanRoomsClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider = Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG),
                         const Aws::CleanRooms::CleanRoomsClientConfiguration& clientConfiguration = Aws::CleanRooms::CleanRoomsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CleanRoomsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider = Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG),
                         const Aws::CleanRooms::CleanRoomsClientConfiguration& clientConfiguration = Aws::CleanRooms::CleanRoomsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CleanRoomsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CleanRoomsClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CleanRoomsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CleanRoomsClient();

        /**
         * <p>Retrieves multiple schemas by their identifiers.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/BatchGetSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetSchemaOutcome BatchGetSchema(const Model::BatchGetSchemaRequest& request) const;

        /**
         * A Callable wrapper for BatchGetSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetSchemaOutcomeCallable BatchGetSchemaCallable(const Model::BatchGetSchemaRequest& request) const;

        /**
         * An Async wrapper for BatchGetSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetSchemaAsync(const Model::BatchGetSchemaRequest& request, const BatchGetSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CreateCollaboration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCollaborationOutcome CreateCollaboration(const Model::CreateCollaborationRequest& request) const;

        /**
         * A Callable wrapper for CreateCollaboration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCollaborationOutcomeCallable CreateCollaborationCallable(const Model::CreateCollaborationRequest& request) const;

        /**
         * An Async wrapper for CreateCollaboration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCollaborationAsync(const Model::CreateCollaborationRequest& request, const CreateCollaborationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new configured table resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CreateConfiguredTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfiguredTableOutcome CreateConfiguredTable(const Model::CreateConfiguredTableRequest& request) const;

        /**
         * A Callable wrapper for CreateConfiguredTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfiguredTableOutcomeCallable CreateConfiguredTableCallable(const Model::CreateConfiguredTableRequest& request) const;

        /**
         * An Async wrapper for CreateConfiguredTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfiguredTableAsync(const Model::CreateConfiguredTableRequest& request, const CreateConfiguredTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new analysis rule for a configured table. Currently, only one
         * analysis rule can be created for a given configured table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CreateConfiguredTableAnalysisRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfiguredTableAnalysisRuleOutcome CreateConfiguredTableAnalysisRule(const Model::CreateConfiguredTableAnalysisRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateConfiguredTableAnalysisRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfiguredTableAnalysisRuleOutcomeCallable CreateConfiguredTableAnalysisRuleCallable(const Model::CreateConfiguredTableAnalysisRuleRequest& request) const;

        /**
         * An Async wrapper for CreateConfiguredTableAnalysisRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfiguredTableAnalysisRuleAsync(const Model::CreateConfiguredTableAnalysisRuleRequest& request, const CreateConfiguredTableAnalysisRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a configured table association. A configured table association links
         * a configured table with a collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CreateConfiguredTableAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfiguredTableAssociationOutcome CreateConfiguredTableAssociation(const Model::CreateConfiguredTableAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateConfiguredTableAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfiguredTableAssociationOutcomeCallable CreateConfiguredTableAssociationCallable(const Model::CreateConfiguredTableAssociationRequest& request) const;

        /**
         * An Async wrapper for CreateConfiguredTableAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfiguredTableAssociationAsync(const Model::CreateConfiguredTableAssociationRequest& request, const CreateConfiguredTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a membership for a specific collaboration identifier and joins the
         * collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CreateMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembershipOutcome CreateMembership(const Model::CreateMembershipRequest& request) const;

        /**
         * A Callable wrapper for CreateMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMembershipOutcomeCallable CreateMembershipCallable(const Model::CreateMembershipRequest& request) const;

        /**
         * An Async wrapper for CreateMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMembershipAsync(const Model::CreateMembershipRequest& request, const CreateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a collaboration. It can only be called by the collaboration
         * owner.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DeleteCollaboration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCollaborationOutcome DeleteCollaboration(const Model::DeleteCollaborationRequest& request) const;

        /**
         * A Callable wrapper for DeleteCollaboration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCollaborationOutcomeCallable DeleteCollaborationCallable(const Model::DeleteCollaborationRequest& request) const;

        /**
         * An Async wrapper for DeleteCollaboration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCollaborationAsync(const Model::DeleteCollaborationRequest& request, const DeleteCollaborationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a configured table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DeleteConfiguredTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfiguredTableOutcome DeleteConfiguredTable(const Model::DeleteConfiguredTableRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfiguredTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfiguredTableOutcomeCallable DeleteConfiguredTableCallable(const Model::DeleteConfiguredTableRequest& request) const;

        /**
         * An Async wrapper for DeleteConfiguredTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfiguredTableAsync(const Model::DeleteConfiguredTableRequest& request, const DeleteConfiguredTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a configured table analysis rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DeleteConfiguredTableAnalysisRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfiguredTableAnalysisRuleOutcome DeleteConfiguredTableAnalysisRule(const Model::DeleteConfiguredTableAnalysisRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfiguredTableAnalysisRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfiguredTableAnalysisRuleOutcomeCallable DeleteConfiguredTableAnalysisRuleCallable(const Model::DeleteConfiguredTableAnalysisRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteConfiguredTableAnalysisRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfiguredTableAnalysisRuleAsync(const Model::DeleteConfiguredTableAnalysisRuleRequest& request, const DeleteConfiguredTableAnalysisRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a configured table association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DeleteConfiguredTableAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfiguredTableAssociationOutcome DeleteConfiguredTableAssociation(const Model::DeleteConfiguredTableAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfiguredTableAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfiguredTableAssociationOutcomeCallable DeleteConfiguredTableAssociationCallable(const Model::DeleteConfiguredTableAssociationRequest& request) const;

        /**
         * An Async wrapper for DeleteConfiguredTableAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfiguredTableAssociationAsync(const Model::DeleteConfiguredTableAssociationRequest& request, const DeleteConfiguredTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified member from a collaboration. The removed member is
         * placed in the Removed status and can't interact with the collaboration. The
         * removed member's data is inaccessible to active members of the
         * collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DeleteMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMemberOutcome DeleteMember(const Model::DeleteMemberRequest& request) const;

        /**
         * A Callable wrapper for DeleteMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMemberOutcomeCallable DeleteMemberCallable(const Model::DeleteMemberRequest& request) const;

        /**
         * An Async wrapper for DeleteMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMemberAsync(const Model::DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified membership. All resources under a membership must be
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DeleteMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembershipOutcome DeleteMembership(const Model::DeleteMembershipRequest& request) const;

        /**
         * A Callable wrapper for DeleteMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMembershipOutcomeCallable DeleteMembershipCallable(const Model::DeleteMembershipRequest& request) const;

        /**
         * An Async wrapper for DeleteMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMembershipAsync(const Model::DeleteMembershipRequest& request, const DeleteMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about a collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetCollaboration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCollaborationOutcome GetCollaboration(const Model::GetCollaborationRequest& request) const;

        /**
         * A Callable wrapper for GetCollaboration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCollaborationOutcomeCallable GetCollaborationCallable(const Model::GetCollaborationRequest& request) const;

        /**
         * An Async wrapper for GetCollaboration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCollaborationAsync(const Model::GetCollaborationRequest& request, const GetCollaborationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a configured table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetConfiguredTable">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfiguredTableOutcome GetConfiguredTable(const Model::GetConfiguredTableRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguredTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfiguredTableOutcomeCallable GetConfiguredTableCallable(const Model::GetConfiguredTableRequest& request) const;

        /**
         * An Async wrapper for GetConfiguredTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfiguredTableAsync(const Model::GetConfiguredTableRequest& request, const GetConfiguredTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a configured table analysis rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetConfiguredTableAnalysisRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfiguredTableAnalysisRuleOutcome GetConfiguredTableAnalysisRule(const Model::GetConfiguredTableAnalysisRuleRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguredTableAnalysisRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfiguredTableAnalysisRuleOutcomeCallable GetConfiguredTableAnalysisRuleCallable(const Model::GetConfiguredTableAnalysisRuleRequest& request) const;

        /**
         * An Async wrapper for GetConfiguredTableAnalysisRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfiguredTableAnalysisRuleAsync(const Model::GetConfiguredTableAnalysisRuleRequest& request, const GetConfiguredTableAnalysisRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a configured table association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetConfiguredTableAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfiguredTableAssociationOutcome GetConfiguredTableAssociation(const Model::GetConfiguredTableAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguredTableAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfiguredTableAssociationOutcomeCallable GetConfiguredTableAssociationCallable(const Model::GetConfiguredTableAssociationRequest& request) const;

        /**
         * An Async wrapper for GetConfiguredTableAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfiguredTableAssociationAsync(const Model::GetConfiguredTableAssociationRequest& request, const GetConfiguredTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a specified membership for an identifier.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembershipOutcome GetMembership(const Model::GetMembershipRequest& request) const;

        /**
         * A Callable wrapper for GetMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMembershipOutcomeCallable GetMembershipCallable(const Model::GetMembershipRequest& request) const;

        /**
         * An Async wrapper for GetMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMembershipAsync(const Model::GetMembershipRequest& request, const GetMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns query processing metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetProtectedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProtectedQueryOutcome GetProtectedQuery(const Model::GetProtectedQueryRequest& request) const;

        /**
         * A Callable wrapper for GetProtectedQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProtectedQueryOutcomeCallable GetProtectedQueryCallable(const Model::GetProtectedQueryRequest& request) const;

        /**
         * An Async wrapper for GetProtectedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProtectedQueryAsync(const Model::GetProtectedQueryRequest& request, const GetProtectedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the schema for a relation within a collaboration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaOutcome GetSchema(const Model::GetSchemaRequest& request) const;

        /**
         * A Callable wrapper for GetSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSchemaOutcomeCallable GetSchemaCallable(const Model::GetSchemaRequest& request) const;

        /**
         * An Async wrapper for GetSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaAsync(const Model::GetSchemaRequest& request, const GetSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a schema analysis rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetSchemaAnalysisRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaAnalysisRuleOutcome GetSchemaAnalysisRule(const Model::GetSchemaAnalysisRuleRequest& request) const;

        /**
         * A Callable wrapper for GetSchemaAnalysisRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSchemaAnalysisRuleOutcomeCallable GetSchemaAnalysisRuleCallable(const Model::GetSchemaAnalysisRuleRequest& request) const;

        /**
         * An Async wrapper for GetSchemaAnalysisRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaAnalysisRuleAsync(const Model::GetSchemaAnalysisRuleRequest& request, const GetSchemaAnalysisRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists collaborations the caller owns, is active in, or has been invited
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ListCollaborations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollaborationsOutcome ListCollaborations(const Model::ListCollaborationsRequest& request) const;

        /**
         * A Callable wrapper for ListCollaborations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCollaborationsOutcomeCallable ListCollaborationsCallable(const Model::ListCollaborationsRequest& request) const;

        /**
         * An Async wrapper for ListCollaborations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCollaborationsAsync(const Model::ListCollaborationsRequest& request, const ListCollaborationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists configured table associations for a membership.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ListConfiguredTableAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfiguredTableAssociationsOutcome ListConfiguredTableAssociations(const Model::ListConfiguredTableAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListConfiguredTableAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfiguredTableAssociationsOutcomeCallable ListConfiguredTableAssociationsCallable(const Model::ListConfiguredTableAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListConfiguredTableAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfiguredTableAssociationsAsync(const Model::ListConfiguredTableAssociationsRequest& request, const ListConfiguredTableAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists configured tables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ListConfiguredTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfiguredTablesOutcome ListConfiguredTables(const Model::ListConfiguredTablesRequest& request) const;

        /**
         * A Callable wrapper for ListConfiguredTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfiguredTablesOutcomeCallable ListConfiguredTablesCallable(const Model::ListConfiguredTablesRequest& request) const;

        /**
         * An Async wrapper for ListConfiguredTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfiguredTablesAsync(const Model::ListConfiguredTablesRequest& request, const ListConfiguredTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all members within a collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * A Callable wrapper for ListMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembersOutcomeCallable ListMembersCallable(const Model::ListMembersRequest& request) const;

        /**
         * An Async wrapper for ListMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembersAsync(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all memberships resources within the caller's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ListMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembershipsOutcome ListMemberships(const Model::ListMembershipsRequest& request) const;

        /**
         * A Callable wrapper for ListMemberships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembershipsOutcomeCallable ListMembershipsCallable(const Model::ListMembershipsRequest& request) const;

        /**
         * An Async wrapper for ListMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembershipsAsync(const Model::ListMembershipsRequest& request, const ListMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists protected queries, sorted by the most recent query.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ListProtectedQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtectedQueriesOutcome ListProtectedQueries(const Model::ListProtectedQueriesRequest& request) const;

        /**
         * A Callable wrapper for ListProtectedQueries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProtectedQueriesOutcomeCallable ListProtectedQueriesCallable(const Model::ListProtectedQueriesRequest& request) const;

        /**
         * An Async wrapper for ListProtectedQueries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProtectedQueriesAsync(const Model::ListProtectedQueriesRequest& request, const ListProtectedQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the schemas for relations within a collaboration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;

        /**
         * A Callable wrapper for ListSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchemasOutcomeCallable ListSchemasCallable(const Model::ListSchemasRequest& request) const;

        /**
         * An Async wrapper for ListSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemasAsync(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a protected query that is started by AWS Clean Rooms.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/StartProtectedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::StartProtectedQueryOutcome StartProtectedQuery(const Model::StartProtectedQueryRequest& request) const;

        /**
         * A Callable wrapper for StartProtectedQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartProtectedQueryOutcomeCallable StartProtectedQueryCallable(const Model::StartProtectedQueryRequest& request) const;

        /**
         * An Async wrapper for StartProtectedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartProtectedQueryAsync(const Model::StartProtectedQueryRequest& request, const StartProtectedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates collaboration metadata and can only be called by the collaboration
         * owner.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/UpdateCollaboration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCollaborationOutcome UpdateCollaboration(const Model::UpdateCollaborationRequest& request) const;

        /**
         * A Callable wrapper for UpdateCollaboration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCollaborationOutcomeCallable UpdateCollaborationCallable(const Model::UpdateCollaborationRequest& request) const;

        /**
         * An Async wrapper for UpdateCollaboration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCollaborationAsync(const Model::UpdateCollaborationRequest& request, const UpdateCollaborationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a configured table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/UpdateConfiguredTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfiguredTableOutcome UpdateConfiguredTable(const Model::UpdateConfiguredTableRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfiguredTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfiguredTableOutcomeCallable UpdateConfiguredTableCallable(const Model::UpdateConfiguredTableRequest& request) const;

        /**
         * An Async wrapper for UpdateConfiguredTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfiguredTableAsync(const Model::UpdateConfiguredTableRequest& request, const UpdateConfiguredTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a configured table analysis rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/UpdateConfiguredTableAnalysisRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfiguredTableAnalysisRuleOutcome UpdateConfiguredTableAnalysisRule(const Model::UpdateConfiguredTableAnalysisRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfiguredTableAnalysisRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfiguredTableAnalysisRuleOutcomeCallable UpdateConfiguredTableAnalysisRuleCallable(const Model::UpdateConfiguredTableAnalysisRuleRequest& request) const;

        /**
         * An Async wrapper for UpdateConfiguredTableAnalysisRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfiguredTableAnalysisRuleAsync(const Model::UpdateConfiguredTableAnalysisRuleRequest& request, const UpdateConfiguredTableAnalysisRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a configured table association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/UpdateConfiguredTableAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfiguredTableAssociationOutcome UpdateConfiguredTableAssociation(const Model::UpdateConfiguredTableAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfiguredTableAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfiguredTableAssociationOutcomeCallable UpdateConfiguredTableAssociationCallable(const Model::UpdateConfiguredTableAssociationRequest& request) const;

        /**
         * An Async wrapper for UpdateConfiguredTableAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfiguredTableAssociationAsync(const Model::UpdateConfiguredTableAssociationRequest& request, const UpdateConfiguredTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/UpdateMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMembershipOutcome UpdateMembership(const Model::UpdateMembershipRequest& request) const;

        /**
         * A Callable wrapper for UpdateMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMembershipOutcomeCallable UpdateMembershipCallable(const Model::UpdateMembershipRequest& request) const;

        /**
         * An Async wrapper for UpdateMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMembershipAsync(const Model::UpdateMembershipRequest& request, const UpdateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the processing of a currently running query.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/UpdateProtectedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProtectedQueryOutcome UpdateProtectedQuery(const Model::UpdateProtectedQueryRequest& request) const;

        /**
         * A Callable wrapper for UpdateProtectedQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProtectedQueryOutcomeCallable UpdateProtectedQueryCallable(const Model::UpdateProtectedQueryRequest& request) const;

        /**
         * An Async wrapper for UpdateProtectedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProtectedQueryAsync(const Model::UpdateProtectedQueryRequest& request, const UpdateProtectedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CleanRoomsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CleanRoomsClient>;
      void init(const CleanRoomsClientConfiguration& clientConfiguration);

      CleanRoomsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CleanRoomsEndpointProviderBase> m_endpointProvider;
  };

} // namespace CleanRooms
} // namespace Aws
