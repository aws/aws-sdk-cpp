/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
  enum class BackupTypeFilter
  {
    NOT_SET,
    USER,
    SYSTEM,
    AWS_BACKUP,
    ALL
  };

namespace BackupTypeFilterMapper
{
AWS_DYNAMODB_API BackupTypeFilter GetBackupTypeFilterForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForBackupTypeFilter(BackupTypeFilter value);
} // namespace BackupTypeFilterMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
