/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Backup
{
namespace Model
{
  enum class ConditionType
  {
    NOT_SET,
    STRINGEQUALS
  };

namespace ConditionTypeMapper
{
AWS_BACKUP_API ConditionType GetConditionTypeForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForConditionType(ConditionType value);
} // namespace ConditionTypeMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
