/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{
  enum class PricingTier
  {
    NOT_SET,
    TIER_1,
    TIER_2,
    TIER_3,
    TIER_4
  };

namespace PricingTierMapper
{
AWS_IOTTWINMAKER_API PricingTier GetPricingTierForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForPricingTier(PricingTier value);
} // namespace PricingTierMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
