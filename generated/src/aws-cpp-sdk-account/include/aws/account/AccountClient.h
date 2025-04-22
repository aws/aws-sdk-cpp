/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/account/AccountServiceClientModel.h>

namespace Aws
{
namespace Account
{
  /**
   * <p>Operations for Amazon Web Services Account Management</p>
   */
  class AWS_ACCOUNT_API AccountClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AccountClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AccountClientConfiguration ClientConfigurationType;
      typedef AccountEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccountClient(const Aws::Account::AccountClientConfiguration& clientConfiguration = Aws::Account::AccountClientConfiguration(),
                      std::shared_ptr<AccountEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccountClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AccountEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Account::AccountClientConfiguration& clientConfiguration = Aws::Account::AccountClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AccountClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AccountEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Account::AccountClientConfiguration& clientConfiguration = Aws::Account::AccountClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccountClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccountClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AccountClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AccountClient();

        /**
         * <p>Accepts the request that originated from <a>StartPrimaryEmailUpdate</a> to
         * update the primary email address (also known as the root user email address) for
         * the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/AcceptPrimaryEmailUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptPrimaryEmailUpdateOutcome AcceptPrimaryEmailUpdate(const Model::AcceptPrimaryEmailUpdateRequest& request) const;

        /**
         * A Callable wrapper for AcceptPrimaryEmailUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptPrimaryEmailUpdateRequestT = Model::AcceptPrimaryEmailUpdateRequest>
        Model::AcceptPrimaryEmailUpdateOutcomeCallable AcceptPrimaryEmailUpdateCallable(const AcceptPrimaryEmailUpdateRequestT& request) const
        {
            return SubmitCallable(&AccountClient::AcceptPrimaryEmailUpdate, request);
        }

        /**
         * An Async wrapper for AcceptPrimaryEmailUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptPrimaryEmailUpdateRequestT = Model::AcceptPrimaryEmailUpdateRequest>
        void AcceptPrimaryEmailUpdateAsync(const AcceptPrimaryEmailUpdateRequestT& request, const AcceptPrimaryEmailUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccountClient::AcceptPrimaryEmailUpdate, request, handler, context);
        }

        /**
         * <p>Deletes the specified alternate contact from an Amazon Web Services
         * account.</p> <p>For complete details about how to use the alternate contact
         * operations, see <a
         * href="https://docs.aws.amazon.com/accounts/latest/reference/manage-acct-update-contact.html">Access
         * or updating the alternate contacts</a>.</p>  <p>Before you can update the
         * alternate contact information for an Amazon Web Services account that is managed
         * by Organizations, you must first enable integration between Amazon Web Services
         * Account Management and Organizations. For more information, see <a
         * href="https://docs.aws.amazon.com/accounts/latest/reference/using-orgs-trusted-access.html">Enabling
         * trusted access for Amazon Web Services Account Management</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/DeleteAlternateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlternateContactOutcome DeleteAlternateContact(const Model::DeleteAlternateContactRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlternateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAlternateContactRequestT = Model::DeleteAlternateContactRequest>
        Model::DeleteAlternateContactOutcomeCallable DeleteAlternateContactCallable(const DeleteAlternateContactRequestT& request) const
        {
            return SubmitCallable(&AccountClient::DeleteAlternateContact, request);
        }

        /**
         * An Async wrapper for DeleteAlternateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAlternateContactRequestT = Model::DeleteAlternateContactRequest>
        void DeleteAlternateContactAsync(const DeleteAlternateContactRequestT& request, const DeleteAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccountClient::DeleteAlternateContact, request, handler, context);
        }

        /**
         * <p>Disables (opts-out) a particular Region for an account.</p>  <p>The act
         * of disabling a Region will remove all IAM access to any resources that reside in
         * that Region.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/DisableRegion">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableRegionOutcome DisableRegion(const Model::DisableRegionRequest& request) const;

        /**
         * A Callable wrapper for DisableRegion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableRegionRequestT = Model::DisableRegionRequest>
        Model::DisableRegionOutcomeCallable DisableRegionCallable(const DisableRegionRequestT& request) const
        {
            return SubmitCallable(&AccountClient::DisableRegion, request);
        }

        /**
         * An Async wrapper for DisableRegion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableRegionRequestT = Model::DisableRegionRequest>
        void DisableRegionAsync(const DisableRegionRequestT& request, const DisableRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccountClient::DisableRegion, request, handler, context);
        }

        /**
         * <p>Enables (opts-in) a particular Region for an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/EnableRegion">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableRegionOutcome EnableRegion(const Model::EnableRegionRequest& request) const;

        /**
         * A Callable wrapper for EnableRegion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableRegionRequestT = Model::EnableRegionRequest>
        Model::EnableRegionOutcomeCallable EnableRegionCallable(const EnableRegionRequestT& request) const
        {
            return SubmitCallable(&AccountClient::EnableRegion, request);
        }

        /**
         * An Async wrapper for EnableRegion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableRegionRequestT = Model::EnableRegionRequest>
        void EnableRegionAsync(const EnableRegionRequestT& request, const EnableRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccountClient::EnableRegion, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified account including its account name,
         * account ID, and account creation date and time. To use this API, an IAM user or
         * role must have the <code>account:GetAccountInformation</code> IAM permission.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/GetAccountInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountInformationOutcome GetAccountInformation(const Model::GetAccountInformationRequest& request = {}) const;

        /**
         * A Callable wrapper for GetAccountInformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountInformationRequestT = Model::GetAccountInformationRequest>
        Model::GetAccountInformationOutcomeCallable GetAccountInformationCallable(const GetAccountInformationRequestT& request = {}) const
        {
            return SubmitCallable(&AccountClient::GetAccountInformation, request);
        }

        /**
         * An Async wrapper for GetAccountInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountInformationRequestT = Model::GetAccountInformationRequest>
        void GetAccountInformationAsync(const GetAccountInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetAccountInformationRequestT& request = {}) const
        {
            return SubmitAsync(&AccountClient::GetAccountInformation, request, handler, context);
        }

        /**
         * <p>Retrieves the specified alternate contact attached to an Amazon Web Services
         * account.</p> <p>For complete details about how to use the alternate contact
         * operations, see <a
         * href="https://docs.aws.amazon.com/accounts/latest/reference/manage-acct-update-contact.html">Access
         * or updating the alternate contacts</a>.</p>  <p>Before you can update the
         * alternate contact information for an Amazon Web Services account that is managed
         * by Organizations, you must first enable integration between Amazon Web Services
         * Account Management and Organizations. For more information, see <a
         * href="https://docs.aws.amazon.com/accounts/latest/reference/using-orgs-trusted-access.html">Enabling
         * trusted access for Amazon Web Services Account Management</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/GetAlternateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAlternateContactOutcome GetAlternateContact(const Model::GetAlternateContactRequest& request) const;

        /**
         * A Callable wrapper for GetAlternateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAlternateContactRequestT = Model::GetAlternateContactRequest>
        Model::GetAlternateContactOutcomeCallable GetAlternateContactCallable(const GetAlternateContactRequestT& request) const
        {
            return SubmitCallable(&AccountClient::GetAlternateContact, request);
        }

        /**
         * An Async wrapper for GetAlternateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAlternateContactRequestT = Model::GetAlternateContactRequest>
        void GetAlternateContactAsync(const GetAlternateContactRequestT& request, const GetAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccountClient::GetAlternateContact, request, handler, context);
        }

        /**
         * <p>Retrieves the primary contact information of an Amazon Web Services
         * account.</p> <p>For complete details about how to use the primary contact
         * operations, see <a
         * href="https://docs.aws.amazon.com/accounts/latest/reference/manage-acct-update-contact.html">Update
         * the primary and alternate contact information</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/GetContactInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactInformationOutcome GetContactInformation(const Model::GetContactInformationRequest& request = {}) const;

        /**
         * A Callable wrapper for GetContactInformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContactInformationRequestT = Model::GetContactInformationRequest>
        Model::GetContactInformationOutcomeCallable GetContactInformationCallable(const GetContactInformationRequestT& request = {}) const
        {
            return SubmitCallable(&AccountClient::GetContactInformation, request);
        }

        /**
         * An Async wrapper for GetContactInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContactInformationRequestT = Model::GetContactInformationRequest>
        void GetContactInformationAsync(const GetContactInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetContactInformationRequestT& request = {}) const
        {
            return SubmitAsync(&AccountClient::GetContactInformation, request, handler, context);
        }

        /**
         * <p>Retrieves the primary email address for the specified account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/GetPrimaryEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPrimaryEmailOutcome GetPrimaryEmail(const Model::GetPrimaryEmailRequest& request) const;

        /**
         * A Callable wrapper for GetPrimaryEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPrimaryEmailRequestT = Model::GetPrimaryEmailRequest>
        Model::GetPrimaryEmailOutcomeCallable GetPrimaryEmailCallable(const GetPrimaryEmailRequestT& request) const
        {
            return SubmitCallable(&AccountClient::GetPrimaryEmail, request);
        }

        /**
         * An Async wrapper for GetPrimaryEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPrimaryEmailRequestT = Model::GetPrimaryEmailRequest>
        void GetPrimaryEmailAsync(const GetPrimaryEmailRequestT& request, const GetPrimaryEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccountClient::GetPrimaryEmail, request, handler, context);
        }

        /**
         * <p>Retrieves the opt-in status of a particular Region.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/GetRegionOptStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegionOptStatusOutcome GetRegionOptStatus(const Model::GetRegionOptStatusRequest& request) const;

        /**
         * A Callable wrapper for GetRegionOptStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRegionOptStatusRequestT = Model::GetRegionOptStatusRequest>
        Model::GetRegionOptStatusOutcomeCallable GetRegionOptStatusCallable(const GetRegionOptStatusRequestT& request) const
        {
            return SubmitCallable(&AccountClient::GetRegionOptStatus, request);
        }

        /**
         * An Async wrapper for GetRegionOptStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRegionOptStatusRequestT = Model::GetRegionOptStatusRequest>
        void GetRegionOptStatusAsync(const GetRegionOptStatusRequestT& request, const GetRegionOptStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccountClient::GetRegionOptStatus, request, handler, context);
        }

        /**
         * <p>Lists all the Regions for a given account and their respective opt-in
         * statuses. Optionally, this list can be filtered by the
         * <code>region-opt-status-contains</code> parameter. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/ListRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegionsOutcome ListRegions(const Model::ListRegionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRegionsRequestT = Model::ListRegionsRequest>
        Model::ListRegionsOutcomeCallable ListRegionsCallable(const ListRegionsRequestT& request = {}) const
        {
            return SubmitCallable(&AccountClient::ListRegions, request);
        }

        /**
         * An Async wrapper for ListRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRegionsRequestT = Model::ListRegionsRequest>
        void ListRegionsAsync(const ListRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListRegionsRequestT& request = {}) const
        {
            return SubmitAsync(&AccountClient::ListRegions, request, handler, context);
        }

        /**
         * <p>Updates the account name of the specified account. To use this API, IAM
         * principals must have the <code>account:PutAccountName</code> IAM permission.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/PutAccountName">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountNameOutcome PutAccountName(const Model::PutAccountNameRequest& request) const;

        /**
         * A Callable wrapper for PutAccountName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccountNameRequestT = Model::PutAccountNameRequest>
        Model::PutAccountNameOutcomeCallable PutAccountNameCallable(const PutAccountNameRequestT& request) const
        {
            return SubmitCallable(&AccountClient::PutAccountName, request);
        }

        /**
         * An Async wrapper for PutAccountName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccountNameRequestT = Model::PutAccountNameRequest>
        void PutAccountNameAsync(const PutAccountNameRequestT& request, const PutAccountNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccountClient::PutAccountName, request, handler, context);
        }

        /**
         * <p>Modifies the specified alternate contact attached to an Amazon Web Services
         * account.</p> <p>For complete details about how to use the alternate contact
         * operations, see <a
         * href="https://docs.aws.amazon.com/accounts/latest/reference/manage-acct-update-contact.html">Access
         * or updating the alternate contacts</a>.</p>  <p>Before you can update the
         * alternate contact information for an Amazon Web Services account that is managed
         * by Organizations, you must first enable integration between Amazon Web Services
         * Account Management and Organizations. For more information, see <a
         * href="https://docs.aws.amazon.com/accounts/latest/reference/using-orgs-trusted-access.html">Enabling
         * trusted access for Amazon Web Services Account Management</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/PutAlternateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAlternateContactOutcome PutAlternateContact(const Model::PutAlternateContactRequest& request) const;

        /**
         * A Callable wrapper for PutAlternateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAlternateContactRequestT = Model::PutAlternateContactRequest>
        Model::PutAlternateContactOutcomeCallable PutAlternateContactCallable(const PutAlternateContactRequestT& request) const
        {
            return SubmitCallable(&AccountClient::PutAlternateContact, request);
        }

        /**
         * An Async wrapper for PutAlternateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAlternateContactRequestT = Model::PutAlternateContactRequest>
        void PutAlternateContactAsync(const PutAlternateContactRequestT& request, const PutAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccountClient::PutAlternateContact, request, handler, context);
        }

        /**
         * <p>Updates the primary contact information of an Amazon Web Services
         * account.</p> <p>For complete details about how to use the primary contact
         * operations, see <a
         * href="https://docs.aws.amazon.com/accounts/latest/reference/manage-acct-update-contact.html">Update
         * the primary and alternate contact information</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/PutContactInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::PutContactInformationOutcome PutContactInformation(const Model::PutContactInformationRequest& request) const;

        /**
         * A Callable wrapper for PutContactInformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutContactInformationRequestT = Model::PutContactInformationRequest>
        Model::PutContactInformationOutcomeCallable PutContactInformationCallable(const PutContactInformationRequestT& request) const
        {
            return SubmitCallable(&AccountClient::PutContactInformation, request);
        }

        /**
         * An Async wrapper for PutContactInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutContactInformationRequestT = Model::PutContactInformationRequest>
        void PutContactInformationAsync(const PutContactInformationRequestT& request, const PutContactInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccountClient::PutContactInformation, request, handler, context);
        }

        /**
         * <p>Starts the process to update the primary email address for the specified
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/StartPrimaryEmailUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPrimaryEmailUpdateOutcome StartPrimaryEmailUpdate(const Model::StartPrimaryEmailUpdateRequest& request) const;

        /**
         * A Callable wrapper for StartPrimaryEmailUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartPrimaryEmailUpdateRequestT = Model::StartPrimaryEmailUpdateRequest>
        Model::StartPrimaryEmailUpdateOutcomeCallable StartPrimaryEmailUpdateCallable(const StartPrimaryEmailUpdateRequestT& request) const
        {
            return SubmitCallable(&AccountClient::StartPrimaryEmailUpdate, request);
        }

        /**
         * An Async wrapper for StartPrimaryEmailUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartPrimaryEmailUpdateRequestT = Model::StartPrimaryEmailUpdateRequest>
        void StartPrimaryEmailUpdateAsync(const StartPrimaryEmailUpdateRequestT& request, const StartPrimaryEmailUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccountClient::StartPrimaryEmailUpdate, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AccountEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AccountClient>;
      void init(const AccountClientConfiguration& clientConfiguration);

      AccountClientConfiguration m_clientConfiguration;
      std::shared_ptr<AccountEndpointProviderBase> m_endpointProvider;
  };

} // namespace Account
} // namespace Aws
