/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PrivacyBudgetType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace PrivacyBudgetTypeMapper {

static const int DIFFERENTIAL_PRIVACY_HASH = HashingUtils::HashString("DIFFERENTIAL_PRIVACY");
static const int ACCESS_BUDGET_HASH = HashingUtils::HashString("ACCESS_BUDGET");

PrivacyBudgetType GetPrivacyBudgetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DIFFERENTIAL_PRIVACY_HASH) {
    return PrivacyBudgetType::DIFFERENTIAL_PRIVACY;
  } else if (hashCode == ACCESS_BUDGET_HASH) {
    return PrivacyBudgetType::ACCESS_BUDGET;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PrivacyBudgetType>(hashCode);
  }

  return PrivacyBudgetType::NOT_SET;
}

Aws::String GetNameForPrivacyBudgetType(PrivacyBudgetType enumValue) {
  switch (enumValue) {
    case PrivacyBudgetType::NOT_SET:
      return {};
    case PrivacyBudgetType::DIFFERENTIAL_PRIVACY:
      return "DIFFERENTIAL_PRIVACY";
    case PrivacyBudgetType::ACCESS_BUDGET:
      return "ACCESS_BUDGET";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PrivacyBudgetTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
