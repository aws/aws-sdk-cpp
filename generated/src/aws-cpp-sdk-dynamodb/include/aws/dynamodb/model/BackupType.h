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
enum class BackupType { NOT_SET, USER, SYSTEM, AWS_BACKUP };

namespace BackupTypeMapper {
AWS_DYNAMODB_API BackupType GetBackupTypeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForBackupType(BackupType value);
}  // namespace BackupTypeMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
