/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LocationService
{
namespace Model
{
  enum class PricingPlan
  {
    NOT_SET,
    RequestBasedUsage,
    MobileAssetTracking,
    MobileAssetManagement
  };

namespace PricingPlanMapper
{
AWS_LOCATIONSERVICE_API PricingPlan GetPricingPlanForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForPricingPlan(PricingPlan value);
} // namespace PricingPlanMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
