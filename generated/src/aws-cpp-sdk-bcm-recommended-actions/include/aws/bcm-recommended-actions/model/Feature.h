/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMRecommendedActions
{
namespace Model
{
  enum class Feature
  {
    NOT_SET,
    ACCOUNT,
    BUDGETS,
    COST_ANOMALY_DETECTION,
    COST_OPTIMIZATION_HUB,
    FREE_TIER,
    IAM,
    PAYMENTS,
    RESERVATIONS,
    SAVINGS_PLANS,
    TAX_SETTINGS
  };

namespace FeatureMapper
{
AWS_BCMRECOMMENDEDACTIONS_API Feature GetFeatureForName(const Aws::String& name);

AWS_BCMRECOMMENDEDACTIONS_API Aws::String GetNameForFeature(Feature value);
} // namespace FeatureMapper
} // namespace Model
} // namespace BCMRecommendedActions
} // namespace Aws
