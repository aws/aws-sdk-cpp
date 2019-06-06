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
#include <aws/email/SES_EXPORTS.h>

namespace Aws
{
namespace SES
{
enum class SESErrors
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

  ACCOUNT_SENDING_PAUSED= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  ALREADY_EXISTS,
  CANNOT_DELETE,
  CONFIGURATION_SET_ALREADY_EXISTS,
  CONFIGURATION_SET_DOES_NOT_EXIST,
  CONFIGURATION_SET_SENDING_PAUSED,
  CUSTOM_VERIFICATION_EMAIL_INVALID_CONTENT,
  CUSTOM_VERIFICATION_EMAIL_TEMPLATE_ALREADY_EXISTS,
  CUSTOM_VERIFICATION_EMAIL_TEMPLATE_DOES_NOT_EXIST,
  EVENT_DESTINATION_ALREADY_EXISTS,
  EVENT_DESTINATION_DOES_NOT_EXIST,
  FROM_EMAIL_ADDRESS_NOT_VERIFIED,
  INVALID_CLOUD_WATCH_DESTINATION,
  INVALID_CONFIGURATION_SET,
  INVALID_DELIVERY_OPTIONS,
  INVALID_FIREHOSE_DESTINATION,
  INVALID_LAMBDA_FUNCTION,
  INVALID_POLICY,
  INVALID_RENDERING_PARAMETER,
  INVALID_S3_CONFIGURATION,
  INVALID_SNS_TOPIC,
  INVALID_S_N_S_DESTINATION,
  INVALID_TEMPLATE,
  INVALID_TRACKING_OPTIONS,
  LIMIT_EXCEEDED,
  MAIL_FROM_DOMAIN_NOT_VERIFIED,
  MESSAGE_REJECTED,
  MISSING_RENDERING_ATTRIBUTE,
  PRODUCTION_ACCESS_NOT_GRANTED,
  RULE_DOES_NOT_EXIST,
  RULE_SET_DOES_NOT_EXIST,
  TEMPLATE_DOES_NOT_EXIST,
  TRACKING_OPTIONS_ALREADY_EXISTS,
  TRACKING_OPTIONS_DOES_NOT_EXIST
};
namespace SESErrorMapper
{
  AWS_SES_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace SES
} // namespace Aws
