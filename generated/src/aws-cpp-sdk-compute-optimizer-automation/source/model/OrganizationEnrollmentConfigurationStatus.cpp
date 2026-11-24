/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/OrganizationEnrollmentConfigurationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace OrganizationEnrollmentConfigurationStatusMapper {

static const int Active_HASH = HashingUtils::HashString("Active");
static const int Inactive_HASH = HashingUtils::HashString("Inactive");

OrganizationEnrollmentConfigurationStatus GetOrganizationEnrollmentConfigurationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Active_HASH) {
    return OrganizationEnrollmentConfigurationStatus::Active;
  } else if (hashCode == Inactive_HASH) {
    return OrganizationEnrollmentConfigurationStatus::Inactive;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrganizationEnrollmentConfigurationStatus>(hashCode);
  }

  return OrganizationEnrollmentConfigurationStatus::NOT_SET;
}

Aws::String GetNameForOrganizationEnrollmentConfigurationStatus(OrganizationEnrollmentConfigurationStatus enumValue) {
  switch (enumValue) {
    case OrganizationEnrollmentConfigurationStatus::NOT_SET:
      return {};
    case OrganizationEnrollmentConfigurationStatus::Active:
      return "Active";
    case OrganizationEnrollmentConfigurationStatus::Inactive:
      return "Inactive";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrganizationEnrollmentConfigurationStatusMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
