/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class InteractionMode
  {
    NOT_SET,
    INTERACTIVE,
    NO_VIDEO,
    VIDEO_ONLY
  };

namespace InteractionModeMapper
{
AWS_DEVICEFARM_API InteractionMode GetInteractionModeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForInteractionMode(InteractionMode value);
} // namespace InteractionModeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
