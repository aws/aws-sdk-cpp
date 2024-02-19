/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/chatbot/Chatbot_EXPORTS.h>

namespace Aws
{
namespace chatbot
{
enum class ChatbotErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,

  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  CONFLICT= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CREATE_CHIME_WEBHOOK_CONFIGURATION,
  CREATE_SLACK_CHANNEL_CONFIGURATION,
  CREATE_TEAMS_CHANNEL_CONFIGURATION,
  DELETE_CHIME_WEBHOOK_CONFIGURATION,
  DELETE_MICROSOFT_TEAMS_USER_IDENTITY,
  DELETE_SLACK_CHANNEL_CONFIGURATION,
  DELETE_SLACK_USER_IDENTITY,
  DELETE_SLACK_WORKSPACE_AUTHORIZATION_FAULT,
  DELETE_TEAMS_CHANNEL_CONFIGURATION,
  DELETE_TEAMS_CONFIGURED_TEAM,
  DESCRIBE_CHIME_WEBHOOK_CONFIGURATIONS,
  DESCRIBE_SLACK_CHANNEL_CONFIGURATIONS,
  DESCRIBE_SLACK_USER_IDENTITIES,
  DESCRIBE_SLACK_WORKSPACES,
  GET_ACCOUNT_PREFERENCES,
  GET_TEAMS_CHANNEL_CONFIGURATION,
  INVALID_PARAMETER,
  INVALID_REQUEST,
  LIMIT_EXCEEDED,
  LIST_MICROSOFT_TEAMS_CONFIGURED_TEAMS,
  LIST_MICROSOFT_TEAMS_USER_IDENTITIES,
  LIST_TEAMS_CHANNEL_CONFIGURATIONS,
  UPDATE_ACCOUNT_PREFERENCES,
  UPDATE_CHIME_WEBHOOK_CONFIGURATION,
  UPDATE_SLACK_CHANNEL_CONFIGURATION,
  UPDATE_TEAMS_CHANNEL_CONFIGURATION
};

class AWS_CHATBOT_API ChatbotError : public Aws::Client::AWSError<ChatbotErrors>
{
public:
  ChatbotError() {}
  ChatbotError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<ChatbotErrors>(rhs) {}
  ChatbotError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<ChatbotErrors>(rhs) {}
  ChatbotError(const Aws::Client::AWSError<ChatbotErrors>& rhs) : Aws::Client::AWSError<ChatbotErrors>(rhs) {}
  ChatbotError(Aws::Client::AWSError<ChatbotErrors>&& rhs) : Aws::Client::AWSError<ChatbotErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace ChatbotErrorMapper
{
  AWS_CHATBOT_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace chatbot
} // namespace Aws
