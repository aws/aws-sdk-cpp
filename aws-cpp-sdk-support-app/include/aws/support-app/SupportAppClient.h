/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/support-app/SupportAppErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support-app/model/CreateSlackChannelConfigurationResult.h>
#include <aws/support-app/model/DeleteAccountAliasResult.h>
#include <aws/support-app/model/DeleteSlackChannelConfigurationResult.h>
#include <aws/support-app/model/DeleteSlackWorkspaceConfigurationResult.h>
#include <aws/support-app/model/GetAccountAliasResult.h>
#include <aws/support-app/model/ListSlackChannelConfigurationsResult.h>
#include <aws/support-app/model/ListSlackWorkspaceConfigurationsResult.h>
#include <aws/support-app/model/PutAccountAliasResult.h>
#include <aws/support-app/model/UpdateSlackChannelConfigurationResult.h>
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

namespace SupportApp
{

namespace Model
{
        class CreateSlackChannelConfigurationRequest;
        class DeleteAccountAliasRequest;
        class DeleteSlackChannelConfigurationRequest;
        class DeleteSlackWorkspaceConfigurationRequest;
        class GetAccountAliasRequest;
        class ListSlackChannelConfigurationsRequest;
        class ListSlackWorkspaceConfigurationsRequest;
        class PutAccountAliasRequest;
        class UpdateSlackChannelConfigurationRequest;

        typedef Aws::Utils::Outcome<CreateSlackChannelConfigurationResult, SupportAppError> CreateSlackChannelConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteAccountAliasResult, SupportAppError> DeleteAccountAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteSlackChannelConfigurationResult, SupportAppError> DeleteSlackChannelConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteSlackWorkspaceConfigurationResult, SupportAppError> DeleteSlackWorkspaceConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetAccountAliasResult, SupportAppError> GetAccountAliasOutcome;
        typedef Aws::Utils::Outcome<ListSlackChannelConfigurationsResult, SupportAppError> ListSlackChannelConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListSlackWorkspaceConfigurationsResult, SupportAppError> ListSlackWorkspaceConfigurationsOutcome;
        typedef Aws::Utils::Outcome<PutAccountAliasResult, SupportAppError> PutAccountAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateSlackChannelConfigurationResult, SupportAppError> UpdateSlackChannelConfigurationOutcome;

        typedef std::future<CreateSlackChannelConfigurationOutcome> CreateSlackChannelConfigurationOutcomeCallable;
        typedef std::future<DeleteAccountAliasOutcome> DeleteAccountAliasOutcomeCallable;
        typedef std::future<DeleteSlackChannelConfigurationOutcome> DeleteSlackChannelConfigurationOutcomeCallable;
        typedef std::future<DeleteSlackWorkspaceConfigurationOutcome> DeleteSlackWorkspaceConfigurationOutcomeCallable;
        typedef std::future<GetAccountAliasOutcome> GetAccountAliasOutcomeCallable;
        typedef std::future<ListSlackChannelConfigurationsOutcome> ListSlackChannelConfigurationsOutcomeCallable;
        typedef std::future<ListSlackWorkspaceConfigurationsOutcome> ListSlackWorkspaceConfigurationsOutcomeCallable;
        typedef std::future<PutAccountAliasOutcome> PutAccountAliasOutcomeCallable;
        typedef std::future<UpdateSlackChannelConfigurationOutcome> UpdateSlackChannelConfigurationOutcomeCallable;
} // namespace Model

  class SupportAppClient;

