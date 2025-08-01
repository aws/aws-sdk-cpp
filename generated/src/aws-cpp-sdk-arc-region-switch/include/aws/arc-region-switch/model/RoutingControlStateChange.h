/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{
  enum class RoutingControlStateChange
  {
    NOT_SET,
    On,
    Off
  };

namespace RoutingControlStateChangeMapper
{
AWS_ARCREGIONSWITCH_API RoutingControlStateChange GetRoutingControlStateChangeForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForRoutingControlStateChange(RoutingControlStateChange value);
} // namespace RoutingControlStateChangeMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
