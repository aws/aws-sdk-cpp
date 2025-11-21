/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/ListBillScenariosFilterName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BCMPricingCalculator {
namespace Model {
namespace ListBillScenariosFilterNameMapper {

static const int STATUS_HASH = HashingUtils::HashString("STATUS");
static const int NAME_HASH = HashingUtils::HashString("NAME");
static const int GROUP_SHARING_PREFERENCE_HASH = HashingUtils::HashString("GROUP_SHARING_PREFERENCE");
static const int COST_CATEGORY_ARN_HASH = HashingUtils::HashString("COST_CATEGORY_ARN");

ListBillScenariosFilterName GetListBillScenariosFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STATUS_HASH) {
    return ListBillScenariosFilterName::STATUS;
  } else if (hashCode == NAME_HASH) {
    return ListBillScenariosFilterName::NAME;
  } else if (hashCode == GROUP_SHARING_PREFERENCE_HASH) {
    return ListBillScenariosFilterName::GROUP_SHARING_PREFERENCE;
  } else if (hashCode == COST_CATEGORY_ARN_HASH) {
    return ListBillScenariosFilterName::COST_CATEGORY_ARN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListBillScenariosFilterName>(hashCode);
  }

  return ListBillScenariosFilterName::NOT_SET;
}

Aws::String GetNameForListBillScenariosFilterName(ListBillScenariosFilterName enumValue) {
  switch (enumValue) {
    case ListBillScenariosFilterName::NOT_SET:
      return {};
    case ListBillScenariosFilterName::STATUS:
      return "STATUS";
    case ListBillScenariosFilterName::NAME:
      return "NAME";
    case ListBillScenariosFilterName::GROUP_SHARING_PREFERENCE:
      return "GROUP_SHARING_PREFERENCE";
    case ListBillScenariosFilterName::COST_CATEGORY_ARN:
      return "COST_CATEGORY_ARN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListBillScenariosFilterNameMapper
}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
