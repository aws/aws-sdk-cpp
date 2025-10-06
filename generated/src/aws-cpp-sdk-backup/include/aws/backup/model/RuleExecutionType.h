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
  enum class RuleExecutionType
  {
    NOT_SET,
    CONTINUOUS,
    SNAPSHOTS,
    CONTINUOUS_AND_SNAPSHOTS
  };

namespace RuleExecutionTypeMapper
{
AWS_BACKUP_API RuleExecutionType GetRuleExecutionTypeForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForRuleExecutionType(RuleExecutionType value);
} // namespace RuleExecutionTypeMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
