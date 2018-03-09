﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodb/DynamoDBErrors.h>

using namespace Aws::Client;
using namespace Aws::DynamoDB;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace DynamoDBErrorMapper
{

static const int TABLE_ALREADY_EXISTS_HASH = HashingUtils::HashString("TableAlreadyExistsException");
static const int ITEM_COLLECTION_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ItemCollectionSizeLimitExceededException");
static const int CONDITIONAL_CHECK_FAILED_HASH = HashingUtils::HashString("ConditionalCheckFailedException");
static const int BACKUP_NOT_FOUND_HASH = HashingUtils::HashString("BackupNotFoundException");
static const int REPLICA_NOT_FOUND_HASH = HashingUtils::HashString("ReplicaNotFoundException");
static const int CONTINUOUS_BACKUPS_UNAVAILABLE_HASH = HashingUtils::HashString("ContinuousBackupsUnavailableException");
static const int GLOBAL_TABLE_ALREADY_EXISTS_HASH = HashingUtils::HashString("GlobalTableAlreadyExistsException");
static const int TABLE_NOT_FOUND_HASH = HashingUtils::HashString("TableNotFoundException");
static const int BACKUP_IN_USE_HASH = HashingUtils::HashString("BackupInUseException");
static const int TABLE_IN_USE_HASH = HashingUtils::HashString("TableInUseException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int REPLICA_ALREADY_EXISTS_HASH = HashingUtils::HashString("ReplicaAlreadyExistsException");
static const int PROVISIONED_THROUGHPUT_EXCEEDED_HASH = HashingUtils::HashString("ProvisionedThroughputExceededException");
static const int GLOBAL_TABLE_NOT_FOUND_HASH = HashingUtils::HashString("GlobalTableNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TABLE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::TABLE_ALREADY_EXISTS), false);
  }
  else if (hashCode == ITEM_COLLECTION_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::ITEM_COLLECTION_SIZE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CONDITIONAL_CHECK_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::CONDITIONAL_CHECK_FAILED), false);
  }
  else if (hashCode == BACKUP_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::BACKUP_NOT_FOUND), false);
  }
  else if (hashCode == REPLICA_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::REPLICA_NOT_FOUND), false);
  }
  else if (hashCode == CONTINUOUS_BACKUPS_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::CONTINUOUS_BACKUPS_UNAVAILABLE), false);
  }
  else if (hashCode == GLOBAL_TABLE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::GLOBAL_TABLE_ALREADY_EXISTS), false);
  }
  else if (hashCode == TABLE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::TABLE_NOT_FOUND), false);
  }
  else if (hashCode == BACKUP_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::BACKUP_IN_USE), false);
  }
  else if (hashCode == TABLE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::TABLE_IN_USE), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::RESOURCE_IN_USE), true);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == REPLICA_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::REPLICA_ALREADY_EXISTS), false);
  }
  else if (hashCode == PROVISIONED_THROUGHPUT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::PROVISIONED_THROUGHPUT_EXCEEDED), true);
  }
  else if (hashCode == GLOBAL_TABLE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DynamoDBErrors::GLOBAL_TABLE_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DynamoDBErrorMapper
} // namespace DynamoDB
} // namespace Aws
