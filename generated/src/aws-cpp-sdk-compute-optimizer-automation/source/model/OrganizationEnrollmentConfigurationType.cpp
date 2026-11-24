/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/OrganizationEnrollmentConfigurationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace OrganizationEnrollmentConfigurationTypeMapper {

static const int OrganizationRuleMode_HASH = HashingUtils::HashString("OrganizationRuleMode");

OrganizationEnrollmentConfigurationType GetOrganizationEnrollmentConfigurationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OrganizationRuleMode_HASH) {
    return OrganizationEnrollmentConfigurationType::OrganizationRuleMode;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrganizationEnrollmentConfigurationType>(hashCode);
  }

  return OrganizationEnrollmentConfigurationType::NOT_SET;
}

Aws::String GetNameForOrganizationEnrollmentConfigurationType(OrganizationEnrollmentConfigurationType enumValue) {
  switch (enumValue) {
    case OrganizationEnrollmentConfigurationType::NOT_SET:
      return {};
    case OrganizationEnrollmentConfigurationType::OrganizationRuleMode:
      return "OrganizationRuleMode";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrganizationEnrollmentConfigurationTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
