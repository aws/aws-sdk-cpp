/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/OrganizationRuleMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace OrganizationRuleModeMapper {

static const int AnyAllowed_HASH = HashingUtils::HashString("AnyAllowed");
static const int NoneAllowed_HASH = HashingUtils::HashString("NoneAllowed");

OrganizationRuleMode GetOrganizationRuleModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AnyAllowed_HASH) {
    return OrganizationRuleMode::AnyAllowed;
  } else if (hashCode == NoneAllowed_HASH) {
    return OrganizationRuleMode::NoneAllowed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrganizationRuleMode>(hashCode);
  }

  return OrganizationRuleMode::NOT_SET;
}

Aws::String GetNameForOrganizationRuleMode(OrganizationRuleMode enumValue) {
  switch (enumValue) {
    case OrganizationRuleMode::NOT_SET:
      return {};
    case OrganizationRuleMode::AnyAllowed:
      return "AnyAllowed";
    case OrganizationRuleMode::NoneAllowed:
      return "NoneAllowed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrganizationRuleModeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
