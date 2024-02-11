/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class LifecyclePolicyTimeUnit
  {
    NOT_SET,
    DAYS,
    WEEKS,
    MONTHS,
    YEARS
  };

namespace LifecyclePolicyTimeUnitMapper
{
AWS_IMAGEBUILDER_API LifecyclePolicyTimeUnit GetLifecyclePolicyTimeUnitForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForLifecyclePolicyTimeUnit(LifecyclePolicyTimeUnit value);
} // namespace LifecyclePolicyTimeUnitMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
