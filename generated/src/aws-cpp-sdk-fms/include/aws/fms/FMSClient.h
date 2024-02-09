/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fms/FMSServiceClientModel.h>

namespace Aws
{
namespace FMS
{
  /**
   * <p>This is the <i>Firewall Manager API Reference</i>. This guide is for
   * developers who need detailed information about the Firewall Manager API actions,
   * data types, and errors. For detailed information about Firewall Manager
   * features, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall
   * Manager Developer Guide</a>.</p> <p>Some API actions require explicit resource
   * permissions. For information, see the developer guide topic <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-security_iam_service-with-iam.html#fms-security_iam_service-with-iam-roles-service">Service
   * roles for Firewall Manager</a>. </p>
   */
  class AWS_FMS_API FMSClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<FMSClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef FMSClientConfiguration ClientConfigurationType;
      typedef FMSEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FMSClient(const Aws::FMS::FMSClientConfiguration& clientConfiguration = Aws::FMS::FMSClientConfiguration(),
                  std::shared_ptr<FMSEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FMSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<FMSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::FMS::FMSClientConfiguration& clientConfiguration = Aws::FMS::FMSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FMSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<FMSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::FMS::FMSClientConfiguration& clientConfiguration = Aws::FMS::FMSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FMSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FMSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FMSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~FMSClient();

        /**
         * <p>Sets a Firewall Manager default administrator account. The Firewall Manager
         * default administrator account can manage third-party firewalls and has full
         * administrative scope that allows administration of all policy types, accounts,
         * organizational units, and Regions. This account must be a member account of the
         * organization in Organizations whose resources you want to protect.</p> <p>For
         * information about working with Firewall Manager administrator accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/fms-administrators.html">Managing
         * Firewall Manager administrators</a> in the <i>Firewall Manager Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AssociateAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAdminAccountOutcome AssociateAdminAccount(const Model::AssociateAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for AssociateAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateAdminAccountRequestT = Model::AssociateAdminAccountRequest>
        Model::AssociateAdminAccountOutcomeCallable AssociateAdminAccountCallable(const AssociateAdminAccountRequestT& request) const
        {
            return SubmitCallable(&FMSClient::AssociateAdminAccount, request);
        }

        /**
         * An Async wrapper for AssociateAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateAdminAccountRequestT = Model::AssociateAdminAccountRequest>
        void AssociateAdminAccountAsync(const AssociateAdminAccountRequestT& request, const AssociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::AssociateAdminAccount, request, handler, context);
        }

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
        template<typename AssociateThirdPartyFirewallRequestT = Model::AssociateThirdPartyFirewallRequest>
        Model::AssociateThirdPartyFirewallOutcomeCallable AssociateThirdPartyFirewallCallable(const AssociateThirdPartyFirewallRequestT& request) const
        {
            return SubmitCallable(&FMSClient::AssociateThirdPartyFirewall, request);
        }

        /**
         * An Async wrapper for AssociateThirdPartyFirewall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateThirdPartyFirewallRequestT = Model::AssociateThirdPartyFirewallRequest>
        void AssociateThirdPartyFirewallAsync(const AssociateThirdPartyFirewallRequestT& request, const AssociateThirdPartyFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::AssociateThirdPartyFirewall, request, handler, context);
        }

        /**
         * <p>Associate resources to a Firewall Manager resource set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/BatchAssociateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateResourceOutcome BatchAssociateResource(const Model::BatchAssociateResourceRequest& request) const;

        /**
         * A Callable wrapper for BatchAssociateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchAssociateResourceRequestT = Model::BatchAssociateResourceRequest>
        Model::BatchAssociateResourceOutcomeCallable BatchAssociateResourceCallable(const BatchAssociateResourceRequestT& request) const
        {
            return SubmitCallable(&FMSClient::BatchAssociateResource, request);
        }

        /**
         * An Async wrapper for BatchAssociateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchAssociateResourceRequestT = Model::BatchAssociateResourceRequest>
        void BatchAssociateResourceAsync(const BatchAssociateResourceRequestT& request, const BatchAssociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::BatchAssociateResource, request, handler, context);
        }

        /**
         * <p>Disassociates resources from a Firewall Manager resource set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/BatchDisassociateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateResourceOutcome BatchDisassociateResource(const Model::BatchDisassociateResourceRequest& request) const;

        /**
         * A Callable wrapper for BatchDisassociateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDisassociateResourceRequestT = Model::BatchDisassociateResourceRequest>
        Model::BatchDisassociateResourceOutcomeCallable BatchDisassociateResourceCallable(const BatchDisassociateResourceRequestT& request) const
        {
            return SubmitCallable(&FMSClient::BatchDisassociateResource, request);
        }

        /**
         * An Async wrapper for BatchDisassociateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDisassociateResourceRequestT = Model::BatchDisassociateResourceRequest>
        void BatchDisassociateResourceAsync(const BatchDisassociateResourceRequestT& request, const BatchDisassociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::BatchDisassociateResource, request, handler, context);
        }

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
        template<typename DeleteAppsListRequestT = Model::DeleteAppsListRequest>
        Model::DeleteAppsListOutcomeCallable DeleteAppsListCallable(const DeleteAppsListRequestT& request) const
        {
            return SubmitCallable(&FMSClient::DeleteAppsList, request);
        }

        /**
         * An Async wrapper for DeleteAppsList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppsListRequestT = Model::DeleteAppsListRequest>
        void DeleteAppsListAsync(const DeleteAppsListRequestT& request, const DeleteAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::DeleteAppsList, request, handler, context);
        }

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
        template<typename DeleteNotificationChannelRequestT = Model::DeleteNotificationChannelRequest>
        Model::DeleteNotificationChannelOutcomeCallable DeleteNotificationChannelCallable(const DeleteNotificationChannelRequestT& request) const
        {
            return SubmitCallable(&FMSClient::DeleteNotificationChannel, request);
        }

        /**
         * An Async wrapper for DeleteNotificationChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNotificationChannelRequestT = Model::DeleteNotificationChannelRequest>
        void DeleteNotificationChannelAsync(const DeleteNotificationChannelRequestT& request, const DeleteNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::DeleteNotificationChannel, request, handler, context);
        }

        /**
         * <p>Permanently deletes an Firewall Manager policy. </p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePolicyRequestT = Model::DeletePolicyRequest>
        Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const DeletePolicyRequestT& request) const
        {
            return SubmitCallable(&FMSClient::DeletePolicy, request);
        }

        /**
         * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePolicyRequestT = Model::DeletePolicyRequest>
        void DeletePolicyAsync(const DeletePolicyRequestT& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::DeletePolicy, request, handler, context);
        }

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
        template<typename DeleteProtocolsListRequestT = Model::DeleteProtocolsListRequest>
        Model::DeleteProtocolsListOutcomeCallable DeleteProtocolsListCallable(const DeleteProtocolsListRequestT& request) const
        {
            return SubmitCallable(&FMSClient::DeleteProtocolsList, request);
        }

        /**
         * An Async wrapper for DeleteProtocolsList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProtocolsListRequestT = Model::DeleteProtocolsListRequest>
        void DeleteProtocolsListAsync(const DeleteProtocolsListRequestT& request, const DeleteProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::DeleteProtocolsList, request, handler, context);
        }

        /**
         * <p>Deletes the specified <a>ResourceSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DeleteResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceSetOutcome DeleteResourceSet(const Model::DeleteResourceSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourceSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourceSetRequestT = Model::DeleteResourceSetRequest>
        Model::DeleteResourceSetOutcomeCallable DeleteResourceSetCallable(const DeleteResourceSetRequestT& request) const
        {
            return SubmitCallable(&FMSClient::DeleteResourceSet, request);
        }

        /**
         * An Async wrapper for DeleteResourceSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourceSetRequestT = Model::DeleteResourceSetRequest>
        void DeleteResourceSetAsync(const DeleteResourceSetRequestT& request, const DeleteResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::DeleteResourceSet, request, handler, context);
        }

        /**
         * <p>Disassociates an Firewall Manager administrator account. To set a different
         * account as an Firewall Manager administrator, submit a <a>PutAdminAccount</a>
         * request. To set an account as a default administrator account, you must submit
         * an <a>AssociateAdminAccount</a> request.</p> <p>Disassociation of the default
         * administrator account follows the first in, last out principle. If you are the
         * default administrator, all Firewall Manager administrators within the
         * organization must first disassociate their accounts before you can disassociate
         * your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/DisassociateAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAdminAccountOutcome DisassociateAdminAccount(const Model::DisassociateAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateAdminAccountRequestT = Model::DisassociateAdminAccountRequest>
        Model::DisassociateAdminAccountOutcomeCallable DisassociateAdminAccountCallable(const DisassociateAdminAccountRequestT& request) const
        {
            return SubmitCallable(&FMSClient::DisassociateAdminAccount, request);
        }

        /**
         * An Async wrapper for DisassociateAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateAdminAccountRequestT = Model::DisassociateAdminAccountRequest>
        void DisassociateAdminAccountAsync(const DisassociateAdminAccountRequestT& request, const DisassociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::DisassociateAdminAccount, request, handler, context);
        }

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
        template<typename DisassociateThirdPartyFirewallRequestT = Model::DisassociateThirdPartyFirewallRequest>
        Model::DisassociateThirdPartyFirewallOutcomeCallable DisassociateThirdPartyFirewallCallable(const DisassociateThirdPartyFirewallRequestT& request) const
        {
            return SubmitCallable(&FMSClient::DisassociateThirdPartyFirewall, request);
        }

        /**
         * An Async wrapper for DisassociateThirdPartyFirewall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateThirdPartyFirewallRequestT = Model::DisassociateThirdPartyFirewallRequest>
        void DisassociateThirdPartyFirewallAsync(const DisassociateThirdPartyFirewallRequestT& request, const DisassociateThirdPartyFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::DisassociateThirdPartyFirewall, request, handler, context);
        }

        /**
         * <p>Returns the Organizations account that is associated with Firewall Manager as
         * the Firewall Manager default administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdminAccountOutcome GetAdminAccount(const Model::GetAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for GetAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAdminAccountRequestT = Model::GetAdminAccountRequest>
        Model::GetAdminAccountOutcomeCallable GetAdminAccountCallable(const GetAdminAccountRequestT& request) const
        {
            return SubmitCallable(&FMSClient::GetAdminAccount, request);
        }

        /**
         * An Async wrapper for GetAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAdminAccountRequestT = Model::GetAdminAccountRequest>
        void GetAdminAccountAsync(const GetAdminAccountRequestT& request, const GetAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::GetAdminAccount, request, handler, context);
        }

        /**
         * <p>Returns information about the specified account's administrative scope. The
         * admistrative scope defines the resources that an Firewall Manager administrator
         * can manage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetAdminScope">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdminScopeOutcome GetAdminScope(const Model::GetAdminScopeRequest& request) const;

        /**
         * A Callable wrapper for GetAdminScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAdminScopeRequestT = Model::GetAdminScopeRequest>
        Model::GetAdminScopeOutcomeCallable GetAdminScopeCallable(const GetAdminScopeRequestT& request) const
        {
            return SubmitCallable(&FMSClient::GetAdminScope, request);
        }

        /**
         * An Async wrapper for GetAdminScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAdminScopeRequestT = Model::GetAdminScopeRequest>
        void GetAdminScopeAsync(const GetAdminScopeRequestT& request, const GetAdminScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::GetAdminScope, request, handler, context);
        }

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
        template<typename GetAppsListRequestT = Model::GetAppsListRequest>
        Model::GetAppsListOutcomeCallable GetAppsListCallable(const GetAppsListRequestT& request) const
        {
            return SubmitCallable(&FMSClient::GetAppsList, request);
        }

        /**
         * An Async wrapper for GetAppsList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppsListRequestT = Model::GetAppsListRequest>
        void GetAppsListAsync(const GetAppsListRequestT& request, const GetAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::GetAppsList, request, handler, context);
        }

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
        template<typename GetComplianceDetailRequestT = Model::GetComplianceDetailRequest>
        Model::GetComplianceDetailOutcomeCallable GetComplianceDetailCallable(const GetComplianceDetailRequestT& request) const
        {
            return SubmitCallable(&FMSClient::GetComplianceDetail, request);
        }

        /**
         * An Async wrapper for GetComplianceDetail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComplianceDetailRequestT = Model::GetComplianceDetailRequest>
        void GetComplianceDetailAsync(const GetComplianceDetailRequestT& request, const GetComplianceDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::GetComplianceDetail, request, handler, context);
        }

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
        template<typename GetNotificationChannelRequestT = Model::GetNotificationChannelRequest>
        Model::GetNotificationChannelOutcomeCallable GetNotificationChannelCallable(const GetNotificationChannelRequestT& request) const
        {
            return SubmitCallable(&FMSClient::GetNotificationChannel, request);
        }

        /**
         * An Async wrapper for GetNotificationChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNotificationChannelRequestT = Model::GetNotificationChannelRequest>
        void GetNotificationChannelAsync(const GetNotificationChannelRequestT& request, const GetNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::GetNotificationChannel, request, handler, context);
        }

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
        template<typename GetPolicyRequestT = Model::GetPolicyRequest>
        Model::GetPolicyOutcomeCallable GetPolicyCallable(const GetPolicyRequestT& request) const
        {
            return SubmitCallable(&FMSClient::GetPolicy, request);
        }

        /**
         * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPolicyRequestT = Model::GetPolicyRequest>
        void GetPolicyAsync(const GetPolicyRequestT& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::GetPolicy, request, handler, context);
        }

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
        template<typename GetProtectionStatusRequestT = Model::GetProtectionStatusRequest>
        Model::GetProtectionStatusOutcomeCallable GetProtectionStatusCallable(const GetProtectionStatusRequestT& request) const
        {
            return SubmitCallable(&FMSClient::GetProtectionStatus, request);
        }

        /**
         * An Async wrapper for GetProtectionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProtectionStatusRequestT = Model::GetProtectionStatusRequest>
        void GetProtectionStatusAsync(const GetProtectionStatusRequestT& request, const GetProtectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::GetProtectionStatus, request, handler, context);
        }

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
        template<typename GetProtocolsListRequestT = Model::GetProtocolsListRequest>
        Model::GetProtocolsListOutcomeCallable GetProtocolsListCallable(const GetProtocolsListRequestT& request) const
        {
            return SubmitCallable(&FMSClient::GetProtocolsList, request);
        }

        /**
         * An Async wrapper for GetProtocolsList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProtocolsListRequestT = Model::GetProtocolsListRequest>
        void GetProtocolsListAsync(const GetProtocolsListRequestT& request, const GetProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::GetProtocolsList, request, handler, context);
        }

        /**
         * <p>Gets information about a specific resource set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/GetResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceSetOutcome GetResourceSet(const Model::GetResourceSetRequest& request) const;

        /**
         * A Callable wrapper for GetResourceSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceSetRequestT = Model::GetResourceSetRequest>
        Model::GetResourceSetOutcomeCallable GetResourceSetCallable(const GetResourceSetRequestT& request) const
        {
            return SubmitCallable(&FMSClient::GetResourceSet, request);
        }

        /**
         * An Async wrapper for GetResourceSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceSetRequestT = Model::GetResourceSetRequest>
        void GetResourceSetAsync(const GetResourceSetRequestT& request, const GetResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::GetResourceSet, request, handler, context);
        }

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
        template<typename GetThirdPartyFirewallAssociationStatusRequestT = Model::GetThirdPartyFirewallAssociationStatusRequest>
        Model::GetThirdPartyFirewallAssociationStatusOutcomeCallable GetThirdPartyFirewallAssociationStatusCallable(const GetThirdPartyFirewallAssociationStatusRequestT& request) const
        {
            return SubmitCallable(&FMSClient::GetThirdPartyFirewallAssociationStatus, request);
        }

        /**
         * An Async wrapper for GetThirdPartyFirewallAssociationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetThirdPartyFirewallAssociationStatusRequestT = Model::GetThirdPartyFirewallAssociationStatusRequest>
        void GetThirdPartyFirewallAssociationStatusAsync(const GetThirdPartyFirewallAssociationStatusRequestT& request, const GetThirdPartyFirewallAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::GetThirdPartyFirewallAssociationStatus, request, handler, context);
        }

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
        template<typename GetViolationDetailsRequestT = Model::GetViolationDetailsRequest>
        Model::GetViolationDetailsOutcomeCallable GetViolationDetailsCallable(const GetViolationDetailsRequestT& request) const
        {
            return SubmitCallable(&FMSClient::GetViolationDetails, request);
        }

        /**
         * An Async wrapper for GetViolationDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetViolationDetailsRequestT = Model::GetViolationDetailsRequest>
        void GetViolationDetailsAsync(const GetViolationDetailsRequestT& request, const GetViolationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::GetViolationDetails, request, handler, context);
        }

        /**
         * <p>Returns a <code>AdminAccounts</code> object that lists the Firewall Manager
         * administrators within the organization that are onboarded to Firewall Manager by
         * <a>AssociateAdminAccount</a>.</p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListAdminAccountsForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAdminAccountsForOrganizationOutcome ListAdminAccountsForOrganization(const Model::ListAdminAccountsForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for ListAdminAccountsForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAdminAccountsForOrganizationRequestT = Model::ListAdminAccountsForOrganizationRequest>
        Model::ListAdminAccountsForOrganizationOutcomeCallable ListAdminAccountsForOrganizationCallable(const ListAdminAccountsForOrganizationRequestT& request) const
        {
            return SubmitCallable(&FMSClient::ListAdminAccountsForOrganization, request);
        }

        /**
         * An Async wrapper for ListAdminAccountsForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAdminAccountsForOrganizationRequestT = Model::ListAdminAccountsForOrganizationRequest>
        void ListAdminAccountsForOrganizationAsync(const ListAdminAccountsForOrganizationRequestT& request, const ListAdminAccountsForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::ListAdminAccountsForOrganization, request, handler, context);
        }

        /**
         * <p>Lists the accounts that are managing the specified Organizations member
         * account. This is useful for any member account so that they can view the
         * accounts who are managing their account. This operation only returns the
         * managing administrators that have the requested account within their
         * <a>AdminScope</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListAdminsManagingAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAdminsManagingAccountOutcome ListAdminsManagingAccount(const Model::ListAdminsManagingAccountRequest& request) const;

        /**
         * A Callable wrapper for ListAdminsManagingAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAdminsManagingAccountRequestT = Model::ListAdminsManagingAccountRequest>
        Model::ListAdminsManagingAccountOutcomeCallable ListAdminsManagingAccountCallable(const ListAdminsManagingAccountRequestT& request) const
        {
            return SubmitCallable(&FMSClient::ListAdminsManagingAccount, request);
        }

        /**
         * An Async wrapper for ListAdminsManagingAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAdminsManagingAccountRequestT = Model::ListAdminsManagingAccountRequest>
        void ListAdminsManagingAccountAsync(const ListAdminsManagingAccountRequestT& request, const ListAdminsManagingAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::ListAdminsManagingAccount, request, handler, context);
        }

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
        template<typename ListAppsListsRequestT = Model::ListAppsListsRequest>
        Model::ListAppsListsOutcomeCallable ListAppsListsCallable(const ListAppsListsRequestT& request) const
        {
            return SubmitCallable(&FMSClient::ListAppsLists, request);
        }

        /**
         * An Async wrapper for ListAppsLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppsListsRequestT = Model::ListAppsListsRequest>
        void ListAppsListsAsync(const ListAppsListsRequestT& request, const ListAppsListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::ListAppsLists, request, handler, context);
        }

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
        template<typename ListComplianceStatusRequestT = Model::ListComplianceStatusRequest>
        Model::ListComplianceStatusOutcomeCallable ListComplianceStatusCallable(const ListComplianceStatusRequestT& request) const
        {
            return SubmitCallable(&FMSClient::ListComplianceStatus, request);
        }

        /**
         * An Async wrapper for ListComplianceStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComplianceStatusRequestT = Model::ListComplianceStatusRequest>
        void ListComplianceStatusAsync(const ListComplianceStatusRequestT& request, const ListComplianceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::ListComplianceStatus, request, handler, context);
        }

        /**
         * <p>Returns an array of resources in the organization's accounts that are
         * available to be associated with a resource set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListDiscoveredResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDiscoveredResourcesOutcome ListDiscoveredResources(const Model::ListDiscoveredResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDiscoveredResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDiscoveredResourcesRequestT = Model::ListDiscoveredResourcesRequest>
        Model::ListDiscoveredResourcesOutcomeCallable ListDiscoveredResourcesCallable(const ListDiscoveredResourcesRequestT& request) const
        {
            return SubmitCallable(&FMSClient::ListDiscoveredResources, request);
        }

        /**
         * An Async wrapper for ListDiscoveredResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDiscoveredResourcesRequestT = Model::ListDiscoveredResourcesRequest>
        void ListDiscoveredResourcesAsync(const ListDiscoveredResourcesRequestT& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::ListDiscoveredResources, request, handler, context);
        }

        /**
         * <p>Returns a <code>MemberAccounts</code> object that lists the member accounts
         * in the administrator's Amazon Web Services organization.</p> <p>Either an
         * Firewall Manager administrator or the organization's management account can make
         * this request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListMemberAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMemberAccountsOutcome ListMemberAccounts(const Model::ListMemberAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListMemberAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMemberAccountsRequestT = Model::ListMemberAccountsRequest>
        Model::ListMemberAccountsOutcomeCallable ListMemberAccountsCallable(const ListMemberAccountsRequestT& request) const
        {
            return SubmitCallable(&FMSClient::ListMemberAccounts, request);
        }

        /**
         * An Async wrapper for ListMemberAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMemberAccountsRequestT = Model::ListMemberAccountsRequest>
        void ListMemberAccountsAsync(const ListMemberAccountsRequestT& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::ListMemberAccounts, request, handler, context);
        }

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
        template<typename ListPoliciesRequestT = Model::ListPoliciesRequest>
        Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const ListPoliciesRequestT& request) const
        {
            return SubmitCallable(&FMSClient::ListPolicies, request);
        }

        /**
         * An Async wrapper for ListPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPoliciesRequestT = Model::ListPoliciesRequest>
        void ListPoliciesAsync(const ListPoliciesRequestT& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::ListPolicies, request, handler, context);
        }

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
        template<typename ListProtocolsListsRequestT = Model::ListProtocolsListsRequest>
        Model::ListProtocolsListsOutcomeCallable ListProtocolsListsCallable(const ListProtocolsListsRequestT& request) const
        {
            return SubmitCallable(&FMSClient::ListProtocolsLists, request);
        }

        /**
         * An Async wrapper for ListProtocolsLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProtocolsListsRequestT = Model::ListProtocolsListsRequest>
        void ListProtocolsListsAsync(const ListProtocolsListsRequestT& request, const ListProtocolsListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::ListProtocolsLists, request, handler, context);
        }

        /**
         * <p>Returns an array of resources that are currently associated to a resource
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListResourceSetResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceSetResourcesOutcome ListResourceSetResources(const Model::ListResourceSetResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListResourceSetResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceSetResourcesRequestT = Model::ListResourceSetResourcesRequest>
        Model::ListResourceSetResourcesOutcomeCallable ListResourceSetResourcesCallable(const ListResourceSetResourcesRequestT& request) const
        {
            return SubmitCallable(&FMSClient::ListResourceSetResources, request);
        }

        /**
         * An Async wrapper for ListResourceSetResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceSetResourcesRequestT = Model::ListResourceSetResourcesRequest>
        void ListResourceSetResourcesAsync(const ListResourceSetResourcesRequestT& request, const ListResourceSetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::ListResourceSetResources, request, handler, context);
        }

        /**
         * <p>Returns an array of <code>ResourceSetSummary</code> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ListResourceSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceSetsOutcome ListResourceSets(const Model::ListResourceSetsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceSetsRequestT = Model::ListResourceSetsRequest>
        Model::ListResourceSetsOutcomeCallable ListResourceSetsCallable(const ListResourceSetsRequestT& request) const
        {
            return SubmitCallable(&FMSClient::ListResourceSets, request);
        }

        /**
         * An Async wrapper for ListResourceSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceSetsRequestT = Model::ListResourceSetsRequest>
        void ListResourceSetsAsync(const ListResourceSetsRequestT& request, const ListResourceSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::ListResourceSets, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&FMSClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename ListThirdPartyFirewallFirewallPoliciesRequestT = Model::ListThirdPartyFirewallFirewallPoliciesRequest>
        Model::ListThirdPartyFirewallFirewallPoliciesOutcomeCallable ListThirdPartyFirewallFirewallPoliciesCallable(const ListThirdPartyFirewallFirewallPoliciesRequestT& request) const
        {
            return SubmitCallable(&FMSClient::ListThirdPartyFirewallFirewallPolicies, request);
        }

        /**
         * An Async wrapper for ListThirdPartyFirewallFirewallPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThirdPartyFirewallFirewallPoliciesRequestT = Model::ListThirdPartyFirewallFirewallPoliciesRequest>
        void ListThirdPartyFirewallFirewallPoliciesAsync(const ListThirdPartyFirewallFirewallPoliciesRequestT& request, const ListThirdPartyFirewallFirewallPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::ListThirdPartyFirewallFirewallPolicies, request, handler, context);
        }

        /**
         * <p>Creates or updates an Firewall Manager administrator account. The account
         * must be a member of the organization that was onboarded to Firewall Manager by
         * <a>AssociateAdminAccount</a>. Only the organization's management account can
         * create an Firewall Manager administrator account. When you create an Firewall
         * Manager administrator account, the service checks to see if the account is
         * already a delegated administrator within Organizations. If the account isn't a
         * delegated administrator, Firewall Manager calls Organizations to delegate the
         * account within Organizations. For more information about administrator accounts
         * within Organizations, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
         * the Amazon Web Services Accounts in Your Organization</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAdminAccountOutcome PutAdminAccount(const Model::PutAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for PutAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAdminAccountRequestT = Model::PutAdminAccountRequest>
        Model::PutAdminAccountOutcomeCallable PutAdminAccountCallable(const PutAdminAccountRequestT& request) const
        {
            return SubmitCallable(&FMSClient::PutAdminAccount, request);
        }

        /**
         * An Async wrapper for PutAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAdminAccountRequestT = Model::PutAdminAccountRequest>
        void PutAdminAccountAsync(const PutAdminAccountRequestT& request, const PutAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::PutAdminAccount, request, handler, context);
        }

        /**
         * <p>Creates an Firewall Manager applications list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutAppsList">AWS API
         * Reference</a></p>
         */
        virtual Model::PutAppsListOutcome PutAppsList(const Model::PutAppsListRequest& request) const;

        /**
         * A Callable wrapper for PutAppsList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAppsListRequestT = Model::PutAppsListRequest>
        Model::PutAppsListOutcomeCallable PutAppsListCallable(const PutAppsListRequestT& request) const
        {
            return SubmitCallable(&FMSClient::PutAppsList, request);
        }

        /**
         * An Async wrapper for PutAppsList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAppsListRequestT = Model::PutAppsListRequest>
        void PutAppsListAsync(const PutAppsListRequestT& request, const PutAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::PutAppsList, request, handler, context);
        }

        /**
         * <p>Designates the IAM role and Amazon Simple Notification Service (SNS) topic
         * that Firewall Manager uses to record SNS logs.</p> <p>To perform this action
         * outside of the console, you must first configure the SNS topic's access policy
         * to allow the <code>SnsRoleName</code> to publish SNS logs. If the
         * <code>SnsRoleName</code> provided is a role other than the
         * <code>AWSServiceRoleForFMS</code> service-linked role, this role must have a
         * trust relationship configured to allow the Firewall Manager service principal
         * <code>fms.amazonaws.com</code> to assume this role. For information about
         * configuring an SNS access policy, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-security_iam_service-with-iam.html#fms-security_iam_service-with-iam-roles-service">Service
         * roles for Firewall Manager</a> in the <i>Firewall Manager Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::PutNotificationChannelOutcome PutNotificationChannel(const Model::PutNotificationChannelRequest& request) const;

        /**
         * A Callable wrapper for PutNotificationChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutNotificationChannelRequestT = Model::PutNotificationChannelRequest>
        Model::PutNotificationChannelOutcomeCallable PutNotificationChannelCallable(const PutNotificationChannelRequestT& request) const
        {
            return SubmitCallable(&FMSClient::PutNotificationChannel, request);
        }

        /**
         * An Async wrapper for PutNotificationChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutNotificationChannelRequestT = Model::PutNotificationChannelRequest>
        void PutNotificationChannelAsync(const PutNotificationChannelRequestT& request, const PutNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::PutNotificationChannel, request, handler, context);
        }

        /**
         * <p>Creates an Firewall Manager policy.</p> <p>A Firewall Manager policy is
         * specific to the individual policy type. If you want to enforce multiple policy
         * types across accounts, you can create multiple policies. You can create more
         * than one policy for each type. </p> <p>If you add a new account to an
         * organization that you created with Organizations, Firewall Manager automatically
         * applies the policy to the resources in that account that are within scope of the
         * policy. </p> <p>Firewall Manager provides the following types of policies: </p>
         * <ul> <li> <p> <b>Shield Advanced policy</b> - This policy applies Shield
         * Advanced protection to specified accounts and resources. </p> </li> <li> <p>
         * <b>Security Groups policy</b> - This type of policy gives you control over
         * security groups that are in use throughout your organization in Organizations
         * and lets you enforce a baseline set of rules across your organization. </p>
         * </li> <li> <p> <b>Network Firewall policy</b> - This policy applies Network
         * Firewall protection to your organization's VPCs. </p> </li> <li> <p> <b>DNS
         * Firewall policy</b> - This policy applies Amazon Route 53 Resolver DNS Firewall
         * protections to your organization's VPCs. </p> </li> <li> <p> <b>Third-party
         * firewall policy</b> - This policy applies third-party firewall protections.
         * Third-party firewalls are available by subscription through the Amazon Web
         * Services Marketplace console at <a
         * href="https://aws.amazon.com/marketplace">Amazon Web Services
         * Marketplace</a>.</p> <ul> <li> <p> <b>Palo Alto Networks Cloud NGFW policy</b> -
         * This policy applies Palo Alto Networks Cloud Next Generation Firewall (NGFW)
         * protections and Palo Alto Networks Cloud NGFW rulestacks to your organization's
         * VPCs.</p> </li> <li> <p> <b>Fortigate CNF policy</b> - This policy applies
         * Fortigate Cloud Native Firewall (CNF) protections. Fortigate CNF is a
         * cloud-centered solution that blocks Zero-Day threats and secures cloud
         * infrastructures with industry-leading advanced threat prevention, smart web
         * application firewalls (WAF), and API protection.</p> </li> </ul> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutPolicy">AWS API
         * Reference</a></p>
         */
        virtual Model::PutPolicyOutcome PutPolicy(const Model::PutPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutPolicyRequestT = Model::PutPolicyRequest>
        Model::PutPolicyOutcomeCallable PutPolicyCallable(const PutPolicyRequestT& request) const
        {
            return SubmitCallable(&FMSClient::PutPolicy, request);
        }

        /**
         * An Async wrapper for PutPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutPolicyRequestT = Model::PutPolicyRequest>
        void PutPolicyAsync(const PutPolicyRequestT& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::PutPolicy, request, handler, context);
        }

        /**
         * <p>Creates an Firewall Manager protocols list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutProtocolsList">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProtocolsListOutcome PutProtocolsList(const Model::PutProtocolsListRequest& request) const;

        /**
         * A Callable wrapper for PutProtocolsList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutProtocolsListRequestT = Model::PutProtocolsListRequest>
        Model::PutProtocolsListOutcomeCallable PutProtocolsListCallable(const PutProtocolsListRequestT& request) const
        {
            return SubmitCallable(&FMSClient::PutProtocolsList, request);
        }

        /**
         * An Async wrapper for PutProtocolsList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutProtocolsListRequestT = Model::PutProtocolsListRequest>
        void PutProtocolsListAsync(const PutProtocolsListRequestT& request, const PutProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::PutProtocolsList, request, handler, context);
        }

        /**
         * <p>Creates the resource set.</p> <p>An Firewall Manager resource set defines the
         * resources to import into an Firewall Manager policy from another Amazon Web
         * Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PutResourceSet">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourceSetOutcome PutResourceSet(const Model::PutResourceSetRequest& request) const;

        /**
         * A Callable wrapper for PutResourceSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourceSetRequestT = Model::PutResourceSetRequest>
        Model::PutResourceSetOutcomeCallable PutResourceSetCallable(const PutResourceSetRequestT& request) const
        {
            return SubmitCallable(&FMSClient::PutResourceSet, request);
        }

        /**
         * An Async wrapper for PutResourceSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourceSetRequestT = Model::PutResourceSetRequest>
        void PutResourceSetAsync(const PutResourceSetRequestT& request, const PutResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::PutResourceSet, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&FMSClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&FMSClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FMSClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<FMSEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<FMSClient>;
      void init(const FMSClientConfiguration& clientConfiguration);

      FMSClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<FMSEndpointProviderBase> m_endpointProvider;
  };

} // namespace FMS
} // namespace Aws
