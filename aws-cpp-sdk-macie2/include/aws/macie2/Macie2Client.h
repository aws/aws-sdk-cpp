/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/macie2/Macie2ServiceClientModel.h>

namespace Aws
{
namespace Macie2
{
  /**
   * <p>Amazon Macie</p>
   */
  class AWS_MACIE2_API Macie2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<Macie2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Macie2Client(const Aws::Macie2::Macie2ClientConfiguration& clientConfiguration = Aws::Macie2::Macie2ClientConfiguration(),
                     std::shared_ptr<Macie2EndpointProviderBase> endpointProvider = Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Macie2Client(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<Macie2EndpointProviderBase> endpointProvider = Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG),
                     const Aws::Macie2::Macie2ClientConfiguration& clientConfiguration = Aws::Macie2::Macie2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Macie2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<Macie2EndpointProviderBase> endpointProvider = Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG),
                     const Aws::Macie2::Macie2ClientConfiguration& clientConfiguration = Aws::Macie2::Macie2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Macie2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Macie2Client(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Macie2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Macie2Client();

        /**
         * <p>Accepts an Amazon Macie membership invitation that was received from a
         * specific account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AcceptInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInvitationOutcome AcceptInvitation(const Model::AcceptInvitationRequest& request) const;

        /**
         * A Callable wrapper for AcceptInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInvitationOutcomeCallable AcceptInvitationCallable(const Model::AcceptInvitationRequest& request) const;

        /**
         * An Async wrapper for AcceptInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInvitationAsync(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about one or more custom data
         * identifiers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BatchGetCustomDataIdentifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCustomDataIdentifiersOutcome BatchGetCustomDataIdentifiers(const Model::BatchGetCustomDataIdentifiersRequest& request) const;

        /**
         * A Callable wrapper for BatchGetCustomDataIdentifiers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetCustomDataIdentifiersOutcomeCallable BatchGetCustomDataIdentifiersCallable(const Model::BatchGetCustomDataIdentifiersRequest& request) const;

        /**
         * An Async wrapper for BatchGetCustomDataIdentifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetCustomDataIdentifiersAsync(const Model::BatchGetCustomDataIdentifiersRequest& request, const BatchGetCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and defines the settings for an allow list.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAllowListOutcome CreateAllowList(const Model::CreateAllowListRequest& request) const;

        /**
         * A Callable wrapper for CreateAllowList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAllowListOutcomeCallable CreateAllowListCallable(const Model::CreateAllowListRequest& request) const;

        /**
         * An Async wrapper for CreateAllowList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAllowListAsync(const Model::CreateAllowListRequest& request, const CreateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and defines the settings for a classification job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClassificationJobOutcome CreateClassificationJob(const Model::CreateClassificationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateClassificationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClassificationJobOutcomeCallable CreateClassificationJobCallable(const Model::CreateClassificationJobRequest& request) const;

        /**
         * An Async wrapper for CreateClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClassificationJobAsync(const Model::CreateClassificationJobRequest& request, const CreateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and defines the criteria and other settings for a custom data
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomDataIdentifierOutcome CreateCustomDataIdentifier(const Model::CreateCustomDataIdentifierRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomDataIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomDataIdentifierOutcomeCallable CreateCustomDataIdentifierCallable(const Model::CreateCustomDataIdentifierRequest& request) const;

        /**
         * An Async wrapper for CreateCustomDataIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomDataIdentifierAsync(const Model::CreateCustomDataIdentifierRequest& request, const CreateCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and defines the criteria and other settings for a findings
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFindingsFilterOutcome CreateFindingsFilter(const Model::CreateFindingsFilterRequest& request) const;

        /**
         * A Callable wrapper for CreateFindingsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFindingsFilterOutcomeCallable CreateFindingsFilterCallable(const Model::CreateFindingsFilterRequest& request) const;

        /**
         * An Async wrapper for CreateFindingsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFindingsFilterAsync(const Model::CreateFindingsFilterRequest& request, const CreateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an Amazon Macie membership invitation to one or more
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInvitationsOutcome CreateInvitations(const Model::CreateInvitationsRequest& request) const;

        /**
         * A Callable wrapper for CreateInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInvitationsOutcomeCallable CreateInvitationsCallable(const Model::CreateInvitationsRequest& request) const;

        /**
         * An Async wrapper for CreateInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInvitationsAsync(const Model::CreateInvitationsRequest& request, const CreateInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an account with an Amazon Macie administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMemberOutcome CreateMember(const Model::CreateMemberRequest& request) const;

        /**
         * A Callable wrapper for CreateMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMemberOutcomeCallable CreateMemberCallable(const Model::CreateMemberRequest& request) const;

        /**
         * An Async wrapper for CreateMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMemberAsync(const Model::CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates sample findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateSampleFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSampleFindingsOutcome CreateSampleFindings(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * A Callable wrapper for CreateSampleFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSampleFindingsOutcomeCallable CreateSampleFindingsCallable(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * An Async wrapper for CreateSampleFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSampleFindingsAsync(const Model::CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Declines Amazon Macie membership invitations that were received from specific
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeclineInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineInvitationsOutcome DeclineInvitations(const Model::DeclineInvitationsRequest& request) const;

        /**
         * A Callable wrapper for DeclineInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeclineInvitationsOutcomeCallable DeclineInvitationsCallable(const Model::DeclineInvitationsRequest& request) const;

        /**
         * An Async wrapper for DeclineInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeclineInvitationsAsync(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an allow list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAllowListOutcome DeleteAllowList(const Model::DeleteAllowListRequest& request) const;

        /**
         * A Callable wrapper for DeleteAllowList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAllowListOutcomeCallable DeleteAllowListCallable(const Model::DeleteAllowListRequest& request) const;

        /**
         * An Async wrapper for DeleteAllowList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAllowListAsync(const Model::DeleteAllowListRequest& request, const DeleteAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Soft deletes a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomDataIdentifierOutcome DeleteCustomDataIdentifier(const Model::DeleteCustomDataIdentifierRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomDataIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomDataIdentifierOutcomeCallable DeleteCustomDataIdentifierCallable(const Model::DeleteCustomDataIdentifierRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomDataIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomDataIdentifierAsync(const Model::DeleteCustomDataIdentifierRequest& request, const DeleteCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a findings filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFindingsFilterOutcome DeleteFindingsFilter(const Model::DeleteFindingsFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteFindingsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFindingsFilterOutcomeCallable DeleteFindingsFilterCallable(const Model::DeleteFindingsFilterRequest& request) const;

        /**
         * An Async wrapper for DeleteFindingsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFindingsFilterAsync(const Model::DeleteFindingsFilterRequest& request, const DeleteFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes Amazon Macie membership invitations that were received from specific
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvitationsOutcome DeleteInvitations(const Model::DeleteInvitationsRequest& request) const;

        /**
         * A Callable wrapper for DeleteInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInvitationsOutcomeCallable DeleteInvitationsCallable(const Model::DeleteInvitationsRequest& request) const;

        /**
         * An Async wrapper for DeleteInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInvitationsAsync(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the association between an Amazon Macie administrator account and an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteMember">AWS
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
         * <p>Retrieves (queries) statistical data and other information about one or more
         * S3 buckets that Amazon Macie monitors and analyzes for an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeBuckets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBucketsOutcome DescribeBuckets(const Model::DescribeBucketsRequest& request) const;

        /**
         * A Callable wrapper for DescribeBuckets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBucketsOutcomeCallable DescribeBucketsCallable(const Model::DescribeBucketsRequest& request) const;

        /**
         * An Async wrapper for DescribeBuckets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBucketsAsync(const Model::DescribeBucketsRequest& request, const DescribeBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the status and settings for a classification job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClassificationJobOutcome DescribeClassificationJob(const Model::DescribeClassificationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeClassificationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClassificationJobOutcomeCallable DescribeClassificationJobCallable(const Model::DescribeClassificationJobRequest& request) const;

        /**
         * An Async wrapper for DescribeClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClassificationJobAsync(const Model::DescribeClassificationJobRequest& request, const DescribeClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Amazon Macie configuration settings for an organization in
         * Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationConfigurationOutcomeCallable DescribeOrganizationConfigurationCallable(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationConfigurationAsync(const Model::DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables Amazon Macie and deletes all settings and resources for a Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisableMacie">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableMacieOutcome DisableMacie(const Model::DisableMacieRequest& request) const;

        /**
         * A Callable wrapper for DisableMacie that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableMacieOutcomeCallable DisableMacieCallable(const Model::DisableMacieRequest& request) const;

        /**
         * An Async wrapper for DisableMacie that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableMacieAsync(const Model::DisableMacieRequest& request, const DisableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables an account as the delegated Amazon Macie administrator account for
         * an organization in Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for DisableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableOrganizationAdminAccountOutcomeCallable DisableOrganizationAdminAccountCallable(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * An Async wrapper for DisableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableOrganizationAdminAccountAsync(const Model::DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a member account from its Amazon Macie administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateFromAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromAdministratorAccountOutcome DisassociateFromAdministratorAccount(const Model::DisassociateFromAdministratorAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFromAdministratorAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFromAdministratorAccountOutcomeCallable DisassociateFromAdministratorAccountCallable(const Model::DisassociateFromAdministratorAccountRequest& request) const;

        /**
         * An Async wrapper for DisassociateFromAdministratorAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFromAdministratorAccountAsync(const Model::DisassociateFromAdministratorAccountRequest& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>(Deprecated) Disassociates a member account from its Amazon Macie
         * administrator account. This operation has been replaced by the <link 
         * linkend="DisassociateFromAdministratorAccount">DisassociateFromAdministratorAccount</link>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromMasterAccountOutcome DisassociateFromMasterAccount(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFromMasterAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFromMasterAccountOutcomeCallable DisassociateFromMasterAccountCallable(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * An Async wrapper for DisassociateFromMasterAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFromMasterAccountAsync(const Model::DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an Amazon Macie administrator account from a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberOutcome DisassociateMember(const Model::DisassociateMemberRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMemberOutcomeCallable DisassociateMemberCallable(const Model::DisassociateMemberRequest& request) const;

        /**
         * An Async wrapper for DisassociateMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMemberAsync(const Model::DisassociateMemberRequest& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables Amazon Macie and specifies the configuration settings for a Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/EnableMacie">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableMacieOutcome EnableMacie(const Model::EnableMacieRequest& request) const;

        /**
         * A Callable wrapper for EnableMacie that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableMacieOutcomeCallable EnableMacieCallable(const Model::EnableMacieRequest& request) const;

        /**
         * An Async wrapper for EnableMacie that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableMacieAsync(const Model::EnableMacieRequest& request, const EnableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Designates an account as the delegated Amazon Macie administrator account for
         * an organization in Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for EnableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableOrganizationAdminAccountOutcomeCallable EnableOrganizationAdminAccountCallable(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * An Async wrapper for EnableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableOrganizationAdminAccountAsync(const Model::EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the Amazon Macie administrator account for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdministratorAccountOutcome GetAdministratorAccount(const Model::GetAdministratorAccountRequest& request) const;

        /**
         * A Callable wrapper for GetAdministratorAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAdministratorAccountOutcomeCallable GetAdministratorAccountCallable(const Model::GetAdministratorAccountRequest& request) const;

        /**
         * An Async wrapper for GetAdministratorAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAdministratorAccountAsync(const Model::GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the settings and status of an allow list.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAllowListOutcome GetAllowList(const Model::GetAllowListRequest& request) const;

        /**
         * A Callable wrapper for GetAllowList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAllowListOutcomeCallable GetAllowListCallable(const Model::GetAllowListRequest& request) const;

        /**
         * An Async wrapper for GetAllowList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAllowListAsync(const Model::GetAllowListRequest& request, const GetAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration settings and status of automated sensitive data
         * discovery for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetAutomatedDiscoveryConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutomatedDiscoveryConfigurationOutcome GetAutomatedDiscoveryConfiguration(const Model::GetAutomatedDiscoveryConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetAutomatedDiscoveryConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAutomatedDiscoveryConfigurationOutcomeCallable GetAutomatedDiscoveryConfigurationCallable(const Model::GetAutomatedDiscoveryConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetAutomatedDiscoveryConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAutomatedDiscoveryConfigurationAsync(const Model::GetAutomatedDiscoveryConfigurationRequest& request, const GetAutomatedDiscoveryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) aggregated statistical data about all the S3 buckets that
         * Amazon Macie monitors and analyzes for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetBucketStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketStatisticsOutcome GetBucketStatistics(const Model::GetBucketStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetBucketStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketStatisticsOutcomeCallable GetBucketStatisticsCallable(const Model::GetBucketStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetBucketStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketStatisticsAsync(const Model::GetBucketStatisticsRequest& request, const GetBucketStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration settings for storing data classification
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetClassificationExportConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClassificationExportConfigurationOutcome GetClassificationExportConfiguration(const Model::GetClassificationExportConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetClassificationExportConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetClassificationExportConfigurationOutcomeCallable GetClassificationExportConfigurationCallable(const Model::GetClassificationExportConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetClassificationExportConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClassificationExportConfigurationAsync(const Model::GetClassificationExportConfigurationRequest& request, const GetClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the classification scope settings for an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetClassificationScope">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClassificationScopeOutcome GetClassificationScope(const Model::GetClassificationScopeRequest& request) const;

        /**
         * A Callable wrapper for GetClassificationScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetClassificationScopeOutcomeCallable GetClassificationScopeCallable(const Model::GetClassificationScopeRequest& request) const;

        /**
         * An Async wrapper for GetClassificationScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClassificationScopeAsync(const Model::GetClassificationScopeRequest& request, const GetClassificationScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the criteria and other settings for a custom data
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomDataIdentifierOutcome GetCustomDataIdentifier(const Model::GetCustomDataIdentifierRequest& request) const;

        /**
         * A Callable wrapper for GetCustomDataIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCustomDataIdentifierOutcomeCallable GetCustomDataIdentifierCallable(const Model::GetCustomDataIdentifierRequest& request) const;

        /**
         * An Async wrapper for GetCustomDataIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCustomDataIdentifierAsync(const Model::GetCustomDataIdentifierRequest& request, const GetCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) aggregated statistical data about findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingStatisticsOutcome GetFindingStatistics(const Model::GetFindingStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetFindingStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingStatisticsOutcomeCallable GetFindingStatisticsCallable(const Model::GetFindingStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetFindingStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingStatisticsAsync(const Model::GetFindingStatisticsRequest& request, const GetFindingStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of one or more findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;

        /**
         * A Callable wrapper for GetFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsOutcomeCallable GetFindingsCallable(const Model::GetFindingsRequest& request) const;

        /**
         * An Async wrapper for GetFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsAsync(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the criteria and other settings for a findings
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsFilterOutcome GetFindingsFilter(const Model::GetFindingsFilterRequest& request) const;

        /**
         * A Callable wrapper for GetFindingsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsFilterOutcomeCallable GetFindingsFilterCallable(const Model::GetFindingsFilterRequest& request) const;

        /**
         * An Async wrapper for GetFindingsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsFilterAsync(const Model::GetFindingsFilterRequest& request, const GetFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration settings for publishing findings to Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingsPublicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsPublicationConfigurationOutcome GetFindingsPublicationConfiguration(const Model::GetFindingsPublicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetFindingsPublicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsPublicationConfigurationOutcomeCallable GetFindingsPublicationConfigurationCallable(const Model::GetFindingsPublicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetFindingsPublicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsPublicationConfigurationAsync(const Model::GetFindingsPublicationConfigurationRequest& request, const GetFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the count of Amazon Macie membership invitations that were received
         * by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetInvitationsCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationsCountOutcome GetInvitationsCount(const Model::GetInvitationsCountRequest& request) const;

        /**
         * A Callable wrapper for GetInvitationsCount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvitationsCountOutcomeCallable GetInvitationsCountCallable(const Model::GetInvitationsCountRequest& request) const;

        /**
         * An Async wrapper for GetInvitationsCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvitationsCountAsync(const Model::GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the status and configuration settings for an Amazon Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMacieSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMacieSessionOutcome GetMacieSession(const Model::GetMacieSessionRequest& request) const;

        /**
         * A Callable wrapper for GetMacieSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMacieSessionOutcomeCallable GetMacieSessionCallable(const Model::GetMacieSessionRequest& request) const;

        /**
         * An Async wrapper for GetMacieSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMacieSessionAsync(const Model::GetMacieSessionRequest& request, const GetMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>(Deprecated) Retrieves information about the Amazon Macie administrator
         * account for an account. This operation has been replaced by the <link 
         * linkend="GetAdministratorAccount">GetAdministratorAccount</link>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMasterAccountOutcome GetMasterAccount(const Model::GetMasterAccountRequest& request) const;

        /**
         * A Callable wrapper for GetMasterAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMasterAccountOutcomeCallable GetMasterAccountCallable(const Model::GetMasterAccountRequest& request) const;

        /**
         * An Async wrapper for GetMasterAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMasterAccountAsync(const Model::GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an account that's associated with an Amazon Macie
         * administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberOutcome GetMember(const Model::GetMemberRequest& request) const;

        /**
         * A Callable wrapper for GetMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMemberOutcomeCallable GetMemberCallable(const Model::GetMemberRequest& request) const;

        /**
         * An Async wrapper for GetMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMemberAsync(const Model::GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) sensitive data discovery statistics and the sensitivity
         * score for an S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetResourceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceProfileOutcome GetResourceProfile(const Model::GetResourceProfileRequest& request) const;

        /**
         * A Callable wrapper for GetResourceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceProfileOutcomeCallable GetResourceProfileCallable(const Model::GetResourceProfileRequest& request) const;

        /**
         * An Async wrapper for GetResourceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceProfileAsync(const Model::GetResourceProfileRequest& request, const GetResourceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the status and configuration settings for retrieving occurrences of
         * sensitive data reported by findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetRevealConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRevealConfigurationOutcome GetRevealConfiguration(const Model::GetRevealConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetRevealConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRevealConfigurationOutcomeCallable GetRevealConfigurationCallable(const Model::GetRevealConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetRevealConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRevealConfigurationAsync(const Model::GetRevealConfigurationRequest& request, const GetRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves occurrences of sensitive data reported by a finding.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetSensitiveDataOccurrences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSensitiveDataOccurrencesOutcome GetSensitiveDataOccurrences(const Model::GetSensitiveDataOccurrencesRequest& request) const;

        /**
         * A Callable wrapper for GetSensitiveDataOccurrences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSensitiveDataOccurrencesOutcomeCallable GetSensitiveDataOccurrencesCallable(const Model::GetSensitiveDataOccurrencesRequest& request) const;

        /**
         * An Async wrapper for GetSensitiveDataOccurrences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSensitiveDataOccurrencesAsync(const Model::GetSensitiveDataOccurrencesRequest& request, const GetSensitiveDataOccurrencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks whether occurrences of sensitive data can be retrieved for a
         * finding.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetSensitiveDataOccurrencesAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSensitiveDataOccurrencesAvailabilityOutcome GetSensitiveDataOccurrencesAvailability(const Model::GetSensitiveDataOccurrencesAvailabilityRequest& request) const;

        /**
         * A Callable wrapper for GetSensitiveDataOccurrencesAvailability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSensitiveDataOccurrencesAvailabilityOutcomeCallable GetSensitiveDataOccurrencesAvailabilityCallable(const Model::GetSensitiveDataOccurrencesAvailabilityRequest& request) const;

        /**
         * An Async wrapper for GetSensitiveDataOccurrencesAvailability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSensitiveDataOccurrencesAvailabilityAsync(const Model::GetSensitiveDataOccurrencesAvailabilityRequest& request, const GetSensitiveDataOccurrencesAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the settings for the sensitivity inspection template for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetSensitivityInspectionTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSensitivityInspectionTemplateOutcome GetSensitivityInspectionTemplate(const Model::GetSensitivityInspectionTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetSensitivityInspectionTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSensitivityInspectionTemplateOutcomeCallable GetSensitivityInspectionTemplateCallable(const Model::GetSensitivityInspectionTemplateRequest& request) const;

        /**
         * An Async wrapper for GetSensitivityInspectionTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSensitivityInspectionTemplateAsync(const Model::GetSensitivityInspectionTemplateRequest& request, const GetSensitivityInspectionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) quotas and aggregated usage data for one or more
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetUsageStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageStatisticsOutcome GetUsageStatistics(const Model::GetUsageStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetUsageStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsageStatisticsOutcomeCallable GetUsageStatisticsCallable(const Model::GetUsageStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetUsageStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsageStatisticsAsync(const Model::GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) aggregated usage data for an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetUsageTotals">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageTotalsOutcome GetUsageTotals(const Model::GetUsageTotalsRequest& request) const;

        /**
         * A Callable wrapper for GetUsageTotals that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsageTotalsOutcomeCallable GetUsageTotalsCallable(const Model::GetUsageTotalsRequest& request) const;

        /**
         * An Async wrapper for GetUsageTotals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsageTotalsAsync(const Model::GetUsageTotalsRequest& request, const GetUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about all the allow lists for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListAllowLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAllowListsOutcome ListAllowLists(const Model::ListAllowListsRequest& request) const;

        /**
         * A Callable wrapper for ListAllowLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAllowListsOutcomeCallable ListAllowListsCallable(const Model::ListAllowListsRequest& request) const;

        /**
         * An Async wrapper for ListAllowLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAllowListsAsync(const Model::ListAllowListsRequest& request, const ListAllowListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about one or more classification
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListClassificationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClassificationJobsOutcome ListClassificationJobs(const Model::ListClassificationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListClassificationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClassificationJobsOutcomeCallable ListClassificationJobsCallable(const Model::ListClassificationJobsRequest& request) const;

        /**
         * An Async wrapper for ListClassificationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClassificationJobsAsync(const Model::ListClassificationJobsRequest& request, const ListClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about the classification scope for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListClassificationScopes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClassificationScopesOutcome ListClassificationScopes(const Model::ListClassificationScopesRequest& request) const;

        /**
         * A Callable wrapper for ListClassificationScopes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClassificationScopesOutcomeCallable ListClassificationScopesCallable(const Model::ListClassificationScopesRequest& request) const;

        /**
         * An Async wrapper for ListClassificationScopes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClassificationScopesAsync(const Model::ListClassificationScopesRequest& request, const ListClassificationScopesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about all the custom data identifiers for
         * an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListCustomDataIdentifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomDataIdentifiersOutcome ListCustomDataIdentifiers(const Model::ListCustomDataIdentifiersRequest& request) const;

        /**
         * A Callable wrapper for ListCustomDataIdentifiers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomDataIdentifiersOutcomeCallable ListCustomDataIdentifiersCallable(const Model::ListCustomDataIdentifiersRequest& request) const;

        /**
         * An Async wrapper for ListCustomDataIdentifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomDataIdentifiersAsync(const Model::ListCustomDataIdentifiersRequest& request, const ListCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about one or more findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

        /**
         * A Callable wrapper for ListFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsOutcomeCallable ListFindingsCallable(const Model::ListFindingsRequest& request) const;

        /**
         * An Async wrapper for ListFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsAsync(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about all the findings filters for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListFindingsFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsFiltersOutcome ListFindingsFilters(const Model::ListFindingsFiltersRequest& request) const;

        /**
         * A Callable wrapper for ListFindingsFilters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsFiltersOutcomeCallable ListFindingsFiltersCallable(const Model::ListFindingsFiltersRequest& request) const;

        /**
         * An Async wrapper for ListFindingsFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsFiltersAsync(const Model::ListFindingsFiltersRequest& request, const ListFindingsFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the Amazon Macie membership invitations that were
         * received by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * A Callable wrapper for ListInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const Model::ListInvitationsRequest& request) const;

        /**
         * An Async wrapper for ListInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvitationsAsync(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all the managed data identifiers that Amazon
         * Macie currently provides.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListManagedDataIdentifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedDataIdentifiersOutcome ListManagedDataIdentifiers(const Model::ListManagedDataIdentifiersRequest& request) const;

        /**
         * A Callable wrapper for ListManagedDataIdentifiers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListManagedDataIdentifiersOutcomeCallable ListManagedDataIdentifiersCallable(const Model::ListManagedDataIdentifiersRequest& request) const;

        /**
         * An Async wrapper for ListManagedDataIdentifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListManagedDataIdentifiersAsync(const Model::ListManagedDataIdentifiersRequest& request, const ListManagedDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the accounts that are associated with an Amazon
         * Macie administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListMembers">AWS
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
         * <p>Retrieves information about the delegated Amazon Macie administrator account
         * for an organization in Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationAdminAccountsOutcome ListOrganizationAdminAccounts(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationAdminAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationAdminAccountsOutcomeCallable ListOrganizationAdminAccountsCallable(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * An Async wrapper for ListOrganizationAdminAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationAdminAccountsAsync(const Model::ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about objects that were selected from an S3 bucket for
         * automated sensitive data discovery.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListResourceProfileArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceProfileArtifactsOutcome ListResourceProfileArtifacts(const Model::ListResourceProfileArtifactsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceProfileArtifacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceProfileArtifactsOutcomeCallable ListResourceProfileArtifactsCallable(const Model::ListResourceProfileArtifactsRequest& request) const;

        /**
         * An Async wrapper for ListResourceProfileArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceProfileArtifactsAsync(const Model::ListResourceProfileArtifactsRequest& request, const ListResourceProfileArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the types and amount of sensitive data that
         * Amazon Macie found in an S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListResourceProfileDetections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceProfileDetectionsOutcome ListResourceProfileDetections(const Model::ListResourceProfileDetectionsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceProfileDetections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceProfileDetectionsOutcomeCallable ListResourceProfileDetectionsCallable(const Model::ListResourceProfileDetectionsRequest& request) const;

        /**
         * An Async wrapper for ListResourceProfileDetections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceProfileDetectionsAsync(const Model::ListResourceProfileDetectionsRequest& request, const ListResourceProfileDetectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about the sensitivity inspection template
         * for an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListSensitivityInspectionTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSensitivityInspectionTemplatesOutcome ListSensitivityInspectionTemplates(const Model::ListSensitivityInspectionTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListSensitivityInspectionTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSensitivityInspectionTemplatesOutcomeCallable ListSensitivityInspectionTemplatesCallable(const Model::ListSensitivityInspectionTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListSensitivityInspectionTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSensitivityInspectionTemplatesAsync(const Model::ListSensitivityInspectionTemplatesRequest& request, const ListSensitivityInspectionTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the tags (keys and values) that are associated with an Amazon Macie
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates the configuration settings for storing data classification
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/PutClassificationExportConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutClassificationExportConfigurationOutcome PutClassificationExportConfiguration(const Model::PutClassificationExportConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutClassificationExportConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutClassificationExportConfigurationOutcomeCallable PutClassificationExportConfigurationCallable(const Model::PutClassificationExportConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutClassificationExportConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutClassificationExportConfigurationAsync(const Model::PutClassificationExportConfigurationRequest& request, const PutClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration settings for publishing findings to Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/PutFindingsPublicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFindingsPublicationConfigurationOutcome PutFindingsPublicationConfiguration(const Model::PutFindingsPublicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutFindingsPublicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFindingsPublicationConfigurationOutcomeCallable PutFindingsPublicationConfigurationCallable(const Model::PutFindingsPublicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutFindingsPublicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFindingsPublicationConfigurationAsync(const Model::PutFindingsPublicationConfigurationRequest& request, const PutFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) statistical data and other information about Amazon Web
         * Services resources that Amazon Macie monitors and analyzes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SearchResources">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchResourcesOutcome SearchResources(const Model::SearchResourcesRequest& request) const;

        /**
         * A Callable wrapper for SearchResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchResourcesOutcomeCallable SearchResourcesCallable(const Model::SearchResourcesRequest& request) const;

        /**
         * An Async wrapper for SearchResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchResourcesAsync(const Model::SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates one or more tags (keys and values) that are associated with
         * an Amazon Macie resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TestCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::TestCustomDataIdentifierOutcome TestCustomDataIdentifier(const Model::TestCustomDataIdentifierRequest& request) const;

        /**
         * A Callable wrapper for TestCustomDataIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestCustomDataIdentifierOutcomeCallable TestCustomDataIdentifierCallable(const Model::TestCustomDataIdentifierRequest& request) const;

        /**
         * An Async wrapper for TestCustomDataIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestCustomDataIdentifierAsync(const Model::TestCustomDataIdentifierRequest& request, const TestCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags (keys and values) from an Amazon Macie
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for an allow list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAllowListOutcome UpdateAllowList(const Model::UpdateAllowListRequest& request) const;

        /**
         * A Callable wrapper for UpdateAllowList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAllowListOutcomeCallable UpdateAllowListCallable(const Model::UpdateAllowListRequest& request) const;

        /**
         * An Async wrapper for UpdateAllowList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAllowListAsync(const Model::UpdateAllowListRequest& request, const UpdateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or disables automated sensitive data discovery for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateAutomatedDiscoveryConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAutomatedDiscoveryConfigurationOutcome UpdateAutomatedDiscoveryConfiguration(const Model::UpdateAutomatedDiscoveryConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateAutomatedDiscoveryConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAutomatedDiscoveryConfigurationOutcomeCallable UpdateAutomatedDiscoveryConfigurationCallable(const Model::UpdateAutomatedDiscoveryConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateAutomatedDiscoveryConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAutomatedDiscoveryConfigurationAsync(const Model::UpdateAutomatedDiscoveryConfigurationRequest& request, const UpdateAutomatedDiscoveryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the status of a classification job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClassificationJobOutcome UpdateClassificationJob(const Model::UpdateClassificationJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateClassificationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClassificationJobOutcomeCallable UpdateClassificationJobCallable(const Model::UpdateClassificationJobRequest& request) const;

        /**
         * An Async wrapper for UpdateClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClassificationJobAsync(const Model::UpdateClassificationJobRequest& request, const UpdateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the classification scope settings for an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateClassificationScope">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClassificationScopeOutcome UpdateClassificationScope(const Model::UpdateClassificationScopeRequest& request) const;

        /**
         * A Callable wrapper for UpdateClassificationScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClassificationScopeOutcomeCallable UpdateClassificationScopeCallable(const Model::UpdateClassificationScopeRequest& request) const;

        /**
         * An Async wrapper for UpdateClassificationScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClassificationScopeAsync(const Model::UpdateClassificationScopeRequest& request, const UpdateClassificationScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the criteria and other settings for a findings filter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsFilterOutcome UpdateFindingsFilter(const Model::UpdateFindingsFilterRequest& request) const;

        /**
         * A Callable wrapper for UpdateFindingsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFindingsFilterOutcomeCallable UpdateFindingsFilterCallable(const Model::UpdateFindingsFilterRequest& request) const;

        /**
         * An Async wrapper for UpdateFindingsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFindingsFilterAsync(const Model::UpdateFindingsFilterRequest& request, const UpdateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Suspends or re-enables Amazon Macie, or updates the configuration settings
         * for a Macie account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateMacieSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMacieSessionOutcome UpdateMacieSession(const Model::UpdateMacieSessionRequest& request) const;

        /**
         * A Callable wrapper for UpdateMacieSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMacieSessionOutcomeCallable UpdateMacieSessionCallable(const Model::UpdateMacieSessionRequest& request) const;

        /**
         * An Async wrapper for UpdateMacieSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMacieSessionAsync(const Model::UpdateMacieSessionRequest& request, const UpdateMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables an Amazon Macie administrator to suspend or re-enable Macie for a
         * member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateMemberSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMemberSessionOutcome UpdateMemberSession(const Model::UpdateMemberSessionRequest& request) const;

        /**
         * A Callable wrapper for UpdateMemberSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMemberSessionOutcomeCallable UpdateMemberSessionCallable(const Model::UpdateMemberSessionRequest& request) const;

        /**
         * An Async wrapper for UpdateMemberSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMemberSessionAsync(const Model::UpdateMemberSessionRequest& request, const UpdateMemberSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Amazon Macie configuration settings for an organization in
         * Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOrganizationConfigurationOutcomeCallable UpdateOrganizationConfigurationCallable(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOrganizationConfigurationAsync(const Model::UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the sensitivity score for an S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateResourceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceProfileOutcome UpdateResourceProfile(const Model::UpdateResourceProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceProfileOutcomeCallable UpdateResourceProfileCallable(const Model::UpdateResourceProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateResourceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceProfileAsync(const Model::UpdateResourceProfileRequest& request, const UpdateResourceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the sensitivity scoring settings for an S3 bucket.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateResourceProfileDetections">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceProfileDetectionsOutcome UpdateResourceProfileDetections(const Model::UpdateResourceProfileDetectionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceProfileDetections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceProfileDetectionsOutcomeCallable UpdateResourceProfileDetectionsCallable(const Model::UpdateResourceProfileDetectionsRequest& request) const;

        /**
         * An Async wrapper for UpdateResourceProfileDetections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceProfileDetectionsAsync(const Model::UpdateResourceProfileDetectionsRequest& request, const UpdateResourceProfileDetectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status and configuration settings for retrieving occurrences of
         * sensitive data reported by findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateRevealConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRevealConfigurationOutcome UpdateRevealConfiguration(const Model::UpdateRevealConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateRevealConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRevealConfigurationOutcomeCallable UpdateRevealConfigurationCallable(const Model::UpdateRevealConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateRevealConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRevealConfigurationAsync(const Model::UpdateRevealConfigurationRequest& request, const UpdateRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for the sensitivity inspection template for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateSensitivityInspectionTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSensitivityInspectionTemplateOutcome UpdateSensitivityInspectionTemplate(const Model::UpdateSensitivityInspectionTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateSensitivityInspectionTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSensitivityInspectionTemplateOutcomeCallable UpdateSensitivityInspectionTemplateCallable(const Model::UpdateSensitivityInspectionTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateSensitivityInspectionTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSensitivityInspectionTemplateAsync(const Model::UpdateSensitivityInspectionTemplateRequest& request, const UpdateSensitivityInspectionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Macie2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<Macie2Client>;
      void init(const Macie2ClientConfiguration& clientConfiguration);

      Macie2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Macie2EndpointProviderBase> m_endpointProvider;
  };

} // namespace Macie2
} // namespace Aws
