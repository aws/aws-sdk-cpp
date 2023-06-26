/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>

namespace Aws
{
namespace GlobalAccelerator
{
enum class GlobalAcceleratorErrors
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

  ACCELERATOR_NOT_DISABLED= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  ACCELERATOR_NOT_FOUND,
  ASSOCIATED_ENDPOINT_GROUP_FOUND,
  ASSOCIATED_LISTENER_FOUND,
  BYOIP_CIDR_NOT_FOUND,
  CONFLICT,
  ENDPOINT_ALREADY_EXISTS,
  ENDPOINT_GROUP_ALREADY_EXISTS,
  ENDPOINT_GROUP_NOT_FOUND,
  ENDPOINT_NOT_FOUND,
  INCORRECT_CIDR_STATE,
  INTERNAL_SERVICE_ERROR,
  INVALID_ARGUMENT,
  INVALID_NEXT_TOKEN,
  INVALID_PORT_RANGE,
  LIMIT_EXCEEDED,
  LISTENER_NOT_FOUND,
  TRANSACTION_IN_PROGRESS
};

class AWS_GLOBALACCELERATOR_API GlobalAcceleratorError : public Aws::Client::AWSError<GlobalAcceleratorErrors>
{
public:
  GlobalAcceleratorError() {}
  GlobalAcceleratorError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<GlobalAcceleratorErrors>(rhs) {}
  GlobalAcceleratorError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<GlobalAcceleratorErrors>(rhs) {}
  GlobalAcceleratorError(const Aws::Client::AWSError<GlobalAcceleratorErrors>& rhs) : Aws::Client::AWSError<GlobalAcceleratorErrors>(rhs) {}
  GlobalAcceleratorError(Aws::Client::AWSError<GlobalAcceleratorErrors>&& rhs) : Aws::Client::AWSError<GlobalAcceleratorErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace GlobalAcceleratorErrorMapper
{
  AWS_GLOBALACCELERATOR_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace GlobalAccelerator
} // namespace Aws
