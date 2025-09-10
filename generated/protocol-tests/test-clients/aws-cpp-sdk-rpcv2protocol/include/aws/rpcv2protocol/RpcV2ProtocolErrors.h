/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace RpcV2Protocol {
enum class RpcV2ProtocolErrors {
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

  COMPLEX = static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  INVALID_GREETING
};

class AWS_RPCV2PROTOCOL_API RpcV2ProtocolError : public Aws::Client::AWSError<RpcV2ProtocolErrors> {
 public:
  RpcV2ProtocolError() {}
  RpcV2ProtocolError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<RpcV2ProtocolErrors>(rhs) {}
  RpcV2ProtocolError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<RpcV2ProtocolErrors>(rhs) {}
  RpcV2ProtocolError(const Aws::Client::AWSError<RpcV2ProtocolErrors>& rhs) : Aws::Client::AWSError<RpcV2ProtocolErrors>(rhs) {}
  RpcV2ProtocolError(Aws::Client::AWSError<RpcV2ProtocolErrors>&& rhs) : Aws::Client::AWSError<RpcV2ProtocolErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace RpcV2ProtocolErrorMapper {
AWS_RPCV2PROTOCOL_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

}  // namespace RpcV2Protocol
}  // namespace Aws
