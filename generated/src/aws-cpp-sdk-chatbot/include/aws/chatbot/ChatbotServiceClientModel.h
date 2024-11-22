/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/chatbot/ChatbotErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/chatbot/ChatbotEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ChatbotClient header */
#include <aws/chatbot/model/AssociateToConfigurationResult.h>
#include <aws/chatbot/model/CreateChimeWebhookConfigurationResult.h>
#include <aws/chatbot/model/CreateCustomActionResult.h>
#include <aws/chatbot/model/CreateMicrosoftTeamsChannelConfigurationResult.h>
#include <aws/chatbot/model/CreateSlackChannelConfigurationResult.h>
#include <aws/chatbot/model/DeleteChimeWebhookConfigurationResult.h>
#include <aws/chatbot/model/DeleteCustomActionResult.h>
#include <aws/chatbot/model/DeleteMicrosoftTeamsChannelConfigurationResult.h>
#include <aws/chatbot/model/DeleteMicrosoftTeamsConfiguredTeamResult.h>
#include <aws/chatbot/model/DeleteMicrosoftTeamsUserIdentityResult.h>
#include <aws/chatbot/model/DeleteSlackChannelConfigurationResult.h>
#include <aws/chatbot/model/DeleteSlackUserIdentityResult.h>
#include <aws/chatbot/model/DeleteSlackWorkspaceAuthorizationResult.h>
#include <aws/chatbot/model/DescribeChimeWebhookConfigurationsResult.h>
#include <aws/chatbot/model/DescribeSlackChannelConfigurationsResult.h>
#include <aws/chatbot/model/DescribeSlackUserIdentitiesResult.h>
#include <aws/chatbot/model/DescribeSlackWorkspacesResult.h>
#include <aws/chatbot/model/DisassociateFromConfigurationResult.h>
#include <aws/chatbot/model/GetAccountPreferencesResult.h>
#include <aws/chatbot/model/GetCustomActionResult.h>
#include <aws/chatbot/model/GetMicrosoftTeamsChannelConfigurationResult.h>
#include <aws/chatbot/model/ListAssociationsResult.h>
#include <aws/chatbot/model/ListCustomActionsResult.h>
#include <aws/chatbot/model/ListMicrosoftTeamsChannelConfigurationsResult.h>
#include <aws/chatbot/model/ListMicrosoftTeamsConfiguredTeamsResult.h>
#include <aws/chatbot/model/ListMicrosoftTeamsUserIdentitiesResult.h>
#include <aws/chatbot/model/ListTagsForResourceResult.h>
#include <aws/chatbot/model/TagResourceResult.h>
#include <aws/chatbot/model/UntagResourceResult.h>
#include <aws/chatbot/model/UpdateAccountPreferencesResult.h>
#include <aws/chatbot/model/UpdateChimeWebhookConfigurationResult.h>
#include <aws/chatbot/model/UpdateCustomActionResult.h>
#include <aws/chatbot/model/UpdateMicrosoftTeamsChannelConfigurationResult.h>
#include <aws/chatbot/model/UpdateSlackChannelConfigurationResult.h>
#include <aws/chatbot/model/DescribeSlackUserIdentitiesRequest.h>
#include <aws/chatbot/model/ListMicrosoftTeamsChannelConfigurationsRequest.h>
#include <aws/chatbot/model/ListMicrosoftTeamsConfiguredTeamsRequest.h>
#include <aws/chatbot/model/DescribeSlackChannelConfigurationsRequest.h>
#include <aws/chatbot/model/ListMicrosoftTeamsUserIdentitiesRequest.h>
#include <aws/chatbot/model/ListCustomActionsRequest.h>
#include <aws/chatbot/model/DescribeSlackWorkspacesRequest.h>
#include <aws/chatbot/model/DescribeChimeWebhookConfigurationsRequest.h>
#include <aws/chatbot/model/GetAccountPreferencesRequest.h>
#include <aws/chatbot/model/UpdateAccountPreferencesRequest.h>
/* End of service model headers required in ChatbotClient header */

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

  namespace chatbot
  {
    using ChatbotClientConfiguration = Aws::Client::GenericClientConfiguration;
    using ChatbotEndpointProviderBase = Aws::chatbot::Endpoint::ChatbotEndpointProviderBase;
    using ChatbotEndpointProvider = Aws::chatbot::Endpoint::ChatbotEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ChatbotClient header */
      class AssociateToConfigurationRequest;
      class CreateChimeWebhookConfigurationRequest;
      class CreateCustomActionRequest;
      class CreateMicrosoftTeamsChannelConfigurationRequest;
      class CreateSlackChannelConfigurationRequest;
      class DeleteChimeWebhookConfigurationRequest;
      class DeleteCustomActionRequest;
      class DeleteMicrosoftTeamsChannelConfigurationRequest;
      class DeleteMicrosoftTeamsConfiguredTeamRequest;
      class DeleteMicrosoftTeamsUserIdentityRequest;
      class DeleteSlackChannelConfigurationRequest;
      class DeleteSlackUserIdentityRequest;
      class DeleteSlackWorkspaceAuthorizationRequest;
      class DescribeChimeWebhookConfigurationsRequest;
      class DescribeSlackChannelConfigurationsRequest;
      class DescribeSlackUserIdentitiesRequest;
      class DescribeSlackWorkspacesRequest;
      class DisassociateFromConfigurationRequest;
      class GetAccountPreferencesRequest;
      class GetCustomActionRequest;
      class GetMicrosoftTeamsChannelConfigurationRequest;
      class ListAssociationsRequest;
      class ListCustomActionsRequest;
      class ListMicrosoftTeamsChannelConfigurationsRequest;
      class ListMicrosoftTeamsConfiguredTeamsRequest;
      class ListMicrosoftTeamsUserIdentitiesRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAccountPreferencesRequest;
      class UpdateChimeWebhookConfigurationRequest;
      class UpdateCustomActionRequest;
      class UpdateMicrosoftTeamsChannelConfigurationRequest;
      class UpdateSlackChannelConfigurationRequest;
      /* End of service model forward declarations required in ChatbotClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateToConfigurationResult, ChatbotError> AssociateToConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateChimeWebhookConfigurationResult, ChatbotError> CreateChimeWebhookConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateCustomActionResult, ChatbotError> CreateCustomActionOutcome;
      typedef Aws::Utils::Outcome<CreateMicrosoftTeamsChannelConfigurationResult, ChatbotError> CreateMicrosoftTeamsChannelConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateSlackChannelConfigurationResult, ChatbotError> CreateSlackChannelConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteChimeWebhookConfigurationResult, ChatbotError> DeleteChimeWebhookConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomActionResult, ChatbotError> DeleteCustomActionOutcome;
      typedef Aws::Utils::Outcome<DeleteMicrosoftTeamsChannelConfigurationResult, ChatbotError> DeleteMicrosoftTeamsChannelConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteMicrosoftTeamsConfiguredTeamResult, ChatbotError> DeleteMicrosoftTeamsConfiguredTeamOutcome;
      typedef Aws::Utils::Outcome<DeleteMicrosoftTeamsUserIdentityResult, ChatbotError> DeleteMicrosoftTeamsUserIdentityOutcome;
      typedef Aws::Utils::Outcome<DeleteSlackChannelConfigurationResult, ChatbotError> DeleteSlackChannelConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteSlackUserIdentityResult, ChatbotError> DeleteSlackUserIdentityOutcome;
      typedef Aws::Utils::Outcome<DeleteSlackWorkspaceAuthorizationResult, ChatbotError> DeleteSlackWorkspaceAuthorizationOutcome;
      typedef Aws::Utils::Outcome<DescribeChimeWebhookConfigurationsResult, ChatbotError> DescribeChimeWebhookConfigurationsOutcome;
      typedef Aws::Utils::Outcome<DescribeSlackChannelConfigurationsResult, ChatbotError> DescribeSlackChannelConfigurationsOutcome;
      typedef Aws::Utils::Outcome<DescribeSlackUserIdentitiesResult, ChatbotError> DescribeSlackUserIdentitiesOutcome;
      typedef Aws::Utils::Outcome<DescribeSlackWorkspacesResult, ChatbotError> DescribeSlackWorkspacesOutcome;
      typedef Aws::Utils::Outcome<DisassociateFromConfigurationResult, ChatbotError> DisassociateFromConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetAccountPreferencesResult, ChatbotError> GetAccountPreferencesOutcome;
      typedef Aws::Utils::Outcome<GetCustomActionResult, ChatbotError> GetCustomActionOutcome;
      typedef Aws::Utils::Outcome<GetMicrosoftTeamsChannelConfigurationResult, ChatbotError> GetMicrosoftTeamsChannelConfigurationOutcome;
      typedef Aws::Utils::Outcome<ListAssociationsResult, ChatbotError> ListAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListCustomActionsResult, ChatbotError> ListCustomActionsOutcome;
      typedef Aws::Utils::Outcome<ListMicrosoftTeamsChannelConfigurationsResult, ChatbotError> ListMicrosoftTeamsChannelConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListMicrosoftTeamsConfiguredTeamsResult, ChatbotError> ListMicrosoftTeamsConfiguredTeamsOutcome;
      typedef Aws::Utils::Outcome<ListMicrosoftTeamsUserIdentitiesResult, ChatbotError> ListMicrosoftTeamsUserIdentitiesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ChatbotError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ChatbotError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ChatbotError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountPreferencesResult, ChatbotError> UpdateAccountPreferencesOutcome;
      typedef Aws::Utils::Outcome<UpdateChimeWebhookConfigurationResult, ChatbotError> UpdateChimeWebhookConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateCustomActionResult, ChatbotError> UpdateCustomActionOutcome;
      typedef Aws::Utils::Outcome<UpdateMicrosoftTeamsChannelConfigurationResult, ChatbotError> UpdateMicrosoftTeamsChannelConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateSlackChannelConfigurationResult, ChatbotError> UpdateSlackChannelConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateToConfigurationOutcome> AssociateToConfigurationOutcomeCallable;
      typedef std::future<CreateChimeWebhookConfigurationOutcome> CreateChimeWebhookConfigurationOutcomeCallable;
      typedef std::future<CreateCustomActionOutcome> CreateCustomActionOutcomeCallable;
      typedef std::future<CreateMicrosoftTeamsChannelConfigurationOutcome> CreateMicrosoftTeamsChannelConfigurationOutcomeCallable;
      typedef std::future<CreateSlackChannelConfigurationOutcome> CreateSlackChannelConfigurationOutcomeCallable;
      typedef std::future<DeleteChimeWebhookConfigurationOutcome> DeleteChimeWebhookConfigurationOutcomeCallable;
      typedef std::future<DeleteCustomActionOutcome> DeleteCustomActionOutcomeCallable;
      typedef std::future<DeleteMicrosoftTeamsChannelConfigurationOutcome> DeleteMicrosoftTeamsChannelConfigurationOutcomeCallable;
      typedef std::future<DeleteMicrosoftTeamsConfiguredTeamOutcome> DeleteMicrosoftTeamsConfiguredTeamOutcomeCallable;
      typedef std::future<DeleteMicrosoftTeamsUserIdentityOutcome> DeleteMicrosoftTeamsUserIdentityOutcomeCallable;
      typedef std::future<DeleteSlackChannelConfigurationOutcome> DeleteSlackChannelConfigurationOutcomeCallable;
      typedef std::future<DeleteSlackUserIdentityOutcome> DeleteSlackUserIdentityOutcomeCallable;
      typedef std::future<DeleteSlackWorkspaceAuthorizationOutcome> DeleteSlackWorkspaceAuthorizationOutcomeCallable;
      typedef std::future<DescribeChimeWebhookConfigurationsOutcome> DescribeChimeWebhookConfigurationsOutcomeCallable;
      typedef std::future<DescribeSlackChannelConfigurationsOutcome> DescribeSlackChannelConfigurationsOutcomeCallable;
      typedef std::future<DescribeSlackUserIdentitiesOutcome> DescribeSlackUserIdentitiesOutcomeCallable;
      typedef std::future<DescribeSlackWorkspacesOutcome> DescribeSlackWorkspacesOutcomeCallable;
      typedef std::future<DisassociateFromConfigurationOutcome> DisassociateFromConfigurationOutcomeCallable;
      typedef std::future<GetAccountPreferencesOutcome> GetAccountPreferencesOutcomeCallable;
      typedef std::future<GetCustomActionOutcome> GetCustomActionOutcomeCallable;
      typedef std::future<GetMicrosoftTeamsChannelConfigurationOutcome> GetMicrosoftTeamsChannelConfigurationOutcomeCallable;
      typedef std::future<ListAssociationsOutcome> ListAssociationsOutcomeCallable;
      typedef std::future<ListCustomActionsOutcome> ListCustomActionsOutcomeCallable;
      typedef std::future<ListMicrosoftTeamsChannelConfigurationsOutcome> ListMicrosoftTeamsChannelConfigurationsOutcomeCallable;
      typedef std::future<ListMicrosoftTeamsConfiguredTeamsOutcome> ListMicrosoftTeamsConfiguredTeamsOutcomeCallable;
      typedef std::future<ListMicrosoftTeamsUserIdentitiesOutcome> ListMicrosoftTeamsUserIdentitiesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccountPreferencesOutcome> UpdateAccountPreferencesOutcomeCallable;
      typedef std::future<UpdateChimeWebhookConfigurationOutcome> UpdateChimeWebhookConfigurationOutcomeCallable;
      typedef std::future<UpdateCustomActionOutcome> UpdateCustomActionOutcomeCallable;
      typedef std::future<UpdateMicrosoftTeamsChannelConfigurationOutcome> UpdateMicrosoftTeamsChannelConfigurationOutcomeCallable;
      typedef std::future<UpdateSlackChannelConfigurationOutcome> UpdateSlackChannelConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ChatbotClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ChatbotClient*, const Model::AssociateToConfigurationRequest&, const Model::AssociateToConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateToConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::CreateChimeWebhookConfigurationRequest&, const Model::CreateChimeWebhookConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChimeWebhookConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::CreateCustomActionRequest&, const Model::CreateCustomActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomActionResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::CreateMicrosoftTeamsChannelConfigurationRequest&, const Model::CreateMicrosoftTeamsChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMicrosoftTeamsChannelConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::CreateSlackChannelConfigurationRequest&, const Model::CreateSlackChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSlackChannelConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DeleteChimeWebhookConfigurationRequest&, const Model::DeleteChimeWebhookConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChimeWebhookConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DeleteCustomActionRequest&, const Model::DeleteCustomActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomActionResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DeleteMicrosoftTeamsChannelConfigurationRequest&, const Model::DeleteMicrosoftTeamsChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMicrosoftTeamsChannelConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DeleteMicrosoftTeamsConfiguredTeamRequest&, const Model::DeleteMicrosoftTeamsConfiguredTeamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMicrosoftTeamsConfiguredTeamResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DeleteMicrosoftTeamsUserIdentityRequest&, const Model::DeleteMicrosoftTeamsUserIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMicrosoftTeamsUserIdentityResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DeleteSlackChannelConfigurationRequest&, const Model::DeleteSlackChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlackChannelConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DeleteSlackUserIdentityRequest&, const Model::DeleteSlackUserIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlackUserIdentityResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DeleteSlackWorkspaceAuthorizationRequest&, const Model::DeleteSlackWorkspaceAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlackWorkspaceAuthorizationResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DescribeChimeWebhookConfigurationsRequest&, const Model::DescribeChimeWebhookConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChimeWebhookConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DescribeSlackChannelConfigurationsRequest&, const Model::DescribeSlackChannelConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSlackChannelConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DescribeSlackUserIdentitiesRequest&, const Model::DescribeSlackUserIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSlackUserIdentitiesResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DescribeSlackWorkspacesRequest&, const Model::DescribeSlackWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSlackWorkspacesResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::DisassociateFromConfigurationRequest&, const Model::DisassociateFromConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFromConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::GetAccountPreferencesRequest&, const Model::GetAccountPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountPreferencesResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::GetCustomActionRequest&, const Model::GetCustomActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomActionResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::GetMicrosoftTeamsChannelConfigurationRequest&, const Model::GetMicrosoftTeamsChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMicrosoftTeamsChannelConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::ListAssociationsRequest&, const Model::ListAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociationsResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::ListCustomActionsRequest&, const Model::ListCustomActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomActionsResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::ListMicrosoftTeamsChannelConfigurationsRequest&, const Model::ListMicrosoftTeamsChannelConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMicrosoftTeamsChannelConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::ListMicrosoftTeamsConfiguredTeamsRequest&, const Model::ListMicrosoftTeamsConfiguredTeamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMicrosoftTeamsConfiguredTeamsResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::ListMicrosoftTeamsUserIdentitiesRequest&, const Model::ListMicrosoftTeamsUserIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMicrosoftTeamsUserIdentitiesResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::UpdateAccountPreferencesRequest&, const Model::UpdateAccountPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountPreferencesResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::UpdateChimeWebhookConfigurationRequest&, const Model::UpdateChimeWebhookConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChimeWebhookConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::UpdateCustomActionRequest&, const Model::UpdateCustomActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCustomActionResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::UpdateMicrosoftTeamsChannelConfigurationRequest&, const Model::UpdateMicrosoftTeamsChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMicrosoftTeamsChannelConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChatbotClient*, const Model::UpdateSlackChannelConfigurationRequest&, const Model::UpdateSlackChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSlackChannelConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace chatbot
} // namespace Aws
