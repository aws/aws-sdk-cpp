/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class LogicalOperator
  {
    NOT_SET,
    AND,
    OR
  };

namespace LogicalOperatorMapper
{
AWS_DEADLINE_API LogicalOperator GetLogicalOperatorForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForLogicalOperator(LogicalOperator value);
} // namespace LogicalOperatorMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
