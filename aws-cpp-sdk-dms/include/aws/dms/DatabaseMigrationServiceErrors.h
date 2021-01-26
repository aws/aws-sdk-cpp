/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

namespace Aws
{
namespace DatabaseMigrationService
{
enum class DatabaseMigrationServiceErrors
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

  ACCESS_DENIED_FAULT= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  INSUFFICIENT_RESOURCE_CAPACITY_FAULT,
  INVALID_CERTIFICATE_FAULT,
  INVALID_RESOURCE_STATE_FAULT,
  INVALID_SUBNET,
  K_M_S_ACCESS_DENIED_FAULT,
  K_M_S_DISABLED_FAULT,
  K_M_S_FAULT,
  K_M_S_INVALID_STATE_FAULT,
  K_M_S_KEY_NOT_ACCESSIBLE_FAULT,
  K_M_S_NOT_FOUND_FAULT,
  K_M_S_THROTTLING_FAULT,
  REPLICATION_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS,
  RESOURCE_ALREADY_EXISTS_FAULT,
  RESOURCE_NOT_FOUND_FAULT,
  RESOURCE_QUOTA_EXCEEDED_FAULT,
  S3_ACCESS_DENIED_FAULT,
  S3_RESOURCE_NOT_FOUND_FAULT,
  STORAGE_QUOTA_EXCEEDED_FAULT,
  SUBNET_ALREADY_IN_USE,
  S_N_S_INVALID_TOPIC_FAULT,
  S_N_S_NO_AUTHORIZATION_FAULT,
  UPGRADE_DEPENDENCY_FAILURE_FAULT
};

class AWS_DATABASEMIGRATIONSERVICE_API DatabaseMigrationServiceError : public Aws::Client::AWSError<DatabaseMigrationServiceErrors>
{
public:
  DatabaseMigrationServiceError() {}
  DatabaseMigrationServiceError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<DatabaseMigrationServiceErrors>(rhs) {}
  DatabaseMigrationServiceError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<DatabaseMigrationServiceErrors>(rhs) {}
  DatabaseMigrationServiceError(const Aws::Client::AWSError<DatabaseMigrationServiceErrors>& rhs) : Aws::Client::AWSError<DatabaseMigrationServiceErrors>(rhs) {}
  DatabaseMigrationServiceError(Aws::Client::AWSError<DatabaseMigrationServiceErrors>&& rhs) : Aws::Client::AWSError<DatabaseMigrationServiceErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace DatabaseMigrationServiceErrorMapper
{
  AWS_DATABASEMIGRATIONSERVICE_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace DatabaseMigrationService
} // namespace Aws
