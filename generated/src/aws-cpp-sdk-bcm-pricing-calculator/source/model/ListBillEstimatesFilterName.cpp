﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/ListBillEstimatesFilterName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BCMPricingCalculator {
namespace Model {
namespace ListBillEstimatesFilterNameMapper {

static const int STATUS_HASH = HashingUtils::HashString("STATUS");
static const int NAME_HASH = HashingUtils::HashString("NAME");

ListBillEstimatesFilterName GetListBillEstimatesFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STATUS_HASH) {
    return ListBillEstimatesFilterName::STATUS;
  } else if (hashCode == NAME_HASH) {
    return ListBillEstimatesFilterName::NAME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListBillEstimatesFilterName>(hashCode);
  }

  return ListBillEstimatesFilterName::NOT_SET;
}

Aws::String GetNameForListBillEstimatesFilterName(ListBillEstimatesFilterName enumValue) {
  switch (enumValue) {
    case ListBillEstimatesFilterName::NOT_SET:
      return {};
    case ListBillEstimatesFilterName::STATUS:
      return "STATUS";
    case ListBillEstimatesFilterName::NAME:
      return "NAME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListBillEstimatesFilterNameMapper
}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
