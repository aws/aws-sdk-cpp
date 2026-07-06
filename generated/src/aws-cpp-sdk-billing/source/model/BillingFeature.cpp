/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingFeature.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {
namespace BillingFeatureMapper {

static const int RI_SHARING_HASH = HashingUtils::HashString("RI_SHARING");
static const int RI_SHARING_HISTORY_HASH = HashingUtils::HashString("RI_SHARING_HISTORY");
static const int CREDIT_SHARING_HASH = HashingUtils::HashString("CREDIT_SHARING");
static const int CREDIT_SHARING_HISTORY_HASH = HashingUtils::HashString("CREDIT_SHARING_HISTORY");
static const int CREDIT_LEVEL_SHARING_HASH = HashingUtils::HashString("CREDIT_LEVEL_SHARING");
static const int BILLING_ALERTS_HASH = HashingUtils::HashString("BILLING_ALERTS");
static const int CREDIT_PREFERENCE_OPTIONS_HASH = HashingUtils::HashString("CREDIT_PREFERENCE_OPTIONS");

BillingFeature GetBillingFeatureForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RI_SHARING_HASH) {
    return BillingFeature::RI_SHARING;
  } else if (hashCode == RI_SHARING_HISTORY_HASH) {
    return BillingFeature::RI_SHARING_HISTORY;
  } else if (hashCode == CREDIT_SHARING_HASH) {
    return BillingFeature::CREDIT_SHARING;
  } else if (hashCode == CREDIT_SHARING_HISTORY_HASH) {
    return BillingFeature::CREDIT_SHARING_HISTORY;
  } else if (hashCode == CREDIT_LEVEL_SHARING_HASH) {
    return BillingFeature::CREDIT_LEVEL_SHARING;
  } else if (hashCode == BILLING_ALERTS_HASH) {
    return BillingFeature::BILLING_ALERTS;
  } else if (hashCode == CREDIT_PREFERENCE_OPTIONS_HASH) {
    return BillingFeature::CREDIT_PREFERENCE_OPTIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BillingFeature>(hashCode);
  }

  return BillingFeature::NOT_SET;
}

Aws::String GetNameForBillingFeature(BillingFeature enumValue) {
  switch (enumValue) {
    case BillingFeature::NOT_SET:
      return {};
    case BillingFeature::RI_SHARING:
      return "RI_SHARING";
    case BillingFeature::RI_SHARING_HISTORY:
      return "RI_SHARING_HISTORY";
    case BillingFeature::CREDIT_SHARING:
      return "CREDIT_SHARING";
    case BillingFeature::CREDIT_SHARING_HISTORY:
      return "CREDIT_SHARING_HISTORY";
    case BillingFeature::CREDIT_LEVEL_SHARING:
      return "CREDIT_LEVEL_SHARING";
    case BillingFeature::BILLING_ALERTS:
      return "BILLING_ALERTS";
    case BillingFeature::CREDIT_PREFERENCE_OPTIONS:
      return "CREDIT_PREFERENCE_OPTIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BillingFeatureMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
