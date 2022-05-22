/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class FilterBehavior
  {
    NOT_SET,
    KEEP,
    DROP
  };

namespace FilterBehaviorMapper
{
AWS_WAFV2_API FilterBehavior GetFilterBehaviorForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForFilterBehavior(FilterBehavior value);
} // namespace FilterBehaviorMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
