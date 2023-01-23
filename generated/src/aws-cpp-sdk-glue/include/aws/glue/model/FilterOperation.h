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
  enum class FilterOperation
  {
    NOT_SET,
    EQ,
    LT,
    GT,
    LTE,
    GTE,
    REGEX,
    ISNULL
  };

namespace FilterOperationMapper
{
AWS_GLUE_API FilterOperation GetFilterOperationForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForFilterOperation(FilterOperation value);
} // namespace FilterOperationMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
