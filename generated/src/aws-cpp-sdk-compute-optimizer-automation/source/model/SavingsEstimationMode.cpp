/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/SavingsEstimationMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace SavingsEstimationModeMapper {

static const int BeforeDiscount_HASH = HashingUtils::HashString("BeforeDiscount");
static const int AfterDiscount_HASH = HashingUtils::HashString("AfterDiscount");

SavingsEstimationMode GetSavingsEstimationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BeforeDiscount_HASH) {
    return SavingsEstimationMode::BeforeDiscount;
  } else if (hashCode == AfterDiscount_HASH) {
    return SavingsEstimationMode::AfterDiscount;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SavingsEstimationMode>(hashCode);
  }

  return SavingsEstimationMode::NOT_SET;
}

Aws::String GetNameForSavingsEstimationMode(SavingsEstimationMode enumValue) {
  switch (enumValue) {
    case SavingsEstimationMode::NOT_SET:
      return {};
    case SavingsEstimationMode::BeforeDiscount:
      return "BeforeDiscount";
    case SavingsEstimationMode::AfterDiscount:
      return "AfterDiscount";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SavingsEstimationModeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
