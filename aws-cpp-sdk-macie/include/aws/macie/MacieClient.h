/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/macie/MacieErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/macie/model/AssociateS3ResourcesResult.h>
#include <aws/macie/model/DisassociateS3ResourcesResult.h>
#include <aws/macie/model/ListMemberAccountsResult.h>
#include <aws/macie/model/ListS3ResourcesResult.h>
#include <aws/macie/model/UpdateS3ResourcesResult.h>
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

namespace Macie
{

namespace Model
{
        class AssociateMemberAccountRequest;
        class AssociateS3ResourcesRequest;
        class DisassociateMemberAccountRequest;
        class DisassociateS3ResourcesRequest;
        class ListMemberAccountsRequest;
        class ListS3ResourcesRequest;
        class UpdateS3ResourcesRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, MacieError> AssociateMemberAccountOutcome;
        typedef Aws::Utils::Outcome<AssociateS3ResourcesResult, MacieError> AssociateS3ResourcesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, MacieError> DisassociateMemberAccountOutcome;
        typedef Aws::Utils::Outcome<DisassociateS3ResourcesResult, MacieError> DisassociateS3ResourcesOutcome;
        typedef Aws::Utils::Outcome<ListMemberAccountsResult, MacieError> ListMemberAccountsOutcome;
        typedef Aws::Utils::Outcome<ListS3ResourcesResult, MacieError> ListS3ResourcesOutcome;
        typedef Aws::Utils::Outcome<UpdateS3ResourcesResult, MacieError> UpdateS3ResourcesOutcome;

        typedef std::future<AssociateMemberAccountOutcome> AssociateMemberAccountOutcomeCallable;
        typedef std::future<AssociateS3ResourcesOutcome> AssociateS3ResourcesOutcomeCallable;
        typedef std::future<DisassociateMemberAccountOutcome> DisassociateMemberAccountOutcomeCallable;
        typedef std::future<DisassociateS3ResourcesOutcome> DisassociateS3ResourcesOutcomeCallable;
        typedef std::future<ListMemberAccountsOutcome> ListMemberAccountsOutcomeCallable;
        typedef std::future<ListS3ResourcesOutcome> ListS3ResourcesOutcomeCallable;
        typedef std::future<UpdateS3ResourcesOutcome> UpdateS3ResourcesOutcomeCallable;
} // namespace Model

  class MacieClient;