    typedef std::function<void(const SupportAppClient*, const Model::CreateSlackChannelConfigurationRequest&, const Model::CreateSlackChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSlackChannelConfigurationResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::DeleteAccountAliasRequest&, const Model::DeleteAccountAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountAliasResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::DeleteSlackChannelConfigurationRequest&, const Model::DeleteSlackChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlackChannelConfigurationResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::DeleteSlackWorkspaceConfigurationRequest&, const Model::DeleteSlackWorkspaceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlackWorkspaceConfigurationResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::GetAccountAliasRequest&, const Model::GetAccountAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountAliasResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::ListSlackChannelConfigurationsRequest&, const Model::ListSlackChannelConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSlackChannelConfigurationsResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::ListSlackWorkspaceConfigurationsRequest&, const Model::ListSlackWorkspaceConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSlackWorkspaceConfigurationsResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::PutAccountAliasRequest&, const Model::PutAccountAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountAliasResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::UpdateSlackChannelConfigurationRequest&, const Model::UpdateSlackChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSlackChannelConfigurationResponseReceivedHandler;

  /**
   * <p><fullname>Amazon Web Services Support App in Slack</fullname> <p>You can use
   * the Amazon Web Services Support App in Slack API to manage your support cases in
   * Slack for your Amazon Web Services account. After you configure your Slack
   * workspace and channel with the Amazon Web Services Support App, you can perform
   * the following tasks directly in your Slack channel:</p> <ul> <li> <p>Create,
   * search, update, and resolve your support cases</p> </li> <li> <p>Request service
   * quota increases for your account</p> </li> <li> <p>Invite Amazon Web Services
   * Support agents to your channel so that you can chat directly about your support
   * cases</p> </li> </ul> <p>For more information about how to perform these actions
   * in Slack, see the following documentation in the <i>Amazon Web Services Support
   * User Guide</i>:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/aws-support-app-for-slack.html">Amazon
   * Web Services Support App in Slack</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/joining-a-live-chat-session.html">Joining
   * a live chat session with Amazon Web Services Support</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/service-quota-increase.html">Requesting
   * service quota increases</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-commands.html">Amazon
   * Web Services Support App commands in Slack</a> </p> </li> </ul> <p>You can also
   * use the Amazon Web Services Management Console instead of the Amazon Web
   * Services Support App API to manage your Slack configurations. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/authorize-slack-workspace.html">Authorize
   * a Slack workspace to enable the Amazon Web Services Support App</a>.</p></p>
   * <pre><code> &lt;note&gt; &lt;ul&gt; &lt;li&gt; &lt;p&gt;You must have a Business
   * or Enterprise Support plan to use the Amazon Web Services Support App API.
   * &lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt;For more information about the Amazon
   * Web Services Support App endpoints, see the &lt;a
   * href=&quot;https://docs.aws.amazon.com/general/latest/gr/awssupport.html#awssupport_app_region&quot;&gt;Amazon
   * Web Services Support App in Slack endpoints&lt;/a&gt; in the &lt;i&gt;Amazon Web
   * Services General Reference&lt;/i&gt;.&lt;/p&gt; &lt;/li&gt; &lt;/ul&gt;
   * &lt;/note&gt; </code></pre>
   */
  class AWS_SUPPORTAPP_API SupportAppClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupportAppClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupportAppClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SupportAppClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SupportAppClient();


        /**
         * <p>Creates a Slack channel configuration for your Amazon Web Services
         * account.</p>  <ul> <li> <p>You can add up to 5 Slack workspaces for your
         * account.</p> </li> <li> <p>You can add up to 20 Slack channels for your
         * account.</p> </li> </ul>  <p>A Slack channel can have up to 100 Amazon
         * Web Services accounts. This means that only 100 accounts can add the same Slack
         * channel to the Amazon Web Services Support App. We recommend that you only add
         * the accounts that you need to manage support cases for your organization. This
         * can reduce the notifications about case updates that you receive in the Slack
         * channel.</p>  <p>We recommend that you choose a private Slack channel so
         * that only members in that channel have read and write access to your support
         * cases. Anyone in your Slack channel can create, update, or resolve support cases
         * for your account. Users require an invitation to join private channels. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/CreateSlackChannelConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSlackChannelConfigurationOutcome CreateSlackChannelConfiguration(const Model::CreateSlackChannelConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateSlackChannelConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSlackChannelConfigurationOutcomeCallable CreateSlackChannelConfigurationCallable(const Model::CreateSlackChannelConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateSlackChannelConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSlackChannelConfigurationAsync(const Model::CreateSlackChannelConfigurationRequest& request, const CreateSlackChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an alias for an Amazon Web Services account ID. The alias appears in
         * the Amazon Web Services Support App page of the Amazon Web Services Support
         * Center. The alias also appears in Slack messages from the Amazon Web Services
         * Support App.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/DeleteAccountAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountAliasOutcome DeleteAccountAlias(const Model::DeleteAccountAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccountAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountAliasOutcomeCallable DeleteAccountAliasCallable(const Model::DeleteAccountAliasRequest& request) const;

        /**
         * An Async wrapper for DeleteAccountAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountAliasAsync(const Model::DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Slack channel configuration from your Amazon Web Services account.
         * This operation doesn't delete your Slack channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/DeleteSlackChannelConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlackChannelConfigurationOutcome DeleteSlackChannelConfiguration(const Model::DeleteSlackChannelConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSlackChannelConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSlackChannelConfigurationOutcomeCallable DeleteSlackChannelConfigurationCallable(const Model::DeleteSlackChannelConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteSlackChannelConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSlackChannelConfigurationAsync(const Model::DeleteSlackChannelConfigurationRequest& request, const DeleteSlackChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Slack workspace configuration from your Amazon Web Services
         * account. This operation doesn't delete your Slack workspace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/DeleteSlackWorkspaceConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlackWorkspaceConfigurationOutcome DeleteSlackWorkspaceConfiguration(const Model::DeleteSlackWorkspaceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSlackWorkspaceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSlackWorkspaceConfigurationOutcomeCallable DeleteSlackWorkspaceConfigurationCallable(const Model::DeleteSlackWorkspaceConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteSlackWorkspaceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSlackWorkspaceConfigurationAsync(const Model::DeleteSlackWorkspaceConfigurationRequest& request, const DeleteSlackWorkspaceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the alias from an Amazon Web Services account ID. The alias appears
         * in the Amazon Web Services Support App page of the Amazon Web Services Support
         * Center. The alias also appears in Slack messages from the Amazon Web Services
         * Support App.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/GetAccountAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountAliasOutcome GetAccountAlias(const Model::GetAccountAliasRequest& request) const;

        /**
         * A Callable wrapper for GetAccountAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountAliasOutcomeCallable GetAccountAliasCallable(const Model::GetAccountAliasRequest& request) const;

        /**
         * An Async wrapper for GetAccountAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountAliasAsync(const Model::GetAccountAliasRequest& request, const GetAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Slack channel configurations for an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/ListSlackChannelConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSlackChannelConfigurationsOutcome ListSlackChannelConfigurations(const Model::ListSlackChannelConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListSlackChannelConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSlackChannelConfigurationsOutcomeCallable ListSlackChannelConfigurationsCallable(const Model::ListSlackChannelConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListSlackChannelConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSlackChannelConfigurationsAsync(const Model::ListSlackChannelConfigurationsRequest& request, const ListSlackChannelConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Slack workspace configurations for an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/ListSlackWorkspaceConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSlackWorkspaceConfigurationsOutcome ListSlackWorkspaceConfigurations(const Model::ListSlackWorkspaceConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListSlackWorkspaceConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSlackWorkspaceConfigurationsOutcomeCallable ListSlackWorkspaceConfigurationsCallable(const Model::ListSlackWorkspaceConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListSlackWorkspaceConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSlackWorkspaceConfigurationsAsync(const Model::ListSlackWorkspaceConfigurationsRequest& request, const ListSlackWorkspaceConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an individual alias for each Amazon Web Services account
         * ID. The alias appears in the Amazon Web Services Support App page of the Amazon
         * Web Services Support Center. The alias also appears in Slack messages from the
         * Amazon Web Services Support App.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/PutAccountAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountAliasOutcome PutAccountAlias(const Model::PutAccountAliasRequest& request) const;

        /**
         * A Callable wrapper for PutAccountAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccountAliasOutcomeCallable PutAccountAliasCallable(const Model::PutAccountAliasRequest& request) const;

        /**
         * An Async wrapper for PutAccountAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccountAliasAsync(const Model::PutAccountAliasRequest& request, const PutAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration for a Slack channel, such as case update
         * notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/UpdateSlackChannelConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSlackChannelConfigurationOutcome UpdateSlackChannelConfiguration(const Model::UpdateSlackChannelConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSlackChannelConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSlackChannelConfigurationOutcomeCallable UpdateSlackChannelConfigurationCallable(const Model::UpdateSlackChannelConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateSlackChannelConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSlackChannelConfigurationAsync(const Model::UpdateSlackChannelConfigurationRequest& request, const UpdateSlackChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateSlackChannelConfigurationAsyncHelper(const Model::CreateSlackChannelConfigurationRequest& request, const CreateSlackChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccountAliasAsyncHelper(const Model::DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSlackChannelConfigurationAsyncHelper(const Model::DeleteSlackChannelConfigurationRequest& request, const DeleteSlackChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSlackWorkspaceConfigurationAsyncHelper(const Model::DeleteSlackWorkspaceConfigurationRequest& request, const DeleteSlackWorkspaceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountAliasAsyncHelper(const Model::GetAccountAliasRequest& request, const GetAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSlackChannelConfigurationsAsyncHelper(const Model::ListSlackChannelConfigurationsRequest& request, const ListSlackChannelConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSlackWorkspaceConfigurationsAsyncHelper(const Model::ListSlackWorkspaceConfigurationsRequest& request, const ListSlackWorkspaceConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAccountAliasAsyncHelper(const Model::PutAccountAliasRequest& request, const PutAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSlackChannelConfigurationAsyncHelper(const Model::UpdateSlackChannelConfigurationRequest& request, const UpdateSlackChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SupportApp
} // namespace Aws
