/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/UpgradeConsent.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace UpgradeConsentMapper {

static const int APPROVE_HASH = HashingUtils::HashString("APPROVE");
static const int DECLINE_HASH = HashingUtils::HashString("DECLINE");

UpgradeConsent GetUpgradeConsentForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPROVE_HASH) {
    return UpgradeConsent::APPROVE;
  } else if (hashCode == DECLINE_HASH) {
    return UpgradeConsent::DECLINE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UpgradeConsent>(hashCode);
  }

  return UpgradeConsent::NOT_SET;
}

Aws::String GetNameForUpgradeConsent(UpgradeConsent enumValue) {
  switch (enumValue) {
    case UpgradeConsent::NOT_SET:
      return {};
    case UpgradeConsent::APPROVE:
      return "APPROVE";
    case UpgradeConsent::DECLINE:
      return "DECLINE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UpgradeConsentMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
