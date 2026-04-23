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
#include <aws/kms/KMS_EXPORTS.h>

namespace Aws
{
namespace KMS
{
enum class KMSErrors
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

  ALREADY_EXISTS= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CLOUD_HSM_CLUSTER_INVALID_CONFIGURATION,
  CLOUD_HSM_CLUSTER_IN_USE,
  CLOUD_HSM_CLUSTER_NOT_ACTIVE,
  CLOUD_HSM_CLUSTER_NOT_FOUND,
  CLOUD_HSM_CLUSTER_NOT_RELATED,
  CUSTOM_KEY_STORE_HAS_C_M_KS,
  CUSTOM_KEY_STORE_INVALID_STATE,
  CUSTOM_KEY_STORE_NAME_IN_USE,
  CUSTOM_KEY_STORE_NOT_FOUND,
  DEPENDENCY_TIMEOUT,
  DISABLED,
  EXPIRED_IMPORT_TOKEN,
  INCORRECT_KEY_MATERIAL,
  INCORRECT_TRUST_ANCHOR,
  INVALID_ALIAS_NAME,
  INVALID_ARN,
  INVALID_CIPHERTEXT,
  INVALID_GRANT_ID,
  INVALID_GRANT_TOKEN,
  INVALID_IMPORT_TOKEN,
  INVALID_KEY_USAGE,
  INVALID_MARKER,
  KEY_UNAVAILABLE,
  K_M_S_INTERNAL,
  K_M_S_INVALID_STATE,
  LIMIT_EXCEEDED,
  MALFORMED_POLICY_DOCUMENT,
  NOT_FOUND,
  TAG,
  UNSUPPORTED_OPERATION
};
namespace KMSErrorMapper
{
  AWS_KMS_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace KMS
} // namespace Aws
