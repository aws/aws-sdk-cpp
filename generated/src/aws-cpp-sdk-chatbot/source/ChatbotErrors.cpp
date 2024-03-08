/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/chatbot/ChatbotErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::chatbot;

namespace Aws
{
namespace chatbot
{
namespace ChatbotErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int UPDATE_SLACK_CHANNEL_CONFIGURATION_HASH = HashingUtils::HashString("UpdateSlackChannelConfigurationException");
static const int LIST_TEAMS_CHANNEL_CONFIGURATIONS_HASH = HashingUtils::HashString("ListTeamsChannelConfigurationsException");
static const int LIST_MICROSOFT_TEAMS_CONFIGURED_TEAMS_HASH = HashingUtils::HashString("ListMicrosoftTeamsConfiguredTeamsException");
static const int CREATE_CHIME_WEBHOOK_CONFIGURATION_HASH = HashingUtils::HashString("CreateChimeWebhookConfigurationException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CREATE_SLACK_CHANNEL_CONFIGURATION_HASH = HashingUtils::HashString("CreateSlackChannelConfigurationException");
static const int UPDATE_ACCOUNT_PREFERENCES_HASH = HashingUtils::HashString("UpdateAccountPreferencesException");
static const int UPDATE_CHIME_WEBHOOK_CONFIGURATION_HASH = HashingUtils::HashString("UpdateChimeWebhookConfigurationException");
static const int DELETE_SLACK_CHANNEL_CONFIGURATION_HASH = HashingUtils::HashString("DeleteSlackChannelConfigurationException");
static const int DESCRIBE_SLACK_WORKSPACES_HASH = HashingUtils::HashString("DescribeSlackWorkspacesException");
static const int DESCRIBE_SLACK_CHANNEL_CONFIGURATIONS_HASH = HashingUtils::HashString("DescribeSlackChannelConfigurationsException");
static const int DESCRIBE_SLACK_USER_IDENTITIES_HASH = HashingUtils::HashString("DescribeSlackUserIdentitiesException");
static const int DESCRIBE_CHIME_WEBHOOK_CONFIGURATIONS_HASH = HashingUtils::HashString("DescribeChimeWebhookConfigurationsException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int DELETE_TEAMS_CONFIGURED_TEAM_HASH = HashingUtils::HashString("DeleteTeamsConfiguredTeamException");
static const int DELETE_MICROSOFT_TEAMS_USER_IDENTITY_HASH = HashingUtils::HashString("DeleteMicrosoftTeamsUserIdentityException");
static const int CREATE_TEAMS_CHANNEL_CONFIGURATION_HASH = HashingUtils::HashString("CreateTeamsChannelConfigurationException");
static const int GET_ACCOUNT_PREFERENCES_HASH = HashingUtils::HashString("GetAccountPreferencesException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");
static const int DELETE_SLACK_USER_IDENTITY_HASH = HashingUtils::HashString("DeleteSlackUserIdentityException");
static const int LIST_MICROSOFT_TEAMS_USER_IDENTITIES_HASH = HashingUtils::HashString("ListMicrosoftTeamsUserIdentitiesException");
static const int UPDATE_TEAMS_CHANNEL_CONFIGURATION_HASH = HashingUtils::HashString("UpdateTeamsChannelConfigurationException");
static const int GET_TEAMS_CHANNEL_CONFIGURATION_HASH = HashingUtils::HashString("GetTeamsChannelConfigurationException");
static const int DELETE_CHIME_WEBHOOK_CONFIGURATION_HASH = HashingUtils::HashString("DeleteChimeWebhookConfigurationException");
static const int DELETE_SLACK_WORKSPACE_AUTHORIZATION_FAULT_HASH = HashingUtils::HashString("DeleteSlackWorkspaceAuthorizationFault");
static const int DELETE_TEAMS_CHANNEL_CONFIGURATION_HASH = HashingUtils::HashString("DeleteTeamsChannelConfigurationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UPDATE_SLACK_CHANNEL_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::UPDATE_SLACK_CHANNEL_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIST_TEAMS_CHANNEL_CONFIGURATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::LIST_TEAMS_CHANNEL_CONFIGURATIONS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIST_MICROSOFT_TEAMS_CONFIGURED_TEAMS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::LIST_MICROSOFT_TEAMS_CONFIGURED_TEAMS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CREATE_CHIME_WEBHOOK_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::CREATE_CHIME_WEBHOOK_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == CREATE_SLACK_CHANNEL_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::CREATE_SLACK_CHANNEL_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UPDATE_ACCOUNT_PREFERENCES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::UPDATE_ACCOUNT_PREFERENCES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UPDATE_CHIME_WEBHOOK_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::UPDATE_CHIME_WEBHOOK_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELETE_SLACK_CHANNEL_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::DELETE_SLACK_CHANNEL_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DESCRIBE_SLACK_WORKSPACES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::DESCRIBE_SLACK_WORKSPACES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DESCRIBE_SLACK_CHANNEL_CONFIGURATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::DESCRIBE_SLACK_CHANNEL_CONFIGURATIONS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DESCRIBE_SLACK_USER_IDENTITIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::DESCRIBE_SLACK_USER_IDENTITIES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DESCRIBE_CHIME_WEBHOOK_CONFIGURATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::DESCRIBE_CHIME_WEBHOOK_CONFIGURATIONS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELETE_TEAMS_CONFIGURED_TEAM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::DELETE_TEAMS_CONFIGURED_TEAM), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELETE_MICROSOFT_TEAMS_USER_IDENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::DELETE_MICROSOFT_TEAMS_USER_IDENTITY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CREATE_TEAMS_CHANNEL_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::CREATE_TEAMS_CHANNEL_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == GET_ACCOUNT_PREFERENCES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::GET_ACCOUNT_PREFERENCES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELETE_SLACK_USER_IDENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::DELETE_SLACK_USER_IDENTITY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIST_MICROSOFT_TEAMS_USER_IDENTITIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::LIST_MICROSOFT_TEAMS_USER_IDENTITIES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UPDATE_TEAMS_CHANNEL_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::UPDATE_TEAMS_CHANNEL_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == GET_TEAMS_CHANNEL_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::GET_TEAMS_CHANNEL_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELETE_CHIME_WEBHOOK_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::DELETE_CHIME_WEBHOOK_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELETE_SLACK_WORKSPACE_AUTHORIZATION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::DELETE_SLACK_WORKSPACE_AUTHORIZATION_FAULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DELETE_TEAMS_CHANNEL_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ChatbotErrors::DELETE_TEAMS_CHANNEL_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ChatbotErrorMapper
} // namespace chatbot
} // namespace Aws
