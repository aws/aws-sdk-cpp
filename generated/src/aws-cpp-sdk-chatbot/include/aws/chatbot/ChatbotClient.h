/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chatbot/ChatbotServiceClientModel.h>

namespace Aws
{
namespace chatbot
{
  /**
   * AWS Chatbot API
   */
  class AWS_CHATBOT_API ChatbotClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ChatbotClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ChatbotClientConfiguration ClientConfigurationType;
      typedef ChatbotEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChatbotClient(const Aws::chatbot::ChatbotClientConfiguration& clientConfiguration = Aws::chatbot::ChatbotClientConfiguration(),
                      std::shared_ptr<ChatbotEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChatbotClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<ChatbotEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::chatbot::ChatbotClientConfiguration& clientConfiguration = Aws::chatbot::ChatbotClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChatbotClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<ChatbotEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::chatbot::ChatbotClientConfiguration& clientConfiguration = Aws::chatbot::ChatbotClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChatbotClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChatbotClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChatbotClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ChatbotClient();

        /**
         * Creates Chime Webhook Configuration<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/CreateChimeWebhookConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChimeWebhookConfigurationOutcome CreateChimeWebhookConfiguration(const Model::CreateChimeWebhookConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateChimeWebhookConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChimeWebhookConfigurationRequestT = Model::CreateChimeWebhookConfigurationRequest>
        Model::CreateChimeWebhookConfigurationOutcomeCallable CreateChimeWebhookConfigurationCallable(const CreateChimeWebhookConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::CreateChimeWebhookConfiguration, request);
        }

        /**
         * An Async wrapper for CreateChimeWebhookConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChimeWebhookConfigurationRequestT = Model::CreateChimeWebhookConfigurationRequest>
        void CreateChimeWebhookConfigurationAsync(const CreateChimeWebhookConfigurationRequestT& request, const CreateChimeWebhookConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::CreateChimeWebhookConfiguration, request, handler, context);
        }

        /**
         * Creates MS Teams Channel Configuration<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/CreateMicrosoftTeamsChannelConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMicrosoftTeamsChannelConfigurationOutcome CreateMicrosoftTeamsChannelConfiguration(const Model::CreateMicrosoftTeamsChannelConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateMicrosoftTeamsChannelConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMicrosoftTeamsChannelConfigurationRequestT = Model::CreateMicrosoftTeamsChannelConfigurationRequest>
        Model::CreateMicrosoftTeamsChannelConfigurationOutcomeCallable CreateMicrosoftTeamsChannelConfigurationCallable(const CreateMicrosoftTeamsChannelConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::CreateMicrosoftTeamsChannelConfiguration, request);
        }

        /**
         * An Async wrapper for CreateMicrosoftTeamsChannelConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMicrosoftTeamsChannelConfigurationRequestT = Model::CreateMicrosoftTeamsChannelConfigurationRequest>
        void CreateMicrosoftTeamsChannelConfigurationAsync(const CreateMicrosoftTeamsChannelConfigurationRequestT& request, const CreateMicrosoftTeamsChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::CreateMicrosoftTeamsChannelConfiguration, request, handler, context);
        }

        /**
         * Creates Slack Channel Configuration<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/CreateSlackChannelConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSlackChannelConfigurationOutcome CreateSlackChannelConfiguration(const Model::CreateSlackChannelConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateSlackChannelConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSlackChannelConfigurationRequestT = Model::CreateSlackChannelConfigurationRequest>
        Model::CreateSlackChannelConfigurationOutcomeCallable CreateSlackChannelConfigurationCallable(const CreateSlackChannelConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::CreateSlackChannelConfiguration, request);
        }

        /**
         * An Async wrapper for CreateSlackChannelConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSlackChannelConfigurationRequestT = Model::CreateSlackChannelConfigurationRequest>
        void CreateSlackChannelConfigurationAsync(const CreateSlackChannelConfigurationRequestT& request, const CreateSlackChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::CreateSlackChannelConfiguration, request, handler, context);
        }

        /**
         * Deletes a Chime Webhook Configuration<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DeleteChimeWebhookConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChimeWebhookConfigurationOutcome DeleteChimeWebhookConfiguration(const Model::DeleteChimeWebhookConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteChimeWebhookConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChimeWebhookConfigurationRequestT = Model::DeleteChimeWebhookConfigurationRequest>
        Model::DeleteChimeWebhookConfigurationOutcomeCallable DeleteChimeWebhookConfigurationCallable(const DeleteChimeWebhookConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DeleteChimeWebhookConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteChimeWebhookConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChimeWebhookConfigurationRequestT = Model::DeleteChimeWebhookConfigurationRequest>
        void DeleteChimeWebhookConfigurationAsync(const DeleteChimeWebhookConfigurationRequestT& request, const DeleteChimeWebhookConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DeleteChimeWebhookConfiguration, request, handler, context);
        }

        /**
         * Deletes MS Teams Channel Configuration<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DeleteMicrosoftTeamsChannelConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMicrosoftTeamsChannelConfigurationOutcome DeleteMicrosoftTeamsChannelConfiguration(const Model::DeleteMicrosoftTeamsChannelConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteMicrosoftTeamsChannelConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMicrosoftTeamsChannelConfigurationRequestT = Model::DeleteMicrosoftTeamsChannelConfigurationRequest>
        Model::DeleteMicrosoftTeamsChannelConfigurationOutcomeCallable DeleteMicrosoftTeamsChannelConfigurationCallable(const DeleteMicrosoftTeamsChannelConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DeleteMicrosoftTeamsChannelConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteMicrosoftTeamsChannelConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMicrosoftTeamsChannelConfigurationRequestT = Model::DeleteMicrosoftTeamsChannelConfigurationRequest>
        void DeleteMicrosoftTeamsChannelConfigurationAsync(const DeleteMicrosoftTeamsChannelConfigurationRequestT& request, const DeleteMicrosoftTeamsChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DeleteMicrosoftTeamsChannelConfiguration, request, handler, context);
        }

        /**
         * Deletes the Microsoft Teams team authorization allowing for channels to be
         * configured in that Microsoft Teams team. Note that the Microsoft Teams team must
         * have no channels configured to remove it.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DeleteMicrosoftTeamsConfiguredTeam">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMicrosoftTeamsConfiguredTeamOutcome DeleteMicrosoftTeamsConfiguredTeam(const Model::DeleteMicrosoftTeamsConfiguredTeamRequest& request) const;

        /**
         * A Callable wrapper for DeleteMicrosoftTeamsConfiguredTeam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMicrosoftTeamsConfiguredTeamRequestT = Model::DeleteMicrosoftTeamsConfiguredTeamRequest>
        Model::DeleteMicrosoftTeamsConfiguredTeamOutcomeCallable DeleteMicrosoftTeamsConfiguredTeamCallable(const DeleteMicrosoftTeamsConfiguredTeamRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DeleteMicrosoftTeamsConfiguredTeam, request);
        }

        /**
         * An Async wrapper for DeleteMicrosoftTeamsConfiguredTeam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMicrosoftTeamsConfiguredTeamRequestT = Model::DeleteMicrosoftTeamsConfiguredTeamRequest>
        void DeleteMicrosoftTeamsConfiguredTeamAsync(const DeleteMicrosoftTeamsConfiguredTeamRequestT& request, const DeleteMicrosoftTeamsConfiguredTeamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DeleteMicrosoftTeamsConfiguredTeam, request, handler, context);
        }

        /**
         * Deletes a Teams user identity<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DeleteMicrosoftTeamsUserIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMicrosoftTeamsUserIdentityOutcome DeleteMicrosoftTeamsUserIdentity(const Model::DeleteMicrosoftTeamsUserIdentityRequest& request) const;

        /**
         * A Callable wrapper for DeleteMicrosoftTeamsUserIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMicrosoftTeamsUserIdentityRequestT = Model::DeleteMicrosoftTeamsUserIdentityRequest>
        Model::DeleteMicrosoftTeamsUserIdentityOutcomeCallable DeleteMicrosoftTeamsUserIdentityCallable(const DeleteMicrosoftTeamsUserIdentityRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DeleteMicrosoftTeamsUserIdentity, request);
        }

        /**
         * An Async wrapper for DeleteMicrosoftTeamsUserIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMicrosoftTeamsUserIdentityRequestT = Model::DeleteMicrosoftTeamsUserIdentityRequest>
        void DeleteMicrosoftTeamsUserIdentityAsync(const DeleteMicrosoftTeamsUserIdentityRequestT& request, const DeleteMicrosoftTeamsUserIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DeleteMicrosoftTeamsUserIdentity, request, handler, context);
        }

        /**
         * Deletes Slack Channel Configuration<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DeleteSlackChannelConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlackChannelConfigurationOutcome DeleteSlackChannelConfiguration(const Model::DeleteSlackChannelConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSlackChannelConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSlackChannelConfigurationRequestT = Model::DeleteSlackChannelConfigurationRequest>
        Model::DeleteSlackChannelConfigurationOutcomeCallable DeleteSlackChannelConfigurationCallable(const DeleteSlackChannelConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DeleteSlackChannelConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteSlackChannelConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSlackChannelConfigurationRequestT = Model::DeleteSlackChannelConfigurationRequest>
        void DeleteSlackChannelConfigurationAsync(const DeleteSlackChannelConfigurationRequestT& request, const DeleteSlackChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DeleteSlackChannelConfiguration, request, handler, context);
        }

        /**
         * Deletes a Slack user identity<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DeleteSlackUserIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlackUserIdentityOutcome DeleteSlackUserIdentity(const Model::DeleteSlackUserIdentityRequest& request) const;

        /**
         * A Callable wrapper for DeleteSlackUserIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSlackUserIdentityRequestT = Model::DeleteSlackUserIdentityRequest>
        Model::DeleteSlackUserIdentityOutcomeCallable DeleteSlackUserIdentityCallable(const DeleteSlackUserIdentityRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DeleteSlackUserIdentity, request);
        }

        /**
         * An Async wrapper for DeleteSlackUserIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSlackUserIdentityRequestT = Model::DeleteSlackUserIdentityRequest>
        void DeleteSlackUserIdentityAsync(const DeleteSlackUserIdentityRequestT& request, const DeleteSlackUserIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DeleteSlackUserIdentity, request, handler, context);
        }

        /**
         * Deletes the Slack workspace authorization that allows channels to be configured
         * in that workspace. This requires all configured channels in the workspace to be
         * deleted.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DeleteSlackWorkspaceAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlackWorkspaceAuthorizationOutcome DeleteSlackWorkspaceAuthorization(const Model::DeleteSlackWorkspaceAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSlackWorkspaceAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSlackWorkspaceAuthorizationRequestT = Model::DeleteSlackWorkspaceAuthorizationRequest>
        Model::DeleteSlackWorkspaceAuthorizationOutcomeCallable DeleteSlackWorkspaceAuthorizationCallable(const DeleteSlackWorkspaceAuthorizationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DeleteSlackWorkspaceAuthorization, request);
        }

        /**
         * An Async wrapper for DeleteSlackWorkspaceAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSlackWorkspaceAuthorizationRequestT = Model::DeleteSlackWorkspaceAuthorizationRequest>
        void DeleteSlackWorkspaceAuthorizationAsync(const DeleteSlackWorkspaceAuthorizationRequestT& request, const DeleteSlackWorkspaceAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DeleteSlackWorkspaceAuthorization, request, handler, context);
        }

        /**
         * Lists Chime Webhook Configurations optionally filtered by
         * ChatConfigurationArn<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DescribeChimeWebhookConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChimeWebhookConfigurationsOutcome DescribeChimeWebhookConfigurations(const Model::DescribeChimeWebhookConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeChimeWebhookConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChimeWebhookConfigurationsRequestT = Model::DescribeChimeWebhookConfigurationsRequest>
        Model::DescribeChimeWebhookConfigurationsOutcomeCallable DescribeChimeWebhookConfigurationsCallable(const DescribeChimeWebhookConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DescribeChimeWebhookConfigurations, request);
        }

        /**
         * An Async wrapper for DescribeChimeWebhookConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChimeWebhookConfigurationsRequestT = Model::DescribeChimeWebhookConfigurationsRequest>
        void DescribeChimeWebhookConfigurationsAsync(const DescribeChimeWebhookConfigurationsRequestT& request, const DescribeChimeWebhookConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DescribeChimeWebhookConfigurations, request, handler, context);
        }

        /**
         * Lists Slack Channel Configurations optionally filtered by
         * ChatConfigurationArn<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DescribeSlackChannelConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlackChannelConfigurationsOutcome DescribeSlackChannelConfigurations(const Model::DescribeSlackChannelConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSlackChannelConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSlackChannelConfigurationsRequestT = Model::DescribeSlackChannelConfigurationsRequest>
        Model::DescribeSlackChannelConfigurationsOutcomeCallable DescribeSlackChannelConfigurationsCallable(const DescribeSlackChannelConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DescribeSlackChannelConfigurations, request);
        }

        /**
         * An Async wrapper for DescribeSlackChannelConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSlackChannelConfigurationsRequestT = Model::DescribeSlackChannelConfigurationsRequest>
        void DescribeSlackChannelConfigurationsAsync(const DescribeSlackChannelConfigurationsRequestT& request, const DescribeSlackChannelConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DescribeSlackChannelConfigurations, request, handler, context);
        }

        /**
         * Lists all Slack user identities with a mapped role.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DescribeSlackUserIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlackUserIdentitiesOutcome DescribeSlackUserIdentities(const Model::DescribeSlackUserIdentitiesRequest& request) const;

        /**
         * A Callable wrapper for DescribeSlackUserIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSlackUserIdentitiesRequestT = Model::DescribeSlackUserIdentitiesRequest>
        Model::DescribeSlackUserIdentitiesOutcomeCallable DescribeSlackUserIdentitiesCallable(const DescribeSlackUserIdentitiesRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DescribeSlackUserIdentities, request);
        }

        /**
         * An Async wrapper for DescribeSlackUserIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSlackUserIdentitiesRequestT = Model::DescribeSlackUserIdentitiesRequest>
        void DescribeSlackUserIdentitiesAsync(const DescribeSlackUserIdentitiesRequestT& request, const DescribeSlackUserIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DescribeSlackUserIdentities, request, handler, context);
        }

        /**
         * Lists all authorized Slack Workspaces for AWS Account<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DescribeSlackWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlackWorkspacesOutcome DescribeSlackWorkspaces(const Model::DescribeSlackWorkspacesRequest& request) const;

        /**
         * A Callable wrapper for DescribeSlackWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSlackWorkspacesRequestT = Model::DescribeSlackWorkspacesRequest>
        Model::DescribeSlackWorkspacesOutcomeCallable DescribeSlackWorkspacesCallable(const DescribeSlackWorkspacesRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DescribeSlackWorkspaces, request);
        }

        /**
         * An Async wrapper for DescribeSlackWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSlackWorkspacesRequestT = Model::DescribeSlackWorkspacesRequest>
        void DescribeSlackWorkspacesAsync(const DescribeSlackWorkspacesRequestT& request, const DescribeSlackWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DescribeSlackWorkspaces, request, handler, context);
        }

        /**
         * Get Chatbot account level preferences<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/GetAccountPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountPreferencesOutcome GetAccountPreferences(const Model::GetAccountPreferencesRequest& request) const;

        /**
         * A Callable wrapper for GetAccountPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountPreferencesRequestT = Model::GetAccountPreferencesRequest>
        Model::GetAccountPreferencesOutcomeCallable GetAccountPreferencesCallable(const GetAccountPreferencesRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::GetAccountPreferences, request);
        }

        /**
         * An Async wrapper for GetAccountPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountPreferencesRequestT = Model::GetAccountPreferencesRequest>
        void GetAccountPreferencesAsync(const GetAccountPreferencesRequestT& request, const GetAccountPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::GetAccountPreferences, request, handler, context);
        }

        /**
         * Get a single MS Teams Channel Configurations<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/GetMicrosoftTeamsChannelConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMicrosoftTeamsChannelConfigurationOutcome GetMicrosoftTeamsChannelConfiguration(const Model::GetMicrosoftTeamsChannelConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetMicrosoftTeamsChannelConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMicrosoftTeamsChannelConfigurationRequestT = Model::GetMicrosoftTeamsChannelConfigurationRequest>
        Model::GetMicrosoftTeamsChannelConfigurationOutcomeCallable GetMicrosoftTeamsChannelConfigurationCallable(const GetMicrosoftTeamsChannelConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::GetMicrosoftTeamsChannelConfiguration, request);
        }

        /**
         * An Async wrapper for GetMicrosoftTeamsChannelConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMicrosoftTeamsChannelConfigurationRequestT = Model::GetMicrosoftTeamsChannelConfigurationRequest>
        void GetMicrosoftTeamsChannelConfigurationAsync(const GetMicrosoftTeamsChannelConfigurationRequestT& request, const GetMicrosoftTeamsChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::GetMicrosoftTeamsChannelConfiguration, request, handler, context);
        }

        /**
         * Lists MS Teams Channel Configurations optionally filtered by TeamId<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/ListMicrosoftTeamsChannelConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMicrosoftTeamsChannelConfigurationsOutcome ListMicrosoftTeamsChannelConfigurations(const Model::ListMicrosoftTeamsChannelConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListMicrosoftTeamsChannelConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMicrosoftTeamsChannelConfigurationsRequestT = Model::ListMicrosoftTeamsChannelConfigurationsRequest>
        Model::ListMicrosoftTeamsChannelConfigurationsOutcomeCallable ListMicrosoftTeamsChannelConfigurationsCallable(const ListMicrosoftTeamsChannelConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::ListMicrosoftTeamsChannelConfigurations, request);
        }

        /**
         * An Async wrapper for ListMicrosoftTeamsChannelConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMicrosoftTeamsChannelConfigurationsRequestT = Model::ListMicrosoftTeamsChannelConfigurationsRequest>
        void ListMicrosoftTeamsChannelConfigurationsAsync(const ListMicrosoftTeamsChannelConfigurationsRequestT& request, const ListMicrosoftTeamsChannelConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::ListMicrosoftTeamsChannelConfigurations, request, handler, context);
        }

        /**
         * Lists all authorized MS teams for AWS Account<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/ListMicrosoftTeamsConfiguredTeams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMicrosoftTeamsConfiguredTeamsOutcome ListMicrosoftTeamsConfiguredTeams(const Model::ListMicrosoftTeamsConfiguredTeamsRequest& request) const;

        /**
         * A Callable wrapper for ListMicrosoftTeamsConfiguredTeams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMicrosoftTeamsConfiguredTeamsRequestT = Model::ListMicrosoftTeamsConfiguredTeamsRequest>
        Model::ListMicrosoftTeamsConfiguredTeamsOutcomeCallable ListMicrosoftTeamsConfiguredTeamsCallable(const ListMicrosoftTeamsConfiguredTeamsRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::ListMicrosoftTeamsConfiguredTeams, request);
        }

        /**
         * An Async wrapper for ListMicrosoftTeamsConfiguredTeams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMicrosoftTeamsConfiguredTeamsRequestT = Model::ListMicrosoftTeamsConfiguredTeamsRequest>
        void ListMicrosoftTeamsConfiguredTeamsAsync(const ListMicrosoftTeamsConfiguredTeamsRequestT& request, const ListMicrosoftTeamsConfiguredTeamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::ListMicrosoftTeamsConfiguredTeams, request, handler, context);
        }

        /**
         * Lists all Microsoft Teams user identities with a mapped role.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/ListMicrosoftTeamsUserIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMicrosoftTeamsUserIdentitiesOutcome ListMicrosoftTeamsUserIdentities(const Model::ListMicrosoftTeamsUserIdentitiesRequest& request) const;

        /**
         * A Callable wrapper for ListMicrosoftTeamsUserIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMicrosoftTeamsUserIdentitiesRequestT = Model::ListMicrosoftTeamsUserIdentitiesRequest>
        Model::ListMicrosoftTeamsUserIdentitiesOutcomeCallable ListMicrosoftTeamsUserIdentitiesCallable(const ListMicrosoftTeamsUserIdentitiesRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::ListMicrosoftTeamsUserIdentities, request);
        }

        /**
         * An Async wrapper for ListMicrosoftTeamsUserIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMicrosoftTeamsUserIdentitiesRequestT = Model::ListMicrosoftTeamsUserIdentitiesRequest>
        void ListMicrosoftTeamsUserIdentitiesAsync(const ListMicrosoftTeamsUserIdentitiesRequestT& request, const ListMicrosoftTeamsUserIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::ListMicrosoftTeamsUserIdentities, request, handler, context);
        }

        /**
         * Update Chatbot account level preferences<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/UpdateAccountPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountPreferencesOutcome UpdateAccountPreferences(const Model::UpdateAccountPreferencesRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountPreferencesRequestT = Model::UpdateAccountPreferencesRequest>
        Model::UpdateAccountPreferencesOutcomeCallable UpdateAccountPreferencesCallable(const UpdateAccountPreferencesRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::UpdateAccountPreferences, request);
        }

        /**
         * An Async wrapper for UpdateAccountPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountPreferencesRequestT = Model::UpdateAccountPreferencesRequest>
        void UpdateAccountPreferencesAsync(const UpdateAccountPreferencesRequestT& request, const UpdateAccountPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::UpdateAccountPreferences, request, handler, context);
        }

        /**
         * Updates a Chime Webhook Configuration<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/UpdateChimeWebhookConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChimeWebhookConfigurationOutcome UpdateChimeWebhookConfiguration(const Model::UpdateChimeWebhookConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateChimeWebhookConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChimeWebhookConfigurationRequestT = Model::UpdateChimeWebhookConfigurationRequest>
        Model::UpdateChimeWebhookConfigurationOutcomeCallable UpdateChimeWebhookConfigurationCallable(const UpdateChimeWebhookConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::UpdateChimeWebhookConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateChimeWebhookConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChimeWebhookConfigurationRequestT = Model::UpdateChimeWebhookConfigurationRequest>
        void UpdateChimeWebhookConfigurationAsync(const UpdateChimeWebhookConfigurationRequestT& request, const UpdateChimeWebhookConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::UpdateChimeWebhookConfiguration, request, handler, context);
        }

        /**
         * Updates MS Teams Channel Configuration<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/UpdateMicrosoftTeamsChannelConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMicrosoftTeamsChannelConfigurationOutcome UpdateMicrosoftTeamsChannelConfiguration(const Model::UpdateMicrosoftTeamsChannelConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateMicrosoftTeamsChannelConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMicrosoftTeamsChannelConfigurationRequestT = Model::UpdateMicrosoftTeamsChannelConfigurationRequest>
        Model::UpdateMicrosoftTeamsChannelConfigurationOutcomeCallable UpdateMicrosoftTeamsChannelConfigurationCallable(const UpdateMicrosoftTeamsChannelConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::UpdateMicrosoftTeamsChannelConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateMicrosoftTeamsChannelConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMicrosoftTeamsChannelConfigurationRequestT = Model::UpdateMicrosoftTeamsChannelConfigurationRequest>
        void UpdateMicrosoftTeamsChannelConfigurationAsync(const UpdateMicrosoftTeamsChannelConfigurationRequestT& request, const UpdateMicrosoftTeamsChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::UpdateMicrosoftTeamsChannelConfiguration, request, handler, context);
        }

        /**
         * Updates Slack Channel Configuration<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/UpdateSlackChannelConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSlackChannelConfigurationOutcome UpdateSlackChannelConfiguration(const Model::UpdateSlackChannelConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSlackChannelConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSlackChannelConfigurationRequestT = Model::UpdateSlackChannelConfigurationRequest>
        Model::UpdateSlackChannelConfigurationOutcomeCallable UpdateSlackChannelConfigurationCallable(const UpdateSlackChannelConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::UpdateSlackChannelConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateSlackChannelConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSlackChannelConfigurationRequestT = Model::UpdateSlackChannelConfigurationRequest>
        void UpdateSlackChannelConfigurationAsync(const UpdateSlackChannelConfigurationRequestT& request, const UpdateSlackChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::UpdateSlackChannelConfiguration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ChatbotEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ChatbotClient>;
      void init(const ChatbotClientConfiguration& clientConfiguration);

      ChatbotClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ChatbotEndpointProviderBase> m_endpointProvider;
  };

} // namespace chatbot
} // namespace Aws
