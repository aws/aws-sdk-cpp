/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mailmanager/MailManagerServiceClientModel.h>

namespace Aws
{
namespace MailManager
{
  /**
   * <p><fullname>Amazon SES Mail Manager API</fullname> <p>The Amazon SES Mail
   * Manager API contains operations and data types that comprise the Mail Manager
   * feature of <a href="http://aws.amazon.com/ses">Amazon Simple Email Service
   * (SES)</a>.</p> <p>Mail Manager is a set of Amazon SES email gateway features
   * designed to help you strengthen your organization's email infrastructure,
   * simplify email workflow management, and streamline email compliance control. To
   * learn more, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/eb.html">Mail Manager
   * chapter</a> in the <i>Amazon SES Developer Guide</i>.</p></p>
   */
  class AWS_MAILMANAGER_API MailManagerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MailManagerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MailManagerClientConfiguration ClientConfigurationType;
      typedef MailManagerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MailManagerClient(const Aws::MailManager::MailManagerClientConfiguration& clientConfiguration = Aws::MailManager::MailManagerClientConfiguration(),
                          std::shared_ptr<MailManagerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MailManagerClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<MailManagerEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::MailManager::MailManagerClientConfiguration& clientConfiguration = Aws::MailManager::MailManagerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MailManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<MailManagerEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::MailManager::MailManagerClientConfiguration& clientConfiguration = Aws::MailManager::MailManagerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MailManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MailManagerClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MailManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MailManagerClient();

        /**
         * <p>Creates an Add On instance for the subscription indicated in the request. The
         * resulting Amazon Resource Name (ARN) can be used in a conditional statement for
         * a rule set or traffic policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/CreateAddonInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAddonInstanceOutcome CreateAddonInstance(const Model::CreateAddonInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateAddonInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAddonInstanceRequestT = Model::CreateAddonInstanceRequest>
        Model::CreateAddonInstanceOutcomeCallable CreateAddonInstanceCallable(const CreateAddonInstanceRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::CreateAddonInstance, request);
        }

        /**
         * An Async wrapper for CreateAddonInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAddonInstanceRequestT = Model::CreateAddonInstanceRequest>
        void CreateAddonInstanceAsync(const CreateAddonInstanceRequestT& request, const CreateAddonInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::CreateAddonInstance, request, handler, context);
        }

        /**
         * <p>Creates a subscription for an Add On representing the acceptance of its terms
         * of use and additional pricing. The subscription can then be used to create an
         * instance for use in rule sets or traffic policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/CreateAddonSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAddonSubscriptionOutcome CreateAddonSubscription(const Model::CreateAddonSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateAddonSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAddonSubscriptionRequestT = Model::CreateAddonSubscriptionRequest>
        Model::CreateAddonSubscriptionOutcomeCallable CreateAddonSubscriptionCallable(const CreateAddonSubscriptionRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::CreateAddonSubscription, request);
        }

        /**
         * An Async wrapper for CreateAddonSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAddonSubscriptionRequestT = Model::CreateAddonSubscriptionRequest>
        void CreateAddonSubscriptionAsync(const CreateAddonSubscriptionRequestT& request, const CreateAddonSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::CreateAddonSubscription, request, handler, context);
        }

        /**
         * <p>Creates a new address list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/CreateAddressList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAddressListOutcome CreateAddressList(const Model::CreateAddressListRequest& request) const;

        /**
         * A Callable wrapper for CreateAddressList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAddressListRequestT = Model::CreateAddressListRequest>
        Model::CreateAddressListOutcomeCallable CreateAddressListCallable(const CreateAddressListRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::CreateAddressList, request);
        }

        /**
         * An Async wrapper for CreateAddressList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAddressListRequestT = Model::CreateAddressListRequest>
        void CreateAddressListAsync(const CreateAddressListRequestT& request, const CreateAddressListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::CreateAddressList, request, handler, context);
        }

        /**
         * <p>Creates an import job for an address list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/CreateAddressListImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAddressListImportJobOutcome CreateAddressListImportJob(const Model::CreateAddressListImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateAddressListImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAddressListImportJobRequestT = Model::CreateAddressListImportJobRequest>
        Model::CreateAddressListImportJobOutcomeCallable CreateAddressListImportJobCallable(const CreateAddressListImportJobRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::CreateAddressListImportJob, request);
        }

        /**
         * An Async wrapper for CreateAddressListImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAddressListImportJobRequestT = Model::CreateAddressListImportJobRequest>
        void CreateAddressListImportJobAsync(const CreateAddressListImportJobRequestT& request, const CreateAddressListImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::CreateAddressListImportJob, request, handler, context);
        }

        /**
         * <p>Creates a new email archive resource for storing and retaining
         * emails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/CreateArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateArchiveOutcome CreateArchive(const Model::CreateArchiveRequest& request) const;

        /**
         * A Callable wrapper for CreateArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateArchiveRequestT = Model::CreateArchiveRequest>
        Model::CreateArchiveOutcomeCallable CreateArchiveCallable(const CreateArchiveRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::CreateArchive, request);
        }

        /**
         * An Async wrapper for CreateArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateArchiveRequestT = Model::CreateArchiveRequest>
        void CreateArchiveAsync(const CreateArchiveRequestT& request, const CreateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::CreateArchive, request, handler, context);
        }

        /**
         * <p>Provision a new ingress endpoint resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/CreateIngressPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIngressPointOutcome CreateIngressPoint(const Model::CreateIngressPointRequest& request) const;

        /**
         * A Callable wrapper for CreateIngressPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIngressPointRequestT = Model::CreateIngressPointRequest>
        Model::CreateIngressPointOutcomeCallable CreateIngressPointCallable(const CreateIngressPointRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::CreateIngressPoint, request);
        }

        /**
         * An Async wrapper for CreateIngressPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIngressPointRequestT = Model::CreateIngressPointRequest>
        void CreateIngressPointAsync(const CreateIngressPointRequestT& request, const CreateIngressPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::CreateIngressPoint, request, handler, context);
        }

        /**
         * <p>Creates a relay resource which can be used in rules to relay incoming emails
         * to defined relay destinations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/CreateRelay">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRelayOutcome CreateRelay(const Model::CreateRelayRequest& request) const;

        /**
         * A Callable wrapper for CreateRelay that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRelayRequestT = Model::CreateRelayRequest>
        Model::CreateRelayOutcomeCallable CreateRelayCallable(const CreateRelayRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::CreateRelay, request);
        }

        /**
         * An Async wrapper for CreateRelay that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRelayRequestT = Model::CreateRelayRequest>
        void CreateRelayAsync(const CreateRelayRequestT& request, const CreateRelayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::CreateRelay, request, handler, context);
        }

        /**
         * <p>Provision a new rule set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/CreateRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleSetOutcome CreateRuleSet(const Model::CreateRuleSetRequest& request) const;

        /**
         * A Callable wrapper for CreateRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRuleSetRequestT = Model::CreateRuleSetRequest>
        Model::CreateRuleSetOutcomeCallable CreateRuleSetCallable(const CreateRuleSetRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::CreateRuleSet, request);
        }

        /**
         * An Async wrapper for CreateRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRuleSetRequestT = Model::CreateRuleSetRequest>
        void CreateRuleSetAsync(const CreateRuleSetRequestT& request, const CreateRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::CreateRuleSet, request, handler, context);
        }

        /**
         * <p>Provision a new traffic policy resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/CreateTrafficPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrafficPolicyOutcome CreateTrafficPolicy(const Model::CreateTrafficPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateTrafficPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrafficPolicyRequestT = Model::CreateTrafficPolicyRequest>
        Model::CreateTrafficPolicyOutcomeCallable CreateTrafficPolicyCallable(const CreateTrafficPolicyRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::CreateTrafficPolicy, request);
        }

        /**
         * An Async wrapper for CreateTrafficPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrafficPolicyRequestT = Model::CreateTrafficPolicyRequest>
        void CreateTrafficPolicyAsync(const CreateTrafficPolicyRequestT& request, const CreateTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::CreateTrafficPolicy, request, handler, context);
        }

        /**
         * <p>Deletes an Add On instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DeleteAddonInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAddonInstanceOutcome DeleteAddonInstance(const Model::DeleteAddonInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteAddonInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAddonInstanceRequestT = Model::DeleteAddonInstanceRequest>
        Model::DeleteAddonInstanceOutcomeCallable DeleteAddonInstanceCallable(const DeleteAddonInstanceRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::DeleteAddonInstance, request);
        }

        /**
         * An Async wrapper for DeleteAddonInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAddonInstanceRequestT = Model::DeleteAddonInstanceRequest>
        void DeleteAddonInstanceAsync(const DeleteAddonInstanceRequestT& request, const DeleteAddonInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::DeleteAddonInstance, request, handler, context);
        }

        /**
         * <p>Deletes an Add On subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DeleteAddonSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAddonSubscriptionOutcome DeleteAddonSubscription(const Model::DeleteAddonSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAddonSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAddonSubscriptionRequestT = Model::DeleteAddonSubscriptionRequest>
        Model::DeleteAddonSubscriptionOutcomeCallable DeleteAddonSubscriptionCallable(const DeleteAddonSubscriptionRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::DeleteAddonSubscription, request);
        }

        /**
         * An Async wrapper for DeleteAddonSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAddonSubscriptionRequestT = Model::DeleteAddonSubscriptionRequest>
        void DeleteAddonSubscriptionAsync(const DeleteAddonSubscriptionRequestT& request, const DeleteAddonSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::DeleteAddonSubscription, request, handler, context);
        }

        /**
         * <p>Deletes an address list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DeleteAddressList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAddressListOutcome DeleteAddressList(const Model::DeleteAddressListRequest& request) const;

        /**
         * A Callable wrapper for DeleteAddressList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAddressListRequestT = Model::DeleteAddressListRequest>
        Model::DeleteAddressListOutcomeCallable DeleteAddressListCallable(const DeleteAddressListRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::DeleteAddressList, request);
        }

        /**
         * An Async wrapper for DeleteAddressList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAddressListRequestT = Model::DeleteAddressListRequest>
        void DeleteAddressListAsync(const DeleteAddressListRequestT& request, const DeleteAddressListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::DeleteAddressList, request, handler, context);
        }

        /**
         * <p>Initiates deletion of an email archive. This changes the archive state to
         * pending deletion. In this state, no new emails can be added, and existing
         * archived emails become inaccessible (search, export, download). The archive and
         * all of its contents will be permanently deleted 30 days after entering the
         * pending deletion state, regardless of the configured retention period.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DeleteArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteArchiveOutcome DeleteArchive(const Model::DeleteArchiveRequest& request) const;

        /**
         * A Callable wrapper for DeleteArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteArchiveRequestT = Model::DeleteArchiveRequest>
        Model::DeleteArchiveOutcomeCallable DeleteArchiveCallable(const DeleteArchiveRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::DeleteArchive, request);
        }

        /**
         * An Async wrapper for DeleteArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteArchiveRequestT = Model::DeleteArchiveRequest>
        void DeleteArchiveAsync(const DeleteArchiveRequestT& request, const DeleteArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::DeleteArchive, request, handler, context);
        }

        /**
         * <p>Delete an ingress endpoint resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DeleteIngressPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIngressPointOutcome DeleteIngressPoint(const Model::DeleteIngressPointRequest& request) const;

        /**
         * A Callable wrapper for DeleteIngressPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIngressPointRequestT = Model::DeleteIngressPointRequest>
        Model::DeleteIngressPointOutcomeCallable DeleteIngressPointCallable(const DeleteIngressPointRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::DeleteIngressPoint, request);
        }

        /**
         * An Async wrapper for DeleteIngressPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIngressPointRequestT = Model::DeleteIngressPointRequest>
        void DeleteIngressPointAsync(const DeleteIngressPointRequestT& request, const DeleteIngressPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::DeleteIngressPoint, request, handler, context);
        }

        /**
         * <p>Deletes an existing relay resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DeleteRelay">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRelayOutcome DeleteRelay(const Model::DeleteRelayRequest& request) const;

        /**
         * A Callable wrapper for DeleteRelay that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRelayRequestT = Model::DeleteRelayRequest>
        Model::DeleteRelayOutcomeCallable DeleteRelayCallable(const DeleteRelayRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::DeleteRelay, request);
        }

        /**
         * An Async wrapper for DeleteRelay that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRelayRequestT = Model::DeleteRelayRequest>
        void DeleteRelayAsync(const DeleteRelayRequestT& request, const DeleteRelayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::DeleteRelay, request, handler, context);
        }

        /**
         * <p>Delete a rule set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DeleteRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleSetOutcome DeleteRuleSet(const Model::DeleteRuleSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRuleSetRequestT = Model::DeleteRuleSetRequest>
        Model::DeleteRuleSetOutcomeCallable DeleteRuleSetCallable(const DeleteRuleSetRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::DeleteRuleSet, request);
        }

        /**
         * An Async wrapper for DeleteRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleSetRequestT = Model::DeleteRuleSetRequest>
        void DeleteRuleSetAsync(const DeleteRuleSetRequestT& request, const DeleteRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::DeleteRuleSet, request, handler, context);
        }

        /**
         * <p>Delete a traffic policy resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DeleteTrafficPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficPolicyOutcome DeleteTrafficPolicy(const Model::DeleteTrafficPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrafficPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTrafficPolicyRequestT = Model::DeleteTrafficPolicyRequest>
        Model::DeleteTrafficPolicyOutcomeCallable DeleteTrafficPolicyCallable(const DeleteTrafficPolicyRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::DeleteTrafficPolicy, request);
        }

        /**
         * An Async wrapper for DeleteTrafficPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTrafficPolicyRequestT = Model::DeleteTrafficPolicyRequest>
        void DeleteTrafficPolicyAsync(const DeleteTrafficPolicyRequestT& request, const DeleteTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::DeleteTrafficPolicy, request, handler, context);
        }

        /**
         * <p>Removes a member from an address list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DeregisterMemberFromAddressList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterMemberFromAddressListOutcome DeregisterMemberFromAddressList(const Model::DeregisterMemberFromAddressListRequest& request) const;

        /**
         * A Callable wrapper for DeregisterMemberFromAddressList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterMemberFromAddressListRequestT = Model::DeregisterMemberFromAddressListRequest>
        Model::DeregisterMemberFromAddressListOutcomeCallable DeregisterMemberFromAddressListCallable(const DeregisterMemberFromAddressListRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::DeregisterMemberFromAddressList, request);
        }

        /**
         * An Async wrapper for DeregisterMemberFromAddressList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterMemberFromAddressListRequestT = Model::DeregisterMemberFromAddressListRequest>
        void DeregisterMemberFromAddressListAsync(const DeregisterMemberFromAddressListRequestT& request, const DeregisterMemberFromAddressListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::DeregisterMemberFromAddressList, request, handler, context);
        }

        /**
         * <p>Gets detailed information about an Add On instance.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetAddonInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAddonInstanceOutcome GetAddonInstance(const Model::GetAddonInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetAddonInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAddonInstanceRequestT = Model::GetAddonInstanceRequest>
        Model::GetAddonInstanceOutcomeCallable GetAddonInstanceCallable(const GetAddonInstanceRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetAddonInstance, request);
        }

        /**
         * An Async wrapper for GetAddonInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAddonInstanceRequestT = Model::GetAddonInstanceRequest>
        void GetAddonInstanceAsync(const GetAddonInstanceRequestT& request, const GetAddonInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetAddonInstance, request, handler, context);
        }

        /**
         * <p>Gets detailed information about an Add On subscription.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetAddonSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAddonSubscriptionOutcome GetAddonSubscription(const Model::GetAddonSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for GetAddonSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAddonSubscriptionRequestT = Model::GetAddonSubscriptionRequest>
        Model::GetAddonSubscriptionOutcomeCallable GetAddonSubscriptionCallable(const GetAddonSubscriptionRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetAddonSubscription, request);
        }

        /**
         * An Async wrapper for GetAddonSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAddonSubscriptionRequestT = Model::GetAddonSubscriptionRequest>
        void GetAddonSubscriptionAsync(const GetAddonSubscriptionRequestT& request, const GetAddonSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetAddonSubscription, request, handler, context);
        }

        /**
         * <p>Fetch attributes of an address list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetAddressList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAddressListOutcome GetAddressList(const Model::GetAddressListRequest& request) const;

        /**
         * A Callable wrapper for GetAddressList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAddressListRequestT = Model::GetAddressListRequest>
        Model::GetAddressListOutcomeCallable GetAddressListCallable(const GetAddressListRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetAddressList, request);
        }

        /**
         * An Async wrapper for GetAddressList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAddressListRequestT = Model::GetAddressListRequest>
        void GetAddressListAsync(const GetAddressListRequestT& request, const GetAddressListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetAddressList, request, handler, context);
        }

        /**
         * <p>Fetch attributes of an import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetAddressListImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAddressListImportJobOutcome GetAddressListImportJob(const Model::GetAddressListImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetAddressListImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAddressListImportJobRequestT = Model::GetAddressListImportJobRequest>
        Model::GetAddressListImportJobOutcomeCallable GetAddressListImportJobCallable(const GetAddressListImportJobRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetAddressListImportJob, request);
        }

        /**
         * An Async wrapper for GetAddressListImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAddressListImportJobRequestT = Model::GetAddressListImportJobRequest>
        void GetAddressListImportJobAsync(const GetAddressListImportJobRequestT& request, const GetAddressListImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetAddressListImportJob, request, handler, context);
        }

        /**
         * <p>Retrieves the full details and current state of a specified email
         * archive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArchiveOutcome GetArchive(const Model::GetArchiveRequest& request) const;

        /**
         * A Callable wrapper for GetArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetArchiveRequestT = Model::GetArchiveRequest>
        Model::GetArchiveOutcomeCallable GetArchiveCallable(const GetArchiveRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetArchive, request);
        }

        /**
         * An Async wrapper for GetArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetArchiveRequestT = Model::GetArchiveRequest>
        void GetArchiveAsync(const GetArchiveRequestT& request, const GetArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetArchive, request, handler, context);
        }

        /**
         * <p>Retrieves the details and current status of a specific email archive export
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveExport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArchiveExportOutcome GetArchiveExport(const Model::GetArchiveExportRequest& request) const;

        /**
         * A Callable wrapper for GetArchiveExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetArchiveExportRequestT = Model::GetArchiveExportRequest>
        Model::GetArchiveExportOutcomeCallable GetArchiveExportCallable(const GetArchiveExportRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetArchiveExport, request);
        }

        /**
         * An Async wrapper for GetArchiveExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetArchiveExportRequestT = Model::GetArchiveExportRequest>
        void GetArchiveExportAsync(const GetArchiveExportRequestT& request, const GetArchiveExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetArchiveExport, request, handler, context);
        }

        /**
         * <p>Returns a pre-signed URL that provides temporary download access to the
         * specific email message stored in the archive. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArchiveMessageOutcome GetArchiveMessage(const Model::GetArchiveMessageRequest& request) const;

        /**
         * A Callable wrapper for GetArchiveMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetArchiveMessageRequestT = Model::GetArchiveMessageRequest>
        Model::GetArchiveMessageOutcomeCallable GetArchiveMessageCallable(const GetArchiveMessageRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetArchiveMessage, request);
        }

        /**
         * An Async wrapper for GetArchiveMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetArchiveMessageRequestT = Model::GetArchiveMessageRequest>
        void GetArchiveMessageAsync(const GetArchiveMessageRequestT& request, const GetArchiveMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetArchiveMessage, request, handler, context);
        }

        /**
         * <p>Returns the textual content of a specific email message stored in the
         * archive. Attachments are not included. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveMessageContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArchiveMessageContentOutcome GetArchiveMessageContent(const Model::GetArchiveMessageContentRequest& request) const;

        /**
         * A Callable wrapper for GetArchiveMessageContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetArchiveMessageContentRequestT = Model::GetArchiveMessageContentRequest>
        Model::GetArchiveMessageContentOutcomeCallable GetArchiveMessageContentCallable(const GetArchiveMessageContentRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetArchiveMessageContent, request);
        }

        /**
         * An Async wrapper for GetArchiveMessageContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetArchiveMessageContentRequestT = Model::GetArchiveMessageContentRequest>
        void GetArchiveMessageContentAsync(const GetArchiveMessageContentRequestT& request, const GetArchiveMessageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetArchiveMessageContent, request, handler, context);
        }

        /**
         * <p>Retrieves the details and current status of a specific email archive search
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveSearch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArchiveSearchOutcome GetArchiveSearch(const Model::GetArchiveSearchRequest& request) const;

        /**
         * A Callable wrapper for GetArchiveSearch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetArchiveSearchRequestT = Model::GetArchiveSearchRequest>
        Model::GetArchiveSearchOutcomeCallable GetArchiveSearchCallable(const GetArchiveSearchRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetArchiveSearch, request);
        }

        /**
         * An Async wrapper for GetArchiveSearch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetArchiveSearchRequestT = Model::GetArchiveSearchRequest>
        void GetArchiveSearchAsync(const GetArchiveSearchRequestT& request, const GetArchiveSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetArchiveSearch, request, handler, context);
        }

        /**
         * <p>Returns the results of a completed email archive search job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveSearchResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArchiveSearchResultsOutcome GetArchiveSearchResults(const Model::GetArchiveSearchResultsRequest& request) const;

        /**
         * A Callable wrapper for GetArchiveSearchResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetArchiveSearchResultsRequestT = Model::GetArchiveSearchResultsRequest>
        Model::GetArchiveSearchResultsOutcomeCallable GetArchiveSearchResultsCallable(const GetArchiveSearchResultsRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetArchiveSearchResults, request);
        }

        /**
         * An Async wrapper for GetArchiveSearchResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetArchiveSearchResultsRequestT = Model::GetArchiveSearchResultsRequest>
        void GetArchiveSearchResultsAsync(const GetArchiveSearchResultsRequestT& request, const GetArchiveSearchResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetArchiveSearchResults, request, handler, context);
        }

        /**
         * <p>Fetch ingress endpoint resource attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetIngressPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIngressPointOutcome GetIngressPoint(const Model::GetIngressPointRequest& request) const;

        /**
         * A Callable wrapper for GetIngressPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIngressPointRequestT = Model::GetIngressPointRequest>
        Model::GetIngressPointOutcomeCallable GetIngressPointCallable(const GetIngressPointRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetIngressPoint, request);
        }

        /**
         * An Async wrapper for GetIngressPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIngressPointRequestT = Model::GetIngressPointRequest>
        void GetIngressPointAsync(const GetIngressPointRequestT& request, const GetIngressPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetIngressPoint, request, handler, context);
        }

        /**
         * <p>Fetch attributes of a member in an address list.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetMemberOfAddressList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberOfAddressListOutcome GetMemberOfAddressList(const Model::GetMemberOfAddressListRequest& request) const;

        /**
         * A Callable wrapper for GetMemberOfAddressList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMemberOfAddressListRequestT = Model::GetMemberOfAddressListRequest>
        Model::GetMemberOfAddressListOutcomeCallable GetMemberOfAddressListCallable(const GetMemberOfAddressListRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetMemberOfAddressList, request);
        }

        /**
         * An Async wrapper for GetMemberOfAddressList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMemberOfAddressListRequestT = Model::GetMemberOfAddressListRequest>
        void GetMemberOfAddressListAsync(const GetMemberOfAddressListRequestT& request, const GetMemberOfAddressListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetMemberOfAddressList, request, handler, context);
        }

        /**
         * <p>Fetch the relay resource and it's attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetRelay">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelayOutcome GetRelay(const Model::GetRelayRequest& request) const;

        /**
         * A Callable wrapper for GetRelay that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelayRequestT = Model::GetRelayRequest>
        Model::GetRelayOutcomeCallable GetRelayCallable(const GetRelayRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetRelay, request);
        }

        /**
         * An Async wrapper for GetRelay that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelayRequestT = Model::GetRelayRequest>
        void GetRelayAsync(const GetRelayRequestT& request, const GetRelayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetRelay, request, handler, context);
        }

        /**
         * <p>Fetch attributes of a rule set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRuleSetOutcome GetRuleSet(const Model::GetRuleSetRequest& request) const;

        /**
         * A Callable wrapper for GetRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRuleSetRequestT = Model::GetRuleSetRequest>
        Model::GetRuleSetOutcomeCallable GetRuleSetCallable(const GetRuleSetRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetRuleSet, request);
        }

        /**
         * An Async wrapper for GetRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRuleSetRequestT = Model::GetRuleSetRequest>
        void GetRuleSetAsync(const GetRuleSetRequestT& request, const GetRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetRuleSet, request, handler, context);
        }

        /**
         * <p>Fetch attributes of a traffic policy resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetTrafficPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrafficPolicyOutcome GetTrafficPolicy(const Model::GetTrafficPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetTrafficPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTrafficPolicyRequestT = Model::GetTrafficPolicyRequest>
        Model::GetTrafficPolicyOutcomeCallable GetTrafficPolicyCallable(const GetTrafficPolicyRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::GetTrafficPolicy, request);
        }

        /**
         * An Async wrapper for GetTrafficPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTrafficPolicyRequestT = Model::GetTrafficPolicyRequest>
        void GetTrafficPolicyAsync(const GetTrafficPolicyRequestT& request, const GetTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::GetTrafficPolicy, request, handler, context);
        }

        /**
         * <p>Lists all Add On instances in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListAddonInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAddonInstancesOutcome ListAddonInstances(const Model::ListAddonInstancesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAddonInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAddonInstancesRequestT = Model::ListAddonInstancesRequest>
        Model::ListAddonInstancesOutcomeCallable ListAddonInstancesCallable(const ListAddonInstancesRequestT& request = {}) const
        {
            return SubmitCallable(&MailManagerClient::ListAddonInstances, request);
        }

        /**
         * An Async wrapper for ListAddonInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAddonInstancesRequestT = Model::ListAddonInstancesRequest>
        void ListAddonInstancesAsync(const ListAddonInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAddonInstancesRequestT& request = {}) const
        {
            return SubmitAsync(&MailManagerClient::ListAddonInstances, request, handler, context);
        }

        /**
         * <p>Lists all Add On subscriptions in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListAddonSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAddonSubscriptionsOutcome ListAddonSubscriptions(const Model::ListAddonSubscriptionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAddonSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAddonSubscriptionsRequestT = Model::ListAddonSubscriptionsRequest>
        Model::ListAddonSubscriptionsOutcomeCallable ListAddonSubscriptionsCallable(const ListAddonSubscriptionsRequestT& request = {}) const
        {
            return SubmitCallable(&MailManagerClient::ListAddonSubscriptions, request);
        }

        /**
         * An Async wrapper for ListAddonSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAddonSubscriptionsRequestT = Model::ListAddonSubscriptionsRequest>
        void ListAddonSubscriptionsAsync(const ListAddonSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAddonSubscriptionsRequestT& request = {}) const
        {
            return SubmitAsync(&MailManagerClient::ListAddonSubscriptions, request, handler, context);
        }

        /**
         * <p>Lists jobs for an address list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListAddressListImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAddressListImportJobsOutcome ListAddressListImportJobs(const Model::ListAddressListImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListAddressListImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAddressListImportJobsRequestT = Model::ListAddressListImportJobsRequest>
        Model::ListAddressListImportJobsOutcomeCallable ListAddressListImportJobsCallable(const ListAddressListImportJobsRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::ListAddressListImportJobs, request);
        }

        /**
         * An Async wrapper for ListAddressListImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAddressListImportJobsRequestT = Model::ListAddressListImportJobsRequest>
        void ListAddressListImportJobsAsync(const ListAddressListImportJobsRequestT& request, const ListAddressListImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::ListAddressListImportJobs, request, handler, context);
        }

        /**
         * <p>Lists address lists for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListAddressLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAddressListsOutcome ListAddressLists(const Model::ListAddressListsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAddressLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAddressListsRequestT = Model::ListAddressListsRequest>
        Model::ListAddressListsOutcomeCallable ListAddressListsCallable(const ListAddressListsRequestT& request = {}) const
        {
            return SubmitCallable(&MailManagerClient::ListAddressLists, request);
        }

        /**
         * An Async wrapper for ListAddressLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAddressListsRequestT = Model::ListAddressListsRequest>
        void ListAddressListsAsync(const ListAddressListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAddressListsRequestT& request = {}) const
        {
            return SubmitAsync(&MailManagerClient::ListAddressLists, request, handler, context);
        }

        /**
         * <p>Returns a list of email archive export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListArchiveExports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArchiveExportsOutcome ListArchiveExports(const Model::ListArchiveExportsRequest& request) const;

        /**
         * A Callable wrapper for ListArchiveExports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListArchiveExportsRequestT = Model::ListArchiveExportsRequest>
        Model::ListArchiveExportsOutcomeCallable ListArchiveExportsCallable(const ListArchiveExportsRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::ListArchiveExports, request);
        }

        /**
         * An Async wrapper for ListArchiveExports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListArchiveExportsRequestT = Model::ListArchiveExportsRequest>
        void ListArchiveExportsAsync(const ListArchiveExportsRequestT& request, const ListArchiveExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::ListArchiveExports, request, handler, context);
        }

        /**
         * <p>Returns a list of email archive search jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListArchiveSearches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArchiveSearchesOutcome ListArchiveSearches(const Model::ListArchiveSearchesRequest& request) const;

        /**
         * A Callable wrapper for ListArchiveSearches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListArchiveSearchesRequestT = Model::ListArchiveSearchesRequest>
        Model::ListArchiveSearchesOutcomeCallable ListArchiveSearchesCallable(const ListArchiveSearchesRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::ListArchiveSearches, request);
        }

        /**
         * An Async wrapper for ListArchiveSearches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListArchiveSearchesRequestT = Model::ListArchiveSearchesRequest>
        void ListArchiveSearchesAsync(const ListArchiveSearchesRequestT& request, const ListArchiveSearchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::ListArchiveSearches, request, handler, context);
        }

        /**
         * <p>Returns a list of all email archives in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListArchives">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArchivesOutcome ListArchives(const Model::ListArchivesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListArchives that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListArchivesRequestT = Model::ListArchivesRequest>
        Model::ListArchivesOutcomeCallable ListArchivesCallable(const ListArchivesRequestT& request = {}) const
        {
            return SubmitCallable(&MailManagerClient::ListArchives, request);
        }

        /**
         * An Async wrapper for ListArchives that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListArchivesRequestT = Model::ListArchivesRequest>
        void ListArchivesAsync(const ListArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListArchivesRequestT& request = {}) const
        {
            return SubmitAsync(&MailManagerClient::ListArchives, request, handler, context);
        }

        /**
         * <p>List all ingress endpoint resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListIngressPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIngressPointsOutcome ListIngressPoints(const Model::ListIngressPointsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListIngressPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIngressPointsRequestT = Model::ListIngressPointsRequest>
        Model::ListIngressPointsOutcomeCallable ListIngressPointsCallable(const ListIngressPointsRequestT& request = {}) const
        {
            return SubmitCallable(&MailManagerClient::ListIngressPoints, request);
        }

        /**
         * An Async wrapper for ListIngressPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIngressPointsRequestT = Model::ListIngressPointsRequest>
        void ListIngressPointsAsync(const ListIngressPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListIngressPointsRequestT& request = {}) const
        {
            return SubmitAsync(&MailManagerClient::ListIngressPoints, request, handler, context);
        }

        /**
         * <p>Lists members of an address list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListMembersOfAddressList">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOfAddressListOutcome ListMembersOfAddressList(const Model::ListMembersOfAddressListRequest& request) const;

        /**
         * A Callable wrapper for ListMembersOfAddressList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMembersOfAddressListRequestT = Model::ListMembersOfAddressListRequest>
        Model::ListMembersOfAddressListOutcomeCallable ListMembersOfAddressListCallable(const ListMembersOfAddressListRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::ListMembersOfAddressList, request);
        }

        /**
         * An Async wrapper for ListMembersOfAddressList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMembersOfAddressListRequestT = Model::ListMembersOfAddressListRequest>
        void ListMembersOfAddressListAsync(const ListMembersOfAddressListRequestT& request, const ListMembersOfAddressListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::ListMembersOfAddressList, request, handler, context);
        }

        /**
         * <p>Lists all the existing relay resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListRelays">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRelaysOutcome ListRelays(const Model::ListRelaysRequest& request = {}) const;

        /**
         * A Callable wrapper for ListRelays that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRelaysRequestT = Model::ListRelaysRequest>
        Model::ListRelaysOutcomeCallable ListRelaysCallable(const ListRelaysRequestT& request = {}) const
        {
            return SubmitCallable(&MailManagerClient::ListRelays, request);
        }

        /**
         * An Async wrapper for ListRelays that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRelaysRequestT = Model::ListRelaysRequest>
        void ListRelaysAsync(const ListRelaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListRelaysRequestT& request = {}) const
        {
            return SubmitAsync(&MailManagerClient::ListRelays, request, handler, context);
        }

        /**
         * <p>List rule sets for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListRuleSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleSetsOutcome ListRuleSets(const Model::ListRuleSetsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListRuleSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRuleSetsRequestT = Model::ListRuleSetsRequest>
        Model::ListRuleSetsOutcomeCallable ListRuleSetsCallable(const ListRuleSetsRequestT& request = {}) const
        {
            return SubmitCallable(&MailManagerClient::ListRuleSets, request);
        }

        /**
         * An Async wrapper for ListRuleSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRuleSetsRequestT = Model::ListRuleSetsRequest>
        void ListRuleSetsAsync(const ListRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListRuleSetsRequestT& request = {}) const
        {
            return SubmitAsync(&MailManagerClient::ListRuleSets, request, handler, context);
        }

        /**
         * <p> Retrieves the list of tags (keys and values) assigned to the resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>List traffic policy resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListTrafficPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrafficPoliciesOutcome ListTrafficPolicies(const Model::ListTrafficPoliciesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListTrafficPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrafficPoliciesRequestT = Model::ListTrafficPoliciesRequest>
        Model::ListTrafficPoliciesOutcomeCallable ListTrafficPoliciesCallable(const ListTrafficPoliciesRequestT& request = {}) const
        {
            return SubmitCallable(&MailManagerClient::ListTrafficPolicies, request);
        }

        /**
         * An Async wrapper for ListTrafficPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrafficPoliciesRequestT = Model::ListTrafficPoliciesRequest>
        void ListTrafficPoliciesAsync(const ListTrafficPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTrafficPoliciesRequestT& request = {}) const
        {
            return SubmitAsync(&MailManagerClient::ListTrafficPolicies, request, handler, context);
        }

        /**
         * <p>Adds a member to an address list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RegisterMemberToAddressList">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterMemberToAddressListOutcome RegisterMemberToAddressList(const Model::RegisterMemberToAddressListRequest& request) const;

        /**
         * A Callable wrapper for RegisterMemberToAddressList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterMemberToAddressListRequestT = Model::RegisterMemberToAddressListRequest>
        Model::RegisterMemberToAddressListOutcomeCallable RegisterMemberToAddressListCallable(const RegisterMemberToAddressListRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::RegisterMemberToAddressList, request);
        }

        /**
         * An Async wrapper for RegisterMemberToAddressList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterMemberToAddressListRequestT = Model::RegisterMemberToAddressListRequest>
        void RegisterMemberToAddressListAsync(const RegisterMemberToAddressListRequestT& request, const RegisterMemberToAddressListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::RegisterMemberToAddressList, request, handler, context);
        }

        /**
         * <p>Starts an import job for an address list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/StartAddressListImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAddressListImportJobOutcome StartAddressListImportJob(const Model::StartAddressListImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartAddressListImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAddressListImportJobRequestT = Model::StartAddressListImportJobRequest>
        Model::StartAddressListImportJobOutcomeCallable StartAddressListImportJobCallable(const StartAddressListImportJobRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::StartAddressListImportJob, request);
        }

        /**
         * An Async wrapper for StartAddressListImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAddressListImportJobRequestT = Model::StartAddressListImportJobRequest>
        void StartAddressListImportJobAsync(const StartAddressListImportJobRequestT& request, const StartAddressListImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::StartAddressListImportJob, request, handler, context);
        }

        /**
         * <p>Initiates an export of emails from the specified archive.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/StartArchiveExport">AWS
         * API Reference</a></p>
         */
        virtual Model::StartArchiveExportOutcome StartArchiveExport(const Model::StartArchiveExportRequest& request) const;

        /**
         * A Callable wrapper for StartArchiveExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartArchiveExportRequestT = Model::StartArchiveExportRequest>
        Model::StartArchiveExportOutcomeCallable StartArchiveExportCallable(const StartArchiveExportRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::StartArchiveExport, request);
        }

        /**
         * An Async wrapper for StartArchiveExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartArchiveExportRequestT = Model::StartArchiveExportRequest>
        void StartArchiveExportAsync(const StartArchiveExportRequestT& request, const StartArchiveExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::StartArchiveExport, request, handler, context);
        }

        /**
         * <p>Initiates a search across emails in the specified archive.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/StartArchiveSearch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartArchiveSearchOutcome StartArchiveSearch(const Model::StartArchiveSearchRequest& request) const;

        /**
         * A Callable wrapper for StartArchiveSearch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartArchiveSearchRequestT = Model::StartArchiveSearchRequest>
        Model::StartArchiveSearchOutcomeCallable StartArchiveSearchCallable(const StartArchiveSearchRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::StartArchiveSearch, request);
        }

        /**
         * An Async wrapper for StartArchiveSearch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartArchiveSearchRequestT = Model::StartArchiveSearchRequest>
        void StartArchiveSearchAsync(const StartArchiveSearchRequestT& request, const StartArchiveSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::StartArchiveSearch, request, handler, context);
        }

        /**
         * <p>Stops an ongoing import job for an address list.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/StopAddressListImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAddressListImportJobOutcome StopAddressListImportJob(const Model::StopAddressListImportJobRequest& request) const;

        /**
         * A Callable wrapper for StopAddressListImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopAddressListImportJobRequestT = Model::StopAddressListImportJobRequest>
        Model::StopAddressListImportJobOutcomeCallable StopAddressListImportJobCallable(const StopAddressListImportJobRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::StopAddressListImportJob, request);
        }

        /**
         * An Async wrapper for StopAddressListImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopAddressListImportJobRequestT = Model::StopAddressListImportJobRequest>
        void StopAddressListImportJobAsync(const StopAddressListImportJobRequestT& request, const StopAddressListImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::StopAddressListImportJob, request, handler, context);
        }

        /**
         * <p>Stops an in-progress export of emails from an archive.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/StopArchiveExport">AWS
         * API Reference</a></p>
         */
        virtual Model::StopArchiveExportOutcome StopArchiveExport(const Model::StopArchiveExportRequest& request) const;

        /**
         * A Callable wrapper for StopArchiveExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopArchiveExportRequestT = Model::StopArchiveExportRequest>
        Model::StopArchiveExportOutcomeCallable StopArchiveExportCallable(const StopArchiveExportRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::StopArchiveExport, request);
        }

        /**
         * An Async wrapper for StopArchiveExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopArchiveExportRequestT = Model::StopArchiveExportRequest>
        void StopArchiveExportAsync(const StopArchiveExportRequestT& request, const StopArchiveExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::StopArchiveExport, request, handler, context);
        }

        /**
         * <p>Stops an in-progress archive search job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/StopArchiveSearch">AWS
         * API Reference</a></p>
         */
        virtual Model::StopArchiveSearchOutcome StopArchiveSearch(const Model::StopArchiveSearchRequest& request) const;

        /**
         * A Callable wrapper for StopArchiveSearch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopArchiveSearchRequestT = Model::StopArchiveSearchRequest>
        Model::StopArchiveSearchOutcomeCallable StopArchiveSearchCallable(const StopArchiveSearchRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::StopArchiveSearch, request);
        }

        /**
         * An Async wrapper for StopArchiveSearch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopArchiveSearchRequestT = Model::StopArchiveSearchRequest>
        void StopArchiveSearchAsync(const StopArchiveSearchRequestT& request, const StopArchiveSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::StopArchiveSearch, request, handler, context);
        }

        /**
         * <p> Adds one or more tags (keys and values) to a specified resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::TagResource, request, handler, context);
        }

        /**
         * <p> Remove one or more tags (keys and values) from a specified resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the attributes of an existing email archive.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/UpdateArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateArchiveOutcome UpdateArchive(const Model::UpdateArchiveRequest& request) const;

        /**
         * A Callable wrapper for UpdateArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateArchiveRequestT = Model::UpdateArchiveRequest>
        Model::UpdateArchiveOutcomeCallable UpdateArchiveCallable(const UpdateArchiveRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::UpdateArchive, request);
        }

        /**
         * An Async wrapper for UpdateArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateArchiveRequestT = Model::UpdateArchiveRequest>
        void UpdateArchiveAsync(const UpdateArchiveRequestT& request, const UpdateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::UpdateArchive, request, handler, context);
        }

        /**
         * <p>Update attributes of a provisioned ingress endpoint resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/UpdateIngressPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIngressPointOutcome UpdateIngressPoint(const Model::UpdateIngressPointRequest& request) const;

        /**
         * A Callable wrapper for UpdateIngressPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIngressPointRequestT = Model::UpdateIngressPointRequest>
        Model::UpdateIngressPointOutcomeCallable UpdateIngressPointCallable(const UpdateIngressPointRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::UpdateIngressPoint, request);
        }

        /**
         * An Async wrapper for UpdateIngressPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIngressPointRequestT = Model::UpdateIngressPointRequest>
        void UpdateIngressPointAsync(const UpdateIngressPointRequestT& request, const UpdateIngressPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::UpdateIngressPoint, request, handler, context);
        }

        /**
         * <p>Updates the attributes of an existing relay resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/UpdateRelay">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRelayOutcome UpdateRelay(const Model::UpdateRelayRequest& request) const;

        /**
         * A Callable wrapper for UpdateRelay that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRelayRequestT = Model::UpdateRelayRequest>
        Model::UpdateRelayOutcomeCallable UpdateRelayCallable(const UpdateRelayRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::UpdateRelay, request);
        }

        /**
         * An Async wrapper for UpdateRelay that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRelayRequestT = Model::UpdateRelayRequest>
        void UpdateRelayAsync(const UpdateRelayRequestT& request, const UpdateRelayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::UpdateRelay, request, handler, context);
        }

        /**
         * <p>Update attributes of an already provisioned rule set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/UpdateRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleSetOutcome UpdateRuleSet(const Model::UpdateRuleSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRuleSetRequestT = Model::UpdateRuleSetRequest>
        Model::UpdateRuleSetOutcomeCallable UpdateRuleSetCallable(const UpdateRuleSetRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::UpdateRuleSet, request);
        }

        /**
         * An Async wrapper for UpdateRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRuleSetRequestT = Model::UpdateRuleSetRequest>
        void UpdateRuleSetAsync(const UpdateRuleSetRequestT& request, const UpdateRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::UpdateRuleSet, request, handler, context);
        }

        /**
         * <p>Update attributes of an already provisioned traffic policy
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/UpdateTrafficPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrafficPolicyOutcome UpdateTrafficPolicy(const Model::UpdateTrafficPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrafficPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTrafficPolicyRequestT = Model::UpdateTrafficPolicyRequest>
        Model::UpdateTrafficPolicyOutcomeCallable UpdateTrafficPolicyCallable(const UpdateTrafficPolicyRequestT& request) const
        {
            return SubmitCallable(&MailManagerClient::UpdateTrafficPolicy, request);
        }

        /**
         * An Async wrapper for UpdateTrafficPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTrafficPolicyRequestT = Model::UpdateTrafficPolicyRequest>
        void UpdateTrafficPolicyAsync(const UpdateTrafficPolicyRequestT& request, const UpdateTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MailManagerClient::UpdateTrafficPolicy, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MailManagerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MailManagerClient>;
      void init(const MailManagerClientConfiguration& clientConfiguration);

      MailManagerClientConfiguration m_clientConfiguration;
      std::shared_ptr<MailManagerEndpointProviderBase> m_endpointProvider;
  };

} // namespace MailManager
} // namespace Aws
