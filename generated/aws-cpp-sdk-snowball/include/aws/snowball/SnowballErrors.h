/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/snowball/Snowball_EXPORTS.h>

namespace Aws
{
namespace Snowball
{
enum class SnowballErrors
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

  CLUSTER_LIMIT_EXCEEDED= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CONFLICT,
  EC2_REQUEST_FAILED,
  INVALID_ADDRESS,
  INVALID_INPUT_COMBINATION,
  INVALID_JOB_STATE,
  INVALID_NEXT_TOKEN,
  INVALID_RESOURCE,
  K_M_S_REQUEST_FAILED,
  RETURN_SHIPPING_LABEL_ALREADY_EXISTS,
  UNSUPPORTED_ADDRESS
};

class AWS_SNOWBALL_API SnowballError : public Aws::Client::AWSError<SnowballErrors>
{
public:
  SnowballError() {}
  SnowballError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<SnowballErrors>(rhs) {}
  SnowballError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<SnowballErrors>(rhs) {}
  SnowballError(const Aws::Client::AWSError<SnowballErrors>& rhs) : Aws::Client::AWSError<SnowballErrors>(rhs) {}
  SnowballError(Aws::Client::AWSError<SnowballErrors>&& rhs) : Aws::Client::AWSError<SnowballErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace SnowballErrorMapper
{
  AWS_SNOWBALL_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace Snowball
} // namespace Aws
