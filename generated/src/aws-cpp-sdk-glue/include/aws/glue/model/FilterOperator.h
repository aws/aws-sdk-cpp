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
  enum class FilterOperator
  {
    NOT_SET,
    GT,
    GE,
    LT,
    LE,
    EQ,
    NE
  };

namespace FilterOperatorMapper
{
AWS_GLUE_API FilterOperator GetFilterOperatorForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForFilterOperator(FilterOperator value);
} // namespace FilterOperatorMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
