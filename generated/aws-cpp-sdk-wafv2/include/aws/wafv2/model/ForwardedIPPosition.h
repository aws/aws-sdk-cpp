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
  enum class ForwardedIPPosition
  {
    NOT_SET,
    FIRST,
    LAST,
    ANY
  };

namespace ForwardedIPPositionMapper
{
AWS_WAFV2_API ForwardedIPPosition GetForwardedIPPositionForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForForwardedIPPosition(ForwardedIPPosition value);
} // namespace ForwardedIPPositionMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
