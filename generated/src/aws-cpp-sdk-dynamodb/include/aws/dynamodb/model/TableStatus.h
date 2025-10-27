/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

namespace Aws {
namespace DynamoDB {
namespace Model {
enum class TableStatus {
  NOT_SET,
  CREATING,
  UPDATING,
  DELETING,
  ACTIVE,
  INACCESSIBLE_ENCRYPTION_CREDENTIALS,
  ARCHIVING,
  ARCHIVED,
  REPLICATION_NOT_AUTHORIZED
};

namespace TableStatusMapper {
AWS_DYNAMODB_API TableStatus GetTableStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForTableStatus(TableStatus value);
}  // namespace TableStatusMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
