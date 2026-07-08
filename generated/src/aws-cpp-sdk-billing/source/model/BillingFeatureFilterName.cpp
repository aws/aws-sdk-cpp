/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingFeatureFilterName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {
namespace BillingFeatureFilterNameMapper {

static const int PREFERENCE_KEY_HASH = HashingUtils::HashString("PREFERENCE_KEY");

BillingFeatureFilterName GetBillingFeatureFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PREFERENCE_KEY_HASH) {
    return BillingFeatureFilterName::PREFERENCE_KEY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BillingFeatureFilterName>(hashCode);
  }

  return BillingFeatureFilterName::NOT_SET;
}

Aws::String GetNameForBillingFeatureFilterName(BillingFeatureFilterName enumValue) {
  switch (enumValue) {
    case BillingFeatureFilterName::NOT_SET:
      return {};
    case BillingFeatureFilterName::PREFERENCE_KEY:
      return "PREFERENCE_KEY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BillingFeatureFilterNameMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
