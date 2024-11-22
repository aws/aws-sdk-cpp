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
   * <p>The <i>AWS Chatbot API Reference</i> provides descriptions, API request
   * parameters, and the XML response for each of the AWS Chatbot API actions.</p>
   * <p>AWS Chatbot APIs are currently available in the following Regions:</p> <ul>
   * <li> <p>US East (Ohio) - <code>us-east-2</code> </p> </li> <li> <p>US West
   * (Oregon) - <code>us-west-2</code> </p> </li> <li> <p>Asia Pacific (Singapore) -
   * <code>ap-southeast-1</code> </p> </li> <li> <p>Europe (Ireland) -
   * <code>eu-west-1</code> </p> </li> </ul> <p>The AWS Chatbot console can only be
   * used in US East (Ohio). Your configuration data however, is stored in each of
   * the relevant available Regions.</p>  <p>Your AWS CloudTrail events are
   * logged in whatever Region you call from, not US East (N. Virginia) by
   * default.</p> 
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
         * <p>Links a resource (for example, a custom action) to a channel
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/AssociateToConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateToConfigurationOutcome AssociateToConfiguration(const Model::AssociateToConfigurationRequest& request) const;

        /**
         * A Callable wrapper for AssociateToConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateToConfigurationRequestT = Model::AssociateToConfigurationRequest>
        Model::AssociateToConfigurationOutcomeCallable AssociateToConfigurationCallable(const AssociateToConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::AssociateToConfiguration, request);
        }

        /**
         * An Async wrapper for AssociateToConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateToConfigurationRequestT = Model::AssociateToConfigurationRequest>
        void AssociateToConfigurationAsync(const AssociateToConfigurationRequestT& request, const AssociateToConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::AssociateToConfiguration, request, handler, context);
        }

        /**
         * <p>Creates an AWS Chatbot configuration for Amazon Chime.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Creates a custom action that can be invoked as an alias or as a button on a
         * notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/CreateCustomAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomActionOutcome CreateCustomAction(const Model::CreateCustomActionRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomActionRequestT = Model::CreateCustomActionRequest>
        Model::CreateCustomActionOutcomeCallable CreateCustomActionCallable(const CreateCustomActionRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::CreateCustomAction, request);
        }

        /**
         * An Async wrapper for CreateCustomAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomActionRequestT = Model::CreateCustomActionRequest>
        void CreateCustomActionAsync(const CreateCustomActionRequestT& request, const CreateCustomActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::CreateCustomAction, request, handler, context);
        }

        /**
         * <p>Creates an AWS Chatbot configuration for Microsoft Teams.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Creates an AWS Chatbot confugration for Slack.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a Amazon Chime webhook configuration for AWS Chatbot.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Deletes a custom action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DeleteCustomAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomActionOutcome DeleteCustomAction(const Model::DeleteCustomActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomActionRequestT = Model::DeleteCustomActionRequest>
        Model::DeleteCustomActionOutcomeCallable DeleteCustomActionCallable(const DeleteCustomActionRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DeleteCustomAction, request);
        }

        /**
         * An Async wrapper for DeleteCustomAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomActionRequestT = Model::DeleteCustomActionRequest>
        void DeleteCustomActionAsync(const DeleteCustomActionRequestT& request, const DeleteCustomActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DeleteCustomAction, request, handler, context);
        }

        /**
         * <p>Deletes a Microsoft Teams channel configuration for AWS Chatbot</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Deletes the Microsoft Teams team authorization allowing for channels to be
         * configured in that Microsoft Teams team. Note that the Microsoft Teams team must
         * have no channels configured to remove it. </p><p><h3>See Also:</h3>   <a
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
         * <p>Identifes a user level permission for a channel configuration.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Deletes a Slack channel configuration for AWS Chatbot</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Deletes a user level permission for a Slack channel
         * configuration.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes the Slack workspace authorization that allows channels to be
         * configured in that workspace. This requires all configured channels in the
         * workspace to be deleted. </p><p><h3>See Also:</h3>   <a
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
         * <p>Lists Amazon Chime webhook configurations optionally filtered by
         * ChatConfigurationArn</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DescribeChimeWebhookConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChimeWebhookConfigurationsOutcome DescribeChimeWebhookConfigurations(const Model::DescribeChimeWebhookConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeChimeWebhookConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChimeWebhookConfigurationsRequestT = Model::DescribeChimeWebhookConfigurationsRequest>
        Model::DescribeChimeWebhookConfigurationsOutcomeCallable DescribeChimeWebhookConfigurationsCallable(const DescribeChimeWebhookConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&ChatbotClient::DescribeChimeWebhookConfigurations, request);
        }

        /**
         * An Async wrapper for DescribeChimeWebhookConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChimeWebhookConfigurationsRequestT = Model::DescribeChimeWebhookConfigurationsRequest>
        void DescribeChimeWebhookConfigurationsAsync(const DescribeChimeWebhookConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeChimeWebhookConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&ChatbotClient::DescribeChimeWebhookConfigurations, request, handler, context);
        }

        /**
         * <p>Lists Slack channel configurations optionally filtered by
         * ChatConfigurationArn</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DescribeSlackChannelConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlackChannelConfigurationsOutcome DescribeSlackChannelConfigurations(const Model::DescribeSlackChannelConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeSlackChannelConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSlackChannelConfigurationsRequestT = Model::DescribeSlackChannelConfigurationsRequest>
        Model::DescribeSlackChannelConfigurationsOutcomeCallable DescribeSlackChannelConfigurationsCallable(const DescribeSlackChannelConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&ChatbotClient::DescribeSlackChannelConfigurations, request);
        }

        /**
         * An Async wrapper for DescribeSlackChannelConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSlackChannelConfigurationsRequestT = Model::DescribeSlackChannelConfigurationsRequest>
        void DescribeSlackChannelConfigurationsAsync(const DescribeSlackChannelConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeSlackChannelConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&ChatbotClient::DescribeSlackChannelConfigurations, request, handler, context);
        }

        /**
         * <p>Lists all Slack user identities with a mapped role.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DescribeSlackUserIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlackUserIdentitiesOutcome DescribeSlackUserIdentities(const Model::DescribeSlackUserIdentitiesRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeSlackUserIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSlackUserIdentitiesRequestT = Model::DescribeSlackUserIdentitiesRequest>
        Model::DescribeSlackUserIdentitiesOutcomeCallable DescribeSlackUserIdentitiesCallable(const DescribeSlackUserIdentitiesRequestT& request = {}) const
        {
            return SubmitCallable(&ChatbotClient::DescribeSlackUserIdentities, request);
        }

        /**
         * An Async wrapper for DescribeSlackUserIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSlackUserIdentitiesRequestT = Model::DescribeSlackUserIdentitiesRequest>
        void DescribeSlackUserIdentitiesAsync(const DescribeSlackUserIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeSlackUserIdentitiesRequestT& request = {}) const
        {
            return SubmitAsync(&ChatbotClient::DescribeSlackUserIdentities, request, handler, context);
        }

        /**
         * <p>List all authorized Slack workspaces connected to the AWS Account onboarded
         * with AWS Chatbot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DescribeSlackWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlackWorkspacesOutcome DescribeSlackWorkspaces(const Model::DescribeSlackWorkspacesRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeSlackWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSlackWorkspacesRequestT = Model::DescribeSlackWorkspacesRequest>
        Model::DescribeSlackWorkspacesOutcomeCallable DescribeSlackWorkspacesCallable(const DescribeSlackWorkspacesRequestT& request = {}) const
        {
            return SubmitCallable(&ChatbotClient::DescribeSlackWorkspaces, request);
        }

        /**
         * An Async wrapper for DescribeSlackWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSlackWorkspacesRequestT = Model::DescribeSlackWorkspacesRequest>
        void DescribeSlackWorkspacesAsync(const DescribeSlackWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeSlackWorkspacesRequestT& request = {}) const
        {
            return SubmitAsync(&ChatbotClient::DescribeSlackWorkspaces, request, handler, context);
        }

        /**
         * <p>Unlink a resource, for example a custom action, from a channel
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/DisassociateFromConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromConfigurationOutcome DisassociateFromConfiguration(const Model::DisassociateFromConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFromConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateFromConfigurationRequestT = Model::DisassociateFromConfigurationRequest>
        Model::DisassociateFromConfigurationOutcomeCallable DisassociateFromConfigurationCallable(const DisassociateFromConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::DisassociateFromConfiguration, request);
        }

        /**
         * An Async wrapper for DisassociateFromConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateFromConfigurationRequestT = Model::DisassociateFromConfigurationRequest>
        void DisassociateFromConfigurationAsync(const DisassociateFromConfigurationRequestT& request, const DisassociateFromConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::DisassociateFromConfiguration, request, handler, context);
        }

        /**
         * <p>Returns AWS Chatbot account preferences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/GetAccountPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountPreferencesOutcome GetAccountPreferences(const Model::GetAccountPreferencesRequest& request = {}) const;

        /**
         * A Callable wrapper for GetAccountPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountPreferencesRequestT = Model::GetAccountPreferencesRequest>
        Model::GetAccountPreferencesOutcomeCallable GetAccountPreferencesCallable(const GetAccountPreferencesRequestT& request = {}) const
        {
            return SubmitCallable(&ChatbotClient::GetAccountPreferences, request);
        }

        /**
         * An Async wrapper for GetAccountPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountPreferencesRequestT = Model::GetAccountPreferencesRequest>
        void GetAccountPreferencesAsync(const GetAccountPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetAccountPreferencesRequestT& request = {}) const
        {
            return SubmitAsync(&ChatbotClient::GetAccountPreferences, request, handler, context);
        }

        /**
         * <p>Returns a custom action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/GetCustomAction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomActionOutcome GetCustomAction(const Model::GetCustomActionRequest& request) const;

        /**
         * A Callable wrapper for GetCustomAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCustomActionRequestT = Model::GetCustomActionRequest>
        Model::GetCustomActionOutcomeCallable GetCustomActionCallable(const GetCustomActionRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::GetCustomAction, request);
        }

        /**
         * An Async wrapper for GetCustomAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCustomActionRequestT = Model::GetCustomActionRequest>
        void GetCustomActionAsync(const GetCustomActionRequestT& request, const GetCustomActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::GetCustomAction, request, handler, context);
        }

        /**
         * <p>Returns a Microsoft Teams channel configuration in an AWS
         * account.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists resources associated with a channel configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/ListAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociationsOutcome ListAssociations(const Model::ListAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssociationsRequestT = Model::ListAssociationsRequest>
        Model::ListAssociationsOutcomeCallable ListAssociationsCallable(const ListAssociationsRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::ListAssociations, request);
        }

        /**
         * An Async wrapper for ListAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssociationsRequestT = Model::ListAssociationsRequest>
        void ListAssociationsAsync(const ListAssociationsRequestT& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::ListAssociations, request, handler, context);
        }

        /**
         * <p>Lists custom actions defined in this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/ListCustomActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomActionsOutcome ListCustomActions(const Model::ListCustomActionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCustomActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomActionsRequestT = Model::ListCustomActionsRequest>
        Model::ListCustomActionsOutcomeCallable ListCustomActionsCallable(const ListCustomActionsRequestT& request = {}) const
        {
            return SubmitCallable(&ChatbotClient::ListCustomActions, request);
        }

        /**
         * An Async wrapper for ListCustomActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomActionsRequestT = Model::ListCustomActionsRequest>
        void ListCustomActionsAsync(const ListCustomActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCustomActionsRequestT& request = {}) const
        {
            return SubmitAsync(&ChatbotClient::ListCustomActions, request, handler, context);
        }

        /**
         * <p>Lists all AWS Chatbot Microsoft Teams channel configurations in an AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/ListMicrosoftTeamsChannelConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMicrosoftTeamsChannelConfigurationsOutcome ListMicrosoftTeamsChannelConfigurations(const Model::ListMicrosoftTeamsChannelConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListMicrosoftTeamsChannelConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMicrosoftTeamsChannelConfigurationsRequestT = Model::ListMicrosoftTeamsChannelConfigurationsRequest>
        Model::ListMicrosoftTeamsChannelConfigurationsOutcomeCallable ListMicrosoftTeamsChannelConfigurationsCallable(const ListMicrosoftTeamsChannelConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&ChatbotClient::ListMicrosoftTeamsChannelConfigurations, request);
        }

        /**
         * An Async wrapper for ListMicrosoftTeamsChannelConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMicrosoftTeamsChannelConfigurationsRequestT = Model::ListMicrosoftTeamsChannelConfigurationsRequest>
        void ListMicrosoftTeamsChannelConfigurationsAsync(const ListMicrosoftTeamsChannelConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListMicrosoftTeamsChannelConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&ChatbotClient::ListMicrosoftTeamsChannelConfigurations, request, handler, context);
        }

        /**
         * <p>Lists all authorized Microsoft Teams for an AWS Account</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/ListMicrosoftTeamsConfiguredTeams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMicrosoftTeamsConfiguredTeamsOutcome ListMicrosoftTeamsConfiguredTeams(const Model::ListMicrosoftTeamsConfiguredTeamsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListMicrosoftTeamsConfiguredTeams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMicrosoftTeamsConfiguredTeamsRequestT = Model::ListMicrosoftTeamsConfiguredTeamsRequest>
        Model::ListMicrosoftTeamsConfiguredTeamsOutcomeCallable ListMicrosoftTeamsConfiguredTeamsCallable(const ListMicrosoftTeamsConfiguredTeamsRequestT& request = {}) const
        {
            return SubmitCallable(&ChatbotClient::ListMicrosoftTeamsConfiguredTeams, request);
        }

        /**
         * An Async wrapper for ListMicrosoftTeamsConfiguredTeams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMicrosoftTeamsConfiguredTeamsRequestT = Model::ListMicrosoftTeamsConfiguredTeamsRequest>
        void ListMicrosoftTeamsConfiguredTeamsAsync(const ListMicrosoftTeamsConfiguredTeamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListMicrosoftTeamsConfiguredTeamsRequestT& request = {}) const
        {
            return SubmitAsync(&ChatbotClient::ListMicrosoftTeamsConfiguredTeams, request, handler, context);
        }

        /**
         * <p>A list all Microsoft Teams user identities with a mapped role.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/ListMicrosoftTeamsUserIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMicrosoftTeamsUserIdentitiesOutcome ListMicrosoftTeamsUserIdentities(const Model::ListMicrosoftTeamsUserIdentitiesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListMicrosoftTeamsUserIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMicrosoftTeamsUserIdentitiesRequestT = Model::ListMicrosoftTeamsUserIdentitiesRequest>
        Model::ListMicrosoftTeamsUserIdentitiesOutcomeCallable ListMicrosoftTeamsUserIdentitiesCallable(const ListMicrosoftTeamsUserIdentitiesRequestT& request = {}) const
        {
            return SubmitCallable(&ChatbotClient::ListMicrosoftTeamsUserIdentities, request);
        }

        /**
         * An Async wrapper for ListMicrosoftTeamsUserIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMicrosoftTeamsUserIdentitiesRequestT = Model::ListMicrosoftTeamsUserIdentitiesRequest>
        void ListMicrosoftTeamsUserIdentitiesAsync(const ListMicrosoftTeamsUserIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListMicrosoftTeamsUserIdentitiesRequestT& request = {}) const
        {
            return SubmitAsync(&ChatbotClient::ListMicrosoftTeamsUserIdentities, request, handler, context);
        }

        /**
         * <p>Lists all of the tags associated with the Amazon Resource Name (ARN) that you
         * specify. The resource can be a user, server, or role.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Attaches a key-value pair to a resource, as identified by its Amazon Resource
         * Name (ARN). Resources are users, servers, roles, and other
         * entities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::TagResource, request, handler, context);
        }

        /**
         * <p>Detaches a key-value pair from a resource, as identified by its Amazon
         * Resource Name (ARN). Resources are users, servers, roles, and other
         * entities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates AWS Chatbot account preferences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/UpdateAccountPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountPreferencesOutcome UpdateAccountPreferences(const Model::UpdateAccountPreferencesRequest& request = {}) const;

        /**
         * A Callable wrapper for UpdateAccountPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountPreferencesRequestT = Model::UpdateAccountPreferencesRequest>
        Model::UpdateAccountPreferencesOutcomeCallable UpdateAccountPreferencesCallable(const UpdateAccountPreferencesRequestT& request = {}) const
        {
            return SubmitCallable(&ChatbotClient::UpdateAccountPreferences, request);
        }

        /**
         * An Async wrapper for UpdateAccountPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountPreferencesRequestT = Model::UpdateAccountPreferencesRequest>
        void UpdateAccountPreferencesAsync(const UpdateAccountPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const UpdateAccountPreferencesRequestT& request = {}) const
        {
            return SubmitAsync(&ChatbotClient::UpdateAccountPreferences, request, handler, context);
        }

        /**
         * <p>Updates a Amazon Chime webhook configuration.</p><p><h3>See Also:</h3>   <a
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
         * <p>Updates a custom action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/UpdateCustomAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomActionOutcome UpdateCustomAction(const Model::UpdateCustomActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateCustomAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCustomActionRequestT = Model::UpdateCustomActionRequest>
        Model::UpdateCustomActionOutcomeCallable UpdateCustomActionCallable(const UpdateCustomActionRequestT& request) const
        {
            return SubmitCallable(&ChatbotClient::UpdateCustomAction, request);
        }

        /**
         * An Async wrapper for UpdateCustomAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCustomActionRequestT = Model::UpdateCustomActionRequest>
        void UpdateCustomActionAsync(const UpdateCustomActionRequestT& request, const UpdateCustomActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChatbotClient::UpdateCustomAction, request, handler, context);
        }

        /**
         * <p>Updates an Microsoft Teams channel configuration.</p><p><h3>See Also:</h3>  
         * <a
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
         * <p>Updates a Slack channel configuration.</p><p><h3>See Also:</h3>   <a
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
      std::shared_ptr<ChatbotEndpointProviderBase> m_endpointProvider;
  };

} // namespace chatbot
} // namespace Aws
