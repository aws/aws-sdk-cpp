/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

namespace Aws
{
namespace DynamoDB
{
enum class DynamoDBErrors
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

  BACKUP_IN_USE= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  BACKUP_NOT_FOUND,
  CONDITIONAL_CHECK_FAILED,
  CONTINUOUS_BACKUPS_UNAVAILABLE,
  DUPLICATE_ITEM,
  EXPORT_CONFLICT,
  EXPORT_NOT_FOUND,
  GLOBAL_TABLE_ALREADY_EXISTS,
  GLOBAL_TABLE_NOT_FOUND,
  IDEMPOTENT_PARAMETER_MISMATCH,
  IMPORT_CONFLICT,
  IMPORT_NOT_FOUND,
  INDEX_NOT_FOUND,
  INVALID_EXPORT_TIME,
  INVALID_RESTORE_TIME,
  ITEM_COLLECTION_SIZE_LIMIT_EXCEEDED,
  LIMIT_EXCEEDED,
  POINT_IN_TIME_RECOVERY_UNAVAILABLE,
  PROVISIONED_THROUGHPUT_EXCEEDED,
  REPLICA_ALREADY_EXISTS,
  REPLICA_NOT_FOUND,
  REQUEST_LIMIT_EXCEEDED,
  RESOURCE_IN_USE,
  TABLE_ALREADY_EXISTS,
  TABLE_IN_USE,
  TABLE_NOT_FOUND,
  TRANSACTION_CANCELED,
  TRANSACTION_CONFLICT,
  TRANSACTION_IN_PROGRESS
};

class AWS_DYNAMODB_API DynamoDBError : public Aws::Client::AWSError<DynamoDBErrors>
{
public:
  DynamoDBError() {}
  DynamoDBError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<DynamoDBErrors>(rhs) {}
  DynamoDBError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<DynamoDBErrors>(rhs) {}
  DynamoDBError(const Aws::Client::AWSError<DynamoDBErrors>& rhs) : Aws::Client::AWSError<DynamoDBErrors>(rhs) {}
  DynamoDBError(Aws::Client::AWSError<DynamoDBErrors>&& rhs) : Aws::Client::AWSError<DynamoDBErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace DynamoDBErrorMapper
{
  AWS_DYNAMODB_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace DynamoDB
} // namespace Aws
