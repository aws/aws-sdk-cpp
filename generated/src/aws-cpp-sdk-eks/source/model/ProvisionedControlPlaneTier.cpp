/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/ProvisionedControlPlaneTier.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace ProvisionedControlPlaneTierMapper {

static const int standard_HASH = HashingUtils::HashString("standard");
static const int tier_xl_HASH = HashingUtils::HashString("tier-xl");
static const int tier_2xl_HASH = HashingUtils::HashString("tier-2xl");
static const int tier_4xl_HASH = HashingUtils::HashString("tier-4xl");

ProvisionedControlPlaneTier GetProvisionedControlPlaneTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == standard_HASH) {
    return ProvisionedControlPlaneTier::standard;
  } else if (hashCode == tier_xl_HASH) {
    return ProvisionedControlPlaneTier::tier_xl;
  } else if (hashCode == tier_2xl_HASH) {
    return ProvisionedControlPlaneTier::tier_2xl;
  } else if (hashCode == tier_4xl_HASH) {
    return ProvisionedControlPlaneTier::tier_4xl;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProvisionedControlPlaneTier>(hashCode);
  }

  return ProvisionedControlPlaneTier::NOT_SET;
}

Aws::String GetNameForProvisionedControlPlaneTier(ProvisionedControlPlaneTier enumValue) {
  switch (enumValue) {
    case ProvisionedControlPlaneTier::NOT_SET:
      return {};
    case ProvisionedControlPlaneTier::standard:
      return "standard";
    case ProvisionedControlPlaneTier::tier_xl:
      return "tier-xl";
    case ProvisionedControlPlaneTier::tier_2xl:
      return "tier-2xl";
    case ProvisionedControlPlaneTier::tier_4xl:
      return "tier-4xl";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProvisionedControlPlaneTierMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
