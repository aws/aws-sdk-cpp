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
  enum class GlobalAuroraUngracefulBehavior
  {
    NOT_SET,
    failover
  };

namespace GlobalAuroraUngracefulBehaviorMapper
{
AWS_ARCREGIONSWITCH_API GlobalAuroraUngracefulBehavior GetGlobalAuroraUngracefulBehaviorForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForGlobalAuroraUngracefulBehavior(GlobalAuroraUngracefulBehavior value);
} // namespace GlobalAuroraUngracefulBehaviorMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
