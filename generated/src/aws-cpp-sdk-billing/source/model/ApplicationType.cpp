/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ApplicationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {
namespace ApplicationTypeMapper {

static const int BEFORE_CROSS_SERVICE_DISCOUNTS_HASH = HashingUtils::HashString("BEFORE_CROSS_SERVICE_DISCOUNTS");
static const int AFTER_DISCOUNTS_HASH = HashingUtils::HashString("AFTER_DISCOUNTS");

ApplicationType GetApplicationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BEFORE_CROSS_SERVICE_DISCOUNTS_HASH) {
    return ApplicationType::BEFORE_CROSS_SERVICE_DISCOUNTS;
  } else if (hashCode == AFTER_DISCOUNTS_HASH) {
    return ApplicationType::AFTER_DISCOUNTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApplicationType>(hashCode);
  }

  return ApplicationType::NOT_SET;
}

Aws::String GetNameForApplicationType(ApplicationType enumValue) {
  switch (enumValue) {
    case ApplicationType::NOT_SET:
      return {};
    case ApplicationType::BEFORE_CROSS_SERVICE_DISCOUNTS:
      return "BEFORE_CROSS_SERVICE_DISCOUNTS";
    case ApplicationType::AFTER_DISCOUNTS:
      return "AFTER_DISCOUNTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApplicationTypeMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
