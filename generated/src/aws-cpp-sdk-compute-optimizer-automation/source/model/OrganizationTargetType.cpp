/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/OrganizationTargetType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace OrganizationTargetTypeMapper {

static const int Account_HASH = HashingUtils::HashString("Account");
static const int OrganizationalUnit_HASH = HashingUtils::HashString("OrganizationalUnit");

OrganizationTargetType GetOrganizationTargetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Account_HASH) {
    return OrganizationTargetType::Account;
  } else if (hashCode == OrganizationalUnit_HASH) {
    return OrganizationTargetType::OrganizationalUnit;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrganizationTargetType>(hashCode);
  }

  return OrganizationTargetType::NOT_SET;
}

Aws::String GetNameForOrganizationTargetType(OrganizationTargetType enumValue) {
  switch (enumValue) {
    case OrganizationTargetType::NOT_SET:
      return {};
    case OrganizationTargetType::Account:
      return "Account";
    case OrganizationTargetType::OrganizationalUnit:
      return "OrganizationalUnit";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrganizationTargetTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
