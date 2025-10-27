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
enum class BackupStatus { NOT_SET, CREATING, DELETED, AVAILABLE };

namespace BackupStatusMapper {
AWS_DYNAMODB_API BackupStatus GetBackupStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForBackupStatus(BackupStatus value);
}  // namespace BackupStatusMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
