/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodb/DynamoDBErrors.h>
#include <aws/dynamodb/model/TransactionCanceledException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DynamoDB;
using namespace Aws::DynamoDB::Model;

namespace Aws
{
namespace DynamoDB
{
template<> AWS_DYNAMODB_API TransactionCanceledException DynamoDBError::GetModeledError()
{
  assert(this->GetErrorType() == DynamoDBErrors::TRANSACTION_CANCELED);
  return TransactionCanceledException(this->GetJsonPayload().View());
}

namespace DynamoDBErrorMapper
{

static const int CONDITIONAL_CHECK_FAILED_HASH = HashingUtils::HashString("ConditionalCheckFailedException");
static const int TRANSACTION_CANCELED_HASH = HashingUtils::HashString("TransactionCanceledException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int REPLICA_ALREADY_EXISTS_HASH = HashingUtils::HashString("ReplicaAlreadyExistsException");
static const int TRANSACTION_CONFLICT_HASH = HashingUtils::HashString("TransactionConflictException");
static const int REPLICA_NOT_FOUND_HASH = HashingUtils::HashString("ReplicaNotFoundException");
static const int IMPORT_CONFLICT_HASH = HashingUtils::HashString("ImportConflictException");
static const int TABLE_NOT_FOUND_HASH = HashingUtils::HashString("TableNotFoundException");
static const int EXPORT_NOT_FOUND_HASH = HashingUtils::HashString("ExportNotFoundException");
static const int TRANSACTION_IN_PROGRESS_HASH = HashingUtils::HashString("TransactionInProgressException");
static const int BACKUP_IN_USE_HASH = HashingUtils::HashString("BackupInUseException");
static const int CONTINUOUS_BACKUPS_UNAVAILABLE_HASH = HashingUtils::HashString("ContinuousBackupsUnavailableException");
static const int TABLE_IN_USE_HASH = HashingUtils::HashString("TableInUseException");
static const int PROVISIONED_THROUGHPUT_EXCEEDED_HASH = HashingUtils::HashString("ProvisionedThroughputExceededException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INVALID_RESTORE_TIME_HASH = HashingUtils::HashString("InvalidRestoreTimeException");
static const int ITEM_COLLECTION_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ItemCollectionSizeLimitExceededException");
static const int BACKUP_NOT_FOUND_HASH = HashingUtils::HashString("BackupNotFoundException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int POINT_IN_TIME_RECOVERY_UNAVAILABLE_HASH = HashingUtils::HashString("PointInTimeRecoveryUnavailableException");
static const int TABLE_ALREADY_EXISTS_HASH = HashingUtils::HashString("TableAlreadyExistsException");
static const int EXPORT_CONFLICT_HASH = HashingUtils::HashString("ExportConflictException");
static const int GLOBAL_TABLE_ALREADY_EXISTS_HASH = HashingUtils::HashString("GlobalTableAlreadyExistsException");
static const int INVALID_EXPORT_TIME_HASH = HashingUtils::HashString("InvalidExportTimeException");
static const int REQUEST_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RequestLimitExceeded");
static const int IMPORT_NOT_FOUND_HASH = HashingUtils::HashString("ImportNotFoundException");
static const int GLOBAL_TABLE_NOT_FOUND_HASH = HashingUtils::HashString("GlobalTableNotFoundException");
static const int DUPLICATE_ITEM_HASH = HashingUtils::HashString("DuplicateItemException");
static const int INDEX_NOT_FOUND_HASH = HashingUtils::HashString("IndexNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONDITIONAL_CHECK_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::CONDITIONAL_CHECK_FAILED), false);
  }
  else if (hashCode == TRANSACTION_CANCELED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::TRANSACTION_CANCELED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == REPLICA_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::REPLICA_ALREADY_EXISTS), false);
  }
  else if (hashCode == TRANSACTION_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::TRANSACTION_CONFLICT), false);
  }
  else if (hashCode == REPLICA_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::REPLICA_NOT_FOUND), false);
  }
  else if (hashCode == IMPORT_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::IMPORT_CONFLICT), false);
  }
  else if (hashCode == TABLE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::TABLE_NOT_FOUND), false);
  }
  else if (hashCode == EXPORT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::EXPORT_NOT_FOUND), false);
  }
  else if (hashCode == TRANSACTION_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::TRANSACTION_IN_PROGRESS), true);
  }
  else if (hashCode == BACKUP_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::BACKUP_IN_USE), false);
  }
  else if (hashCode == CONTINUOUS_BACKUPS_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::CONTINUOUS_BACKUPS_UNAVAILABLE), false);
  }
  else if (hashCode == TABLE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::TABLE_IN_USE), false);
  }
  else if (hashCode == PROVISIONED_THROUGHPUT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::PROVISIONED_THROUGHPUT_EXCEEDED), true);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::RESOURCE_IN_USE), true);
  }
  else if (hashCode == INVALID_RESTORE_TIME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::INVALID_RESTORE_TIME), false);
  }
  else if (hashCode == ITEM_COLLECTION_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::ITEM_COLLECTION_SIZE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == BACKUP_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::BACKUP_NOT_FOUND), false);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == POINT_IN_TIME_RECOVERY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::POINT_IN_TIME_RECOVERY_UNAVAILABLE), false);
  }
  else if (hashCode == TABLE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::TABLE_ALREADY_EXISTS), false);
  }
  else if (hashCode == EXPORT_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::EXPORT_CONFLICT), false);
  }
  else if (hashCode == GLOBAL_TABLE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::GLOBAL_TABLE_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_EXPORT_TIME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::INVALID_EXPORT_TIME), false);
  }
  else if (hashCode == REQUEST_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::REQUEST_LIMIT_EXCEEDED), true);
  }
  else if (hashCode == IMPORT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::IMPORT_NOT_FOUND), false);
  }
  else if (hashCode == GLOBAL_TABLE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::GLOBAL_TABLE_NOT_FOUND), false);
  }
  else if (hashCode == DUPLICATE_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::DUPLICATE_ITEM), false);
  }
  else if (hashCode == INDEX_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::INDEX_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DynamoDBErrorMapper
} // namespace DynamoDB
} // namespace Aws
