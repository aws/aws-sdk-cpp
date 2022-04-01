/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class TargetInstanceTypeRightSizingMethod
  {
    NOT_SET,
    NONE,
    BASIC
  };

namespace TargetInstanceTypeRightSizingMethodMapper
{
AWS_MGN_API TargetInstanceTypeRightSizingMethod GetTargetInstanceTypeRightSizingMethodForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod value);
} // namespace TargetInstanceTypeRightSizingMethodMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
