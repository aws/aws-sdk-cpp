/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{
  enum class RangeMode
  {
    NOT_SET,
    FIRST,
    LAST,
    LAST_BEFORE_MISSING_VALUES,
    INCLUSIVE,
    EXCLUSIVE
  };

namespace RangeModeMapper
{
AWS_CLOUDDIRECTORY_API RangeMode GetRangeModeForName(const Aws::String& name);

AWS_CLOUDDIRECTORY_API Aws::String GetNameForRangeMode(RangeMode value);
} // namespace RangeModeMapper
} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
