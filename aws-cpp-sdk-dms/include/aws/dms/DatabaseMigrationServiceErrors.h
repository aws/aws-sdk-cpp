﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once

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
  NETWORK_CONNECTION = 99,
  
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  ACCESS_DENIED_FAULT= static_cast<int>(Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  INSUFFICIENT_RESOURCE_CAPACITY_FAULT,
  INVALID_CERTIFICATE_FAULT,
  INVALID_RESOURCE_STATE_FAULT,
  INVALID_SUBNET,
  K_M_S_KEY_NOT_ACCESSIBLE_FAULT,
  REPLICATION_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS,
  RESOURCE_ALREADY_EXISTS_FAULT,
  RESOURCE_NOT_FOUND_FAULT,
  RESOURCE_QUOTA_EXCEEDED_FAULT,
  STORAGE_QUOTA_EXCEEDED_FAULT,
  SUBNET_ALREADY_IN_USE,
  UPGRADE_DEPENDENCY_FAILURE_FAULT
};
namespace DatabaseMigrationServiceErrorMapper
{
  AWS_DATABASEMIGRATIONSERVICE_API Client::AWSError<Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace DatabaseMigrationService
} // namespace Aws