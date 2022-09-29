/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws
{
namespace FSx
{
enum class FSxErrors
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

  ACTIVE_DIRECTORY= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  BACKUP_BEING_COPIED,
  BACKUP_IN_PROGRESS,
  BACKUP_NOT_FOUND,
  BACKUP_RESTORING,
  BAD_REQUEST,
  DATA_REPOSITORY_ASSOCIATION_NOT_FOUND,
  DATA_REPOSITORY_TASK_ENDED,
  DATA_REPOSITORY_TASK_EXECUTING,
  DATA_REPOSITORY_TASK_NOT_FOUND,
  FILE_CACHE_NOT_FOUND,
  FILE_SYSTEM_NOT_FOUND,
  INCOMPATIBLE_PARAMETER,
  INCOMPATIBLE_REGION_FOR_MULTI_A_Z,
  INVALID_DATA_REPOSITORY_TYPE,
  INVALID_DESTINATION_KMS_KEY,
  INVALID_EXPORT_PATH,
  INVALID_IMPORT_PATH,
  INVALID_NETWORK_SETTINGS,
  INVALID_PER_UNIT_STORAGE_THROUGHPUT,
  INVALID_REGION,
  INVALID_SOURCE_KMS_KEY,
  MISSING_FILE_CACHE_CONFIGURATION,
  MISSING_FILE_SYSTEM_CONFIGURATION,
  MISSING_VOLUME_CONFIGURATION,
  NOT_SERVICE_RESOURCE,
  RESOURCE_DOES_NOT_SUPPORT_TAGGING,
  SERVICE_LIMIT_EXCEEDED,
  SNAPSHOT_NOT_FOUND,
  SOURCE_BACKUP_UNAVAILABLE,
  STORAGE_VIRTUAL_MACHINE_NOT_FOUND,
  UNSUPPORTED_OPERATION,
  VOLUME_NOT_FOUND
};

class AWS_FSX_API FSxError : public Aws::Client::AWSError<FSxErrors>
{
public:
  FSxError() {}
  FSxError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<FSxErrors>(rhs) {}
  FSxError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<FSxErrors>(rhs) {}
  FSxError(const Aws::Client::AWSError<FSxErrors>& rhs) : Aws::Client::AWSError<FSxErrors>(rhs) {}
  FSxError(Aws::Client::AWSError<FSxErrors>&& rhs) : Aws::Client::AWSError<FSxErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace FSxErrorMapper
{
  AWS_FSX_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace FSx
} // namespace Aws
