/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BCMPricingCalculator {
namespace Model {
enum class GroupSharingPreferenceEnum { NOT_SET, OPEN, PRIORITIZED, RESTRICTED };

namespace GroupSharingPreferenceEnumMapper {
AWS_BCMPRICINGCALCULATOR_API GroupSharingPreferenceEnum GetGroupSharingPreferenceEnumForName(const Aws::String& name);

AWS_BCMPRICINGCALCULATOR_API Aws::String GetNameForGroupSharingPreferenceEnum(GroupSharingPreferenceEnum value);
}  // namespace GroupSharingPreferenceEnumMapper
}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
