/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace BCMPricingCalculator {

template <typename DerivedClient = BCMPricingCalculatorClient>
class BCMPricingCalculatorWaiter {
 public:
};
}  // namespace BCMPricingCalculator
}  // namespace Aws
