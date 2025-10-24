﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>

namespace Aws {
namespace CodeConnections {
enum class CodeConnectionsErrors {
  // From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7,                // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8,  // SDK should never allow
  MISSING_PARAMETER = 9,             // SDK should never allow
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

  CONCURRENT_MODIFICATION = static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CONDITIONAL_CHECK_FAILED,
  CONFLICT,
  INTERNAL_SERVER,
  INVALID_INPUT,
  LIMIT_EXCEEDED,
  RESOURCE_ALREADY_EXISTS,
  RESOURCE_UNAVAILABLE,
  RETRY_LATEST_COMMIT_FAILED,
  SYNC_BLOCKER_DOES_NOT_EXIST,
  SYNC_CONFIGURATION_STILL_EXISTS,
  UNSUPPORTED_OPERATION,
  UNSUPPORTED_PROVIDER_TYPE,
  UPDATE_OUT_OF_SYNC
};

class AWS_CODECONNECTIONS_API CodeConnectionsError : public Aws::Client::AWSError<CodeConnectionsErrors> {
 public:
  CodeConnectionsError() {}
  CodeConnectionsError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<CodeConnectionsErrors>(rhs) {}
  CodeConnectionsError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<CodeConnectionsErrors>(rhs) {}
  CodeConnectionsError(const Aws::Client::AWSError<CodeConnectionsErrors>& rhs) : Aws::Client::AWSError<CodeConnectionsErrors>(rhs) {}
  CodeConnectionsError(Aws::Client::AWSError<CodeConnectionsErrors>&& rhs) : Aws::Client::AWSError<CodeConnectionsErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace CodeConnectionsErrorMapper {
AWS_CODECONNECTIONS_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

}  // namespace CodeConnections
}  // namespace Aws
