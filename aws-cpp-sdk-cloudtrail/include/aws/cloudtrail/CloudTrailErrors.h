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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>

namespace Aws
{
namespace CloudTrail
{
enum class CloudTrailErrors
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

  CLOUD_TRAIL_ACCESS_NOT_ENABLED= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CLOUD_TRAIL_A_R_N_INVALID,
  CLOUD_WATCH_LOGS_DELIVERY_UNAVAILABLE,
  INSUFFICIENT_DEPENDENCY_SERVICE_ACCESS_PERMISSION,
  INSUFFICIENT_ENCRYPTION_POLICY,
  INSUFFICIENT_S3_BUCKET_POLICY,
  INSUFFICIENT_SNS_TOPIC_POLICY,
  INVALID_CLOUD_WATCH_LOGS_LOG_GROUP_ARN,
  INVALID_CLOUD_WATCH_LOGS_ROLE_ARN,
  INVALID_EVENT_SELECTORS,
  INVALID_HOME_REGION,
  INVALID_KMS_KEY_ID,
  INVALID_LOOKUP_ATTRIBUTES,
  INVALID_MAX_RESULTS,
  INVALID_NEXT_TOKEN,
  INVALID_S3_BUCKET_NAME,
  INVALID_S3_PREFIX,
  INVALID_SNS_TOPIC_NAME,
  INVALID_TAG_PARAMETER,
  INVALID_TIME_RANGE,
  INVALID_TOKEN,
  INVALID_TRAIL_NAME,
  KMS,
  KMS_KEY_DISABLED,
  KMS_KEY_NOT_FOUND,
  MAXIMUM_NUMBER_OF_TRAILS_EXCEEDED,
  NOT_ORGANIZATION_MASTER_ACCOUNT,
  OPERATION_NOT_PERMITTED,
  ORGANIZATIONS_NOT_IN_USE,
  ORGANIZATION_NOT_IN_ALL_FEATURES_MODE,
  RESOURCE_TYPE_NOT_SUPPORTED,
  S3_BUCKET_DOES_NOT_EXIST,
  TAGS_LIMIT_EXCEEDED,
  TRAIL_ALREADY_EXISTS,
  TRAIL_NOT_FOUND,
  TRAIL_NOT_PROVIDED,
  UNSUPPORTED_OPERATION
};
namespace CloudTrailErrorMapper
{
  AWS_CLOUDTRAIL_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace CloudTrail
} // namespace Aws