    typedef std::function<void(const MacieClient*, const Model::AssociateMemberAccountRequest&, const Model::AssociateMemberAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMemberAccountResponseReceivedHandler;
    typedef std::function<void(const MacieClient*, const Model::AssociateS3ResourcesRequest&, const Model::AssociateS3ResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateS3ResourcesResponseReceivedHandler;
    typedef std::function<void(const MacieClient*, const Model::DisassociateMemberAccountRequest&, const Model::DisassociateMemberAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMemberAccountResponseReceivedHandler;
    typedef std::function<void(const MacieClient*, const Model::DisassociateS3ResourcesRequest&, const Model::DisassociateS3ResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateS3ResourcesResponseReceivedHandler;
    typedef std::function<void(const MacieClient*, const Model::ListMemberAccountsRequest&, const Model::ListMemberAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMemberAccountsResponseReceivedHandler;
    typedef std::function<void(const MacieClient*, const Model::ListS3ResourcesRequest&, const Model::ListS3ResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListS3ResourcesResponseReceivedHandler;
    typedef std::function<void(const MacieClient*, const Model::UpdateS3ResourcesRequest&, const Model::UpdateS3ResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateS3ResourcesResponseReceivedHandler;

  /**
   * <fullname>Amazon Macie Classic</fullname> <p>Amazon Macie Classic is a security
   * service that uses machine learning to automatically discover, classify, and
   * protect sensitive data in AWS. Macie Classic recognizes sensitive data such as
   * personally identifiable information (PII) or intellectual property, and provides
   * you with dashboards and alerts that give visibility into how this data is being
   * accessed or moved. For more information, see the <a
   * href="https://docs.aws.amazon.com/macie/latest/userguide/what-is-macie.html">Amazon
   * Macie Classic User Guide</a>. </p> <p>A new Amazon Macie is now available with
   * significant design improvements and additional features, at a lower price and in
   * most AWS Regions. We encourage you to explore and use the new and improved
   * features, and benefit from the reduced cost. To learn about features and pricing
   * for the new Amazon Macie, see <a href="https://aws.amazon.com/macie/">Amazon
   * Macie</a>.</p>
   */
  class AWS_MACIE_API MacieClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MacieClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MacieClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MacieClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MacieClient();


        /**
         * <p>Associates a specified AWS account with Amazon Macie Classic as a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/AssociateMemberAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberAccountOutcome AssociateMemberAccount(const Model::AssociateMemberAccountRequest& request) const;

        /**
         * <p>Associates a specified AWS account with Amazon Macie Classic as a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/AssociateMemberAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateMemberAccountOutcomeCallable AssociateMemberAccountCallable(const Model::AssociateMemberAccountRequest& request) const;

        /**
         * <p>Associates a specified AWS account with Amazon Macie Classic as a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/AssociateMemberAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateMemberAccountAsync(const Model::AssociateMemberAccountRequest& request, const AssociateMemberAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates specified S3 resources with Amazon Macie Classic for monitoring
         * and data classification. If memberAccountId isn't specified, the action
         * associates specified S3 resources with Macie Classic for the current master
         * account. If memberAccountId is specified, the action associates specified S3
         * resources with Macie Classic for the specified member account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/AssociateS3Resources">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateS3ResourcesOutcome AssociateS3Resources(const Model::AssociateS3ResourcesRequest& request) const;

        /**
         * <p>Associates specified S3 resources with Amazon Macie Classic for monitoring
         * and data classification. If memberAccountId isn't specified, the action
         * associates specified S3 resources with Macie Classic for the current master
         * account. If memberAccountId is specified, the action associates specified S3
         * resources with Macie Classic for the specified member account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/AssociateS3Resources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateS3ResourcesOutcomeCallable AssociateS3ResourcesCallable(const Model::AssociateS3ResourcesRequest& request) const;

        /**
         * <p>Associates specified S3 resources with Amazon Macie Classic for monitoring
         * and data classification. If memberAccountId isn't specified, the action
         * associates specified S3 resources with Macie Classic for the current master
         * account. If memberAccountId is specified, the action associates specified S3
         * resources with Macie Classic for the specified member account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/AssociateS3Resources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateS3ResourcesAsync(const Model::AssociateS3ResourcesRequest& request, const AssociateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified member account from Amazon Macie Classic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/DisassociateMemberAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberAccountOutcome DisassociateMemberAccount(const Model::DisassociateMemberAccountRequest& request) const;

        /**
         * <p>Removes the specified member account from Amazon Macie Classic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/DisassociateMemberAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMemberAccountOutcomeCallable DisassociateMemberAccountCallable(const Model::DisassociateMemberAccountRequest& request) const;

        /**
         * <p>Removes the specified member account from Amazon Macie Classic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/DisassociateMemberAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMemberAccountAsync(const Model::DisassociateMemberAccountRequest& request, const DisassociateMemberAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes specified S3 resources from being monitored by Amazon Macie Classic.
         * If memberAccountId isn't specified, the action removes specified S3 resources
         * from Macie Classic for the current master account. If memberAccountId is
         * specified, the action removes specified S3 resources from Macie Classic for the
         * specified member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/DisassociateS3Resources">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateS3ResourcesOutcome DisassociateS3Resources(const Model::DisassociateS3ResourcesRequest& request) const;

        /**
         * <p>Removes specified S3 resources from being monitored by Amazon Macie Classic.
         * If memberAccountId isn't specified, the action removes specified S3 resources
         * from Macie Classic for the current master account. If memberAccountId is
         * specified, the action removes specified S3 resources from Macie Classic for the
         * specified member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/DisassociateS3Resources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateS3ResourcesOutcomeCallable DisassociateS3ResourcesCallable(const Model::DisassociateS3ResourcesRequest& request) const;

        /**
         * <p>Removes specified S3 resources from being monitored by Amazon Macie Classic.
         * If memberAccountId isn't specified, the action removes specified S3 resources
         * from Macie Classic for the current master account. If memberAccountId is
         * specified, the action removes specified S3 resources from Macie Classic for the
         * specified member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/DisassociateS3Resources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateS3ResourcesAsync(const Model::DisassociateS3ResourcesRequest& request, const DisassociateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Amazon Macie Classic member accounts for the current Amazon Macie
         * Classic master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/ListMemberAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMemberAccountsOutcome ListMemberAccounts(const Model::ListMemberAccountsRequest& request) const;

        /**
         * <p>Lists all Amazon Macie Classic member accounts for the current Amazon Macie
         * Classic master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/ListMemberAccounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMemberAccountsOutcomeCallable ListMemberAccountsCallable(const Model::ListMemberAccountsRequest& request) const;

        /**
         * <p>Lists all Amazon Macie Classic member accounts for the current Amazon Macie
         * Classic master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/ListMemberAccounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMemberAccountsAsync(const Model::ListMemberAccountsRequest& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the S3 resources associated with Amazon Macie Classic. If
         * memberAccountId isn't specified, the action lists the S3 resources associated
         * with Amazon Macie Classic for the current master account. If memberAccountId is
         * specified, the action lists the S3 resources associated with Amazon Macie
         * Classic for the specified member account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/ListS3Resources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListS3ResourcesOutcome ListS3Resources(const Model::ListS3ResourcesRequest& request) const;

        /**
         * <p>Lists all the S3 resources associated with Amazon Macie Classic. If
         * memberAccountId isn't specified, the action lists the S3 resources associated
         * with Amazon Macie Classic for the current master account. If memberAccountId is
         * specified, the action lists the S3 resources associated with Amazon Macie
         * Classic for the specified member account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/ListS3Resources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListS3ResourcesOutcomeCallable ListS3ResourcesCallable(const Model::ListS3ResourcesRequest& request) const;

        /**
         * <p>Lists all the S3 resources associated with Amazon Macie Classic. If
         * memberAccountId isn't specified, the action lists the S3 resources associated
         * with Amazon Macie Classic for the current master account. If memberAccountId is
         * specified, the action lists the S3 resources associated with Amazon Macie
         * Classic for the specified member account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/ListS3Resources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListS3ResourcesAsync(const Model::ListS3ResourcesRequest& request, const ListS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the classification types for the specified S3 resources. If
         * memberAccountId isn't specified, the action updates the classification types of
         * the S3 resources associated with Amazon Macie Classic for the current master
         * account. If memberAccountId is specified, the action updates the classification
         * types of the S3 resources associated with Amazon Macie Classic for the specified
         * member account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/UpdateS3Resources">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateS3ResourcesOutcome UpdateS3Resources(const Model::UpdateS3ResourcesRequest& request) const;

        /**
         * <p>Updates the classification types for the specified S3 resources. If
         * memberAccountId isn't specified, the action updates the classification types of
         * the S3 resources associated with Amazon Macie Classic for the current master
         * account. If memberAccountId is specified, the action updates the classification
         * types of the S3 resources associated with Amazon Macie Classic for the specified
         * member account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/UpdateS3Resources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateS3ResourcesOutcomeCallable UpdateS3ResourcesCallable(const Model::UpdateS3ResourcesRequest& request) const;

        /**
         * <p>Updates the classification types for the specified S3 resources. If
         * memberAccountId isn't specified, the action updates the classification types of
         * the S3 resources associated with Amazon Macie Classic for the current master
         * account. If memberAccountId is specified, the action updates the classification
         * types of the S3 resources associated with Amazon Macie Classic for the specified
         * member account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/UpdateS3Resources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateS3ResourcesAsync(const Model::UpdateS3ResourcesRequest& request, const UpdateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateMemberAccountAsyncHelper(const Model::AssociateMemberAccountRequest& request, const AssociateMemberAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateS3ResourcesAsyncHelper(const Model::AssociateS3ResourcesRequest& request, const AssociateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateMemberAccountAsyncHelper(const Model::DisassociateMemberAccountRequest& request, const DisassociateMemberAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateS3ResourcesAsyncHelper(const Model::DisassociateS3ResourcesRequest& request, const DisassociateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMemberAccountsAsyncHelper(const Model::ListMemberAccountsRequest& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListS3ResourcesAsyncHelper(const Model::ListS3ResourcesRequest& request, const ListS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateS3ResourcesAsyncHelper(const Model::UpdateS3ResourcesRequest& request, const UpdateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Macie
} // namespace Aws
