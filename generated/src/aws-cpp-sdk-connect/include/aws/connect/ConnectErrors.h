/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/connect/Connect_EXPORTS.h>

namespace Aws
{
namespace Connect
{
enum class ConnectErrors
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

  CONTACT_FLOW_NOT_PUBLISHED= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CONTACT_NOT_FOUND,
  DESTINATION_NOT_ALLOWED,
  DUPLICATE_RESOURCE,
  IDEMPOTENCY,
  INTERNAL_SERVICE,
  INVALID_CONTACT_FLOW,
  INVALID_CONTACT_FLOW_MODULE,
  INVALID_PARAMETER,
  INVALID_REQUEST,
  LIMIT_EXCEEDED,
  OUTBOUND_CONTACT_NOT_PERMITTED,
  PROPERTY_VALIDATION,
  RESOURCE_CONFLICT,
  RESOURCE_IN_USE,
  RESOURCE_NOT_READY,
  SERVICE_QUOTA_EXCEEDED,
  USER_NOT_FOUND
};

class AWS_CONNECT_API ConnectError : public Aws::Client::AWSError<ConnectErrors>
{
public:
  ConnectError() {}
  ConnectError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<ConnectErrors>(rhs) {}
  ConnectError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<ConnectErrors>(rhs) {}
  ConnectError(const Aws::Client::AWSError<ConnectErrors>& rhs) : Aws::Client::AWSError<ConnectErrors>(rhs) {}
  ConnectError(Aws::Client::AWSError<ConnectErrors>&& rhs) : Aws::Client::AWSError<ConnectErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace ConnectErrorMapper
{
  AWS_CONNECT_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace Connect
} // namespace Aws
