/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/elasticfilesystem/EFS_EXPORTS.h>

namespace Aws
{
namespace EFS
{
enum class EFSErrors
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

  ACCESS_POINT_ALREADY_EXISTS= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  ACCESS_POINT_LIMIT_EXCEEDED,
  ACCESS_POINT_NOT_FOUND,
  AVAILABILITY_ZONES_MISMATCH,
  BAD_REQUEST,
  DEPENDENCY_TIMEOUT,
  FILE_SYSTEM_ALREADY_EXISTS,
  FILE_SYSTEM_IN_USE,
  FILE_SYSTEM_LIMIT_EXCEEDED,
  FILE_SYSTEM_NOT_FOUND,
  INCORRECT_FILE_SYSTEM_LIFE_CYCLE_STATE,
  INCORRECT_MOUNT_TARGET_STATE,
  INSUFFICIENT_THROUGHPUT_CAPACITY,
  INVALID_POLICY,
  IP_ADDRESS_IN_USE,
  MOUNT_TARGET_CONFLICT,
  MOUNT_TARGET_NOT_FOUND,
  NETWORK_INTERFACE_LIMIT_EXCEEDED,
  NO_FREE_ADDRESSES_IN_SUBNET,
  POLICY_NOT_FOUND,
  SECURITY_GROUP_LIMIT_EXCEEDED,
  SECURITY_GROUP_NOT_FOUND,
  SUBNET_NOT_FOUND,
  THROUGHPUT_LIMIT_EXCEEDED,
  TOO_MANY_REQUESTS,
  UNSUPPORTED_AVAILABILITY_ZONE
};

class AWS_EFS_API EFSError : public Aws::Client::AWSError<EFSErrors>
{
public:
  EFSError() {}
  EFSError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<EFSErrors>(rhs) {}
  EFSError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<EFSErrors>(rhs) {}
  EFSError(const Aws::Client::AWSError<EFSErrors>& rhs) : Aws::Client::AWSError<EFSErrors>(rhs) {}
  EFSError(Aws::Client::AWSError<EFSErrors>&& rhs) : Aws::Client::AWSError<EFSErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace EFSErrorMapper
{
  AWS_EFS_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace EFS
} // namespace Aws
