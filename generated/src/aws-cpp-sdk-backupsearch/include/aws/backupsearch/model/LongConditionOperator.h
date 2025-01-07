/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BackupSearch
{
namespace Model
{
  enum class LongConditionOperator
  {
    NOT_SET,
    EQUALS_TO,
    NOT_EQUALS_TO,
    LESS_THAN_EQUAL_TO,
    GREATER_THAN_EQUAL_TO
  };

namespace LongConditionOperatorMapper
{
AWS_BACKUPSEARCH_API LongConditionOperator GetLongConditionOperatorForName(const Aws::String& name);

AWS_BACKUPSEARCH_API Aws::String GetNameForLongConditionOperator(LongConditionOperator value);
} // namespace LongConditionOperatorMapper
} // namespace Model
} // namespace BackupSearch
} // namespace Aws
