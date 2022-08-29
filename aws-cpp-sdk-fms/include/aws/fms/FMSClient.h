﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fms/model/AssociateThirdPartyFirewallResult.h>
#include <aws/fms/model/DisassociateThirdPartyFirewallResult.h>
#include <aws/fms/model/GetAdminAccountResult.h>
#include <aws/fms/model/GetAppsListResult.h>
#include <aws/fms/model/GetComplianceDetailResult.h>
#include <aws/fms/model/GetNotificationChannelResult.h>
#include <aws/fms/model/GetPolicyResult.h>
#include <aws/fms/model/GetProtectionStatusResult.h>
#include <aws/fms/model/GetProtocolsListResult.h>
#include <aws/fms/model/GetThirdPartyFirewallAssociationStatusResult.h>
#include <aws/fms/model/GetViolationDetailsResult.h>
#include <aws/fms/model/ListAppsListsResult.h>
#include <aws/fms/model/ListComplianceStatusResult.h>
#include <aws/fms/model/ListMemberAccountsResult.h>
#include <aws/fms/model/ListPoliciesResult.h>
#include <aws/fms/model/ListProtocolsListsResult.h>
#include <aws/fms/model/ListTagsForResourceResult.h>
#include <aws/fms/model/ListThirdPartyFirewallFirewallPoliciesResult.h>
#include <aws/fms/model/PutAppsListResult.h>
#include <aws/fms/model/PutPolicyResult.h>
#include <aws/fms/model/PutProtocolsListResult.h>
#include <aws/fms/model/TagResourceResult.h>
#include <aws/fms/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
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

namespace FMS
{

namespace Model
{
        class AssociateAdminAccountRequest;
        class AssociateThirdPartyFirewallRequest;
        class DeleteAppsListRequest;
        class DeleteNotificationChannelRequest;
        class DeletePolicyRequest;
        class DeleteProtocolsListRequest;
        class DisassociateAdminAccountRequest;
        class DisassociateThirdPartyFirewallRequest;
        class GetAdminAccountRequest;
        class GetAppsListRequest;
        class GetComplianceDetailRequest;
        class GetNotificationChannelRequest;
        class GetPolicyRequest;
        class GetProtectionStatusRequest;
        class GetProtocolsListRequest;
        class GetThirdPartyFirewallAssociationStatusRequest;
        class GetViolationDetailsRequest;
        class ListAppsListsRequest;
        class ListComplianceStatusRequest;
        class ListMemberAccountsRequest;
        class ListPoliciesRequest;
        class ListProtocolsListsRequest;
        class ListTagsForResourceRequest;
        class ListThirdPartyFirewallFirewallPoliciesRequest;
        class PutAppsListRequest;
        class PutNotificationChannelRequest;
        class PutPolicyRequest;
        class PutProtocolsListRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> AssociateAdminAccountOutcome;
        typedef Aws::Utils::Outcome<AssociateThirdPartyFirewallResult, FMSError> AssociateThirdPartyFirewallOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> DeleteAppsListOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> DeleteNotificationChannelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> DeletePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> DeleteProtocolsListOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> DisassociateAdminAccountOutcome;
        typedef Aws::Utils::Outcome<DisassociateThirdPartyFirewallResult, FMSError> DisassociateThirdPartyFirewallOutcome;
        typedef Aws::Utils::Outcome<GetAdminAccountResult, FMSError> GetAdminAccountOutcome;
        typedef Aws::Utils::Outcome<GetAppsListResult, FMSError> GetAppsListOutcome;
        typedef Aws::Utils::Outcome<GetComplianceDetailResult, FMSError> GetComplianceDetailOutcome;
        typedef Aws::Utils::Outcome<GetNotificationChannelResult, FMSError> GetNotificationChannelOutcome;
        typedef Aws::Utils::Outcome<GetPolicyResult, FMSError> GetPolicyOutcome;
        typedef Aws::Utils::Outcome<GetProtectionStatusResult, FMSError> GetProtectionStatusOutcome;
        typedef Aws::Utils::Outcome<GetProtocolsListResult, FMSError> GetProtocolsListOutcome;
        typedef Aws::Utils::Outcome<GetThirdPartyFirewallAssociationStatusResult, FMSError> GetThirdPartyFirewallAssociationStatusOutcome;
        typedef Aws::Utils::Outcome<GetViolationDetailsResult, FMSError> GetViolationDetailsOutcome;
        typedef Aws::Utils::Outcome<ListAppsListsResult, FMSError> ListAppsListsOutcome;
        typedef Aws::Utils::Outcome<ListComplianceStatusResult, FMSError> ListComplianceStatusOutcome;
        typedef Aws::Utils::Outcome<ListMemberAccountsResult, FMSError> ListMemberAccountsOutcome;
        typedef Aws::Utils::Outcome<ListPoliciesResult, FMSError> ListPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListProtocolsListsResult, FMSError> ListProtocolsListsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, FMSError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListThirdPartyFirewallFirewallPoliciesResult, FMSError> ListThirdPartyFirewallFirewallPoliciesOutcome;
        typedef Aws::Utils::Outcome<PutAppsListResult, FMSError> PutAppsListOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> PutNotificationChannelOutcome;
        typedef Aws::Utils::Outcome<PutPolicyResult, FMSError> PutPolicyOutcome;
        typedef Aws::Utils::Outcome<PutProtocolsListResult, FMSError> PutProtocolsListOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, FMSError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, FMSError> UntagResourceOutcome;

