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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef Macie2ClientConfiguration ClientConfigurationType;
      typedef Macie2EndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Macie2Client(const Aws::Macie2::Macie2ClientConfiguration& clientConfiguration = Aws::Macie2::Macie2ClientConfiguration(),
                     std::shared_ptr<Macie2EndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Macie2Client(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<Macie2EndpointProviderBase> endpointProvider = nullptr,
                     const Aws::Macie2::Macie2ClientConfiguration& clientConfiguration = Aws::Macie2::Macie2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Macie2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<Macie2EndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AcceptInvitationRequestT = Model::AcceptInvitationRequest>
        Model::AcceptInvitationOutcomeCallable AcceptInvitationCallable(const AcceptInvitationRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::AcceptInvitation, request);
        }

        /**
         * An Async wrapper for AcceptInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptInvitationRequestT = Model::AcceptInvitationRequest>
        void AcceptInvitationAsync(const AcceptInvitationRequestT& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::AcceptInvitation, request, handler, context);
        }

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
        template<typename BatchGetCustomDataIdentifiersRequestT = Model::BatchGetCustomDataIdentifiersRequest>
        Model::BatchGetCustomDataIdentifiersOutcomeCallable BatchGetCustomDataIdentifiersCallable(const BatchGetCustomDataIdentifiersRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::BatchGetCustomDataIdentifiers, request);
        }

        /**
         * An Async wrapper for BatchGetCustomDataIdentifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetCustomDataIdentifiersRequestT = Model::BatchGetCustomDataIdentifiersRequest>
        void BatchGetCustomDataIdentifiersAsync(const BatchGetCustomDataIdentifiersRequestT& request, const BatchGetCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::BatchGetCustomDataIdentifiers, request, handler, context);
        }

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
        template<typename CreateAllowListRequestT = Model::CreateAllowListRequest>
        Model::CreateAllowListOutcomeCallable CreateAllowListCallable(const CreateAllowListRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::CreateAllowList, request);
        }

        /**
         * An Async wrapper for CreateAllowList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAllowListRequestT = Model::CreateAllowListRequest>
        void CreateAllowListAsync(const CreateAllowListRequestT& request, const CreateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::CreateAllowList, request, handler, context);
        }

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
        template<typename CreateClassificationJobRequestT = Model::CreateClassificationJobRequest>
        Model::CreateClassificationJobOutcomeCallable CreateClassificationJobCallable(const CreateClassificationJobRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::CreateClassificationJob, request);
        }

        /**
         * An Async wrapper for CreateClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClassificationJobRequestT = Model::CreateClassificationJobRequest>
        void CreateClassificationJobAsync(const CreateClassificationJobRequestT& request, const CreateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::CreateClassificationJob, request, handler, context);
        }

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
        template<typename CreateCustomDataIdentifierRequestT = Model::CreateCustomDataIdentifierRequest>
        Model::CreateCustomDataIdentifierOutcomeCallable CreateCustomDataIdentifierCallable(const CreateCustomDataIdentifierRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::CreateCustomDataIdentifier, request);
        }

        /**
         * An Async wrapper for CreateCustomDataIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomDataIdentifierRequestT = Model::CreateCustomDataIdentifierRequest>
        void CreateCustomDataIdentifierAsync(const CreateCustomDataIdentifierRequestT& request, const CreateCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::CreateCustomDataIdentifier, request, handler, context);
        }

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
        template<typename CreateFindingsFilterRequestT = Model::CreateFindingsFilterRequest>
        Model::CreateFindingsFilterOutcomeCallable CreateFindingsFilterCallable(const CreateFindingsFilterRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::CreateFindingsFilter, request);
        }

        /**
         * An Async wrapper for CreateFindingsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFindingsFilterRequestT = Model::CreateFindingsFilterRequest>
        void CreateFindingsFilterAsync(const CreateFindingsFilterRequestT& request, const CreateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::CreateFindingsFilter, request, handler, context);
        }

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
        template<typename CreateInvitationsRequestT = Model::CreateInvitationsRequest>
        Model::CreateInvitationsOutcomeCallable CreateInvitationsCallable(const CreateInvitationsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::CreateInvitations, request);
        }

        /**
         * An Async wrapper for CreateInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInvitationsRequestT = Model::CreateInvitationsRequest>
        void CreateInvitationsAsync(const CreateInvitationsRequestT& request, const CreateInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::CreateInvitations, request, handler, context);
        }

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
        template<typename CreateMemberRequestT = Model::CreateMemberRequest>
        Model::CreateMemberOutcomeCallable CreateMemberCallable(const CreateMemberRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::CreateMember, request);
        }

        /**
         * An Async wrapper for CreateMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMemberRequestT = Model::CreateMemberRequest>
        void CreateMemberAsync(const CreateMemberRequestT& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::CreateMember, request, handler, context);
        }

        /**
         * <p>Creates sample findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateSampleFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSampleFindingsOutcome CreateSampleFindings(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * A Callable wrapper for CreateSampleFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSampleFindingsRequestT = Model::CreateSampleFindingsRequest>
        Model::CreateSampleFindingsOutcomeCallable CreateSampleFindingsCallable(const CreateSampleFindingsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::CreateSampleFindings, request);
        }

        /**
         * An Async wrapper for CreateSampleFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSampleFindingsRequestT = Model::CreateSampleFindingsRequest>
        void CreateSampleFindingsAsync(const CreateSampleFindingsRequestT& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::CreateSampleFindings, request, handler, context);
        }

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
        template<typename DeclineInvitationsRequestT = Model::DeclineInvitationsRequest>
        Model::DeclineInvitationsOutcomeCallable DeclineInvitationsCallable(const DeclineInvitationsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DeclineInvitations, request);
        }

        /**
         * An Async wrapper for DeclineInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeclineInvitationsRequestT = Model::DeclineInvitationsRequest>
        void DeclineInvitationsAsync(const DeclineInvitationsRequestT& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DeclineInvitations, request, handler, context);
        }

        /**
         * <p>Deletes an allow list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAllowListOutcome DeleteAllowList(const Model::DeleteAllowListRequest& request) const;

        /**
         * A Callable wrapper for DeleteAllowList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAllowListRequestT = Model::DeleteAllowListRequest>
        Model::DeleteAllowListOutcomeCallable DeleteAllowListCallable(const DeleteAllowListRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DeleteAllowList, request);
        }

        /**
         * An Async wrapper for DeleteAllowList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAllowListRequestT = Model::DeleteAllowListRequest>
        void DeleteAllowListAsync(const DeleteAllowListRequestT& request, const DeleteAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DeleteAllowList, request, handler, context);
        }

        /**
         * <p>Soft deletes a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomDataIdentifierOutcome DeleteCustomDataIdentifier(const Model::DeleteCustomDataIdentifierRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomDataIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomDataIdentifierRequestT = Model::DeleteCustomDataIdentifierRequest>
        Model::DeleteCustomDataIdentifierOutcomeCallable DeleteCustomDataIdentifierCallable(const DeleteCustomDataIdentifierRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DeleteCustomDataIdentifier, request);
        }

        /**
         * An Async wrapper for DeleteCustomDataIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomDataIdentifierRequestT = Model::DeleteCustomDataIdentifierRequest>
        void DeleteCustomDataIdentifierAsync(const DeleteCustomDataIdentifierRequestT& request, const DeleteCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DeleteCustomDataIdentifier, request, handler, context);
        }

        /**
         * <p>Deletes a findings filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFindingsFilterOutcome DeleteFindingsFilter(const Model::DeleteFindingsFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteFindingsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFindingsFilterRequestT = Model::DeleteFindingsFilterRequest>
        Model::DeleteFindingsFilterOutcomeCallable DeleteFindingsFilterCallable(const DeleteFindingsFilterRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DeleteFindingsFilter, request);
        }

        /**
         * An Async wrapper for DeleteFindingsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFindingsFilterRequestT = Model::DeleteFindingsFilterRequest>
        void DeleteFindingsFilterAsync(const DeleteFindingsFilterRequestT& request, const DeleteFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DeleteFindingsFilter, request, handler, context);
        }

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
        template<typename DeleteInvitationsRequestT = Model::DeleteInvitationsRequest>
        Model::DeleteInvitationsOutcomeCallable DeleteInvitationsCallable(const DeleteInvitationsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DeleteInvitations, request);
        }

        /**
         * An Async wrapper for DeleteInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInvitationsRequestT = Model::DeleteInvitationsRequest>
        void DeleteInvitationsAsync(const DeleteInvitationsRequestT& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DeleteInvitations, request, handler, context);
        }

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
        template<typename DeleteMemberRequestT = Model::DeleteMemberRequest>
        Model::DeleteMemberOutcomeCallable DeleteMemberCallable(const DeleteMemberRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DeleteMember, request);
        }

        /**
         * An Async wrapper for DeleteMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMemberRequestT = Model::DeleteMemberRequest>
        void DeleteMemberAsync(const DeleteMemberRequestT& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DeleteMember, request, handler, context);
        }

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
        template<typename DescribeBucketsRequestT = Model::DescribeBucketsRequest>
        Model::DescribeBucketsOutcomeCallable DescribeBucketsCallable(const DescribeBucketsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DescribeBuckets, request);
        }

        /**
         * An Async wrapper for DescribeBuckets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBucketsRequestT = Model::DescribeBucketsRequest>
        void DescribeBucketsAsync(const DescribeBucketsRequestT& request, const DescribeBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DescribeBuckets, request, handler, context);
        }

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
        template<typename DescribeClassificationJobRequestT = Model::DescribeClassificationJobRequest>
        Model::DescribeClassificationJobOutcomeCallable DescribeClassificationJobCallable(const DescribeClassificationJobRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DescribeClassificationJob, request);
        }

        /**
         * An Async wrapper for DescribeClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClassificationJobRequestT = Model::DescribeClassificationJobRequest>
        void DescribeClassificationJobAsync(const DescribeClassificationJobRequestT& request, const DescribeClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DescribeClassificationJob, request, handler, context);
        }

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
        template<typename DescribeOrganizationConfigurationRequestT = Model::DescribeOrganizationConfigurationRequest>
        Model::DescribeOrganizationConfigurationOutcomeCallable DescribeOrganizationConfigurationCallable(const DescribeOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DescribeOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationConfigurationRequestT = Model::DescribeOrganizationConfigurationRequest>
        void DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequestT& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DescribeOrganizationConfiguration, request, handler, context);
        }

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
        template<typename DisableMacieRequestT = Model::DisableMacieRequest>
        Model::DisableMacieOutcomeCallable DisableMacieCallable(const DisableMacieRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DisableMacie, request);
        }

        /**
         * An Async wrapper for DisableMacie that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableMacieRequestT = Model::DisableMacieRequest>
        void DisableMacieAsync(const DisableMacieRequestT& request, const DisableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DisableMacie, request, handler, context);
        }

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
        template<typename DisableOrganizationAdminAccountRequestT = Model::DisableOrganizationAdminAccountRequest>
        Model::DisableOrganizationAdminAccountOutcomeCallable DisableOrganizationAdminAccountCallable(const DisableOrganizationAdminAccountRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DisableOrganizationAdminAccount, request);
        }

        /**
         * An Async wrapper for DisableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableOrganizationAdminAccountRequestT = Model::DisableOrganizationAdminAccountRequest>
        void DisableOrganizationAdminAccountAsync(const DisableOrganizationAdminAccountRequestT& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DisableOrganizationAdminAccount, request, handler, context);
        }

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
        template<typename DisassociateFromAdministratorAccountRequestT = Model::DisassociateFromAdministratorAccountRequest>
        Model::DisassociateFromAdministratorAccountOutcomeCallable DisassociateFromAdministratorAccountCallable(const DisassociateFromAdministratorAccountRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DisassociateFromAdministratorAccount, request);
        }

        /**
         * An Async wrapper for DisassociateFromAdministratorAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateFromAdministratorAccountRequestT = Model::DisassociateFromAdministratorAccountRequest>
        void DisassociateFromAdministratorAccountAsync(const DisassociateFromAdministratorAccountRequestT& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DisassociateFromAdministratorAccount, request, handler, context);
        }

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
        template<typename DisassociateFromMasterAccountRequestT = Model::DisassociateFromMasterAccountRequest>
        Model::DisassociateFromMasterAccountOutcomeCallable DisassociateFromMasterAccountCallable(const DisassociateFromMasterAccountRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DisassociateFromMasterAccount, request);
        }

        /**
         * An Async wrapper for DisassociateFromMasterAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateFromMasterAccountRequestT = Model::DisassociateFromMasterAccountRequest>
        void DisassociateFromMasterAccountAsync(const DisassociateFromMasterAccountRequestT& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DisassociateFromMasterAccount, request, handler, context);
        }

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
        template<typename DisassociateMemberRequestT = Model::DisassociateMemberRequest>
        Model::DisassociateMemberOutcomeCallable DisassociateMemberCallable(const DisassociateMemberRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::DisassociateMember, request);
        }

        /**
         * An Async wrapper for DisassociateMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMemberRequestT = Model::DisassociateMemberRequest>
        void DisassociateMemberAsync(const DisassociateMemberRequestT& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::DisassociateMember, request, handler, context);
        }

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
        template<typename EnableMacieRequestT = Model::EnableMacieRequest>
        Model::EnableMacieOutcomeCallable EnableMacieCallable(const EnableMacieRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::EnableMacie, request);
        }

        /**
         * An Async wrapper for EnableMacie that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableMacieRequestT = Model::EnableMacieRequest>
        void EnableMacieAsync(const EnableMacieRequestT& request, const EnableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::EnableMacie, request, handler, context);
        }

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
        template<typename EnableOrganizationAdminAccountRequestT = Model::EnableOrganizationAdminAccountRequest>
        Model::EnableOrganizationAdminAccountOutcomeCallable EnableOrganizationAdminAccountCallable(const EnableOrganizationAdminAccountRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::EnableOrganizationAdminAccount, request);
        }

        /**
         * An Async wrapper for EnableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableOrganizationAdminAccountRequestT = Model::EnableOrganizationAdminAccountRequest>
        void EnableOrganizationAdminAccountAsync(const EnableOrganizationAdminAccountRequestT& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::EnableOrganizationAdminAccount, request, handler, context);
        }

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
        template<typename GetAdministratorAccountRequestT = Model::GetAdministratorAccountRequest>
        Model::GetAdministratorAccountOutcomeCallable GetAdministratorAccountCallable(const GetAdministratorAccountRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetAdministratorAccount, request);
        }

        /**
         * An Async wrapper for GetAdministratorAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAdministratorAccountRequestT = Model::GetAdministratorAccountRequest>
        void GetAdministratorAccountAsync(const GetAdministratorAccountRequestT& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetAdministratorAccount, request, handler, context);
        }

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
        template<typename GetAllowListRequestT = Model::GetAllowListRequest>
        Model::GetAllowListOutcomeCallable GetAllowListCallable(const GetAllowListRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetAllowList, request);
        }

        /**
         * An Async wrapper for GetAllowList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAllowListRequestT = Model::GetAllowListRequest>
        void GetAllowListAsync(const GetAllowListRequestT& request, const GetAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetAllowList, request, handler, context);
        }

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
        template<typename GetAutomatedDiscoveryConfigurationRequestT = Model::GetAutomatedDiscoveryConfigurationRequest>
        Model::GetAutomatedDiscoveryConfigurationOutcomeCallable GetAutomatedDiscoveryConfigurationCallable(const GetAutomatedDiscoveryConfigurationRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetAutomatedDiscoveryConfiguration, request);
        }

        /**
         * An Async wrapper for GetAutomatedDiscoveryConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutomatedDiscoveryConfigurationRequestT = Model::GetAutomatedDiscoveryConfigurationRequest>
        void GetAutomatedDiscoveryConfigurationAsync(const GetAutomatedDiscoveryConfigurationRequestT& request, const GetAutomatedDiscoveryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetAutomatedDiscoveryConfiguration, request, handler, context);
        }

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
        template<typename GetBucketStatisticsRequestT = Model::GetBucketStatisticsRequest>
        Model::GetBucketStatisticsOutcomeCallable GetBucketStatisticsCallable(const GetBucketStatisticsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetBucketStatistics, request);
        }

        /**
         * An Async wrapper for GetBucketStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBucketStatisticsRequestT = Model::GetBucketStatisticsRequest>
        void GetBucketStatisticsAsync(const GetBucketStatisticsRequestT& request, const GetBucketStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetBucketStatistics, request, handler, context);
        }

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
        template<typename GetClassificationExportConfigurationRequestT = Model::GetClassificationExportConfigurationRequest>
        Model::GetClassificationExportConfigurationOutcomeCallable GetClassificationExportConfigurationCallable(const GetClassificationExportConfigurationRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetClassificationExportConfiguration, request);
        }

        /**
         * An Async wrapper for GetClassificationExportConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetClassificationExportConfigurationRequestT = Model::GetClassificationExportConfigurationRequest>
        void GetClassificationExportConfigurationAsync(const GetClassificationExportConfigurationRequestT& request, const GetClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetClassificationExportConfiguration, request, handler, context);
        }

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
        template<typename GetClassificationScopeRequestT = Model::GetClassificationScopeRequest>
        Model::GetClassificationScopeOutcomeCallable GetClassificationScopeCallable(const GetClassificationScopeRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetClassificationScope, request);
        }

        /**
         * An Async wrapper for GetClassificationScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetClassificationScopeRequestT = Model::GetClassificationScopeRequest>
        void GetClassificationScopeAsync(const GetClassificationScopeRequestT& request, const GetClassificationScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetClassificationScope, request, handler, context);
        }

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
        template<typename GetCustomDataIdentifierRequestT = Model::GetCustomDataIdentifierRequest>
        Model::GetCustomDataIdentifierOutcomeCallable GetCustomDataIdentifierCallable(const GetCustomDataIdentifierRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetCustomDataIdentifier, request);
        }

        /**
         * An Async wrapper for GetCustomDataIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCustomDataIdentifierRequestT = Model::GetCustomDataIdentifierRequest>
        void GetCustomDataIdentifierAsync(const GetCustomDataIdentifierRequestT& request, const GetCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetCustomDataIdentifier, request, handler, context);
        }

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
        template<typename GetFindingStatisticsRequestT = Model::GetFindingStatisticsRequest>
        Model::GetFindingStatisticsOutcomeCallable GetFindingStatisticsCallable(const GetFindingStatisticsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetFindingStatistics, request);
        }

        /**
         * An Async wrapper for GetFindingStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingStatisticsRequestT = Model::GetFindingStatisticsRequest>
        void GetFindingStatisticsAsync(const GetFindingStatisticsRequestT& request, const GetFindingStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetFindingStatistics, request, handler, context);
        }

        /**
         * <p>Retrieves the details of one or more findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;

        /**
         * A Callable wrapper for GetFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFindingsRequestT = Model::GetFindingsRequest>
        Model::GetFindingsOutcomeCallable GetFindingsCallable(const GetFindingsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetFindings, request);
        }

        /**
         * An Async wrapper for GetFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingsRequestT = Model::GetFindingsRequest>
        void GetFindingsAsync(const GetFindingsRequestT& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetFindings, request, handler, context);
        }

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
        template<typename GetFindingsFilterRequestT = Model::GetFindingsFilterRequest>
        Model::GetFindingsFilterOutcomeCallable GetFindingsFilterCallable(const GetFindingsFilterRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetFindingsFilter, request);
        }

        /**
         * An Async wrapper for GetFindingsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingsFilterRequestT = Model::GetFindingsFilterRequest>
        void GetFindingsFilterAsync(const GetFindingsFilterRequestT& request, const GetFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetFindingsFilter, request, handler, context);
        }

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
        template<typename GetFindingsPublicationConfigurationRequestT = Model::GetFindingsPublicationConfigurationRequest>
        Model::GetFindingsPublicationConfigurationOutcomeCallable GetFindingsPublicationConfigurationCallable(const GetFindingsPublicationConfigurationRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetFindingsPublicationConfiguration, request);
        }

        /**
         * An Async wrapper for GetFindingsPublicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingsPublicationConfigurationRequestT = Model::GetFindingsPublicationConfigurationRequest>
        void GetFindingsPublicationConfigurationAsync(const GetFindingsPublicationConfigurationRequestT& request, const GetFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetFindingsPublicationConfiguration, request, handler, context);
        }

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
        template<typename GetInvitationsCountRequestT = Model::GetInvitationsCountRequest>
        Model::GetInvitationsCountOutcomeCallable GetInvitationsCountCallable(const GetInvitationsCountRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetInvitationsCount, request);
        }

        /**
         * An Async wrapper for GetInvitationsCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInvitationsCountRequestT = Model::GetInvitationsCountRequest>
        void GetInvitationsCountAsync(const GetInvitationsCountRequestT& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetInvitationsCount, request, handler, context);
        }

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
        template<typename GetMacieSessionRequestT = Model::GetMacieSessionRequest>
        Model::GetMacieSessionOutcomeCallable GetMacieSessionCallable(const GetMacieSessionRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetMacieSession, request);
        }

        /**
         * An Async wrapper for GetMacieSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMacieSessionRequestT = Model::GetMacieSessionRequest>
        void GetMacieSessionAsync(const GetMacieSessionRequestT& request, const GetMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetMacieSession, request, handler, context);
        }

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
        template<typename GetMasterAccountRequestT = Model::GetMasterAccountRequest>
        Model::GetMasterAccountOutcomeCallable GetMasterAccountCallable(const GetMasterAccountRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetMasterAccount, request);
        }

        /**
         * An Async wrapper for GetMasterAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMasterAccountRequestT = Model::GetMasterAccountRequest>
        void GetMasterAccountAsync(const GetMasterAccountRequestT& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetMasterAccount, request, handler, context);
        }

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
        template<typename GetMemberRequestT = Model::GetMemberRequest>
        Model::GetMemberOutcomeCallable GetMemberCallable(const GetMemberRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetMember, request);
        }

        /**
         * An Async wrapper for GetMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMemberRequestT = Model::GetMemberRequest>
        void GetMemberAsync(const GetMemberRequestT& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetMember, request, handler, context);
        }

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
        template<typename GetResourceProfileRequestT = Model::GetResourceProfileRequest>
        Model::GetResourceProfileOutcomeCallable GetResourceProfileCallable(const GetResourceProfileRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetResourceProfile, request);
        }

        /**
         * An Async wrapper for GetResourceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceProfileRequestT = Model::GetResourceProfileRequest>
        void GetResourceProfileAsync(const GetResourceProfileRequestT& request, const GetResourceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetResourceProfile, request, handler, context);
        }

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
        template<typename GetRevealConfigurationRequestT = Model::GetRevealConfigurationRequest>
        Model::GetRevealConfigurationOutcomeCallable GetRevealConfigurationCallable(const GetRevealConfigurationRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetRevealConfiguration, request);
        }

        /**
         * An Async wrapper for GetRevealConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRevealConfigurationRequestT = Model::GetRevealConfigurationRequest>
        void GetRevealConfigurationAsync(const GetRevealConfigurationRequestT& request, const GetRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetRevealConfiguration, request, handler, context);
        }

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
        template<typename GetSensitiveDataOccurrencesRequestT = Model::GetSensitiveDataOccurrencesRequest>
        Model::GetSensitiveDataOccurrencesOutcomeCallable GetSensitiveDataOccurrencesCallable(const GetSensitiveDataOccurrencesRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetSensitiveDataOccurrences, request);
        }

        /**
         * An Async wrapper for GetSensitiveDataOccurrences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSensitiveDataOccurrencesRequestT = Model::GetSensitiveDataOccurrencesRequest>
        void GetSensitiveDataOccurrencesAsync(const GetSensitiveDataOccurrencesRequestT& request, const GetSensitiveDataOccurrencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetSensitiveDataOccurrences, request, handler, context);
        }

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
        template<typename GetSensitiveDataOccurrencesAvailabilityRequestT = Model::GetSensitiveDataOccurrencesAvailabilityRequest>
        Model::GetSensitiveDataOccurrencesAvailabilityOutcomeCallable GetSensitiveDataOccurrencesAvailabilityCallable(const GetSensitiveDataOccurrencesAvailabilityRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetSensitiveDataOccurrencesAvailability, request);
        }

        /**
         * An Async wrapper for GetSensitiveDataOccurrencesAvailability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSensitiveDataOccurrencesAvailabilityRequestT = Model::GetSensitiveDataOccurrencesAvailabilityRequest>
        void GetSensitiveDataOccurrencesAvailabilityAsync(const GetSensitiveDataOccurrencesAvailabilityRequestT& request, const GetSensitiveDataOccurrencesAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetSensitiveDataOccurrencesAvailability, request, handler, context);
        }

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
        template<typename GetSensitivityInspectionTemplateRequestT = Model::GetSensitivityInspectionTemplateRequest>
        Model::GetSensitivityInspectionTemplateOutcomeCallable GetSensitivityInspectionTemplateCallable(const GetSensitivityInspectionTemplateRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetSensitivityInspectionTemplate, request);
        }

        /**
         * An Async wrapper for GetSensitivityInspectionTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSensitivityInspectionTemplateRequestT = Model::GetSensitivityInspectionTemplateRequest>
        void GetSensitivityInspectionTemplateAsync(const GetSensitivityInspectionTemplateRequestT& request, const GetSensitivityInspectionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetSensitivityInspectionTemplate, request, handler, context);
        }

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
        template<typename GetUsageStatisticsRequestT = Model::GetUsageStatisticsRequest>
        Model::GetUsageStatisticsOutcomeCallable GetUsageStatisticsCallable(const GetUsageStatisticsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetUsageStatistics, request);
        }

        /**
         * An Async wrapper for GetUsageStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUsageStatisticsRequestT = Model::GetUsageStatisticsRequest>
        void GetUsageStatisticsAsync(const GetUsageStatisticsRequestT& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetUsageStatistics, request, handler, context);
        }

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
        template<typename GetUsageTotalsRequestT = Model::GetUsageTotalsRequest>
        Model::GetUsageTotalsOutcomeCallable GetUsageTotalsCallable(const GetUsageTotalsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::GetUsageTotals, request);
        }

        /**
         * An Async wrapper for GetUsageTotals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUsageTotalsRequestT = Model::GetUsageTotalsRequest>
        void GetUsageTotalsAsync(const GetUsageTotalsRequestT& request, const GetUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::GetUsageTotals, request, handler, context);
        }

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
        template<typename ListAllowListsRequestT = Model::ListAllowListsRequest>
        Model::ListAllowListsOutcomeCallable ListAllowListsCallable(const ListAllowListsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListAllowLists, request);
        }

        /**
         * An Async wrapper for ListAllowLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAllowListsRequestT = Model::ListAllowListsRequest>
        void ListAllowListsAsync(const ListAllowListsRequestT& request, const ListAllowListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListAllowLists, request, handler, context);
        }

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
        template<typename ListClassificationJobsRequestT = Model::ListClassificationJobsRequest>
        Model::ListClassificationJobsOutcomeCallable ListClassificationJobsCallable(const ListClassificationJobsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListClassificationJobs, request);
        }

        /**
         * An Async wrapper for ListClassificationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClassificationJobsRequestT = Model::ListClassificationJobsRequest>
        void ListClassificationJobsAsync(const ListClassificationJobsRequestT& request, const ListClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListClassificationJobs, request, handler, context);
        }

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
        template<typename ListClassificationScopesRequestT = Model::ListClassificationScopesRequest>
        Model::ListClassificationScopesOutcomeCallable ListClassificationScopesCallable(const ListClassificationScopesRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListClassificationScopes, request);
        }

        /**
         * An Async wrapper for ListClassificationScopes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClassificationScopesRequestT = Model::ListClassificationScopesRequest>
        void ListClassificationScopesAsync(const ListClassificationScopesRequestT& request, const ListClassificationScopesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListClassificationScopes, request, handler, context);
        }

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
        template<typename ListCustomDataIdentifiersRequestT = Model::ListCustomDataIdentifiersRequest>
        Model::ListCustomDataIdentifiersOutcomeCallable ListCustomDataIdentifiersCallable(const ListCustomDataIdentifiersRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListCustomDataIdentifiers, request);
        }

        /**
         * An Async wrapper for ListCustomDataIdentifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomDataIdentifiersRequestT = Model::ListCustomDataIdentifiersRequest>
        void ListCustomDataIdentifiersAsync(const ListCustomDataIdentifiersRequestT& request, const ListCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListCustomDataIdentifiers, request, handler, context);
        }

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
        template<typename ListFindingsRequestT = Model::ListFindingsRequest>
        Model::ListFindingsOutcomeCallable ListFindingsCallable(const ListFindingsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListFindings, request);
        }

        /**
         * An Async wrapper for ListFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFindingsRequestT = Model::ListFindingsRequest>
        void ListFindingsAsync(const ListFindingsRequestT& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListFindings, request, handler, context);
        }

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
        template<typename ListFindingsFiltersRequestT = Model::ListFindingsFiltersRequest>
        Model::ListFindingsFiltersOutcomeCallable ListFindingsFiltersCallable(const ListFindingsFiltersRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListFindingsFilters, request);
        }

        /**
         * An Async wrapper for ListFindingsFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFindingsFiltersRequestT = Model::ListFindingsFiltersRequest>
        void ListFindingsFiltersAsync(const ListFindingsFiltersRequestT& request, const ListFindingsFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListFindingsFilters, request, handler, context);
        }

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
        template<typename ListInvitationsRequestT = Model::ListInvitationsRequest>
        Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const ListInvitationsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListInvitations, request);
        }

        /**
         * An Async wrapper for ListInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInvitationsRequestT = Model::ListInvitationsRequest>
        void ListInvitationsAsync(const ListInvitationsRequestT& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListInvitations, request, handler, context);
        }

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
        template<typename ListManagedDataIdentifiersRequestT = Model::ListManagedDataIdentifiersRequest>
        Model::ListManagedDataIdentifiersOutcomeCallable ListManagedDataIdentifiersCallable(const ListManagedDataIdentifiersRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListManagedDataIdentifiers, request);
        }

        /**
         * An Async wrapper for ListManagedDataIdentifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedDataIdentifiersRequestT = Model::ListManagedDataIdentifiersRequest>
        void ListManagedDataIdentifiersAsync(const ListManagedDataIdentifiersRequestT& request, const ListManagedDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListManagedDataIdentifiers, request, handler, context);
        }

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
        template<typename ListMembersRequestT = Model::ListMembersRequest>
        Model::ListMembersOutcomeCallable ListMembersCallable(const ListMembersRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListMembers, request);
        }

        /**
         * An Async wrapper for ListMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMembersRequestT = Model::ListMembersRequest>
        void ListMembersAsync(const ListMembersRequestT& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListMembers, request, handler, context);
        }

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
        template<typename ListOrganizationAdminAccountsRequestT = Model::ListOrganizationAdminAccountsRequest>
        Model::ListOrganizationAdminAccountsOutcomeCallable ListOrganizationAdminAccountsCallable(const ListOrganizationAdminAccountsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListOrganizationAdminAccounts, request);
        }

        /**
         * An Async wrapper for ListOrganizationAdminAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationAdminAccountsRequestT = Model::ListOrganizationAdminAccountsRequest>
        void ListOrganizationAdminAccountsAsync(const ListOrganizationAdminAccountsRequestT& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListOrganizationAdminAccounts, request, handler, context);
        }

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
        template<typename ListResourceProfileArtifactsRequestT = Model::ListResourceProfileArtifactsRequest>
        Model::ListResourceProfileArtifactsOutcomeCallable ListResourceProfileArtifactsCallable(const ListResourceProfileArtifactsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListResourceProfileArtifacts, request);
        }

        /**
         * An Async wrapper for ListResourceProfileArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceProfileArtifactsRequestT = Model::ListResourceProfileArtifactsRequest>
        void ListResourceProfileArtifactsAsync(const ListResourceProfileArtifactsRequestT& request, const ListResourceProfileArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListResourceProfileArtifacts, request, handler, context);
        }

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
        template<typename ListResourceProfileDetectionsRequestT = Model::ListResourceProfileDetectionsRequest>
        Model::ListResourceProfileDetectionsOutcomeCallable ListResourceProfileDetectionsCallable(const ListResourceProfileDetectionsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListResourceProfileDetections, request);
        }

        /**
         * An Async wrapper for ListResourceProfileDetections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceProfileDetectionsRequestT = Model::ListResourceProfileDetectionsRequest>
        void ListResourceProfileDetectionsAsync(const ListResourceProfileDetectionsRequestT& request, const ListResourceProfileDetectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListResourceProfileDetections, request, handler, context);
        }

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
        template<typename ListSensitivityInspectionTemplatesRequestT = Model::ListSensitivityInspectionTemplatesRequest>
        Model::ListSensitivityInspectionTemplatesOutcomeCallable ListSensitivityInspectionTemplatesCallable(const ListSensitivityInspectionTemplatesRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListSensitivityInspectionTemplates, request);
        }

        /**
         * An Async wrapper for ListSensitivityInspectionTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSensitivityInspectionTemplatesRequestT = Model::ListSensitivityInspectionTemplatesRequest>
        void ListSensitivityInspectionTemplatesAsync(const ListSensitivityInspectionTemplatesRequestT& request, const ListSensitivityInspectionTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListSensitivityInspectionTemplates, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::ListTagsForResource, request, handler, context);
        }

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
        template<typename PutClassificationExportConfigurationRequestT = Model::PutClassificationExportConfigurationRequest>
        Model::PutClassificationExportConfigurationOutcomeCallable PutClassificationExportConfigurationCallable(const PutClassificationExportConfigurationRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::PutClassificationExportConfiguration, request);
        }

        /**
         * An Async wrapper for PutClassificationExportConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutClassificationExportConfigurationRequestT = Model::PutClassificationExportConfigurationRequest>
        void PutClassificationExportConfigurationAsync(const PutClassificationExportConfigurationRequestT& request, const PutClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::PutClassificationExportConfiguration, request, handler, context);
        }

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
        template<typename PutFindingsPublicationConfigurationRequestT = Model::PutFindingsPublicationConfigurationRequest>
        Model::PutFindingsPublicationConfigurationOutcomeCallable PutFindingsPublicationConfigurationCallable(const PutFindingsPublicationConfigurationRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::PutFindingsPublicationConfiguration, request);
        }

        /**
         * An Async wrapper for PutFindingsPublicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutFindingsPublicationConfigurationRequestT = Model::PutFindingsPublicationConfigurationRequest>
        void PutFindingsPublicationConfigurationAsync(const PutFindingsPublicationConfigurationRequestT& request, const PutFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::PutFindingsPublicationConfiguration, request, handler, context);
        }

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
        template<typename SearchResourcesRequestT = Model::SearchResourcesRequest>
        Model::SearchResourcesOutcomeCallable SearchResourcesCallable(const SearchResourcesRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::SearchResources, request);
        }

        /**
         * An Async wrapper for SearchResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchResourcesRequestT = Model::SearchResourcesRequest>
        void SearchResourcesAsync(const SearchResourcesRequestT& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::SearchResources, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::TagResource, request, handler, context);
        }

        /**
         * <p>Tests a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TestCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::TestCustomDataIdentifierOutcome TestCustomDataIdentifier(const Model::TestCustomDataIdentifierRequest& request) const;

        /**
         * A Callable wrapper for TestCustomDataIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestCustomDataIdentifierRequestT = Model::TestCustomDataIdentifierRequest>
        Model::TestCustomDataIdentifierOutcomeCallable TestCustomDataIdentifierCallable(const TestCustomDataIdentifierRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::TestCustomDataIdentifier, request);
        }

        /**
         * An Async wrapper for TestCustomDataIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestCustomDataIdentifierRequestT = Model::TestCustomDataIdentifierRequest>
        void TestCustomDataIdentifierAsync(const TestCustomDataIdentifierRequestT& request, const TestCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::TestCustomDataIdentifier, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the settings for an allow list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAllowListOutcome UpdateAllowList(const Model::UpdateAllowListRequest& request) const;

        /**
         * A Callable wrapper for UpdateAllowList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAllowListRequestT = Model::UpdateAllowListRequest>
        Model::UpdateAllowListOutcomeCallable UpdateAllowListCallable(const UpdateAllowListRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UpdateAllowList, request);
        }

        /**
         * An Async wrapper for UpdateAllowList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAllowListRequestT = Model::UpdateAllowListRequest>
        void UpdateAllowListAsync(const UpdateAllowListRequestT& request, const UpdateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UpdateAllowList, request, handler, context);
        }

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
        template<typename UpdateAutomatedDiscoveryConfigurationRequestT = Model::UpdateAutomatedDiscoveryConfigurationRequest>
        Model::UpdateAutomatedDiscoveryConfigurationOutcomeCallable UpdateAutomatedDiscoveryConfigurationCallable(const UpdateAutomatedDiscoveryConfigurationRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UpdateAutomatedDiscoveryConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateAutomatedDiscoveryConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAutomatedDiscoveryConfigurationRequestT = Model::UpdateAutomatedDiscoveryConfigurationRequest>
        void UpdateAutomatedDiscoveryConfigurationAsync(const UpdateAutomatedDiscoveryConfigurationRequestT& request, const UpdateAutomatedDiscoveryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UpdateAutomatedDiscoveryConfiguration, request, handler, context);
        }

        /**
         * <p>Changes the status of a classification job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClassificationJobOutcome UpdateClassificationJob(const Model::UpdateClassificationJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateClassificationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClassificationJobRequestT = Model::UpdateClassificationJobRequest>
        Model::UpdateClassificationJobOutcomeCallable UpdateClassificationJobCallable(const UpdateClassificationJobRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UpdateClassificationJob, request);
        }

        /**
         * An Async wrapper for UpdateClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClassificationJobRequestT = Model::UpdateClassificationJobRequest>
        void UpdateClassificationJobAsync(const UpdateClassificationJobRequestT& request, const UpdateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UpdateClassificationJob, request, handler, context);
        }

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
        template<typename UpdateClassificationScopeRequestT = Model::UpdateClassificationScopeRequest>
        Model::UpdateClassificationScopeOutcomeCallable UpdateClassificationScopeCallable(const UpdateClassificationScopeRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UpdateClassificationScope, request);
        }

        /**
         * An Async wrapper for UpdateClassificationScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClassificationScopeRequestT = Model::UpdateClassificationScopeRequest>
        void UpdateClassificationScopeAsync(const UpdateClassificationScopeRequestT& request, const UpdateClassificationScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UpdateClassificationScope, request, handler, context);
        }

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
        template<typename UpdateFindingsFilterRequestT = Model::UpdateFindingsFilterRequest>
        Model::UpdateFindingsFilterOutcomeCallable UpdateFindingsFilterCallable(const UpdateFindingsFilterRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UpdateFindingsFilter, request);
        }

        /**
         * An Async wrapper for UpdateFindingsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFindingsFilterRequestT = Model::UpdateFindingsFilterRequest>
        void UpdateFindingsFilterAsync(const UpdateFindingsFilterRequestT& request, const UpdateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UpdateFindingsFilter, request, handler, context);
        }

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
        template<typename UpdateMacieSessionRequestT = Model::UpdateMacieSessionRequest>
        Model::UpdateMacieSessionOutcomeCallable UpdateMacieSessionCallable(const UpdateMacieSessionRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UpdateMacieSession, request);
        }

        /**
         * An Async wrapper for UpdateMacieSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMacieSessionRequestT = Model::UpdateMacieSessionRequest>
        void UpdateMacieSessionAsync(const UpdateMacieSessionRequestT& request, const UpdateMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UpdateMacieSession, request, handler, context);
        }

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
        template<typename UpdateMemberSessionRequestT = Model::UpdateMemberSessionRequest>
        Model::UpdateMemberSessionOutcomeCallable UpdateMemberSessionCallable(const UpdateMemberSessionRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UpdateMemberSession, request);
        }

        /**
         * An Async wrapper for UpdateMemberSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMemberSessionRequestT = Model::UpdateMemberSessionRequest>
        void UpdateMemberSessionAsync(const UpdateMemberSessionRequestT& request, const UpdateMemberSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UpdateMemberSession, request, handler, context);
        }

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
        template<typename UpdateOrganizationConfigurationRequestT = Model::UpdateOrganizationConfigurationRequest>
        Model::UpdateOrganizationConfigurationOutcomeCallable UpdateOrganizationConfigurationCallable(const UpdateOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UpdateOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOrganizationConfigurationRequestT = Model::UpdateOrganizationConfigurationRequest>
        void UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequestT& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UpdateOrganizationConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the sensitivity score for an S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateResourceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceProfileOutcome UpdateResourceProfile(const Model::UpdateResourceProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResourceProfileRequestT = Model::UpdateResourceProfileRequest>
        Model::UpdateResourceProfileOutcomeCallable UpdateResourceProfileCallable(const UpdateResourceProfileRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UpdateResourceProfile, request);
        }

        /**
         * An Async wrapper for UpdateResourceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourceProfileRequestT = Model::UpdateResourceProfileRequest>
        void UpdateResourceProfileAsync(const UpdateResourceProfileRequestT& request, const UpdateResourceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UpdateResourceProfile, request, handler, context);
        }

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
        template<typename UpdateResourceProfileDetectionsRequestT = Model::UpdateResourceProfileDetectionsRequest>
        Model::UpdateResourceProfileDetectionsOutcomeCallable UpdateResourceProfileDetectionsCallable(const UpdateResourceProfileDetectionsRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UpdateResourceProfileDetections, request);
        }

        /**
         * An Async wrapper for UpdateResourceProfileDetections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourceProfileDetectionsRequestT = Model::UpdateResourceProfileDetectionsRequest>
        void UpdateResourceProfileDetectionsAsync(const UpdateResourceProfileDetectionsRequestT& request, const UpdateResourceProfileDetectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UpdateResourceProfileDetections, request, handler, context);
        }

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
        template<typename UpdateRevealConfigurationRequestT = Model::UpdateRevealConfigurationRequest>
        Model::UpdateRevealConfigurationOutcomeCallable UpdateRevealConfigurationCallable(const UpdateRevealConfigurationRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UpdateRevealConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateRevealConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRevealConfigurationRequestT = Model::UpdateRevealConfigurationRequest>
        void UpdateRevealConfigurationAsync(const UpdateRevealConfigurationRequestT& request, const UpdateRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UpdateRevealConfiguration, request, handler, context);
        }

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
        template<typename UpdateSensitivityInspectionTemplateRequestT = Model::UpdateSensitivityInspectionTemplateRequest>
        Model::UpdateSensitivityInspectionTemplateOutcomeCallable UpdateSensitivityInspectionTemplateCallable(const UpdateSensitivityInspectionTemplateRequestT& request) const
        {
            return SubmitCallable(&Macie2Client::UpdateSensitivityInspectionTemplate, request);
        }

        /**
         * An Async wrapper for UpdateSensitivityInspectionTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSensitivityInspectionTemplateRequestT = Model::UpdateSensitivityInspectionTemplateRequest>
        void UpdateSensitivityInspectionTemplateAsync(const UpdateSensitivityInspectionTemplateRequestT& request, const UpdateSensitivityInspectionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Macie2Client::UpdateSensitivityInspectionTemplate, request, handler, context);
        }


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
