/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/OrganizationRuleModeSourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace OrganizationRuleModeSourceTypeMapper {

static const int Applied_HASH = HashingUtils::HashString("Applied");
static const int Inherited_HASH = HashingUtils::HashString("Inherited");
static const int Direct_HASH = HashingUtils::HashString("Direct");
static const int Default_HASH = HashingUtils::HashString("Default");

OrganizationRuleModeSourceType GetOrganizationRuleModeSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Applied_HASH) {
    return OrganizationRuleModeSourceType::Applied;
  } else if (hashCode == Inherited_HASH) {
    return OrganizationRuleModeSourceType::Inherited;
  } else if (hashCode == Direct_HASH) {
    return OrganizationRuleModeSourceType::Direct;
  } else if (hashCode == Default_HASH) {
    return OrganizationRuleModeSourceType::Default;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrganizationRuleModeSourceType>(hashCode);
  }

  return OrganizationRuleModeSourceType::NOT_SET;
}

Aws::String GetNameForOrganizationRuleModeSourceType(OrganizationRuleModeSourceType enumValue) {
  switch (enumValue) {
    case OrganizationRuleModeSourceType::NOT_SET:
      return {};
    case OrganizationRuleModeSourceType::Applied:
      return "Applied";
    case OrganizationRuleModeSourceType::Inherited:
      return "Inherited";
    case OrganizationRuleModeSourceType::Direct:
      return "Direct";
    case OrganizationRuleModeSourceType::Default:
      return "Default";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrganizationRuleModeSourceTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