        typedef std::future<AssociateAdminAccountOutcome> AssociateAdminAccountOutcomeCallable;
        typedef std::future<AssociateThirdPartyFirewallOutcome> AssociateThirdPartyFirewallOutcomeCallable;
        typedef std::future<DeleteAppsListOutcome> DeleteAppsListOutcomeCallable;
        typedef std::future<DeleteNotificationChannelOutcome> DeleteNotificationChannelOutcomeCallable;
        typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
        typedef std::future<DeleteProtocolsListOutcome> DeleteProtocolsListOutcomeCallable;
        typedef std::future<DisassociateAdminAccountOutcome> DisassociateAdminAccountOutcomeCallable;
        typedef std::future<DisassociateThirdPartyFirewallOutcome> DisassociateThirdPartyFirewallOutcomeCallable;
        typedef std::future<GetAdminAccountOutcome> GetAdminAccountOutcomeCallable;
        typedef std::future<GetAppsListOutcome> GetAppsListOutcomeCallable;
        typedef std::future<GetComplianceDetailOutcome> GetComplianceDetailOutcomeCallable;
        typedef std::future<GetNotificationChannelOutcome> GetNotificationChannelOutcomeCallable;
        typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
        typedef std::future<GetProtectionStatusOutcome> GetProtectionStatusOutcomeCallable;
        typedef std::future<GetProtocolsListOutcome> GetProtocolsListOutcomeCallable;
        typedef std::future<GetThirdPartyFirewallAssociationStatusOutcome> GetThirdPartyFirewallAssociationStatusOutcomeCallable;
        typedef std::future<GetViolationDetailsOutcome> GetViolationDetailsOutcomeCallable;
        typedef std::future<ListAppsListsOutcome> ListAppsListsOutcomeCallable;
        typedef std::future<ListComplianceStatusOutcome> ListComplianceStatusOutcomeCallable;
        typedef std::future<ListMemberAccountsOutcome> ListMemberAccountsOutcomeCallable;
        typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
        typedef std::future<ListProtocolsListsOutcome> ListProtocolsListsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListThirdPartyFirewallFirewallPoliciesOutcome> ListThirdPartyFirewallFirewallPoliciesOutcomeCallable;
        typedef std::future<PutAppsListOutcome> PutAppsListOutcomeCallable;
        typedef std::future<PutNotificationChannelOutcome> PutNotificationChannelOutcomeCallable;
        typedef std::future<PutPolicyOutcome> PutPolicyOutcomeCallable;
        typedef std::future<PutProtocolsListOutcome> PutProtocolsListOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class FMSClient;

