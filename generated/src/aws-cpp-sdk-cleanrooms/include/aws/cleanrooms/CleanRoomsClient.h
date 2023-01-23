﻿/**
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
        template<typename BatchGetSchemaRequestT = Model::BatchGetSchemaRequest>
        Model::BatchGetSchemaOutcomeCallable BatchGetSchemaCallable(const BatchGetSchemaRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::BatchGetSchema, request);
        }

        /**
         * An Async wrapper for BatchGetSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetSchemaRequestT = Model::BatchGetSchemaRequest>
        void BatchGetSchemaAsync(const BatchGetSchemaRequestT& request, const BatchGetSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::BatchGetSchema, request, handler, context);
        }

        /**
         * <p>Creates a new collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CreateCollaboration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCollaborationOutcome CreateCollaboration(const Model::CreateCollaborationRequest& request) const;

        /**
         * A Callable wrapper for CreateCollaboration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCollaborationRequestT = Model::CreateCollaborationRequest>
        Model::CreateCollaborationOutcomeCallable CreateCollaborationCallable(const CreateCollaborationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::CreateCollaboration, request);
        }

        /**
         * An Async wrapper for CreateCollaboration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCollaborationRequestT = Model::CreateCollaborationRequest>
        void CreateCollaborationAsync(const CreateCollaborationRequestT& request, const CreateCollaborationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::CreateCollaboration, request, handler, context);
        }

        /**
         * <p>Creates a new configured table resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CreateConfiguredTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfiguredTableOutcome CreateConfiguredTable(const Model::CreateConfiguredTableRequest& request) const;

        /**
         * A Callable wrapper for CreateConfiguredTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfiguredTableRequestT = Model::CreateConfiguredTableRequest>
        Model::CreateConfiguredTableOutcomeCallable CreateConfiguredTableCallable(const CreateConfiguredTableRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::CreateConfiguredTable, request);
        }

        /**
         * An Async wrapper for CreateConfiguredTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfiguredTableRequestT = Model::CreateConfiguredTableRequest>
        void CreateConfiguredTableAsync(const CreateConfiguredTableRequestT& request, const CreateConfiguredTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::CreateConfiguredTable, request, handler, context);
        }

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
        template<typename CreateConfiguredTableAnalysisRuleRequestT = Model::CreateConfiguredTableAnalysisRuleRequest>
        Model::CreateConfiguredTableAnalysisRuleOutcomeCallable CreateConfiguredTableAnalysisRuleCallable(const CreateConfiguredTableAnalysisRuleRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::CreateConfiguredTableAnalysisRule, request);
        }

        /**
         * An Async wrapper for CreateConfiguredTableAnalysisRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfiguredTableAnalysisRuleRequestT = Model::CreateConfiguredTableAnalysisRuleRequest>
        void CreateConfiguredTableAnalysisRuleAsync(const CreateConfiguredTableAnalysisRuleRequestT& request, const CreateConfiguredTableAnalysisRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::CreateConfiguredTableAnalysisRule, request, handler, context);
        }

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
        template<typename CreateConfiguredTableAssociationRequestT = Model::CreateConfiguredTableAssociationRequest>
        Model::CreateConfiguredTableAssociationOutcomeCallable CreateConfiguredTableAssociationCallable(const CreateConfiguredTableAssociationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::CreateConfiguredTableAssociation, request);
        }

        /**
         * An Async wrapper for CreateConfiguredTableAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfiguredTableAssociationRequestT = Model::CreateConfiguredTableAssociationRequest>
        void CreateConfiguredTableAssociationAsync(const CreateConfiguredTableAssociationRequestT& request, const CreateConfiguredTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::CreateConfiguredTableAssociation, request, handler, context);
        }

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
        template<typename CreateMembershipRequestT = Model::CreateMembershipRequest>
        Model::CreateMembershipOutcomeCallable CreateMembershipCallable(const CreateMembershipRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::CreateMembership, request);
        }

        /**
         * An Async wrapper for CreateMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMembershipRequestT = Model::CreateMembershipRequest>
        void CreateMembershipAsync(const CreateMembershipRequestT& request, const CreateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::CreateMembership, request, handler, context);
        }

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
        template<typename DeleteCollaborationRequestT = Model::DeleteCollaborationRequest>
        Model::DeleteCollaborationOutcomeCallable DeleteCollaborationCallable(const DeleteCollaborationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::DeleteCollaboration, request);
        }

        /**
         * An Async wrapper for DeleteCollaboration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCollaborationRequestT = Model::DeleteCollaborationRequest>
        void DeleteCollaborationAsync(const DeleteCollaborationRequestT& request, const DeleteCollaborationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::DeleteCollaboration, request, handler, context);
        }

        /**
         * <p>Deletes a configured table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DeleteConfiguredTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfiguredTableOutcome DeleteConfiguredTable(const Model::DeleteConfiguredTableRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfiguredTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfiguredTableRequestT = Model::DeleteConfiguredTableRequest>
        Model::DeleteConfiguredTableOutcomeCallable DeleteConfiguredTableCallable(const DeleteConfiguredTableRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::DeleteConfiguredTable, request);
        }

        /**
         * An Async wrapper for DeleteConfiguredTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfiguredTableRequestT = Model::DeleteConfiguredTableRequest>
        void DeleteConfiguredTableAsync(const DeleteConfiguredTableRequestT& request, const DeleteConfiguredTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::DeleteConfiguredTable, request, handler, context);
        }

        /**
         * <p>Deletes a configured table analysis rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DeleteConfiguredTableAnalysisRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfiguredTableAnalysisRuleOutcome DeleteConfiguredTableAnalysisRule(const Model::DeleteConfiguredTableAnalysisRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfiguredTableAnalysisRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfiguredTableAnalysisRuleRequestT = Model::DeleteConfiguredTableAnalysisRuleRequest>
        Model::DeleteConfiguredTableAnalysisRuleOutcomeCallable DeleteConfiguredTableAnalysisRuleCallable(const DeleteConfiguredTableAnalysisRuleRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::DeleteConfiguredTableAnalysisRule, request);
        }

        /**
         * An Async wrapper for DeleteConfiguredTableAnalysisRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfiguredTableAnalysisRuleRequestT = Model::DeleteConfiguredTableAnalysisRuleRequest>
        void DeleteConfiguredTableAnalysisRuleAsync(const DeleteConfiguredTableAnalysisRuleRequestT& request, const DeleteConfiguredTableAnalysisRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::DeleteConfiguredTableAnalysisRule, request, handler, context);
        }

        /**
         * <p>Deletes a configured table association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DeleteConfiguredTableAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfiguredTableAssociationOutcome DeleteConfiguredTableAssociation(const Model::DeleteConfiguredTableAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfiguredTableAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfiguredTableAssociationRequestT = Model::DeleteConfiguredTableAssociationRequest>
        Model::DeleteConfiguredTableAssociationOutcomeCallable DeleteConfiguredTableAssociationCallable(const DeleteConfiguredTableAssociationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::DeleteConfiguredTableAssociation, request);
        }

        /**
         * An Async wrapper for DeleteConfiguredTableAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfiguredTableAssociationRequestT = Model::DeleteConfiguredTableAssociationRequest>
        void DeleteConfiguredTableAssociationAsync(const DeleteConfiguredTableAssociationRequestT& request, const DeleteConfiguredTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::DeleteConfiguredTableAssociation, request, handler, context);
        }

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
        template<typename DeleteMemberRequestT = Model::DeleteMemberRequest>
        Model::DeleteMemberOutcomeCallable DeleteMemberCallable(const DeleteMemberRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::DeleteMember, request);
        }

        /**
         * An Async wrapper for DeleteMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMemberRequestT = Model::DeleteMemberRequest>
        void DeleteMemberAsync(const DeleteMemberRequestT& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::DeleteMember, request, handler, context);
        }

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
        template<typename DeleteMembershipRequestT = Model::DeleteMembershipRequest>
        Model::DeleteMembershipOutcomeCallable DeleteMembershipCallable(const DeleteMembershipRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::DeleteMembership, request);
        }

        /**
         * An Async wrapper for DeleteMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMembershipRequestT = Model::DeleteMembershipRequest>
        void DeleteMembershipAsync(const DeleteMembershipRequestT& request, const DeleteMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::DeleteMembership, request, handler, context);
        }

        /**
         * <p>Returns metadata about a collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetCollaboration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCollaborationOutcome GetCollaboration(const Model::GetCollaborationRequest& request) const;

        /**
         * A Callable wrapper for GetCollaboration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCollaborationRequestT = Model::GetCollaborationRequest>
        Model::GetCollaborationOutcomeCallable GetCollaborationCallable(const GetCollaborationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::GetCollaboration, request);
        }

        /**
         * An Async wrapper for GetCollaboration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCollaborationRequestT = Model::GetCollaborationRequest>
        void GetCollaborationAsync(const GetCollaborationRequestT& request, const GetCollaborationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::GetCollaboration, request, handler, context);
        }

        /**
         * <p>Retrieves a configured table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetConfiguredTable">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfiguredTableOutcome GetConfiguredTable(const Model::GetConfiguredTableRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguredTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfiguredTableRequestT = Model::GetConfiguredTableRequest>
        Model::GetConfiguredTableOutcomeCallable GetConfiguredTableCallable(const GetConfiguredTableRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::GetConfiguredTable, request);
        }

        /**
         * An Async wrapper for GetConfiguredTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfiguredTableRequestT = Model::GetConfiguredTableRequest>
        void GetConfiguredTableAsync(const GetConfiguredTableRequestT& request, const GetConfiguredTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::GetConfiguredTable, request, handler, context);
        }

        /**
         * <p>Retrieves a configured table analysis rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetConfiguredTableAnalysisRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfiguredTableAnalysisRuleOutcome GetConfiguredTableAnalysisRule(const Model::GetConfiguredTableAnalysisRuleRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguredTableAnalysisRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfiguredTableAnalysisRuleRequestT = Model::GetConfiguredTableAnalysisRuleRequest>
        Model::GetConfiguredTableAnalysisRuleOutcomeCallable GetConfiguredTableAnalysisRuleCallable(const GetConfiguredTableAnalysisRuleRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::GetConfiguredTableAnalysisRule, request);
        }

        /**
         * An Async wrapper for GetConfiguredTableAnalysisRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfiguredTableAnalysisRuleRequestT = Model::GetConfiguredTableAnalysisRuleRequest>
        void GetConfiguredTableAnalysisRuleAsync(const GetConfiguredTableAnalysisRuleRequestT& request, const GetConfiguredTableAnalysisRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::GetConfiguredTableAnalysisRule, request, handler, context);
        }

        /**
         * <p>Retrieves a configured table association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetConfiguredTableAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfiguredTableAssociationOutcome GetConfiguredTableAssociation(const Model::GetConfiguredTableAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguredTableAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfiguredTableAssociationRequestT = Model::GetConfiguredTableAssociationRequest>
        Model::GetConfiguredTableAssociationOutcomeCallable GetConfiguredTableAssociationCallable(const GetConfiguredTableAssociationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::GetConfiguredTableAssociation, request);
        }

        /**
         * An Async wrapper for GetConfiguredTableAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfiguredTableAssociationRequestT = Model::GetConfiguredTableAssociationRequest>
        void GetConfiguredTableAssociationAsync(const GetConfiguredTableAssociationRequestT& request, const GetConfiguredTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::GetConfiguredTableAssociation, request, handler, context);
        }

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
        template<typename GetMembershipRequestT = Model::GetMembershipRequest>
        Model::GetMembershipOutcomeCallable GetMembershipCallable(const GetMembershipRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::GetMembership, request);
        }

        /**
         * An Async wrapper for GetMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMembershipRequestT = Model::GetMembershipRequest>
        void GetMembershipAsync(const GetMembershipRequestT& request, const GetMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::GetMembership, request, handler, context);
        }

        /**
         * <p>Returns query processing metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetProtectedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProtectedQueryOutcome GetProtectedQuery(const Model::GetProtectedQueryRequest& request) const;

        /**
         * A Callable wrapper for GetProtectedQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProtectedQueryRequestT = Model::GetProtectedQueryRequest>
        Model::GetProtectedQueryOutcomeCallable GetProtectedQueryCallable(const GetProtectedQueryRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::GetProtectedQuery, request);
        }

        /**
         * An Async wrapper for GetProtectedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProtectedQueryRequestT = Model::GetProtectedQueryRequest>
        void GetProtectedQueryAsync(const GetProtectedQueryRequestT& request, const GetProtectedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::GetProtectedQuery, request, handler, context);
        }

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
        template<typename GetSchemaRequestT = Model::GetSchemaRequest>
        Model::GetSchemaOutcomeCallable GetSchemaCallable(const GetSchemaRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::GetSchema, request);
        }

        /**
         * An Async wrapper for GetSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSchemaRequestT = Model::GetSchemaRequest>
        void GetSchemaAsync(const GetSchemaRequestT& request, const GetSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::GetSchema, request, handler, context);
        }

        /**
         * <p>Retrieves a schema analysis rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/GetSchemaAnalysisRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaAnalysisRuleOutcome GetSchemaAnalysisRule(const Model::GetSchemaAnalysisRuleRequest& request) const;

        /**
         * A Callable wrapper for GetSchemaAnalysisRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSchemaAnalysisRuleRequestT = Model::GetSchemaAnalysisRuleRequest>
        Model::GetSchemaAnalysisRuleOutcomeCallable GetSchemaAnalysisRuleCallable(const GetSchemaAnalysisRuleRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::GetSchemaAnalysisRule, request);
        }

        /**
         * An Async wrapper for GetSchemaAnalysisRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSchemaAnalysisRuleRequestT = Model::GetSchemaAnalysisRuleRequest>
        void GetSchemaAnalysisRuleAsync(const GetSchemaAnalysisRuleRequestT& request, const GetSchemaAnalysisRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::GetSchemaAnalysisRule, request, handler, context);
        }

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
        template<typename ListCollaborationsRequestT = Model::ListCollaborationsRequest>
        Model::ListCollaborationsOutcomeCallable ListCollaborationsCallable(const ListCollaborationsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::ListCollaborations, request);
        }

        /**
         * An Async wrapper for ListCollaborations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCollaborationsRequestT = Model::ListCollaborationsRequest>
        void ListCollaborationsAsync(const ListCollaborationsRequestT& request, const ListCollaborationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::ListCollaborations, request, handler, context);
        }

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
        template<typename ListConfiguredTableAssociationsRequestT = Model::ListConfiguredTableAssociationsRequest>
        Model::ListConfiguredTableAssociationsOutcomeCallable ListConfiguredTableAssociationsCallable(const ListConfiguredTableAssociationsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::ListConfiguredTableAssociations, request);
        }

        /**
         * An Async wrapper for ListConfiguredTableAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfiguredTableAssociationsRequestT = Model::ListConfiguredTableAssociationsRequest>
        void ListConfiguredTableAssociationsAsync(const ListConfiguredTableAssociationsRequestT& request, const ListConfiguredTableAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::ListConfiguredTableAssociations, request, handler, context);
        }

        /**
         * <p>Lists configured tables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ListConfiguredTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfiguredTablesOutcome ListConfiguredTables(const Model::ListConfiguredTablesRequest& request) const;

        /**
         * A Callable wrapper for ListConfiguredTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfiguredTablesRequestT = Model::ListConfiguredTablesRequest>
        Model::ListConfiguredTablesOutcomeCallable ListConfiguredTablesCallable(const ListConfiguredTablesRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::ListConfiguredTables, request);
        }

        /**
         * An Async wrapper for ListConfiguredTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfiguredTablesRequestT = Model::ListConfiguredTablesRequest>
        void ListConfiguredTablesAsync(const ListConfiguredTablesRequestT& request, const ListConfiguredTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::ListConfiguredTables, request, handler, context);
        }

        /**
         * <p>Lists all members within a collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * A Callable wrapper for ListMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMembersRequestT = Model::ListMembersRequest>
        Model::ListMembersOutcomeCallable ListMembersCallable(const ListMembersRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::ListMembers, request);
        }

        /**
         * An Async wrapper for ListMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMembersRequestT = Model::ListMembersRequest>
        void ListMembersAsync(const ListMembersRequestT& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::ListMembers, request, handler, context);
        }

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
        template<typename ListMembershipsRequestT = Model::ListMembershipsRequest>
        Model::ListMembershipsOutcomeCallable ListMembershipsCallable(const ListMembershipsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::ListMemberships, request);
        }

        /**
         * An Async wrapper for ListMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMembershipsRequestT = Model::ListMembershipsRequest>
        void ListMembershipsAsync(const ListMembershipsRequestT& request, const ListMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::ListMemberships, request, handler, context);
        }

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
        template<typename ListProtectedQueriesRequestT = Model::ListProtectedQueriesRequest>
        Model::ListProtectedQueriesOutcomeCallable ListProtectedQueriesCallable(const ListProtectedQueriesRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::ListProtectedQueries, request);
        }

        /**
         * An Async wrapper for ListProtectedQueries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProtectedQueriesRequestT = Model::ListProtectedQueriesRequest>
        void ListProtectedQueriesAsync(const ListProtectedQueriesRequestT& request, const ListProtectedQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::ListProtectedQueries, request, handler, context);
        }

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
        template<typename ListSchemasRequestT = Model::ListSchemasRequest>
        Model::ListSchemasOutcomeCallable ListSchemasCallable(const ListSchemasRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::ListSchemas, request);
        }

        /**
         * An Async wrapper for ListSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSchemasRequestT = Model::ListSchemasRequest>
        void ListSchemasAsync(const ListSchemasRequestT& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::ListSchemas, request, handler, context);
        }

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
        template<typename StartProtectedQueryRequestT = Model::StartProtectedQueryRequest>
        Model::StartProtectedQueryOutcomeCallable StartProtectedQueryCallable(const StartProtectedQueryRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::StartProtectedQuery, request);
        }

        /**
         * An Async wrapper for StartProtectedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartProtectedQueryRequestT = Model::StartProtectedQueryRequest>
        void StartProtectedQueryAsync(const StartProtectedQueryRequestT& request, const StartProtectedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::StartProtectedQuery, request, handler, context);
        }

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
        template<typename UpdateCollaborationRequestT = Model::UpdateCollaborationRequest>
        Model::UpdateCollaborationOutcomeCallable UpdateCollaborationCallable(const UpdateCollaborationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::UpdateCollaboration, request);
        }

        /**
         * An Async wrapper for UpdateCollaboration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCollaborationRequestT = Model::UpdateCollaborationRequest>
        void UpdateCollaborationAsync(const UpdateCollaborationRequestT& request, const UpdateCollaborationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::UpdateCollaboration, request, handler, context);
        }

        /**
         * <p>Updates a configured table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/UpdateConfiguredTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfiguredTableOutcome UpdateConfiguredTable(const Model::UpdateConfiguredTableRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfiguredTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfiguredTableRequestT = Model::UpdateConfiguredTableRequest>
        Model::UpdateConfiguredTableOutcomeCallable UpdateConfiguredTableCallable(const UpdateConfiguredTableRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::UpdateConfiguredTable, request);
        }

        /**
         * An Async wrapper for UpdateConfiguredTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfiguredTableRequestT = Model::UpdateConfiguredTableRequest>
        void UpdateConfiguredTableAsync(const UpdateConfiguredTableRequestT& request, const UpdateConfiguredTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::UpdateConfiguredTable, request, handler, context);
        }

        /**
         * <p>Updates a configured table analysis rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/UpdateConfiguredTableAnalysisRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfiguredTableAnalysisRuleOutcome UpdateConfiguredTableAnalysisRule(const Model::UpdateConfiguredTableAnalysisRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfiguredTableAnalysisRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfiguredTableAnalysisRuleRequestT = Model::UpdateConfiguredTableAnalysisRuleRequest>
        Model::UpdateConfiguredTableAnalysisRuleOutcomeCallable UpdateConfiguredTableAnalysisRuleCallable(const UpdateConfiguredTableAnalysisRuleRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::UpdateConfiguredTableAnalysisRule, request);
        }

        /**
         * An Async wrapper for UpdateConfiguredTableAnalysisRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfiguredTableAnalysisRuleRequestT = Model::UpdateConfiguredTableAnalysisRuleRequest>
        void UpdateConfiguredTableAnalysisRuleAsync(const UpdateConfiguredTableAnalysisRuleRequestT& request, const UpdateConfiguredTableAnalysisRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::UpdateConfiguredTableAnalysisRule, request, handler, context);
        }

        /**
         * <p>Updates a configured table association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/UpdateConfiguredTableAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfiguredTableAssociationOutcome UpdateConfiguredTableAssociation(const Model::UpdateConfiguredTableAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfiguredTableAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfiguredTableAssociationRequestT = Model::UpdateConfiguredTableAssociationRequest>
        Model::UpdateConfiguredTableAssociationOutcomeCallable UpdateConfiguredTableAssociationCallable(const UpdateConfiguredTableAssociationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::UpdateConfiguredTableAssociation, request);
        }

        /**
         * An Async wrapper for UpdateConfiguredTableAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfiguredTableAssociationRequestT = Model::UpdateConfiguredTableAssociationRequest>
        void UpdateConfiguredTableAssociationAsync(const UpdateConfiguredTableAssociationRequestT& request, const UpdateConfiguredTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::UpdateConfiguredTableAssociation, request, handler, context);
        }

        /**
         * <p>Updates a membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/UpdateMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMembershipOutcome UpdateMembership(const Model::UpdateMembershipRequest& request) const;

        /**
         * A Callable wrapper for UpdateMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMembershipRequestT = Model::UpdateMembershipRequest>
        Model::UpdateMembershipOutcomeCallable UpdateMembershipCallable(const UpdateMembershipRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::UpdateMembership, request);
        }

        /**
         * An Async wrapper for UpdateMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMembershipRequestT = Model::UpdateMembershipRequest>
        void UpdateMembershipAsync(const UpdateMembershipRequestT& request, const UpdateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::UpdateMembership, request, handler, context);
        }

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
        template<typename UpdateProtectedQueryRequestT = Model::UpdateProtectedQueryRequest>
        Model::UpdateProtectedQueryOutcomeCallable UpdateProtectedQueryCallable(const UpdateProtectedQueryRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsClient::UpdateProtectedQuery, request);
        }

        /**
         * An Async wrapper for UpdateProtectedQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProtectedQueryRequestT = Model::UpdateProtectedQueryRequest>
        void UpdateProtectedQueryAsync(const UpdateProtectedQueryRequestT& request, const UpdateProtectedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsClient::UpdateProtectedQuery, request, handler, context);
        }


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
