/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/AccountErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/account/model/GetAlternateContactResult.h>
#include <aws/account/model/GetContactInformationResult.h>
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

namespace Account
{

namespace Model
{
        class DeleteAlternateContactRequest;
        class GetAlternateContactRequest;
        class GetContactInformationRequest;
        class PutAlternateContactRequest;
        class PutContactInformationRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, AccountError> DeleteAlternateContactOutcome;
        typedef Aws::Utils::Outcome<GetAlternateContactResult, AccountError> GetAlternateContactOutcome;
        typedef Aws::Utils::Outcome<GetContactInformationResult, AccountError> GetContactInformationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AccountError> PutAlternateContactOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AccountError> PutContactInformationOutcome;

        typedef std::future<DeleteAlternateContactOutcome> DeleteAlternateContactOutcomeCallable;
        typedef std::future<GetAlternateContactOutcome> GetAlternateContactOutcomeCallable;
        typedef std::future<GetContactInformationOutcome> GetContactInformationOutcomeCallable;
        typedef std::future<PutAlternateContactOutcome> PutAlternateContactOutcomeCallable;
        typedef std::future<PutContactInformationOutcome> PutContactInformationOutcomeCallable;
} // namespace Model

  class AccountClient;

    typedef std::function<void(const AccountClient*, const Model::DeleteAlternateContactRequest&, const Model::DeleteAlternateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlternateContactResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::GetAlternateContactRequest&, const Model::GetAlternateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAlternateContactResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::GetContactInformationRequest&, const Model::GetContactInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactInformationResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::PutAlternateContactRequest&, const Model::PutAlternateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAlternateContactResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::PutContactInformationRequest&, const Model::PutContactInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutContactInformationResponseReceivedHandler;

  /**
   * <p>Operations for Amazon Web Services Account Management</p>
   */
  class AWS_ACCOUNT_API AccountClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccountClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccountClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AccountClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
        virtual Model::DeleteAlternateContactOutcomeCallable DeleteAlternateContactCallable(const Model::DeleteAlternateContactRequest& request) const;

        /**
         * An Async wrapper for DeleteAlternateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAlternateContactAsync(const Model::DeleteAlternateContactRequest& request, const DeleteAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAlternateContactOutcomeCallable GetAlternateContactCallable(const Model::GetAlternateContactRequest& request) const;

        /**
         * An Async wrapper for GetAlternateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAlternateContactAsync(const Model::GetAlternateContactRequest& request, const GetAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetContactInformationOutcomeCallable GetContactInformationCallable(const Model::GetContactInformationRequest& request) const;

        /**
         * An Async wrapper for GetContactInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactInformationAsync(const Model::GetContactInformationRequest& request, const GetContactInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutAlternateContactOutcomeCallable PutAlternateContactCallable(const Model::PutAlternateContactRequest& request) const;

        /**
         * An Async wrapper for PutAlternateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAlternateContactAsync(const Model::PutAlternateContactRequest& request, const PutAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutContactInformationOutcomeCallable PutContactInformationCallable(const Model::PutContactInformationRequest& request) const;

        /**
         * An Async wrapper for PutContactInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutContactInformationAsync(const Model::PutContactInformationRequest& request, const PutContactInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DeleteAlternateContactAsyncHelper(const Model::DeleteAlternateContactRequest& request, const DeleteAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAlternateContactAsyncHelper(const Model::GetAlternateContactRequest& request, const GetAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContactInformationAsyncHelper(const Model::GetContactInformationRequest& request, const GetContactInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAlternateContactAsyncHelper(const Model::PutAlternateContactRequest& request, const PutAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutContactInformationAsyncHelper(const Model::PutContactInformationRequest& request, const PutContactInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Account
} // namespace Aws
