/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/ds/DirectoryService_EXPORTS.h>

namespace Aws
{
namespace DirectoryService
{
enum class DirectoryServiceErrors
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

  AUTHENTICATION_FAILED= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CERTIFICATE_ALREADY_EXISTS,
  CERTIFICATE_DOES_NOT_EXIST,
  CERTIFICATE_IN_USE,
  CERTIFICATE_LIMIT_EXCEEDED,
  CLIENT,
  DIRECTORY_ALREADY_IN_REGION,
  DIRECTORY_ALREADY_SHARED,
  DIRECTORY_DOES_NOT_EXIST,
  DIRECTORY_IN_DESIRED_STATE,
  DIRECTORY_LIMIT_EXCEEDED,
  DIRECTORY_NOT_SHARED,
  DIRECTORY_UNAVAILABLE,
  DOMAIN_CONTROLLER_LIMIT_EXCEEDED,
  ENTITY_ALREADY_EXISTS,
  ENTITY_DOES_NOT_EXIST,
  INCOMPATIBLE_SETTINGS,
  INSUFFICIENT_PERMISSIONS,
  INVALID_CERTIFICATE,
  INVALID_CLIENT_AUTH_STATUS,
  INVALID_L_D_A_P_S_STATUS,
  INVALID_NEXT_TOKEN,
  INVALID_PARAMETER,
  INVALID_PASSWORD,
  INVALID_TARGET,
  IP_ROUTE_LIMIT_EXCEEDED,
  NO_AVAILABLE_CERTIFICATE,
  ORGANIZATIONS,
  REGION_LIMIT_EXCEEDED,
  SERVICE,
  SHARE_LIMIT_EXCEEDED,
  SNAPSHOT_LIMIT_EXCEEDED,
  TAG_LIMIT_EXCEEDED,
  UNSUPPORTED_OPERATION,
  UNSUPPORTED_SETTINGS,
  USER_DOES_NOT_EXIST
};

class AWS_DIRECTORYSERVICE_API DirectoryServiceError : public Aws::Client::AWSError<DirectoryServiceErrors>
{
public:
  DirectoryServiceError() {}
  DirectoryServiceError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<DirectoryServiceErrors>(rhs) {}
  DirectoryServiceError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<DirectoryServiceErrors>(rhs) {}
  DirectoryServiceError(const Aws::Client::AWSError<DirectoryServiceErrors>& rhs) : Aws::Client::AWSError<DirectoryServiceErrors>(rhs) {}
  DirectoryServiceError(Aws::Client::AWSError<DirectoryServiceErrors>&& rhs) : Aws::Client::AWSError<DirectoryServiceErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace DirectoryServiceErrorMapper
{
  AWS_DIRECTORYSERVICE_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace DirectoryService
} // namespace Aws
