/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once

#include <aws/core/client/CoreErrors.h>
#include <aws/config/ConfigService_EXPORTS.h>

namespace Aws
{
namespace ConfigService
{
enum class ConfigServiceErrors
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

  INSUFFICIENT_DELIVERY_POLICY= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  INSUFFICIENT_PERMISSIONS,
  INVALID_CONFIGURATION_RECORDER_NAME,
  INVALID_DELIVERY_CHANNEL_NAME,
  INVALID_EXPRESSION,
  INVALID_LIMIT,
  INVALID_NEXT_TOKEN,
  INVALID_RECORDING_GROUP,
  INVALID_RESULT_TOKEN,
  INVALID_ROLE,
  INVALID_S3_KEY_PREFIX,
  INVALID_S_N_S_TOPIC_A_R_N,
  INVALID_TIME_RANGE,
  LAST_DELIVERY_CHANNEL_DELETE_FAILED,
  LIMIT_EXCEEDED,
  MAX_NUMBER_OF_CONFIGURATION_RECORDERS_EXCEEDED,
  MAX_NUMBER_OF_CONFIG_RULES_EXCEEDED,
  MAX_NUMBER_OF_DELIVERY_CHANNELS_EXCEEDED,
  MAX_NUMBER_OF_ORGANIZATION_CONFIG_RULES_EXCEEDED,
  MAX_NUMBER_OF_RETENTION_CONFIGURATIONS_EXCEEDED,
  NO_AVAILABLE_CONFIGURATION_RECORDER,
  NO_AVAILABLE_DELIVERY_CHANNEL,
  NO_AVAILABLE_ORGANIZATION,
  NO_RUNNING_CONFIGURATION_RECORDER,
  NO_SUCH_BUCKET,
  NO_SUCH_CONFIGURATION_AGGREGATOR,
  NO_SUCH_CONFIGURATION_RECORDER,
  NO_SUCH_CONFIG_RULE,
  NO_SUCH_DELIVERY_CHANNEL,
  NO_SUCH_ORGANIZATION_CONFIG_RULE,
  NO_SUCH_REMEDIATION_CONFIGURATION,
  NO_SUCH_RETENTION_CONFIGURATION,
  ORGANIZATION_ACCESS_DENIED,
  ORGANIZATION_ALL_FEATURES_NOT_ENABLED,
  OVERSIZED_CONFIGURATION_ITEM,
  REMEDIATION_IN_PROGRESS,
  RESOURCE_IN_USE,
  RESOURCE_NOT_DISCOVERED,
  TOO_MANY_TAGS
};
namespace ConfigServiceErrorMapper
{
  AWS_CONFIGSERVICE_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace ConfigService
} // namespace Aws
