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
  enum class StringConditionOperator
  {
    NOT_SET,
    EQUALS_TO,
    NOT_EQUALS_TO,
    CONTAINS,
    DOES_NOT_CONTAIN,
    BEGINS_WITH,
    ENDS_WITH,
    DOES_NOT_BEGIN_WITH,
    DOES_NOT_END_WITH
  };

namespace StringConditionOperatorMapper
{
AWS_BACKUPSEARCH_API StringConditionOperator GetStringConditionOperatorForName(const Aws::String& name);

AWS_BACKUPSEARCH_API Aws::String GetNameForStringConditionOperator(StringConditionOperator value);
} // namespace StringConditionOperatorMapper
} // namespace Model
} // namespace BackupSearch
} // namespace Aws
