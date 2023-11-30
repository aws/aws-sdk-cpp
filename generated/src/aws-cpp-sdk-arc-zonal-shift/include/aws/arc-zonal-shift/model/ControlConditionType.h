/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{
  enum class ControlConditionType
  {
    NOT_SET,
    CLOUDWATCH
  };

namespace ControlConditionTypeMapper
{
AWS_ARCZONALSHIFT_API ControlConditionType GetControlConditionTypeForName(const Aws::String& name);

AWS_ARCZONALSHIFT_API Aws::String GetNameForControlConditionType(ControlConditionType value);
} // namespace ControlConditionTypeMapper
} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
