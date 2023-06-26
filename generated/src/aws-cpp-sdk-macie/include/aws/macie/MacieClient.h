/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/macie/MacieServiceClientModel.h>

namespace Aws
{
namespace Macie
{
  /**
   * <fullname>Amazon Macie Classic</fullname> <p>Amazon Macie Classic has been
   * discontinued and is no longer available.</p> <p>A new Amazon Macie is now
   * available with significant design improvements and additional features, at a
   * lower price and in most Amazon Web Services Regions. We encourage you to take
   * advantage of the new and improved features, and benefit from the reduced cost.
   * To learn about features and pricing for the new Macie, see <a
   * href="http://aws.amazon.com/macie/">Amazon Macie</a>. To learn how to use the
   * new Macie, see the <a
   * href="https://docs.aws.amazon.com/macie/latest/user/what-is-macie.html">Amazon
   * Macie User Guide</a>.</p>
   */
  class AWS_MACIE_API MacieClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MacieClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef MacieClientConfiguration ClientConfigurationType;
      typedef MacieEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MacieClient(const Aws::Macie::MacieClientConfiguration& clientConfiguration = Aws::Macie::MacieClientConfiguration(),
                    std::shared_ptr<MacieEndpointProviderBase> endpointProvider = Aws::MakeShared<MacieEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MacieClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<MacieEndpointProviderBase> endpointProvider = Aws::MakeShared<MacieEndpointProvider>(ALLOCATION_TAG),
                    const Aws::Macie::MacieClientConfiguration& clientConfiguration = Aws::Macie::MacieClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MacieClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<MacieEndpointProviderBase> endpointProvider = Aws::MakeShared<MacieEndpointProvider>(ALLOCATION_TAG),
                    const Aws::Macie::MacieClientConfiguration& clientConfiguration = Aws::Macie::MacieClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MacieClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MacieClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MacieClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MacieClient();

        /**
         * <p>(Discontinued) Associates a specified Amazon Web Services account with Amazon
         * Macie Classic as a member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/AssociateMemberAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberAccountOutcome AssociateMemberAccount(const Model::AssociateMemberAccountRequest& request) const;

        /**
         * A Callable wrapper for AssociateMemberAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateMemberAccountRequestT = Model::AssociateMemberAccountRequest>
        Model::AssociateMemberAccountOutcomeCallable AssociateMemberAccountCallable(const AssociateMemberAccountRequestT& request) const
        {
            return SubmitCallable(&MacieClient::AssociateMemberAccount, request);
        }

        /**
         * An Async wrapper for AssociateMemberAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateMemberAccountRequestT = Model::AssociateMemberAccountRequest>
        void AssociateMemberAccountAsync(const AssociateMemberAccountRequestT& request, const AssociateMemberAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MacieClient::AssociateMemberAccount, request, handler, context);
        }

        /**
         * <p>(Discontinued) Associates specified S3 resources with Amazon Macie Classic
         * for monitoring and data classification. If <code>memberAccountId</code> isn't
         * specified, the action associates specified S3 resources with Macie Classic for
         * the current Macie Classic administrator account. If <code>memberAccountId</code>
         * is specified, the action associates specified S3 resources with Macie Classic
         * for the specified member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/AssociateS3Resources">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateS3ResourcesOutcome AssociateS3Resources(const Model::AssociateS3ResourcesRequest& request) const;

        /**
         * A Callable wrapper for AssociateS3Resources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateS3ResourcesRequestT = Model::AssociateS3ResourcesRequest>
        Model::AssociateS3ResourcesOutcomeCallable AssociateS3ResourcesCallable(const AssociateS3ResourcesRequestT& request) const
        {
            return SubmitCallable(&MacieClient::AssociateS3Resources, request);
        }

        /**
         * An Async wrapper for AssociateS3Resources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateS3ResourcesRequestT = Model::AssociateS3ResourcesRequest>
        void AssociateS3ResourcesAsync(const AssociateS3ResourcesRequestT& request, const AssociateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MacieClient::AssociateS3Resources, request, handler, context);
        }

        /**
         * <p>(Discontinued) Removes the specified member account from Amazon Macie
         * Classic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/DisassociateMemberAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberAccountOutcome DisassociateMemberAccount(const Model::DisassociateMemberAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMemberAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateMemberAccountRequestT = Model::DisassociateMemberAccountRequest>
        Model::DisassociateMemberAccountOutcomeCallable DisassociateMemberAccountCallable(const DisassociateMemberAccountRequestT& request) const
        {
            return SubmitCallable(&MacieClient::DisassociateMemberAccount, request);
        }

        /**
         * An Async wrapper for DisassociateMemberAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMemberAccountRequestT = Model::DisassociateMemberAccountRequest>
        void DisassociateMemberAccountAsync(const DisassociateMemberAccountRequestT& request, const DisassociateMemberAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MacieClient::DisassociateMemberAccount, request, handler, context);
        }

        /**
         * <p>(Discontinued) Removes specified S3 resources from being monitored by Amazon
         * Macie Classic. If <code>memberAccountId</code> isn't specified, the action
         * removes specified S3 resources from Macie Classic for the current Macie Classic
         * administrator account. If <code>memberAccountId</code> is specified, the action
         * removes specified S3 resources from Macie Classic for the specified member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/DisassociateS3Resources">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateS3ResourcesOutcome DisassociateS3Resources(const Model::DisassociateS3ResourcesRequest& request) const;

        /**
         * A Callable wrapper for DisassociateS3Resources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateS3ResourcesRequestT = Model::DisassociateS3ResourcesRequest>
        Model::DisassociateS3ResourcesOutcomeCallable DisassociateS3ResourcesCallable(const DisassociateS3ResourcesRequestT& request) const
        {
            return SubmitCallable(&MacieClient::DisassociateS3Resources, request);
        }

        /**
         * An Async wrapper for DisassociateS3Resources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateS3ResourcesRequestT = Model::DisassociateS3ResourcesRequest>
        void DisassociateS3ResourcesAsync(const DisassociateS3ResourcesRequestT& request, const DisassociateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MacieClient::DisassociateS3Resources, request, handler, context);
        }

        /**
         * <p>(Discontinued) Lists all Amazon Macie Classic member accounts for the current
         * Macie Classic administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/ListMemberAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMemberAccountsOutcome ListMemberAccounts(const Model::ListMemberAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListMemberAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMemberAccountsRequestT = Model::ListMemberAccountsRequest>
        Model::ListMemberAccountsOutcomeCallable ListMemberAccountsCallable(const ListMemberAccountsRequestT& request) const
        {
            return SubmitCallable(&MacieClient::ListMemberAccounts, request);
        }

        /**
         * An Async wrapper for ListMemberAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMemberAccountsRequestT = Model::ListMemberAccountsRequest>
        void ListMemberAccountsAsync(const ListMemberAccountsRequestT& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MacieClient::ListMemberAccounts, request, handler, context);
        }

        /**
         * <p>(Discontinued) Lists all the S3 resources associated with Amazon Macie
         * Classic. If <code>memberAccountId</code> isn't specified, the action lists the
         * S3 resources associated with Macie Classic for the current Macie Classic
         * administrator account. If <code>memberAccountId</code> is specified, the action
         * lists the S3 resources associated with Macie Classic for the specified member
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/ListS3Resources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListS3ResourcesOutcome ListS3Resources(const Model::ListS3ResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListS3Resources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListS3ResourcesRequestT = Model::ListS3ResourcesRequest>
        Model::ListS3ResourcesOutcomeCallable ListS3ResourcesCallable(const ListS3ResourcesRequestT& request) const
        {
            return SubmitCallable(&MacieClient::ListS3Resources, request);
        }

        /**
         * An Async wrapper for ListS3Resources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListS3ResourcesRequestT = Model::ListS3ResourcesRequest>
        void ListS3ResourcesAsync(const ListS3ResourcesRequestT& request, const ListS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MacieClient::ListS3Resources, request, handler, context);
        }

        /**
         * <p>(Discontinued) Updates the classification types for the specified S3
         * resources. If <code>memberAccountId</code> isn't specified, the action updates
         * the classification types of the S3 resources associated with Amazon Macie
         * Classic for the current Macie Classic administrator account. If
         * <code>memberAccountId</code> is specified, the action updates the classification
         * types of the S3 resources associated with Macie Classic for the specified member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/UpdateS3Resources">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateS3ResourcesOutcome UpdateS3Resources(const Model::UpdateS3ResourcesRequest& request) const;

        /**
         * A Callable wrapper for UpdateS3Resources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateS3ResourcesRequestT = Model::UpdateS3ResourcesRequest>
        Model::UpdateS3ResourcesOutcomeCallable UpdateS3ResourcesCallable(const UpdateS3ResourcesRequestT& request) const
        {
            return SubmitCallable(&MacieClient::UpdateS3Resources, request);
        }

        /**
         * An Async wrapper for UpdateS3Resources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateS3ResourcesRequestT = Model::UpdateS3ResourcesRequest>
        void UpdateS3ResourcesAsync(const UpdateS3ResourcesRequestT& request, const UpdateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MacieClient::UpdateS3Resources, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MacieEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MacieClient>;
      void init(const MacieClientConfiguration& clientConfiguration);

      MacieClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MacieEndpointProviderBase> m_endpointProvider;
  };

} // namespace Macie
} // namespace Aws
