/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class TargetInstanceTypeRightSizingMethod
  {
    NOT_SET,
    NONE,
    BASIC,
    IN_AWS
  };

namespace TargetInstanceTypeRightSizingMethodMapper
{
AWS_DRS_API TargetInstanceTypeRightSizingMethod GetTargetInstanceTypeRightSizingMethodForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod value);
} // namespace TargetInstanceTypeRightSizingMethodMapper
} // namespace Model
} // namespace drs
} // namespace Aws
