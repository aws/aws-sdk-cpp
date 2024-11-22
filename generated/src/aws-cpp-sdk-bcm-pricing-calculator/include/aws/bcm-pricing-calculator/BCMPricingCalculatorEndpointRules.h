/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>

namespace Aws
{
namespace BCMPricingCalculator
{
class BCMPricingCalculatorEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace BCMPricingCalculator
} // namespace Aws
