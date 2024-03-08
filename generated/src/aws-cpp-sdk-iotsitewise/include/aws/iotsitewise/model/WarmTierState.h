/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class WarmTierState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace WarmTierStateMapper
{
AWS_IOTSITEWISE_API WarmTierState GetWarmTierStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForWarmTierState(WarmTierState value);
} // namespace WarmTierStateMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
