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
  enum class ResourceWarningStatus
  {
    NOT_SET,
    active,
    resolved
  };

namespace ResourceWarningStatusMapper
{
AWS_ARCREGIONSWITCH_API ResourceWarningStatus GetResourceWarningStatusForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForResourceWarningStatus(ResourceWarningStatus value);
} // namespace ResourceWarningStatusMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
