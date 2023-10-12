/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodb/DynamoDBErrors.h>
#include <aws/dynamodb/model/ConditionalCheckFailedException.h>
#include <aws/dynamodb/model/TransactionCanceledException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DynamoDB;
using namespace Aws::DynamoDB::Model;

namespace Aws
{
namespace DynamoDB
{
template<> AWS_DYNAMODB_API ConditionalCheckFailedException DynamoDBError::GetModeledError()
{
  assert(this->GetErrorType() == DynamoDBErrors::CONDITIONAL_CHECK_FAILED);
  return ConditionalCheckFailedException(this->GetJsonPayload().View());
}

template<> AWS_DYNAMODB_API TransactionCanceledException DynamoDBError::GetModeledError()
{
  assert(this->GetErrorType() == DynamoDBErrors::TRANSACTION_CANCELED);
  return TransactionCanceledException(this->GetJsonPayload().View());
}

namespace DynamoDBErrorMapper
{

static constexpr uint32_t CONDITIONAL_CHECK_FAILED_HASH = ConstExprHashingUtils::HashString("ConditionalCheckFailedException");
static constexpr uint32_t TRANSACTION_CANCELED_HASH = ConstExprHashingUtils::HashString("TransactionCanceledException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t REPLICA_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ReplicaAlreadyExistsException");
static constexpr uint32_t TRANSACTION_CONFLICT_HASH = ConstExprHashingUtils::HashString("TransactionConflictException");
static constexpr uint32_t REPLICA_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ReplicaNotFoundException");
static constexpr uint32_t IMPORT_CONFLICT_HASH = ConstExprHashingUtils::HashString("ImportConflictException");
static constexpr uint32_t TABLE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TableNotFoundException");
static constexpr uint32_t EXPORT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ExportNotFoundException");
static constexpr uint32_t TRANSACTION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("TransactionInProgressException");
static constexpr uint32_t BACKUP_IN_USE_HASH = ConstExprHashingUtils::HashString("BackupInUseException");
static constexpr uint32_t CONTINUOUS_BACKUPS_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("ContinuousBackupsUnavailableException");
static constexpr uint32_t TABLE_IN_USE_HASH = ConstExprHashingUtils::HashString("TableInUseException");
static constexpr uint32_t PROVISIONED_THROUGHPUT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ProvisionedThroughputExceededException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t INVALID_RESTORE_TIME_HASH = ConstExprHashingUtils::HashString("InvalidRestoreTimeException");
static constexpr uint32_t ITEM_COLLECTION_SIZE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ItemCollectionSizeLimitExceededException");
static constexpr uint32_t BACKUP_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("BackupNotFoundException");
static constexpr uint32_t IDEMPOTENT_PARAMETER_MISMATCH_HASH = ConstExprHashingUtils::HashString("IdempotentParameterMismatchException");
static constexpr uint32_t POINT_IN_TIME_RECOVERY_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("PointInTimeRecoveryUnavailableException");
static constexpr uint32_t TABLE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("TableAlreadyExistsException");
static constexpr uint32_t EXPORT_CONFLICT_HASH = ConstExprHashingUtils::HashString("ExportConflictException");
static constexpr uint32_t GLOBAL_TABLE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("GlobalTableAlreadyExistsException");
static constexpr uint32_t INVALID_EXPORT_TIME_HASH = ConstExprHashingUtils::HashString("InvalidExportTimeException");
static constexpr uint32_t REQUEST_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("RequestLimitExceeded");
static constexpr uint32_t IMPORT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ImportNotFoundException");
static constexpr uint32_t GLOBAL_TABLE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("GlobalTableNotFoundException");
static constexpr uint32_t DUPLICATE_ITEM_HASH = ConstExprHashingUtils::HashString("DuplicateItemException");
static constexpr uint32_t INDEX_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("IndexNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
