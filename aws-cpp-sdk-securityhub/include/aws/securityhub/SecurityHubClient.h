/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/AcceptInvitationResult.h>
#include <aws/securityhub/model/BatchDisableStandardsResult.h>
#include <aws/securityhub/model/BatchEnableStandardsResult.h>
#include <aws/securityhub/model/BatchImportFindingsResult.h>
#include <aws/securityhub/model/CreateActionTargetResult.h>
#include <aws/securityhub/model/CreateInsightResult.h>
#include <aws/securityhub/model/CreateMembersResult.h>
#include <aws/securityhub/model/DeclineInvitationsResult.h>
#include <aws/securityhub/model/DeleteActionTargetResult.h>
#include <aws/securityhub/model/DeleteInsightResult.h>
#include <aws/securityhub/model/DeleteInvitationsResult.h>
#include <aws/securityhub/model/DeleteMembersResult.h>
#include <aws/securityhub/model/DescribeActionTargetsResult.h>
#include <aws/securityhub/model/DescribeHubResult.h>
#include <aws/securityhub/model/DescribeProductsResult.h>
#include <aws/securityhub/model/DisableImportFindingsForProductResult.h>
#include <aws/securityhub/model/DisableSecurityHubResult.h>
#include <aws/securityhub/model/DisassociateFromMasterAccountResult.h>
#include <aws/securityhub/model/DisassociateMembersResult.h>
#include <aws/securityhub/model/EnableImportFindingsForProductResult.h>
#include <aws/securityhub/model/EnableSecurityHubResult.h>
#include <aws/securityhub/model/GetEnabledStandardsResult.h>
#include <aws/securityhub/model/GetFindingsResult.h>
#include <aws/securityhub/model/GetInsightResultsResult.h>
#include <aws/securityhub/model/GetInsightsResult.h>
#include <aws/securityhub/model/GetInvitationsCountResult.h>
#include <aws/securityhub/model/GetMasterAccountResult.h>
#include <aws/securityhub/model/GetMembersResult.h>
#include <aws/securityhub/model/InviteMembersResult.h>
#include <aws/securityhub/model/ListEnabledProductsForImportResult.h>
#include <aws/securityhub/model/ListInvitationsResult.h>
#include <aws/securityhub/model/ListMembersResult.h>
#include <aws/securityhub/model/ListTagsForResourceResult.h>
#include <aws/securityhub/model/TagResourceResult.h>
#include <aws/securityhub/model/UntagResourceResult.h>
#include <aws/securityhub/model/UpdateActionTargetResult.h>
#include <aws/securityhub/model/UpdateFindingsResult.h>
#include <aws/securityhub/model/UpdateInsightResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace SecurityHub
{

namespace Model
{
        class AcceptInvitationRequest;
        class BatchDisableStandardsRequest;
        class BatchEnableStandardsRequest;
        class BatchImportFindingsRequest;
        class CreateActionTargetRequest;
        class CreateInsightRequest;
        class CreateMembersRequest;
        class DeclineInvitationsRequest;
        class DeleteActionTargetRequest;
        class DeleteInsightRequest;
        class DeleteInvitationsRequest;
        class DeleteMembersRequest;
        class DescribeActionTargetsRequest;
        class DescribeHubRequest;
        class DescribeProductsRequest;
        class DisableImportFindingsForProductRequest;
        class DisableSecurityHubRequest;
        class DisassociateFromMasterAccountRequest;
        class DisassociateMembersRequest;
        class EnableImportFindingsForProductRequest;
        class EnableSecurityHubRequest;
        class GetEnabledStandardsRequest;
        class GetFindingsRequest;
        class GetInsightResultsRequest;
        class GetInsightsRequest;
        class GetInvitationsCountRequest;
        class GetMasterAccountRequest;
        class GetMembersRequest;
        class InviteMembersRequest;
        class ListEnabledProductsForImportRequest;
        class ListInvitationsRequest;
        class ListMembersRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateActionTargetRequest;
        class UpdateFindingsRequest;
        class UpdateInsightRequest;

        typedef Aws::Utils::Outcome<AcceptInvitationResult, Aws::Client::AWSError<SecurityHubErrors>> AcceptInvitationOutcome;
        typedef Aws::Utils::Outcome<BatchDisableStandardsResult, Aws::Client::AWSError<SecurityHubErrors>> BatchDisableStandardsOutcome;
        typedef Aws::Utils::Outcome<BatchEnableStandardsResult, Aws::Client::AWSError<SecurityHubErrors>> BatchEnableStandardsOutcome;
        typedef Aws::Utils::Outcome<BatchImportFindingsResult, Aws::Client::AWSError<SecurityHubErrors>> BatchImportFindingsOutcome;
        typedef Aws::Utils::Outcome<CreateActionTargetResult, Aws::Client::AWSError<SecurityHubErrors>> CreateActionTargetOutcome;
        typedef Aws::Utils::Outcome<CreateInsightResult, Aws::Client::AWSError<SecurityHubErrors>> CreateInsightOutcome;
        typedef Aws::Utils::Outcome<CreateMembersResult, Aws::Client::AWSError<SecurityHubErrors>> CreateMembersOutcome;
        typedef Aws::Utils::Outcome<DeclineInvitationsResult, Aws::Client::AWSError<SecurityHubErrors>> DeclineInvitationsOutcome;
        typedef Aws::Utils::Outcome<DeleteActionTargetResult, Aws::Client::AWSError<SecurityHubErrors>> DeleteActionTargetOutcome;
        typedef Aws::Utils::Outcome<DeleteInsightResult, Aws::Client::AWSError<SecurityHubErrors>> DeleteInsightOutcome;
        typedef Aws::Utils::Outcome<DeleteInvitationsResult, Aws::Client::AWSError<SecurityHubErrors>> DeleteInvitationsOutcome;
        typedef Aws::Utils::Outcome<DeleteMembersResult, Aws::Client::AWSError<SecurityHubErrors>> DeleteMembersOutcome;
        typedef Aws::Utils::Outcome<DescribeActionTargetsResult, Aws::Client::AWSError<SecurityHubErrors>> DescribeActionTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeHubResult, Aws::Client::AWSError<SecurityHubErrors>> DescribeHubOutcome;
        typedef Aws::Utils::Outcome<DescribeProductsResult, Aws::Client::AWSError<SecurityHubErrors>> DescribeProductsOutcome;
        typedef Aws::Utils::Outcome<DisableImportFindingsForProductResult, Aws::Client::AWSError<SecurityHubErrors>> DisableImportFindingsForProductOutcome;
        typedef Aws::Utils::Outcome<DisableSecurityHubResult, Aws::Client::AWSError<SecurityHubErrors>> DisableSecurityHubOutcome;
        typedef Aws::Utils::Outcome<DisassociateFromMasterAccountResult, Aws::Client::AWSError<SecurityHubErrors>> DisassociateFromMasterAccountOutcome;
        typedef Aws::Utils::Outcome<DisassociateMembersResult, Aws::Client::AWSError<SecurityHubErrors>> DisassociateMembersOutcome;
        typedef Aws::Utils::Outcome<EnableImportFindingsForProductResult, Aws::Client::AWSError<SecurityHubErrors>> EnableImportFindingsForProductOutcome;
        typedef Aws::Utils::Outcome<EnableSecurityHubResult, Aws::Client::AWSError<SecurityHubErrors>> EnableSecurityHubOutcome;
        typedef Aws::Utils::Outcome<GetEnabledStandardsResult, Aws::Client::AWSError<SecurityHubErrors>> GetEnabledStandardsOutcome;
        typedef Aws::Utils::Outcome<GetFindingsResult, Aws::Client::AWSError<SecurityHubErrors>> GetFindingsOutcome;
        typedef Aws::Utils::Outcome<GetInsightResultsResult, Aws::Client::AWSError<SecurityHubErrors>> GetInsightResultsOutcome;
        typedef Aws::Utils::Outcome<GetInsightsResult, Aws::Client::AWSError<SecurityHubErrors>> GetInsightsOutcome;
        typedef Aws::Utils::Outcome<GetInvitationsCountResult, Aws::Client::AWSError<SecurityHubErrors>> GetInvitationsCountOutcome;
        typedef Aws::Utils::Outcome<GetMasterAccountResult, Aws::Client::AWSError<SecurityHubErrors>> GetMasterAccountOutcome;
        typedef Aws::Utils::Outcome<GetMembersResult, Aws::Client::AWSError<SecurityHubErrors>> GetMembersOutcome;
        typedef Aws::Utils::Outcome<InviteMembersResult, Aws::Client::AWSError<SecurityHubErrors>> InviteMembersOutcome;
        typedef Aws::Utils::Outcome<ListEnabledProductsForImportResult, Aws::Client::AWSError<SecurityHubErrors>> ListEnabledProductsForImportOutcome;
        typedef Aws::Utils::Outcome<ListInvitationsResult, Aws::Client::AWSError<SecurityHubErrors>> ListInvitationsOutcome;
        typedef Aws::Utils::Outcome<ListMembersResult, Aws::Client::AWSError<SecurityHubErrors>> ListMembersOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<SecurityHubErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<SecurityHubErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<SecurityHubErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateActionTargetResult, Aws::Client::AWSError<SecurityHubErrors>> UpdateActionTargetOutcome;
        typedef Aws::Utils::Outcome<UpdateFindingsResult, Aws::Client::AWSError<SecurityHubErrors>> UpdateFindingsOutcome;
        typedef Aws::Utils::Outcome<UpdateInsightResult, Aws::Client::AWSError<SecurityHubErrors>> UpdateInsightOutcome;

        typedef std::future<AcceptInvitationOutcome> AcceptInvitationOutcomeCallable;
        typedef std::future<BatchDisableStandardsOutcome> BatchDisableStandardsOutcomeCallable;
        typedef std::future<BatchEnableStandardsOutcome> BatchEnableStandardsOutcomeCallable;
        typedef std::future<BatchImportFindingsOutcome> BatchImportFindingsOutcomeCallable;
        typedef std::future<CreateActionTargetOutcome> CreateActionTargetOutcomeCallable;
        typedef std::future<CreateInsightOutcome> CreateInsightOutcomeCallable;
        typedef std::future<CreateMembersOutcome> CreateMembersOutcomeCallable;
        typedef std::future<DeclineInvitationsOutcome> DeclineInvitationsOutcomeCallable;
        typedef std::future<DeleteActionTargetOutcome> DeleteActionTargetOutcomeCallable;
        typedef std::future<DeleteInsightOutcome> DeleteInsightOutcomeCallable;
        typedef std::future<DeleteInvitationsOutcome> DeleteInvitationsOutcomeCallable;
        typedef std::future<DeleteMembersOutcome> DeleteMembersOutcomeCallable;
        typedef std::future<DescribeActionTargetsOutcome> DescribeActionTargetsOutcomeCallable;
        typedef std::future<DescribeHubOutcome> DescribeHubOutcomeCallable;
        typedef std::future<DescribeProductsOutcome> DescribeProductsOutcomeCallable;
        typedef std::future<DisableImportFindingsForProductOutcome> DisableImportFindingsForProductOutcomeCallable;
        typedef std::future<DisableSecurityHubOutcome> DisableSecurityHubOutcomeCallable;
        typedef std::future<DisassociateFromMasterAccountOutcome> DisassociateFromMasterAccountOutcomeCallable;
        typedef std::future<DisassociateMembersOutcome> DisassociateMembersOutcomeCallable;
        typedef std::future<EnableImportFindingsForProductOutcome> EnableImportFindingsForProductOutcomeCallable;
        typedef std::future<EnableSecurityHubOutcome> EnableSecurityHubOutcomeCallable;
        typedef std::future<GetEnabledStandardsOutcome> GetEnabledStandardsOutcomeCallable;
        typedef std::future<GetFindingsOutcome> GetFindingsOutcomeCallable;
        typedef std::future<GetInsightResultsOutcome> GetInsightResultsOutcomeCallable;
        typedef std::future<GetInsightsOutcome> GetInsightsOutcomeCallable;
        typedef std::future<GetInvitationsCountOutcome> GetInvitationsCountOutcomeCallable;
        typedef std::future<GetMasterAccountOutcome> GetMasterAccountOutcomeCallable;
        typedef std::future<GetMembersOutcome> GetMembersOutcomeCallable;
        typedef std::future<InviteMembersOutcome> InviteMembersOutcomeCallable;
        typedef std::future<ListEnabledProductsForImportOutcome> ListEnabledProductsForImportOutcomeCallable;
        typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
        typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateActionTargetOutcome> UpdateActionTargetOutcomeCallable;
        typedef std::future<UpdateFindingsOutcome> UpdateFindingsOutcomeCallable;
        typedef std::future<UpdateInsightOutcome> UpdateInsightOutcomeCallable;
} // namespace Model

  class SecurityHubClient;

    typedef std::function<void(const SecurityHubClient*, const Model::AcceptInvitationRequest&, const Model::AcceptInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInvitationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchDisableStandardsRequest&, const Model::BatchDisableStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisableStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchEnableStandardsRequest&, const Model::BatchEnableStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchEnableStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchImportFindingsRequest&, const Model::BatchImportFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchImportFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateActionTargetRequest&, const Model::CreateActionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateActionTargetResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateInsightRequest&, const Model::CreateInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInsightResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateMembersRequest&, const Model::CreateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeclineInvitationsRequest&, const Model::DeclineInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeclineInvitationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteActionTargetRequest&, const Model::DeleteActionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteActionTargetResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteInsightRequest&, const Model::DeleteInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInsightResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteInvitationsRequest&, const Model::DeleteInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInvitationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteMembersRequest&, const Model::DeleteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeActionTargetsRequest&, const Model::DescribeActionTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActionTargetsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeHubRequest&, const Model::DescribeHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHubResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DescribeProductsRequest&, const Model::DescribeProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisableImportFindingsForProductRequest&, const Model::DisableImportFindingsForProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableImportFindingsForProductResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisableSecurityHubRequest&, const Model::DisableSecurityHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableSecurityHubResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisassociateFromMasterAccountRequest&, const Model::DisassociateFromMasterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFromMasterAccountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DisassociateMembersRequest&, const Model::DisassociateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::EnableImportFindingsForProductRequest&, const Model::EnableImportFindingsForProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableImportFindingsForProductResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::EnableSecurityHubRequest&, const Model::EnableSecurityHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableSecurityHubResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetEnabledStandardsRequest&, const Model::GetEnabledStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnabledStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetFindingsRequest&, const Model::GetFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetInsightResultsRequest&, const Model::GetInsightResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightResultsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetInsightsRequest&, const Model::GetInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetInvitationsCountRequest&, const Model::GetInvitationsCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvitationsCountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetMasterAccountRequest&, const Model::GetMasterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMasterAccountResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::GetMembersRequest&, const Model::GetMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::InviteMembersRequest&, const Model::InviteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InviteMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListEnabledProductsForImportRequest&, const Model::ListEnabledProductsForImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnabledProductsForImportResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateActionTargetRequest&, const Model::UpdateActionTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateActionTargetResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateFindingsRequest&, const Model::UpdateFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateInsightRequest&, const Model::UpdateInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInsightResponseReceivedHandler;

  /**
   * <p>Security Hub provides you with a comprehensive view of the security state of
   * your AWS environment and resources. It also provides you with the compliance
   * status of your environment based on CIS AWS Foundations compliance checks.
   * Security Hub collects security data from AWS accounts, services, and integrated
   * third-party products and helps you analyze security trends in your environment
   * to identify the highest priority security issues. For more information about
   * Security Hub, see the <i> <a
   * href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html">AWS
   * Security Hub User Guide</a> </i>.</p> <p>When you use operations in the Security
   * Hub API, the requests are executed only in the AWS Region that is currently
   * active or in the specific AWS Region that you specify in your request. Any
   * configuration or settings change that results from the operation is applied only
   * to that Region. To make the same change in other Regions, execute the same
   * command for each Region to apply the change to. For example, if your Region is
   * set to <code>us-west-2</code>, when you use <code>CreateMembers</code> to add a
   * member account to Security Hub, the association of the member account with the
   * master account is created only in the us-west-2 Region. Security Hub must be
   * enabled for the member account in the same Region that the invite was sent
   * from.</p>
   */
  class AWS_SECURITYHUB_API SecurityHubClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityHubClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityHubClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecurityHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SecurityHubClient();

        inline virtual const char* GetServiceClientName() const override { return "SecurityHub"; }


        /**
         * <p>Accepts the invitation to be a member account and be monitored by the
         * Security Hub master account that the invitation was sent from. When the member
         * account accepts the invitation, permission is granted to the master account to
         * view findings generated in the member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AcceptInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInvitationOutcome AcceptInvitation(const Model::AcceptInvitationRequest& request) const;

        /**
         * <p>Accepts the invitation to be a member account and be monitored by the
         * Security Hub master account that the invitation was sent from. When the member
         * account accepts the invitation, permission is granted to the master account to
         * view findings generated in the member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInvitationOutcomeCallable AcceptInvitationCallable(const Model::AcceptInvitationRequest& request) const;

        /**
         * <p>Accepts the invitation to be a member account and be monitored by the
         * Security Hub master account that the invitation was sent from. When the member
         * account accepts the invitation, permission is granted to the master account to
         * view findings generated in the member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInvitationAsync(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the standards specified by the provided
         * <code>StandardsSubscriptionArns</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Standards
         * Supported in AWS Security Hub</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchDisableStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisableStandardsOutcome BatchDisableStandards(const Model::BatchDisableStandardsRequest& request) const;

        /**
         * <p>Disables the standards specified by the provided
         * <code>StandardsSubscriptionArns</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Standards
         * Supported in AWS Security Hub</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchDisableStandards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisableStandardsOutcomeCallable BatchDisableStandardsCallable(const Model::BatchDisableStandardsRequest& request) const;

        /**
         * <p>Disables the standards specified by the provided
         * <code>StandardsSubscriptionArns</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Standards
         * Supported in AWS Security Hub</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchDisableStandards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisableStandardsAsync(const Model::BatchDisableStandardsRequest& request, const BatchDisableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the standards specified by the provided <code>standardsArn</code>. In
         * this release, only CIS AWS Foundations standards are supported. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Standards
         * Supported in AWS Security Hub</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchEnableStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchEnableStandardsOutcome BatchEnableStandards(const Model::BatchEnableStandardsRequest& request) const;

        /**
         * <p>Enables the standards specified by the provided <code>standardsArn</code>. In
         * this release, only CIS AWS Foundations standards are supported. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Standards
         * Supported in AWS Security Hub</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchEnableStandards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchEnableStandardsOutcomeCallable BatchEnableStandardsCallable(const Model::BatchEnableStandardsRequest& request) const;

        /**
         * <p>Enables the standards specified by the provided <code>standardsArn</code>. In
         * this release, only CIS AWS Foundations standards are supported. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Standards
         * Supported in AWS Security Hub</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchEnableStandards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchEnableStandardsAsync(const Model::BatchEnableStandardsRequest& request, const BatchEnableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports security findings generated from an integrated third-party product
         * into Security Hub. This action is requested by the integrated product to import
         * its findings into Security Hub. The maximum allowed size for a finding is 240
         * Kb. An error is returned for any finding larger than 240 Kb.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchImportFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchImportFindingsOutcome BatchImportFindings(const Model::BatchImportFindingsRequest& request) const;

        /**
         * <p>Imports security findings generated from an integrated third-party product
         * into Security Hub. This action is requested by the integrated product to import
         * its findings into Security Hub. The maximum allowed size for a finding is 240
         * Kb. An error is returned for any finding larger than 240 Kb.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchImportFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchImportFindingsOutcomeCallable BatchImportFindingsCallable(const Model::BatchImportFindingsRequest& request) const;

        /**
         * <p>Imports security findings generated from an integrated third-party product
         * into Security Hub. This action is requested by the integrated product to import
         * its findings into Security Hub. The maximum allowed size for a finding is 240
         * Kb. An error is returned for any finding larger than 240 Kb.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchImportFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchImportFindingsAsync(const Model::BatchImportFindingsRequest& request, const BatchImportFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom action target in Security Hub. You can use custom actions on
         * findings and insights in Security Hub to trigger target actions in Amazon
         * CloudWatch Events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateActionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActionTargetOutcome CreateActionTarget(const Model::CreateActionTargetRequest& request) const;

        /**
         * <p>Creates a custom action target in Security Hub. You can use custom actions on
         * findings and insights in Security Hub to trigger target actions in Amazon
         * CloudWatch Events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateActionTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateActionTargetOutcomeCallable CreateActionTargetCallable(const Model::CreateActionTargetRequest& request) const;

        /**
         * <p>Creates a custom action target in Security Hub. You can use custom actions on
         * findings and insights in Security Hub to trigger target actions in Amazon
         * CloudWatch Events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateActionTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateActionTargetAsync(const Model::CreateActionTargetRequest& request, const CreateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom insight in Security Hub. An insight is a consolidation of
         * findings that relate to a security issue that requires attention or remediation.
         * Use the <code>GroupByAttribute</code> to group the related findings in the
         * insight.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInsightOutcome CreateInsight(const Model::CreateInsightRequest& request) const;

        /**
         * <p>Creates a custom insight in Security Hub. An insight is a consolidation of
         * findings that relate to a security issue that requires attention or remediation.
         * Use the <code>GroupByAttribute</code> to group the related findings in the
         * insight.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateInsight">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInsightOutcomeCallable CreateInsightCallable(const Model::CreateInsightRequest& request) const;

        /**
         * <p>Creates a custom insight in Security Hub. An insight is a consolidation of
         * findings that relate to a security issue that requires attention or remediation.
         * Use the <code>GroupByAttribute</code> to group the related findings in the
         * insight.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateInsight">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInsightAsync(const Model::CreateInsightRequest& request, const CreateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a member association in Security Hub between the specified accounts
         * and the account used to make the request, which is the master account. To
         * successfully create a member, you must use this action from an account that
         * already has Security Hub enabled. You can use the <a>EnableSecurityHub</a> to
         * enable Security Hub.</p> <p>After you use <code>CreateMembers</code> to create
         * member account associations in Security Hub, you need to use the
         * <a>InviteMembers</a> action, which invites the accounts to enable Security Hub
         * and become member accounts in Security Hub. If the invitation is accepted by the
         * account owner, the account becomes a member account in Security Hub, and a
         * permission policy is added that permits the master account to view the findings
         * generated in the member account. When Security Hub is enabled in the invited
         * account, findings start being sent to both the member and master accounts.</p>
         * <p>You can remove the association between the master and member accounts by
         * using the <a>DisassociateFromMasterAccount</a> or <a>DisassociateMembers</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembersOutcome CreateMembers(const Model::CreateMembersRequest& request) const;

        /**
         * <p>Creates a member association in Security Hub between the specified accounts
         * and the account used to make the request, which is the master account. To
         * successfully create a member, you must use this action from an account that
         * already has Security Hub enabled. You can use the <a>EnableSecurityHub</a> to
         * enable Security Hub.</p> <p>After you use <code>CreateMembers</code> to create
         * member account associations in Security Hub, you need to use the
         * <a>InviteMembers</a> action, which invites the accounts to enable Security Hub
         * and become member accounts in Security Hub. If the invitation is accepted by the
         * account owner, the account becomes a member account in Security Hub, and a
         * permission policy is added that permits the master account to view the findings
         * generated in the member account. When Security Hub is enabled in the invited
         * account, findings start being sent to both the member and master accounts.</p>
         * <p>You can remove the association between the master and member accounts by
         * using the <a>DisassociateFromMasterAccount</a> or <a>DisassociateMembers</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMembersOutcomeCallable CreateMembersCallable(const Model::CreateMembersRequest& request) const;

        /**
         * <p>Creates a member association in Security Hub between the specified accounts
         * and the account used to make the request, which is the master account. To
         * successfully create a member, you must use this action from an account that
         * already has Security Hub enabled. You can use the <a>EnableSecurityHub</a> to
         * enable Security Hub.</p> <p>After you use <code>CreateMembers</code> to create
         * member account associations in Security Hub, you need to use the
         * <a>InviteMembers</a> action, which invites the accounts to enable Security Hub
         * and become member accounts in Security Hub. If the invitation is accepted by the
         * account owner, the account becomes a member account in Security Hub, and a
         * permission policy is added that permits the master account to view the findings
         * generated in the member account. When Security Hub is enabled in the invited
         * account, findings start being sent to both the member and master accounts.</p>
         * <p>You can remove the association between the master and member accounts by
         * using the <a>DisassociateFromMasterAccount</a> or <a>DisassociateMembers</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMembersAsync(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Declines invitations to become a member account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeclineInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineInvitationsOutcome DeclineInvitations(const Model::DeclineInvitationsRequest& request) const;

        /**
         * <p>Declines invitations to become a member account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeclineInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeclineInvitationsOutcomeCallable DeclineInvitationsCallable(const Model::DeclineInvitationsRequest& request) const;

        /**
         * <p>Declines invitations to become a member account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeclineInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeclineInvitationsAsync(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a custom action target from Security Hub. Deleting a custom action
         * target doesn't affect any findings or insights that were already sent to Amazon
         * CloudWatch Events using the custom action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteActionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActionTargetOutcome DeleteActionTarget(const Model::DeleteActionTargetRequest& request) const;

        /**
         * <p>Deletes a custom action target from Security Hub. Deleting a custom action
         * target doesn't affect any findings or insights that were already sent to Amazon
         * CloudWatch Events using the custom action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteActionTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteActionTargetOutcomeCallable DeleteActionTargetCallable(const Model::DeleteActionTargetRequest& request) const;

        /**
         * <p>Deletes a custom action target from Security Hub. Deleting a custom action
         * target doesn't affect any findings or insights that were already sent to Amazon
         * CloudWatch Events using the custom action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteActionTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteActionTargetAsync(const Model::DeleteActionTargetRequest& request, const DeleteActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the insight specified by the <code>InsightArn</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInsightOutcome DeleteInsight(const Model::DeleteInsightRequest& request) const;

        /**
         * <p>Deletes the insight specified by the <code>InsightArn</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInsight">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInsightOutcomeCallable DeleteInsightCallable(const Model::DeleteInsightRequest& request) const;

        /**
         * <p>Deletes the insight specified by the <code>InsightArn</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInsight">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInsightAsync(const Model::DeleteInsightRequest& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes invitations received by the AWS account to become a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvitationsOutcome DeleteInvitations(const Model::DeleteInvitationsRequest& request) const;

        /**
         * <p>Deletes invitations received by the AWS account to become a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInvitationsOutcomeCallable DeleteInvitationsCallable(const Model::DeleteInvitationsRequest& request) const;

        /**
         * <p>Deletes invitations received by the AWS account to become a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInvitationsAsync(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified member accounts from Security Hub.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembersOutcome DeleteMembers(const Model::DeleteMembersRequest& request) const;

        /**
         * <p>Deletes the specified member accounts from Security Hub.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMembersOutcomeCallable DeleteMembersCallable(const Model::DeleteMembersRequest& request) const;

        /**
         * <p>Deletes the specified member accounts from Security Hub.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMembersAsync(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the custom action targets in Security Hub in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeActionTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActionTargetsOutcome DescribeActionTargets(const Model::DescribeActionTargetsRequest& request) const;

        /**
         * <p>Returns a list of the custom action targets in Security Hub in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeActionTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActionTargetsOutcomeCallable DescribeActionTargetsCallable(const Model::DescribeActionTargetsRequest& request) const;

        /**
         * <p>Returns a list of the custom action targets in Security Hub in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeActionTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActionTargetsAsync(const Model::DescribeActionTargetsRequest& request, const DescribeActionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about the Hub resource in your account, including the
         * <code>HubArn</code> and the time when you enabled Security Hub.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHubOutcome DescribeHub(const Model::DescribeHubRequest& request) const;

        /**
         * <p>Returns details about the Hub resource in your account, including the
         * <code>HubArn</code> and the time when you enabled Security Hub.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeHub">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHubOutcomeCallable DescribeHubCallable(const Model::DescribeHubRequest& request) const;

        /**
         * <p>Returns details about the Hub resource in your account, including the
         * <code>HubArn</code> and the time when you enabled Security Hub.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeHub">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHubAsync(const Model::DescribeHubRequest& request, const DescribeHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the products available that you can subscribe to
         * and integrate with Security Hub to consolidate findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductsOutcome DescribeProducts(const Model::DescribeProductsRequest& request) const;

        /**
         * <p>Returns information about the products available that you can subscribe to
         * and integrate with Security Hub to consolidate findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeProducts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProductsOutcomeCallable DescribeProductsCallable(const Model::DescribeProductsRequest& request) const;

        /**
         * <p>Returns information about the products available that you can subscribe to
         * and integrate with Security Hub to consolidate findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeProducts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProductsAsync(const Model::DescribeProductsRequest& request, const DescribeProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the integration of the specified product with Security Hub. Findings
         * from that product are no longer sent to Security Hub after the integration is
         * disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableImportFindingsForProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableImportFindingsForProductOutcome DisableImportFindingsForProduct(const Model::DisableImportFindingsForProductRequest& request) const;

        /**
         * <p>Disables the integration of the specified product with Security Hub. Findings
         * from that product are no longer sent to Security Hub after the integration is
         * disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableImportFindingsForProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableImportFindingsForProductOutcomeCallable DisableImportFindingsForProductCallable(const Model::DisableImportFindingsForProductRequest& request) const;

        /**
         * <p>Disables the integration of the specified product with Security Hub. Findings
         * from that product are no longer sent to Security Hub after the integration is
         * disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableImportFindingsForProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableImportFindingsForProductAsync(const Model::DisableImportFindingsForProductRequest& request, const DisableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables Security Hub in your account only in the current Region. To disable
         * Security Hub in all Regions, you must submit one request per Region where you
         * have enabled Security Hub. When you disable Security Hub for a master account,
         * it doesn't disable Security Hub for any associated member accounts.</p> <p>When
         * you disable Security Hub, your existing findings and insights and any Security
         * Hub configuration settings are deleted after 90 days and can't be recovered. Any
         * standards that were enabled are disabled, and your master and member account
         * associations are removed. If you want to save your existing findings, you must
         * export them before you disable Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableSecurityHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableSecurityHubOutcome DisableSecurityHub(const Model::DisableSecurityHubRequest& request) const;

        /**
         * <p>Disables Security Hub in your account only in the current Region. To disable
         * Security Hub in all Regions, you must submit one request per Region where you
         * have enabled Security Hub. When you disable Security Hub for a master account,
         * it doesn't disable Security Hub for any associated member accounts.</p> <p>When
         * you disable Security Hub, your existing findings and insights and any Security
         * Hub configuration settings are deleted after 90 days and can't be recovered. Any
         * standards that were enabled are disabled, and your master and member account
         * associations are removed. If you want to save your existing findings, you must
         * export them before you disable Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableSecurityHub">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableSecurityHubOutcomeCallable DisableSecurityHubCallable(const Model::DisableSecurityHubRequest& request) const;

        /**
         * <p>Disables Security Hub in your account only in the current Region. To disable
         * Security Hub in all Regions, you must submit one request per Region where you
         * have enabled Security Hub. When you disable Security Hub for a master account,
         * it doesn't disable Security Hub for any associated member accounts.</p> <p>When
         * you disable Security Hub, your existing findings and insights and any Security
         * Hub configuration settings are deleted after 90 days and can't be recovered. Any
         * standards that were enabled are disabled, and your master and member account
         * associations are removed. If you want to save your existing findings, you must
         * export them before you disable Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableSecurityHub">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableSecurityHubAsync(const Model::DisableSecurityHubRequest& request, const DisableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the current Security Hub member account from the associated
         * master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromMasterAccountOutcome DisassociateFromMasterAccount(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * <p>Disassociates the current Security Hub member account from the associated
         * master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFromMasterAccountOutcomeCallable DisassociateFromMasterAccountCallable(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * <p>Disassociates the current Security Hub member account from the associated
         * master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFromMasterAccountAsync(const Model::DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified member accounts from the associated master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMembersOutcome DisassociateMembers(const Model::DisassociateMembersRequest& request) const;

        /**
         * <p>Disassociates the specified member accounts from the associated master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMembersOutcomeCallable DisassociateMembersCallable(const Model::DisassociateMembersRequest& request) const;

        /**
         * <p>Disassociates the specified member accounts from the associated master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMembersAsync(const Model::DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the integration of a partner product with Security Hub. Integrated
         * products send findings to Security Hub. When you enable a product integration, a
         * permission policy that grants permission for the product to send findings to
         * Security Hub is applied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableImportFindingsForProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableImportFindingsForProductOutcome EnableImportFindingsForProduct(const Model::EnableImportFindingsForProductRequest& request) const;

        /**
         * <p>Enables the integration of a partner product with Security Hub. Integrated
         * products send findings to Security Hub. When you enable a product integration, a
         * permission policy that grants permission for the product to send findings to
         * Security Hub is applied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableImportFindingsForProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableImportFindingsForProductOutcomeCallable EnableImportFindingsForProductCallable(const Model::EnableImportFindingsForProductRequest& request) const;

        /**
         * <p>Enables the integration of a partner product with Security Hub. Integrated
         * products send findings to Security Hub. When you enable a product integration, a
         * permission policy that grants permission for the product to send findings to
         * Security Hub is applied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableImportFindingsForProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableImportFindingsForProductAsync(const Model::EnableImportFindingsForProductRequest& request, const EnableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables Security Hub for your account in the current Region or the Region you
         * specify in the request. When you enable Security Hub, you grant to Security Hub
         * the permissions necessary to gather findings from AWS Config, Amazon GuardDuty,
         * Amazon Inspector, and Amazon Macie. To learn more, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-settingup.html">Setting
         * Up AWS Security Hub</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableSecurityHub">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableSecurityHubOutcome EnableSecurityHub(const Model::EnableSecurityHubRequest& request) const;

        /**
         * <p>Enables Security Hub for your account in the current Region or the Region you
         * specify in the request. When you enable Security Hub, you grant to Security Hub
         * the permissions necessary to gather findings from AWS Config, Amazon GuardDuty,
         * Amazon Inspector, and Amazon Macie. To learn more, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-settingup.html">Setting
         * Up AWS Security Hub</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableSecurityHub">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableSecurityHubOutcomeCallable EnableSecurityHubCallable(const Model::EnableSecurityHubRequest& request) const;

        /**
         * <p>Enables Security Hub for your account in the current Region or the Region you
         * specify in the request. When you enable Security Hub, you grant to Security Hub
         * the permissions necessary to gather findings from AWS Config, Amazon GuardDuty,
         * Amazon Inspector, and Amazon Macie. To learn more, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-settingup.html">Setting
         * Up AWS Security Hub</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableSecurityHub">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableSecurityHubAsync(const Model::EnableSecurityHubRequest& request, const EnableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the standards that are currently enabled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetEnabledStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnabledStandardsOutcome GetEnabledStandards(const Model::GetEnabledStandardsRequest& request) const;

        /**
         * <p>Returns a list of the standards that are currently enabled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetEnabledStandards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnabledStandardsOutcomeCallable GetEnabledStandardsCallable(const Model::GetEnabledStandardsRequest& request) const;

        /**
         * <p>Returns a list of the standards that are currently enabled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetEnabledStandards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnabledStandardsAsync(const Model::GetEnabledStandardsRequest& request, const GetEnabledStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of findings that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;

        /**
         * <p>Returns a list of findings that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsOutcomeCallable GetFindingsCallable(const Model::GetFindingsRequest& request) const;

        /**
         * <p>Returns a list of findings that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsAsync(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the results of the Security Hub insight that the insight ARN
         * specifies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsightResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightResultsOutcome GetInsightResults(const Model::GetInsightResultsRequest& request) const;

        /**
         * <p>Lists the results of the Security Hub insight that the insight ARN
         * specifies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsightResults">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInsightResultsOutcomeCallable GetInsightResultsCallable(const Model::GetInsightResultsRequest& request) const;

        /**
         * <p>Lists the results of the Security Hub insight that the insight ARN
         * specifies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsightResults">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInsightResultsAsync(const Model::GetInsightResultsRequest& request, const GetInsightResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists and describes insights that insight ARNs specify.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightsOutcome GetInsights(const Model::GetInsightsRequest& request) const;

        /**
         * <p>Lists and describes insights that insight ARNs specify.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsights">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInsightsOutcomeCallable GetInsightsCallable(const Model::GetInsightsRequest& request) const;

        /**
         * <p>Lists and describes insights that insight ARNs specify.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsights">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInsightsAsync(const Model::GetInsightsRequest& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the count of all Security Hub membership invitations that were sent
         * to the current member account, not including the currently accepted invitation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInvitationsCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationsCountOutcome GetInvitationsCount(const Model::GetInvitationsCountRequest& request) const;

        /**
         * <p>Returns the count of all Security Hub membership invitations that were sent
         * to the current member account, not including the currently accepted invitation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInvitationsCount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvitationsCountOutcomeCallable GetInvitationsCountCallable(const Model::GetInvitationsCountRequest& request) const;

        /**
         * <p>Returns the count of all Security Hub membership invitations that were sent
         * to the current member account, not including the currently accepted invitation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInvitationsCount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvitationsCountAsync(const Model::GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the details for the Security Hub master account to the current
         * member account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMasterAccountOutcome GetMasterAccount(const Model::GetMasterAccountRequest& request) const;

        /**
         * <p>Provides the details for the Security Hub master account to the current
         * member account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMasterAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMasterAccountOutcomeCallable GetMasterAccountCallable(const Model::GetMasterAccountRequest& request) const;

        /**
         * <p>Provides the details for the Security Hub master account to the current
         * member account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMasterAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMasterAccountAsync(const Model::GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details on the Security Hub member accounts that the account IDs
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembersOutcome GetMembers(const Model::GetMembersRequest& request) const;

        /**
         * <p>Returns the details on the Security Hub member accounts that the account IDs
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMembersOutcomeCallable GetMembersCallable(const Model::GetMembersRequest& request) const;

        /**
         * <p>Returns the details on the Security Hub member accounts that the account IDs
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMembersAsync(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Invites other AWS accounts to become member accounts for the Security Hub
         * master account that the invitation is sent from. Before you can use this action
         * to invite a member, you must first create the member account in Security Hub by
         * using the <a>CreateMembers</a> action. When the account owner accepts the
         * invitation to become a member account and enables Security Hub, the master
         * account can view the findings generated from member account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InviteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteMembersOutcome InviteMembers(const Model::InviteMembersRequest& request) const;

        /**
         * <p>Invites other AWS accounts to become member accounts for the Security Hub
         * master account that the invitation is sent from. Before you can use this action
         * to invite a member, you must first create the member account in Security Hub by
         * using the <a>CreateMembers</a> action. When the account owner accepts the
         * invitation to become a member account and enables Security Hub, the master
         * account can view the findings generated from member account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InviteMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InviteMembersOutcomeCallable InviteMembersCallable(const Model::InviteMembersRequest& request) const;

        /**
         * <p>Invites other AWS accounts to become member accounts for the Security Hub
         * master account that the invitation is sent from. Before you can use this action
         * to invite a member, you must first create the member account in Security Hub by
         * using the <a>CreateMembers</a> action. When the account owner accepts the
         * invitation to become a member account and enables Security Hub, the master
         * account can view the findings generated from member account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InviteMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InviteMembersAsync(const Model::InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all findings-generating solutions (products) whose findings you have
         * subscribed to receive in Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListEnabledProductsForImport">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnabledProductsForImportOutcome ListEnabledProductsForImport(const Model::ListEnabledProductsForImportRequest& request) const;

        /**
         * <p>Lists all findings-generating solutions (products) whose findings you have
         * subscribed to receive in Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListEnabledProductsForImport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnabledProductsForImportOutcomeCallable ListEnabledProductsForImportCallable(const Model::ListEnabledProductsForImportRequest& request) const;

        /**
         * <p>Lists all findings-generating solutions (products) whose findings you have
         * subscribed to receive in Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListEnabledProductsForImport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnabledProductsForImportAsync(const Model::ListEnabledProductsForImportRequest& request, const ListEnabledProductsForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Security Hub membership invitations that were sent to the current
         * AWS account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Lists all Security Hub membership invitations that were sent to the current
         * AWS account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Lists all Security Hub membership invitations that were sent to the current
         * AWS account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvitationsAsync(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists details about all member accounts for the current Security Hub master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * <p>Lists details about all member accounts for the current Security Hub master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembersOutcomeCallable ListMembersCallable(const Model::ListMembersRequest& request) const;

        /**
         * <p>Lists details about all member accounts for the current Security Hub master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembersAsync(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags associated with a resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags associated with a resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags associated with a resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and description of a custom action target in Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateActionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateActionTargetOutcome UpdateActionTarget(const Model::UpdateActionTargetRequest& request) const;

        /**
         * <p>Updates the name and description of a custom action target in Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateActionTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateActionTargetOutcomeCallable UpdateActionTargetCallable(const Model::UpdateActionTargetRequest& request) const;

        /**
         * <p>Updates the name and description of a custom action target in Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateActionTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateActionTargetAsync(const Model::UpdateActionTargetRequest& request, const UpdateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the <code>Note</code> and <code>RecordState</code> of the Security
         * Hub-aggregated findings that the filter attributes specify. Any member account
         * that can view the finding also sees the update to the finding.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsOutcome UpdateFindings(const Model::UpdateFindingsRequest& request) const;

        /**
         * <p>Updates the <code>Note</code> and <code>RecordState</code> of the Security
         * Hub-aggregated findings that the filter attributes specify. Any member account
         * that can view the finding also sees the update to the finding.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFindingsOutcomeCallable UpdateFindingsCallable(const Model::UpdateFindingsRequest& request) const;

        /**
         * <p>Updates the <code>Note</code> and <code>RecordState</code> of the Security
         * Hub-aggregated findings that the filter attributes specify. Any member account
         * that can view the finding also sees the update to the finding.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFindingsAsync(const Model::UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Security Hub insight that the insight ARN
         * specifies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInsightOutcome UpdateInsight(const Model::UpdateInsightRequest& request) const;

        /**
         * <p>Updates the Security Hub insight that the insight ARN
         * specifies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateInsight">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInsightOutcomeCallable UpdateInsightCallable(const Model::UpdateInsightRequest& request) const;

        /**
         * <p>Updates the Security Hub insight that the insight ARN
         * specifies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateInsight">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInsightAsync(const Model::UpdateInsightRequest& request, const UpdateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptInvitationAsyncHelper(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDisableStandardsAsyncHelper(const Model::BatchDisableStandardsRequest& request, const BatchDisableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchEnableStandardsAsyncHelper(const Model::BatchEnableStandardsRequest& request, const BatchEnableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchImportFindingsAsyncHelper(const Model::BatchImportFindingsRequest& request, const BatchImportFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateActionTargetAsyncHelper(const Model::CreateActionTargetRequest& request, const CreateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInsightAsyncHelper(const Model::CreateInsightRequest& request, const CreateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMembersAsyncHelper(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeclineInvitationsAsyncHelper(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteActionTargetAsyncHelper(const Model::DeleteActionTargetRequest& request, const DeleteActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInsightAsyncHelper(const Model::DeleteInsightRequest& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInvitationsAsyncHelper(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMembersAsyncHelper(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeActionTargetsAsyncHelper(const Model::DescribeActionTargetsRequest& request, const DescribeActionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHubAsyncHelper(const Model::DescribeHubRequest& request, const DescribeHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProductsAsyncHelper(const Model::DescribeProductsRequest& request, const DescribeProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableImportFindingsForProductAsyncHelper(const Model::DisableImportFindingsForProductRequest& request, const DisableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableSecurityHubAsyncHelper(const Model::DisableSecurityHubRequest& request, const DisableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateFromMasterAccountAsyncHelper(const Model::DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateMembersAsyncHelper(const Model::DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableImportFindingsForProductAsyncHelper(const Model::EnableImportFindingsForProductRequest& request, const EnableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableSecurityHubAsyncHelper(const Model::EnableSecurityHubRequest& request, const EnableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEnabledStandardsAsyncHelper(const Model::GetEnabledStandardsRequest& request, const GetEnabledStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFindingsAsyncHelper(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInsightResultsAsyncHelper(const Model::GetInsightResultsRequest& request, const GetInsightResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInsightsAsyncHelper(const Model::GetInsightsRequest& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInvitationsCountAsyncHelper(const Model::GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMasterAccountAsyncHelper(const Model::GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMembersAsyncHelper(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InviteMembersAsyncHelper(const Model::InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEnabledProductsForImportAsyncHelper(const Model::ListEnabledProductsForImportRequest& request, const ListEnabledProductsForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvitationsAsyncHelper(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMembersAsyncHelper(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateActionTargetAsyncHelper(const Model::UpdateActionTargetRequest& request, const UpdateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFindingsAsyncHelper(const Model::UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInsightAsyncHelper(const Model::UpdateInsightRequest& request, const UpdateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SecurityHub
} // namespace Aws
