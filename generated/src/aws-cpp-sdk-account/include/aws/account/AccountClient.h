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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccountClient(const Aws::Account::AccountClientConfiguration& clientConfiguration = Aws::Account::AccountClientConfiguration(),
                      std::shared_ptr<AccountEndpointProviderBase> endpointProvider = Aws::MakeShared<AccountEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccountClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AccountEndpointProviderBase> endpointProvider = Aws::MakeShared<AccountEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Account::AccountClientConfiguration& clientConfiguration = Aws::Account::AccountClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AccountClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AccountEndpointProviderBase> endpointProvider = Aws::MakeShared<AccountEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::GetContactInformationOutcome GetContactInformation(const Model::GetContactInformationRequest& request) const;

        /**
         * A Callable wrapper for GetContactInformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContactInformationRequestT = Model::GetContactInformationRequest>
        Model::GetContactInformationOutcomeCallable GetContactInformationCallable(const GetContactInformationRequestT& request) const
        {
            return SubmitCallable(&AccountClient::GetContactInformation, request);
        }

        /**
         * An Async wrapper for GetContactInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContactInformationRequestT = Model::GetContactInformationRequest>
        void GetContactInformationAsync(const GetContactInformationRequestT& request, const GetContactInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccountClient::GetContactInformation, request, handler, context);
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


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AccountEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AccountClient>;
      void init(const AccountClientConfiguration& clientConfiguration);

      AccountClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AccountEndpointProviderBase> m_endpointProvider;
  };

} // namespace Account
} // namespace Aws
