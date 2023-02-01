/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
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
  INCORRECT_KEY,
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
  K_M_S_INVALID_MAC,
  K_M_S_INVALID_SIGNATURE,
  K_M_S_INVALID_STATE,
  LIMIT_EXCEEDED,
  MALFORMED_POLICY_DOCUMENT,
  NOT_FOUND,
  TAG,
  UNSUPPORTED_OPERATION,
  XKS_KEY_ALREADY_IN_USE,
  XKS_KEY_INVALID_CONFIGURATION,
  XKS_KEY_NOT_FOUND,
  XKS_PROXY_INCORRECT_AUTHENTICATION_CREDENTIAL,
  XKS_PROXY_INVALID_CONFIGURATION,
  XKS_PROXY_INVALID_RESPONSE,
  XKS_PROXY_URI_ENDPOINT_IN_USE,
  XKS_PROXY_URI_IN_USE,
  XKS_PROXY_URI_UNREACHABLE,
  XKS_PROXY_VPC_ENDPOINT_SERVICE_INVALID_CONFIGURATION,
  XKS_PROXY_VPC_ENDPOINT_SERVICE_IN_USE,
  XKS_PROXY_VPC_ENDPOINT_SERVICE_NOT_FOUND
};

class AWS_KMS_API KMSError : public Aws::Client::AWSError<KMSErrors>
{
public:
  KMSError() {}
  KMSError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<KMSErrors>(rhs) {}
  KMSError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<KMSErrors>(rhs) {}
  KMSError(const Aws::Client::AWSError<KMSErrors>& rhs) : Aws::Client::AWSError<KMSErrors>(rhs) {}
  KMSError(Aws::Client::AWSError<KMSErrors>&& rhs) : Aws::Client::AWSError<KMSErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace KMSErrorMapper
{
  AWS_KMS_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace KMS
} // namespace Aws
