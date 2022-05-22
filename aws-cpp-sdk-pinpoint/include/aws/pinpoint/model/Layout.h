/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class Layout
  {
    NOT_SET,
    BOTTOM_BANNER,
    TOP_BANNER,
    OVERLAYS,
    MOBILE_FEED,
    MIDDLE_BANNER,
    CAROUSEL
  };

namespace LayoutMapper
{
AWS_PINPOINT_API Layout GetLayoutForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForLayout(Layout value);
} // namespace LayoutMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
