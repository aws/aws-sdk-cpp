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
  enum class TimeConditionOperator
  {
    NOT_SET,
    EQUALS_TO,
    NOT_EQUALS_TO,
    LESS_THAN_EQUAL_TO,
    GREATER_THAN_EQUAL_TO
  };

namespace TimeConditionOperatorMapper
{
AWS_BACKUPSEARCH_API TimeConditionOperator GetTimeConditionOperatorForName(const Aws::String& name);

AWS_BACKUPSEARCH_API Aws::String GetNameForTimeConditionOperator(TimeConditionOperator value);
} // namespace TimeConditionOperatorMapper
} // namespace Model
} // namespace BackupSearch
} // namespace Aws
