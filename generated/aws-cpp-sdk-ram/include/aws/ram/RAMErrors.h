/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/ram/RAM_EXPORTS.h>

namespace Aws
{
namespace RAM
{
enum class RAMErrors
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

  IDEMPOTENT_PARAMETER_MISMATCH= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  INVALID_CLIENT_TOKEN,
  INVALID_MAX_RESULTS,
  INVALID_NEXT_TOKEN,
  INVALID_PARAMETER,
  INVALID_RESOURCE_TYPE,
  INVALID_STATE_TRANSITION,
  MALFORMED_ARN,
  MISSING_REQUIRED_PARAMETER,
  OPERATION_NOT_PERMITTED,
  RESOURCE_ARN_NOT_FOUND,
  RESOURCE_SHARE_INVITATION_ALREADY_ACCEPTED,
  RESOURCE_SHARE_INVITATION_ALREADY_REJECTED,
  RESOURCE_SHARE_INVITATION_ARN_NOT_FOUND,
  RESOURCE_SHARE_INVITATION_EXPIRED,
  RESOURCE_SHARE_LIMIT_EXCEEDED,
  SERVER_INTERNAL,
  TAG_LIMIT_EXCEEDED,
  TAG_POLICY_VIOLATION,
  UNKNOWN_RESOURCE
};

class AWS_RAM_API RAMError : public Aws::Client::AWSError<RAMErrors>
{
public:
  RAMError() {}
  RAMError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<RAMErrors>(rhs) {}
  RAMError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<RAMErrors>(rhs) {}
  RAMError(const Aws::Client::AWSError<RAMErrors>& rhs) : Aws::Client::AWSError<RAMErrors>(rhs) {}
  RAMError(Aws::Client::AWSError<RAMErrors>&& rhs) : Aws::Client::AWSError<RAMErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace RAMErrorMapper
{
  AWS_RAM_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace RAM
} // namespace Aws
