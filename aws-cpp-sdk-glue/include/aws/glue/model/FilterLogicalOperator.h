/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class FilterLogicalOperator
  {
    NOT_SET,
    AND,
    OR
  };

namespace FilterLogicalOperatorMapper
{
AWS_GLUE_API FilterLogicalOperator GetFilterLogicalOperatorForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForFilterLogicalOperator(FilterLogicalOperator value);
} // namespace FilterLogicalOperatorMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
