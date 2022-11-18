/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support-app/SupportAppServiceClientModel.h>
#include <aws/support-app/SupportAppLegacyAsyncMacros.h>

namespace Aws
{
namespace SupportApp
{
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
   * a Slack workspace to enable the Amazon Web Services Support App</a>.</p> 
   * <ul> <li> <p>You must have a Business or Enterprise Support plan to use the
   * Amazon Web Services Support App API. </p> </li> <li> <p>For more information
   * about the Amazon Web Services Support App endpoints, see the <a
   * href="https://docs.aws.amazon.com/general/latest/gr/awssupport.html#awssupport_app_region">Amazon
   * Web Services Support App in Slack endpoints</a> in the <i>Amazon Web Services
   * General Reference</i>.</p> </li> </ul> </p>
   */
  class AWS_SUPPORTAPP_API SupportAppClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupportAppClient(const Aws::SupportApp::SupportAppClientConfiguration& clientConfiguration = Aws::SupportApp::SupportAppClientConfiguration(),
                         std::shared_ptr<SupportAppEndpointProviderBase> endpointProvider = Aws::MakeShared<SupportAppEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupportAppClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<SupportAppEndpointProviderBase> endpointProvider = Aws::MakeShared<SupportAppEndpointProvider>(ALLOCATION_TAG),
                         const Aws::SupportApp::SupportAppClientConfiguration& clientConfiguration = Aws::SupportApp::SupportAppClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SupportAppClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<SupportAppEndpointProviderBase> endpointProvider = Aws::MakeShared<SupportAppEndpointProvider>(ALLOCATION_TAG),
                         const Aws::SupportApp::SupportAppClientConfiguration& clientConfiguration = Aws::SupportApp::SupportAppClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupportAppClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupportAppClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SupportAppClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SupportAppClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Deletes an alias for an Amazon Web Services account ID. The alias appears in
         * the Amazon Web Services Support App page of the Amazon Web Services Support
         * Center. The alias also appears in Slack messages from the Amazon Web Services
         * Support App.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/DeleteAccountAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountAliasOutcome DeleteAccountAlias(const Model::DeleteAccountAliasRequest& request) const;


        /**
         * <p>Deletes a Slack channel configuration from your Amazon Web Services account.
         * This operation doesn't delete your Slack channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/DeleteSlackChannelConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlackChannelConfigurationOutcome DeleteSlackChannelConfiguration(const Model::DeleteSlackChannelConfigurationRequest& request) const;


        /**
         * <p>Deletes a Slack workspace configuration from your Amazon Web Services
         * account. This operation doesn't delete your Slack workspace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/DeleteSlackWorkspaceConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlackWorkspaceConfigurationOutcome DeleteSlackWorkspaceConfiguration(const Model::DeleteSlackWorkspaceConfigurationRequest& request) const;


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
         * <p>Lists the Slack channel configurations for an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/ListSlackChannelConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSlackChannelConfigurationsOutcome ListSlackChannelConfigurations(const Model::ListSlackChannelConfigurationsRequest& request) const;


        /**
         * <p>Lists the Slack workspace configurations for an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/ListSlackWorkspaceConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSlackWorkspaceConfigurationsOutcome ListSlackWorkspaceConfigurations(const Model::ListSlackWorkspaceConfigurationsRequest& request) const;


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
         * <p>Registers a Slack workspace for your Amazon Web Services account. To call
         * this API, your account must be part of an organization in Organizations.</p>
         * <p>If you're the <i>management account</i> and you want to register Slack
         * workspaces for your organization, you must complete the following tasks:</p>
         * <ol> <li> <p>Sign in to the <a
         * href="https://console.aws.amazon.com/support/app">Amazon Web Services Support
         * Center</a> and authorize the Slack workspaces where you want your organization
         * to have access to. See <a
         * href="https://docs.aws.amazon.com/awssupport/latest/user/authorize-slack-workspace.html">Authorize
         * a Slack workspace</a> in the <i>Amazon Web Services Support User Guide</i>.</p>
         * </li> <li> <p>Call the <code>RegisterSlackWorkspaceForOrganization</code> API to
         * authorize each Slack workspace for the organization.</p> </li> </ol> <p>After
         * the management account authorizes the Slack workspace, member accounts can call
         * this API to authorize the same Slack workspace for their individual accounts.
         * Member accounts don't need to authorize the Slack workspace manually through the
         * <a href="https://console.aws.amazon.com/support/app">Amazon Web Services Support
         * Center</a>.</p> <p>To use the Amazon Web Services Support App, each account must
         * then complete the following tasks:</p> <ul> <li> <p>Create an Identity and
         * Access Management (IAM) role with the required permission. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-permissions.html">Managing
         * access to the Amazon Web Services Support App</a>.</p> </li> <li> <p>Configure a
         * Slack channel to use the Amazon Web Services Support App for support cases for
         * that account. For more information, see <a
         * href="https://docs.aws.amazon.com/awssupport/latest/user/add-your-slack-channel.html">Configuring
         * a Slack channel</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/RegisterSlackWorkspaceForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterSlackWorkspaceForOrganizationOutcome RegisterSlackWorkspaceForOrganization(const Model::RegisterSlackWorkspaceForOrganizationRequest& request) const;


        /**
         * <p>Updates the configuration for a Slack channel, such as case update
         * notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-app-2021-08-20/UpdateSlackChannelConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSlackChannelConfigurationOutcome UpdateSlackChannelConfiguration(const Model::UpdateSlackChannelConfigurationRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SupportAppEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SupportAppClientConfiguration& clientConfiguration);

      SupportAppClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SupportAppEndpointProviderBase> m_endpointProvider;
  };

} // namespace SupportApp
} // namespace Aws