    typedef std::function<void(const FMSClient*, const Model::AssociateAdminAccountRequest&, const Model::AssociateAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAdminAccountResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::AssociateThirdPartyFirewallRequest&, const Model::AssociateThirdPartyFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateThirdPartyFirewallResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DeleteAppsListRequest&, const Model::DeleteAppsListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppsListResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DeleteNotificationChannelRequest&, const Model::DeleteNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DeleteProtocolsListRequest&, const Model::DeleteProtocolsListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProtocolsListResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DisassociateAdminAccountRequest&, const Model::DisassociateAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAdminAccountResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DisassociateThirdPartyFirewallRequest&, const Model::DisassociateThirdPartyFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateThirdPartyFirewallResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetAdminAccountRequest&, const Model::GetAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAdminAccountResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetAppsListRequest&, const Model::GetAppsListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppsListResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetComplianceDetailRequest&, const Model::GetComplianceDetailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceDetailResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetNotificationChannelRequest&, const Model::GetNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetProtectionStatusRequest&, const Model::GetProtectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProtectionStatusResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetProtocolsListRequest&, const Model::GetProtocolsListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProtocolsListResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetThirdPartyFirewallAssociationStatusRequest&, const Model::GetThirdPartyFirewallAssociationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetThirdPartyFirewallAssociationStatusResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetViolationDetailsRequest&, const Model::GetViolationDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetViolationDetailsResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListAppsListsRequest&, const Model::ListAppsListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppsListsResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListComplianceStatusRequest&, const Model::ListComplianceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComplianceStatusResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListMemberAccountsRequest&, const Model::ListMemberAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMemberAccountsResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListProtocolsListsRequest&, const Model::ListProtocolsListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtocolsListsResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListThirdPartyFirewallFirewallPoliciesRequest&, const Model::ListThirdPartyFirewallFirewallPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThirdPartyFirewallFirewallPoliciesResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::PutAppsListRequest&, const Model::PutAppsListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAppsListResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::PutNotificationChannelRequest&, const Model::PutNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::PutPolicyRequest&, const Model::PutPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPolicyResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::PutProtocolsListRequest&, const Model::PutProtocolsListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProtocolsListResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>This is the <i>Firewall Manager API Reference</i>. This guide is for
   * developers who need detailed information about the Firewall Manager API actions,
   * data types, and errors. For detailed information about Firewall Manager
   * features, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall
   * Manager Developer Guide</a>.</p> <p>Some API actions require explicit resource
   * permissions. For information, see the developer guide topic <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall
   * Manager required permissions for API actions</a>. </p>
   */
  class AWS_FMS_API FMSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FMSClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FMSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FMSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~FMSClient();


        /**
         * <p>Sets the Firewall Manager administrator account. The account must be a member
         * of the organization in Organizations whose resources you want to protect.
         * Firewall Manager sets the permissions that allow the account to administer your
         * Firewall Manager policies.</p> <p>The account that you associate with Firewall
         * Manager is called the Firewall Manager administrator account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AssociateAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAdminAccountOutcome AssociateAdminAccount(const Model::AssociateAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for AssociateAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateAdminAccountOutcomeCallable AssociateAdminAccountCallable(const Model::AssociateAdminAccountRequest& request) const;

        /**
         * An Async wrapper for AssociateAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateAdminAccountAsync(const Model::AssociateAdminAccountRequest& request, const AssociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the Firewall Manager policy administrator as a tenant administrator of a
         * third-party firewall service. A tenant is an instance of the third-party
         * firewall service that's associated with your Amazon Web Services customer
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AssociateThirdPartyFirewall">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateThirdPartyFirewallOutcome AssociateThirdPartyFirewall(const Model::AssociateThirdPartyFirewallRequest& request) const;

        /**
         * A Callable wrapper for AssociateThirdPartyFirewall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateThirdPartyFirewallOutcomeCallable AssociateThirdPartyFirewallCallable(const Model::AssociateThirdPartyFirewallRequest& request) const;

        /**
         * An Async wrapper for AssociateThirdPartyFirewall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateThirdPartyFirewallAsync(const Model::AssociateThirdPartyFirewallRequest& request, const AssociateThirdPartyFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes an Firewall Manager applications list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeleteAppsList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppsListOutcome DeleteAppsList(const Model::DeleteAppsListRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppsList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppsListOutcomeCallable DeleteAppsListCallable(const Model::DeleteAppsListRequest& request) const;

        /**
         * An Async wrapper for DeleteAppsList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppsListAsync(const Model::DeleteAppsListRequest& request, const DeleteAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Firewall Manager association with the IAM role and the Amazon
         * Simple Notification Service (SNS) topic that is used to record Firewall Manager
         * SNS logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeleteNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationChannelOutcome DeleteNotificationChannel(const Model::DeleteNotificationChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotificationChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotificationChannelOutcomeCallable DeleteNotificationChannelCallable(const Model::DeleteNotificationChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteNotificationChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotificationChannelAsync(const Model::DeleteNotificationChannelRequest& request, const DeleteNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes an Firewall Manager policy. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes an Firewall Manager protocols list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeleteProtocolsList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProtocolsListOutcome DeleteProtocolsList(const Model::DeleteProtocolsListRequest& request) const;

        /**
         * A Callable wrapper for DeleteProtocolsList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProtocolsListOutcomeCallable DeleteProtocolsListCallable(const Model::DeleteProtocolsListRequest& request) const;

        /**
         * An Async wrapper for DeleteProtocolsList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProtocolsListAsync(const Model::DeleteProtocolsListRequest& request, const DeleteProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the account that has been set as the Firewall Manager
         * administrator account. To set a different account as the administrator account,
         * you must submit an <code>AssociateAdminAccount</code> request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DisassociateAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAdminAccountOutcome DisassociateAdminAccount(const Model::DisassociateAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateAdminAccountOutcomeCallable DisassociateAdminAccountCallable(const Model::DisassociateAdminAccountRequest& request) const;

        /**
         * An Async wrapper for DisassociateAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateAdminAccountAsync(const Model::DisassociateAdminAccountRequest& request, const DisassociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a Firewall Manager policy administrator from a third-party
         * firewall tenant. When you call <code>DisassociateThirdPartyFirewall</code>, the
         * third-party firewall vendor deletes all of the firewalls that are associated
         * with the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DisassociateThirdPartyFirewall">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateThirdPartyFirewallOutcome DisassociateThirdPartyFirewall(const Model::DisassociateThirdPartyFirewallRequest& request) const;

        /**
         * A Callable wrapper for DisassociateThirdPartyFirewall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateThirdPartyFirewallOutcomeCallable DisassociateThirdPartyFirewallCallable(const Model::DisassociateThirdPartyFirewallRequest& request) const;

        /**
         * An Async wrapper for DisassociateThirdPartyFirewall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateThirdPartyFirewallAsync(const Model::DisassociateThirdPartyFirewallRequest& request, const DisassociateThirdPartyFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the Organizations account that is associated with Firewall Manager as
         * the Firewall Manager administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdminAccountOutcome GetAdminAccount(const Model::GetAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for GetAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAdminAccountOutcomeCallable GetAdminAccountCallable(const Model::GetAdminAccountRequest& request) const;

        /**
         * An Async wrapper for GetAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAdminAccountAsync(const Model::GetAdminAccountRequest& request, const GetAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified Firewall Manager applications
         * list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetAppsList">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppsListOutcome GetAppsList(const Model::GetAppsListRequest& request) const;

        /**
         * A Callable wrapper for GetAppsList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppsListOutcomeCallable GetAppsListCallable(const Model::GetAppsListRequest& request) const;

        /**
         * An Async wrapper for GetAppsList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppsListAsync(const Model::GetAppsListRequest& request, const GetAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed compliance information about the specified member account.
         * Details include resources that are in and out of compliance with the specified
         * policy. </p> <ul> <li> <p>Resources are considered noncompliant for WAF and
         * Shield Advanced policies if the specified policy has not been applied to
         * them.</p> </li> <li> <p>Resources are considered noncompliant for security group
         * policies if they are in scope of the policy, they violate one or more of the
         * policy rules, and remediation is disabled or not possible.</p> </li> <li>
         * <p>Resources are considered noncompliant for Network Firewall policies if a
         * firewall is missing in the VPC, if the firewall endpoint isn't set up in an
         * expected Availability Zone and subnet, if a subnet created by the Firewall
         * Manager doesn't have the expected route table, and for modifications to a
         * firewall policy that violate the Firewall Manager policy's rules.</p> </li> <li>
         * <p>Resources are considered noncompliant for DNS Firewall policies if a DNS
         * Firewall rule group is missing from the rule group associations for the VPC.
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetComplianceDetail">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceDetailOutcome GetComplianceDetail(const Model::GetComplianceDetailRequest& request) const;

        /**
         * A Callable wrapper for GetComplianceDetail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceDetailOutcomeCallable GetComplianceDetailCallable(const Model::GetComplianceDetailRequest& request) const;

        /**
         * An Async wrapper for GetComplianceDetail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComplianceDetailAsync(const Model::GetComplianceDetailRequest& request, const GetComplianceDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Information about the Amazon Simple Notification Service (SNS) topic that is
         * used to record Firewall Manager SNS logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNotificationChannelOutcome GetNotificationChannel(const Model::GetNotificationChannelRequest& request) const;

        /**
         * A Callable wrapper for GetNotificationChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNotificationChannelOutcomeCallable GetNotificationChannelCallable(const Model::GetNotificationChannelRequest& request) const;

        /**
         * An Async wrapper for GetNotificationChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNotificationChannelAsync(const Model::GetNotificationChannelRequest& request, const GetNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified Firewall Manager
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetPolicy">AWS API
         * Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>If you created a Shield Advanced policy, returns policy-level attack summary
         * information in the event of a potential DDoS attack. Other policy types are
         * currently unsupported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetProtectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProtectionStatusOutcome GetProtectionStatus(const Model::GetProtectionStatusRequest& request) const;

        /**
         * A Callable wrapper for GetProtectionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProtectionStatusOutcomeCallable GetProtectionStatusCallable(const Model::GetProtectionStatusRequest& request) const;

        /**
         * An Async wrapper for GetProtectionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProtectionStatusAsync(const Model::GetProtectionStatusRequest& request, const GetProtectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified Firewall Manager protocols
         * list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetProtocolsList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProtocolsListOutcome GetProtocolsList(const Model::GetProtocolsListRequest& request) const;

        /**
         * A Callable wrapper for GetProtocolsList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProtocolsListOutcomeCallable GetProtocolsListCallable(const Model::GetProtocolsListRequest& request) const;

        /**
         * An Async wrapper for GetProtocolsList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProtocolsListAsync(const Model::GetProtocolsListRequest& request, const GetProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The onboarding status of a Firewall Manager admin account to third-party
         * firewall vendor tenant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetThirdPartyFirewallAssociationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThirdPartyFirewallAssociationStatusOutcome GetThirdPartyFirewallAssociationStatus(const Model::GetThirdPartyFirewallAssociationStatusRequest& request) const;

        /**
         * A Callable wrapper for GetThirdPartyFirewallAssociationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetThirdPartyFirewallAssociationStatusOutcomeCallable GetThirdPartyFirewallAssociationStatusCallable(const Model::GetThirdPartyFirewallAssociationStatusRequest& request) const;

        /**
         * An Async wrapper for GetThirdPartyFirewallAssociationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetThirdPartyFirewallAssociationStatusAsync(const Model::GetThirdPartyFirewallAssociationStatusRequest& request, const GetThirdPartyFirewallAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves violations for a resource based on the specified Firewall Manager
         * policy and Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetViolationDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetViolationDetailsOutcome GetViolationDetails(const Model::GetViolationDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetViolationDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetViolationDetailsOutcomeCallable GetViolationDetailsCallable(const Model::GetViolationDetailsRequest& request) const;

        /**
         * An Async wrapper for GetViolationDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetViolationDetailsAsync(const Model::GetViolationDetailsRequest& request, const GetViolationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>AppsListDataSummary</code> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListAppsLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsListsOutcome ListAppsLists(const Model::ListAppsListsRequest& request) const;

        /**
         * A Callable wrapper for ListAppsLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppsListsOutcomeCallable ListAppsListsCallable(const Model::ListAppsListsRequest& request) const;

        /**
         * An Async wrapper for ListAppsLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppsListsAsync(const Model::ListAppsListsRequest& request, const ListAppsListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>PolicyComplianceStatus</code> objects. Use
         * <code>PolicyComplianceStatus</code> to get a summary of which member accounts
         * are protected by the specified policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListComplianceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComplianceStatusOutcome ListComplianceStatus(const Model::ListComplianceStatusRequest& request) const;

        /**
         * A Callable wrapper for ListComplianceStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComplianceStatusOutcomeCallable ListComplianceStatusCallable(const Model::ListComplianceStatusRequest& request) const;

        /**
         * An Async wrapper for ListComplianceStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComplianceStatusAsync(const Model::ListComplianceStatusRequest& request, const ListComplianceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a <code>MemberAccounts</code> object that lists the member accounts
         * in the administrator's Amazon Web Services organization.</p> <p>The
         * <code>ListMemberAccounts</code> must be submitted by the account that is set as
         * the Firewall Manager administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListMemberAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMemberAccountsOutcome ListMemberAccounts(const Model::ListMemberAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListMemberAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMemberAccountsOutcomeCallable ListMemberAccountsCallable(const Model::ListMemberAccountsRequest& request) const;

        /**
         * An Async wrapper for ListMemberAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMemberAccountsAsync(const Model::ListMemberAccountsRequest& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>PolicySummary</code> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>ProtocolsListDataSummary</code>
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListProtocolsLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtocolsListsOutcome ListProtocolsLists(const Model::ListProtocolsListsRequest& request) const;

        /**
         * A Callable wrapper for ListProtocolsLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProtocolsListsOutcomeCallable ListProtocolsListsCallable(const Model::ListProtocolsListsRequest& request) const;

        /**
         * An Async wrapper for ListProtocolsLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProtocolsListsAsync(const Model::ListProtocolsListsRequest& request, const ListProtocolsListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of tags for the specified Amazon Web Services resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListTagsForResource">AWS
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
         * <p>Retrieves a list of all of the third-party firewall policies that are
         * associated with the third-party firewall administrator's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListThirdPartyFirewallFirewallPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThirdPartyFirewallFirewallPoliciesOutcome ListThirdPartyFirewallFirewallPolicies(const Model::ListThirdPartyFirewallFirewallPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListThirdPartyFirewallFirewallPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThirdPartyFirewallFirewallPoliciesOutcomeCallable ListThirdPartyFirewallFirewallPoliciesCallable(const Model::ListThirdPartyFirewallFirewallPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListThirdPartyFirewallFirewallPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThirdPartyFirewallFirewallPoliciesAsync(const Model::ListThirdPartyFirewallFirewallPoliciesRequest& request, const ListThirdPartyFirewallFirewallPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Firewall Manager applications list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutAppsList">AWS API
         * Reference</a></p>
         */
        virtual Model::PutAppsListOutcome PutAppsList(const Model::PutAppsListRequest& request) const;

        /**
         * A Callable wrapper for PutAppsList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAppsListOutcomeCallable PutAppsListCallable(const Model::PutAppsListRequest& request) const;

        /**
         * An Async wrapper for PutAppsList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAppsListAsync(const Model::PutAppsListRequest& request, const PutAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Designates the IAM role and Amazon Simple Notification Service (SNS) topic
         * that Firewall Manager uses to record SNS logs.</p> <p>To perform this action
         * outside of the console, you must configure the SNS topic to allow the Firewall
         * Manager role <code>AWSServiceRoleForFMS</code> to publish SNS logs. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall
         * Manager required permissions for API actions</a> in the <i>Firewall Manager
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::PutNotificationChannelOutcome PutNotificationChannel(const Model::PutNotificationChannelRequest& request) const;

        /**
         * A Callable wrapper for PutNotificationChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutNotificationChannelOutcomeCallable PutNotificationChannelCallable(const Model::PutNotificationChannelRequest& request) const;

        /**
         * An Async wrapper for PutNotificationChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutNotificationChannelAsync(const Model::PutNotificationChannelRequest& request, const PutNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Firewall Manager policy.</p> <p>Firewall Manager provides the
         * following types of policies: </p> <ul> <li> <p>An WAF policy (type WAFV2), which
         * defines rule groups to run first in the corresponding WAF web ACL and rule
         * groups to run last in the web ACL.</p> </li> <li> <p>An WAF Classic policy (type
         * WAF), which defines a rule group. </p> </li> <li> <p>A Shield Advanced policy,
         * which applies Shield Advanced protection to specified accounts and
         * resources.</p> </li> <li> <p>A security group policy, which manages VPC security
         * groups across your Amazon Web Services organization. </p> </li> <li> <p>An
         * Network Firewall policy, which provides firewall rules to filter network traffic
         * in specified Amazon VPCs.</p> </li> <li> <p>A DNS Firewall policy, which
         * provides Route 53 Resolver DNS Firewall rules to filter DNS queries for
         * specified VPCs.</p> </li> </ul> <p>Each policy is specific to one of the types.
         * If you want to enforce more than one policy type across accounts, create
         * multiple policies. You can create multiple policies for each type.</p> <p>You
         * must be subscribed to Shield Advanced to create a Shield Advanced policy. For
         * more information about subscribing to Shield Advanced, see <a
         * href="https://docs.aws.amazon.com/waf/latest/DDOSAPIReference/API_CreateSubscription.html">CreateSubscription</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutPolicy">AWS API
         * Reference</a></p>
         */
        virtual Model::PutPolicyOutcome PutPolicy(const Model::PutPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPolicyOutcomeCallable PutPolicyCallable(const Model::PutPolicyRequest& request) const;

        /**
         * An Async wrapper for PutPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPolicyAsync(const Model::PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Firewall Manager protocols list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutProtocolsList">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProtocolsListOutcome PutProtocolsList(const Model::PutProtocolsListRequest& request) const;

        /**
         * A Callable wrapper for PutProtocolsList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutProtocolsListOutcomeCallable PutProtocolsListCallable(const Model::PutProtocolsListRequest& request) const;

        /**
         * An Async wrapper for PutProtocolsList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutProtocolsListAsync(const Model::PutProtocolsListRequest& request, const PutProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to an Amazon Web Services resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/TagResource">AWS API
         * Reference</a></p>
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
         * <p>Removes one or more tags from an Amazon Web Services resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/UntagResource">AWS
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


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateAdminAccountAsyncHelper(const Model::AssociateAdminAccountRequest& request, const AssociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateThirdPartyFirewallAsyncHelper(const Model::AssociateThirdPartyFirewallRequest& request, const AssociateThirdPartyFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppsListAsyncHelper(const Model::DeleteAppsListRequest& request, const DeleteAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotificationChannelAsyncHelper(const Model::DeleteNotificationChannelRequest& request, const DeleteNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyAsyncHelper(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProtocolsListAsyncHelper(const Model::DeleteProtocolsListRequest& request, const DeleteProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateAdminAccountAsyncHelper(const Model::DisassociateAdminAccountRequest& request, const DisassociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateThirdPartyFirewallAsyncHelper(const Model::DisassociateThirdPartyFirewallRequest& request, const DisassociateThirdPartyFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAdminAccountAsyncHelper(const Model::GetAdminAccountRequest& request, const GetAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppsListAsyncHelper(const Model::GetAppsListRequest& request, const GetAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComplianceDetailAsyncHelper(const Model::GetComplianceDetailRequest& request, const GetComplianceDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNotificationChannelAsyncHelper(const Model::GetNotificationChannelRequest& request, const GetNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProtectionStatusAsyncHelper(const Model::GetProtectionStatusRequest& request, const GetProtectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProtocolsListAsyncHelper(const Model::GetProtocolsListRequest& request, const GetProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetThirdPartyFirewallAssociationStatusAsyncHelper(const Model::GetThirdPartyFirewallAssociationStatusRequest& request, const GetThirdPartyFirewallAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetViolationDetailsAsyncHelper(const Model::GetViolationDetailsRequest& request, const GetViolationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppsListsAsyncHelper(const Model::ListAppsListsRequest& request, const ListAppsListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListComplianceStatusAsyncHelper(const Model::ListComplianceStatusRequest& request, const ListComplianceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMemberAccountsAsyncHelper(const Model::ListMemberAccountsRequest& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPoliciesAsyncHelper(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProtocolsListsAsyncHelper(const Model::ListProtocolsListsRequest& request, const ListProtocolsListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThirdPartyFirewallFirewallPoliciesAsyncHelper(const Model::ListThirdPartyFirewallFirewallPoliciesRequest& request, const ListThirdPartyFirewallFirewallPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAppsListAsyncHelper(const Model::PutAppsListRequest& request, const PutAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutNotificationChannelAsyncHelper(const Model::PutNotificationChannelRequest& request, const PutNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPolicyAsyncHelper(const Model::PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutProtocolsListAsyncHelper(const Model::PutProtocolsListRequest& request, const PutProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace FMS
} // namespace Aws
