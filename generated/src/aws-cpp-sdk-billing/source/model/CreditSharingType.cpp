/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/CreditSharingType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {
namespace CreditSharingTypeMapper {

static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int COST_CATEGORY_RULE_HASH = HashingUtils::HashString("COST_CATEGORY_RULE");

CreditSharingType GetCreditSharingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEFAULT_HASH) {
    return CreditSharingType::DEFAULT;
  } else if (hashCode == DISABLED_HASH) {
    return CreditSharingType::DISABLED;
  } else if (hashCode == CUSTOM_HASH) {
    return CreditSharingType::CUSTOM;
  } else if (hashCode == COST_CATEGORY_RULE_HASH) {
    return CreditSharingType::COST_CATEGORY_RULE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CreditSharingType>(hashCode);
  }

  return CreditSharingType::NOT_SET;
}

Aws::String GetNameForCreditSharingType(CreditSharingType enumValue) {
  switch (enumValue) {
    case CreditSharingType::NOT_SET:
      return {};
    case CreditSharingType::DEFAULT:
      return "DEFAULT";
    case CreditSharingType::DISABLED:
      return "DISABLED";
    case CreditSharingType::CUSTOM:
      return "CUSTOM";
    case CreditSharingType::COST_CATEGORY_RULE:
      return "COST_CATEGORY_RULE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CreditSharingTypeMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
