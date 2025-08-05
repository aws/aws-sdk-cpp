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
  enum class RegionToRunIn
  {
    NOT_SET,
    activatingRegion,
    deactivatingRegion
  };

namespace RegionToRunInMapper
{
AWS_ARCREGIONSWITCH_API RegionToRunIn GetRegionToRunInForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForRegionToRunIn(RegionToRunIn value);
} // namespace RegionToRunInMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
