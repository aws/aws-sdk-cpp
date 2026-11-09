/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/MultiplierType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {
namespace MultiplierTypeMapper {

static const int PERCENTAGE_HASH = HashingUtils::HashString("PERCENTAGE");
static const int CURRENCY_AMOUNT_HASH = HashingUtils::HashString("CURRENCY_AMOUNT");

MultiplierType GetMultiplierTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PERCENTAGE_HASH) {
    return MultiplierType::PERCENTAGE;
  } else if (hashCode == CURRENCY_AMOUNT_HASH) {
    return MultiplierType::CURRENCY_AMOUNT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MultiplierType>(hashCode);
  }

  return MultiplierType::NOT_SET;
}

Aws::String GetNameForMultiplierType(MultiplierType enumValue) {
  switch (enumValue) {
    case MultiplierType::NOT_SET:
      return {};
    case MultiplierType::PERCENTAGE:
      return "PERCENTAGE";
    case MultiplierType::CURRENCY_AMOUNT:
      return "CURRENCY_AMOUNT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MultiplierTypeMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
