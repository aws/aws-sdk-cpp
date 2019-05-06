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
#include <aws/securityhub/model/CreateInsightResult.h>
#include <aws/securityhub/model/CreateMembersResult.h>
#include <aws/securityhub/model/DeclineInvitationsResult.h>
#include <aws/securityhub/model/DeleteInsightResult.h>
#include <aws/securityhub/model/DeleteInvitationsResult.h>
#include <aws/securityhub/model/DeleteMembersResult.h>
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
        class CreateInsightRequest;
        class CreateMembersRequest;
        class DeclineInvitationsRequest;
        class DeleteInsightRequest;
        class DeleteInvitationsRequest;
        class DeleteMembersRequest;
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
        class UpdateFindingsRequest;
        class UpdateInsightRequest;

        typedef Aws::Utils::Outcome<AcceptInvitationResult, Aws::Client::AWSError<SecurityHubErrors>> AcceptInvitationOutcome;
        typedef Aws::Utils::Outcome<BatchDisableStandardsResult, Aws::Client::AWSError<SecurityHubErrors>> BatchDisableStandardsOutcome;
        typedef Aws::Utils::Outcome<BatchEnableStandardsResult, Aws::Client::AWSError<SecurityHubErrors>> BatchEnableStandardsOutcome;
        typedef Aws::Utils::Outcome<BatchImportFindingsResult, Aws::Client::AWSError<SecurityHubErrors>> BatchImportFindingsOutcome;
        typedef Aws::Utils::Outcome<CreateInsightResult, Aws::Client::AWSError<SecurityHubErrors>> CreateInsightOutcome;
        typedef Aws::Utils::Outcome<CreateMembersResult, Aws::Client::AWSError<SecurityHubErrors>> CreateMembersOutcome;
        typedef Aws::Utils::Outcome<DeclineInvitationsResult, Aws::Client::AWSError<SecurityHubErrors>> DeclineInvitationsOutcome;
        typedef Aws::Utils::Outcome<DeleteInsightResult, Aws::Client::AWSError<SecurityHubErrors>> DeleteInsightOutcome;
        typedef Aws::Utils::Outcome<DeleteInvitationsResult, Aws::Client::AWSError<SecurityHubErrors>> DeleteInvitationsOutcome;
        typedef Aws::Utils::Outcome<DeleteMembersResult, Aws::Client::AWSError<SecurityHubErrors>> DeleteMembersOutcome;
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
        typedef Aws::Utils::Outcome<UpdateFindingsResult, Aws::Client::AWSError<SecurityHubErrors>> UpdateFindingsOutcome;
        typedef Aws::Utils::Outcome<UpdateInsightResult, Aws::Client::AWSError<SecurityHubErrors>> UpdateInsightOutcome;

        typedef std::future<AcceptInvitationOutcome> AcceptInvitationOutcomeCallable;
        typedef std::future<BatchDisableStandardsOutcome> BatchDisableStandardsOutcomeCallable;
        typedef std::future<BatchEnableStandardsOutcome> BatchEnableStandardsOutcomeCallable;
        typedef std::future<BatchImportFindingsOutcome> BatchImportFindingsOutcomeCallable;
        typedef std::future<CreateInsightOutcome> CreateInsightOutcomeCallable;
        typedef std::future<CreateMembersOutcome> CreateMembersOutcomeCallable;
        typedef std::future<DeclineInvitationsOutcome> DeclineInvitationsOutcomeCallable;
        typedef std::future<DeleteInsightOutcome> DeleteInsightOutcomeCallable;
        typedef std::future<DeleteInvitationsOutcome> DeleteInvitationsOutcomeCallable;
        typedef std::future<DeleteMembersOutcome> DeleteMembersOutcomeCallable;
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
        typedef std::future<UpdateFindingsOutcome> UpdateFindingsOutcomeCallable;
        typedef std::future<UpdateInsightOutcome> UpdateInsightOutcomeCallable;
} // namespace Model

  class SecurityHubClient;

    typedef std::function<void(const SecurityHubClient*, const Model::AcceptInvitationRequest&, const Model::AcceptInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInvitationResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchDisableStandardsRequest&, const Model::BatchDisableStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisableStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchEnableStandardsRequest&, const Model::BatchEnableStandardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchEnableStandardsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::BatchImportFindingsRequest&, const Model::BatchImportFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchImportFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateInsightRequest&, const Model::CreateInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInsightResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::CreateMembersRequest&, const Model::CreateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMembersResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeclineInvitationsRequest&, const Model::DeclineInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeclineInvitationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteInsightRequest&, const Model::DeleteInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInsightResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteInvitationsRequest&, const Model::DeleteInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInvitationsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::DeleteMembersRequest&, const Model::DeleteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMembersResponseReceivedHandler;
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
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateFindingsRequest&, const Model::UpdateFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingsResponseReceivedHandler;
    typedef std::function<void(const SecurityHubClient*, const Model::UpdateInsightRequest&, const Model::UpdateInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInsightResponseReceivedHandler;

  /**
   * <p>AWS Security Hub provides you with a comprehensive view of your security
   * state within AWS and your compliance with the security industry standards and
   * best practices. Security Hub collects security data from across AWS accounts,
   * services, and supported third-party partners and helps you analyze your security
   * trends and identify the highest priority security issues. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html">AWS
   * Security Hub User Guide</a>. </p> <important> <p>Currently, AWS Security Hub is
   * in Preview release.</p> </important>
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
         * <p>Accepts the invitation to be monitored by a master SecurityHub
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AcceptInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInvitationOutcome AcceptInvitation(const Model::AcceptInvitationRequest& request) const;

        /**
         * <p>Accepts the invitation to be monitored by a master SecurityHub
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInvitationOutcomeCallable AcceptInvitationCallable(const Model::AcceptInvitationRequest& request) const;

        /**
         * <p>Accepts the invitation to be monitored by a master SecurityHub
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInvitationAsync(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the standards specified by the standards subscription ARNs. In the
         * context of Security Hub, supported standards (for example, CIS AWS Foundations)
         * are automated and continuous checks that help determine your compliance status
         * against security industry (including AWS) best practices. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchDisableStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisableStandardsOutcome BatchDisableStandards(const Model::BatchDisableStandardsRequest& request) const;

        /**
         * <p>Disables the standards specified by the standards subscription ARNs. In the
         * context of Security Hub, supported standards (for example, CIS AWS Foundations)
         * are automated and continuous checks that help determine your compliance status
         * against security industry (including AWS) best practices. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchDisableStandards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisableStandardsOutcomeCallable BatchDisableStandardsCallable(const Model::BatchDisableStandardsRequest& request) const;

        /**
         * <p>Disables the standards specified by the standards subscription ARNs. In the
         * context of Security Hub, supported standards (for example, CIS AWS Foundations)
         * are automated and continuous checks that help determine your compliance status
         * against security industry (including AWS) best practices. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchDisableStandards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisableStandardsAsync(const Model::BatchDisableStandardsRequest& request, const BatchDisableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the standards specified by the standards ARNs. In the context of
         * Security Hub, supported standards (for example, CIS AWS Foundations) are
         * automated and continuous checks that help determine your compliance status
         * against security industry (including AWS) best practices. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchEnableStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchEnableStandardsOutcome BatchEnableStandards(const Model::BatchEnableStandardsRequest& request) const;

        /**
         * <p>Enables the standards specified by the standards ARNs. In the context of
         * Security Hub, supported standards (for example, CIS AWS Foundations) are
         * automated and continuous checks that help determine your compliance status
         * against security industry (including AWS) best practices. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchEnableStandards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchEnableStandardsOutcomeCallable BatchEnableStandardsCallable(const Model::BatchEnableStandardsRequest& request) const;

        /**
         * <p>Enables the standards specified by the standards ARNs. In the context of
         * Security Hub, supported standards (for example, CIS AWS Foundations) are
         * automated and continuous checks that help determine your compliance status
         * against security industry (including AWS) best practices. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchEnableStandards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchEnableStandardsAsync(const Model::BatchEnableStandardsRequest& request, const BatchEnableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports security findings that are generated by the integrated third-party
         * products into Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchImportFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchImportFindingsOutcome BatchImportFindings(const Model::BatchImportFindingsRequest& request) const;

        /**
         * <p>Imports security findings that are generated by the integrated third-party
         * products into Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchImportFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchImportFindingsOutcomeCallable BatchImportFindingsCallable(const Model::BatchImportFindingsRequest& request) const;

        /**
         * <p>Imports security findings that are generated by the integrated third-party
         * products into Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchImportFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchImportFindingsAsync(const Model::BatchImportFindingsRequest& request, const BatchImportFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an insight, which is a consolidation of findings that identifies a
         * security area that requires attention or intervention.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInsightOutcome CreateInsight(const Model::CreateInsightRequest& request) const;

        /**
         * <p>Creates an insight, which is a consolidation of findings that identifies a
         * security area that requires attention or intervention.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateInsight">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInsightOutcomeCallable CreateInsightCallable(const Model::CreateInsightRequest& request) const;

        /**
         * <p>Creates an insight, which is a consolidation of findings that identifies a
         * security area that requires attention or intervention.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateInsight">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInsightAsync(const Model::CreateInsightRequest& request, const CreateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates member Security Hub accounts in the current AWS account (which
         * becomes the master Security Hub account) that has Security Hub
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembersOutcome CreateMembers(const Model::CreateMembersRequest& request) const;

        /**
         * <p>Creates member Security Hub accounts in the current AWS account (which
         * becomes the master Security Hub account) that has Security Hub
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMembersOutcomeCallable CreateMembersCallable(const Model::CreateMembersRequest& request) const;

        /**
         * <p>Creates member Security Hub accounts in the current AWS account (which
         * becomes the master Security Hub account) that has Security Hub
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMembersAsync(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Declines invitations that are sent to this AWS account (invitee) by the AWS
         * accounts (inviters) that are specified by the account IDs. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeclineInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineInvitationsOutcome DeclineInvitations(const Model::DeclineInvitationsRequest& request) const;

        /**
         * <p>Declines invitations that are sent to this AWS account (invitee) by the AWS
         * accounts (inviters) that are specified by the account IDs. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeclineInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeclineInvitationsOutcomeCallable DeclineInvitationsCallable(const Model::DeclineInvitationsRequest& request) const;

        /**
         * <p>Declines invitations that are sent to this AWS account (invitee) by the AWS
         * accounts (inviters) that are specified by the account IDs. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeclineInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeclineInvitationsAsync(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an insight that is specified by the insight ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInsightOutcome DeleteInsight(const Model::DeleteInsightRequest& request) const;

        /**
         * <p>Deletes an insight that is specified by the insight ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInsight">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInsightOutcomeCallable DeleteInsightCallable(const Model::DeleteInsightRequest& request) const;

        /**
         * <p>Deletes an insight that is specified by the insight ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInsight">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInsightAsync(const Model::DeleteInsightRequest& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes invitations that are sent to this AWS account (invitee) by the AWS
         * accounts (inviters) that are specified by their account IDs. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvitationsOutcome DeleteInvitations(const Model::DeleteInvitationsRequest& request) const;

        /**
         * <p>Deletes invitations that are sent to this AWS account (invitee) by the AWS
         * accounts (inviters) that are specified by their account IDs. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInvitationsOutcomeCallable DeleteInvitationsCallable(const Model::DeleteInvitationsRequest& request) const;

        /**
         * <p>Deletes invitations that are sent to this AWS account (invitee) by the AWS
         * accounts (inviters) that are specified by their account IDs. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInvitationsAsync(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Security Hub member accounts that are specified by the account
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembersOutcome DeleteMembers(const Model::DeleteMembersRequest& request) const;

        /**
         * <p>Deletes the Security Hub member accounts that are specified by the account
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMembersOutcomeCallable DeleteMembersCallable(const Model::DeleteMembersRequest& request) const;

        /**
         * <p>Deletes the Security Hub member accounts that are specified by the account
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMembersAsync(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the subscription that allows a findings-generating solution (product)
         * to import its findings into Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableImportFindingsForProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableImportFindingsForProductOutcome DisableImportFindingsForProduct(const Model::DisableImportFindingsForProductRequest& request) const;

        /**
         * <p>Cancels the subscription that allows a findings-generating solution (product)
         * to import its findings into Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableImportFindingsForProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableImportFindingsForProductOutcomeCallable DisableImportFindingsForProductCallable(const Model::DisableImportFindingsForProductRequest& request) const;

        /**
         * <p>Cancels the subscription that allows a findings-generating solution (product)
         * to import its findings into Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableImportFindingsForProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableImportFindingsForProductAsync(const Model::DisableImportFindingsForProductRequest& request, const DisableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the AWS Security Hub Service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableSecurityHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableSecurityHubOutcome DisableSecurityHub(const Model::DisableSecurityHubRequest& request) const;

        /**
         * <p>Disables the AWS Security Hub Service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableSecurityHub">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableSecurityHubOutcomeCallable DisableSecurityHubCallable(const Model::DisableSecurityHubRequest& request) const;

        /**
         * <p>Disables the AWS Security Hub Service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableSecurityHub">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableSecurityHubAsync(const Model::DisableSecurityHubRequest& request, const DisableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the current Security Hub member account from its master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromMasterAccountOutcome DisassociateFromMasterAccount(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * <p>Disassociates the current Security Hub member account from its master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFromMasterAccountOutcomeCallable DisassociateFromMasterAccountCallable(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * <p>Disassociates the current Security Hub member account from its master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFromMasterAccountAsync(const Model::DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the Security Hub member accounts that are specified by the
         * account IDs from their master account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMembersOutcome DisassociateMembers(const Model::DisassociateMembersRequest& request) const;

        /**
         * <p>Disassociates the Security Hub member accounts that are specified by the
         * account IDs from their master account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMembersOutcomeCallable DisassociateMembersCallable(const Model::DisassociateMembersRequest& request) const;

        /**
         * <p>Disassociates the Security Hub member accounts that are specified by the
         * account IDs from their master account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMembersAsync(const Model::DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets up the subscription that enables a findings-generating solution
         * (product) to import its findings into Security Hub.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableImportFindingsForProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableImportFindingsForProductOutcome EnableImportFindingsForProduct(const Model::EnableImportFindingsForProductRequest& request) const;

        /**
         * <p>Sets up the subscription that enables a findings-generating solution
         * (product) to import its findings into Security Hub.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableImportFindingsForProduct">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableImportFindingsForProductOutcomeCallable EnableImportFindingsForProductCallable(const Model::EnableImportFindingsForProductRequest& request) const;

        /**
         * <p>Sets up the subscription that enables a findings-generating solution
         * (product) to import its findings into Security Hub.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableImportFindingsForProduct">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableImportFindingsForProductAsync(const Model::EnableImportFindingsForProductRequest& request, const EnableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the AWS Security Hub service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableSecurityHub">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableSecurityHubOutcome EnableSecurityHub(const Model::EnableSecurityHubRequest& request) const;

        /**
         * <p>Enables the AWS Security Hub service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableSecurityHub">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableSecurityHubOutcomeCallable EnableSecurityHubCallable(const Model::EnableSecurityHubRequest& request) const;

        /**
         * <p>Enables the AWS Security Hub service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableSecurityHub">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableSecurityHubAsync(const Model::EnableSecurityHubRequest& request, const EnableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists and describes enabled standards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetEnabledStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnabledStandardsOutcome GetEnabledStandards(const Model::GetEnabledStandardsRequest& request) const;

        /**
         * <p>Lists and describes enabled standards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetEnabledStandards">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnabledStandardsOutcomeCallable GetEnabledStandardsCallable(const Model::GetEnabledStandardsRequest& request) const;

        /**
         * <p>Lists and describes enabled standards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetEnabledStandards">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnabledStandardsAsync(const Model::GetEnabledStandardsRequest& request, const GetEnabledStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists and describes Security Hub-aggregated findings that are specified by
         * filter attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;

        /**
         * <p>Lists and describes Security Hub-aggregated findings that are specified by
         * filter attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsOutcomeCallable GetFindingsCallable(const Model::GetFindingsRequest& request) const;

        /**
         * <p>Lists and describes Security Hub-aggregated findings that are specified by
         * filter attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsAsync(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the results of the Security Hub insight specified by the insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsightResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightResultsOutcome GetInsightResults(const Model::GetInsightResultsRequest& request) const;

        /**
         * <p>Lists the results of the Security Hub insight specified by the insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsightResults">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInsightResultsOutcomeCallable GetInsightResultsCallable(const Model::GetInsightResultsRequest& request) const;

        /**
         * <p>Lists the results of the Security Hub insight specified by the insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsightResults">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInsightResultsAsync(const Model::GetInsightResultsRequest& request, const GetInsightResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists and describes insights that are specified by insight
         * ARNs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightsOutcome GetInsights(const Model::GetInsightsRequest& request) const;

        /**
         * <p>Lists and describes insights that are specified by insight
         * ARNs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsights">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInsightsOutcomeCallable GetInsightsCallable(const Model::GetInsightsRequest& request) const;

        /**
         * <p>Lists and describes insights that are specified by insight
         * ARNs.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns the details on the Security Hub member accounts that are specified by
         * the account IDs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembersOutcome GetMembers(const Model::GetMembersRequest& request) const;

        /**
         * <p>Returns the details on the Security Hub member accounts that are specified by
         * the account IDs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMembersOutcomeCallable GetMembersCallable(const Model::GetMembersRequest& request) const;

        /**
         * <p>Returns the details on the Security Hub member accounts that are specified by
         * the account IDs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMembersAsync(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Invites other AWS accounts to enable Security Hub and become Security Hub
         * member accounts. When an account accepts the invitation and becomes a member
         * account, the master account can view Security Hub findings of the member
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InviteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteMembersOutcome InviteMembers(const Model::InviteMembersRequest& request) const;

        /**
         * <p>Invites other AWS accounts to enable Security Hub and become Security Hub
         * member accounts. When an account accepts the invitation and becomes a member
         * account, the master account can view Security Hub findings of the member
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InviteMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InviteMembersOutcomeCallable InviteMembersCallable(const Model::InviteMembersRequest& request) const;

        /**
         * <p>Invites other AWS accounts to enable Security Hub and become Security Hub
         * member accounts. When an account accepts the invitation and becomes a member
         * account, the master account can view Security Hub findings of the member
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InviteMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InviteMembersAsync(const Model::InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all findings-generating solutions (products) whose findings you've
         * subscribed to receive in Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListEnabledProductsForImport">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnabledProductsForImportOutcome ListEnabledProductsForImport(const Model::ListEnabledProductsForImportRequest& request) const;

        /**
         * <p>Lists all findings-generating solutions (products) whose findings you've
         * subscribed to receive in Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListEnabledProductsForImport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnabledProductsForImportOutcomeCallable ListEnabledProductsForImportCallable(const Model::ListEnabledProductsForImportRequest& request) const;

        /**
         * <p>Lists all findings-generating solutions (products) whose findings you've
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
         * <p>Updates the AWS Security Hub-aggregated findings specified by the filter
         * attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsOutcome UpdateFindings(const Model::UpdateFindingsRequest& request) const;

        /**
         * <p>Updates the AWS Security Hub-aggregated findings specified by the filter
         * attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFindingsOutcomeCallable UpdateFindingsCallable(const Model::UpdateFindingsRequest& request) const;

        /**
         * <p>Updates the AWS Security Hub-aggregated findings specified by the filter
         * attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFindingsAsync(const Model::UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the AWS Security Hub insight specified by the insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInsightOutcome UpdateInsight(const Model::UpdateInsightRequest& request) const;

        /**
         * <p>Updates the AWS Security Hub insight specified by the insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateInsight">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInsightOutcomeCallable UpdateInsightCallable(const Model::UpdateInsightRequest& request) const;

        /**
         * <p>Updates the AWS Security Hub insight specified by the insight
         * ARN.</p><p><h3>See Also:</h3>   <a
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
        void CreateInsightAsyncHelper(const Model::CreateInsightRequest& request, const CreateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMembersAsyncHelper(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeclineInvitationsAsyncHelper(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInsightAsyncHelper(const Model::DeleteInsightRequest& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInvitationsAsyncHelper(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMembersAsyncHelper(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void UpdateFindingsAsyncHelper(const Model::UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInsightAsyncHelper(const Model::UpdateInsightRequest& request, const UpdateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SecurityHub
} // namespace Aws
