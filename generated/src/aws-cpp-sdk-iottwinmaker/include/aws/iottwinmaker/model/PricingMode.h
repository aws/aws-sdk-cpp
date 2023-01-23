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
  enum class PricingMode
  {
    NOT_SET,
    BASIC,
    STANDARD,
    TIERED_BUNDLE
  };

namespace PricingModeMapper
{
AWS_IOTTWINMAKER_API PricingMode GetPricingModeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForPricingMode(PricingMode value);
} // namespace PricingModeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
