/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class PricingUnit
  {
    NOT_SET,
    GB,
    Hrs,
    GB_Mo,
    Bundles,
    Queries
  };

namespace PricingUnitMapper
{
AWS_LIGHTSAIL_API PricingUnit GetPricingUnitForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForPricingUnit(PricingUnit value);
} // namespace PricingUnitMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
