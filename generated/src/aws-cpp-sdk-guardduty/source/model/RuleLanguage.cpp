/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/RuleLanguage.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace RuleLanguageMapper {

static const int SQL_HASH = HashingUtils::HashString("SQL");

RuleLanguage GetRuleLanguageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SQL_HASH) {
    return RuleLanguage::SQL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleLanguage>(hashCode);
  }

  return RuleLanguage::NOT_SET;
}

Aws::String GetNameForRuleLanguage(RuleLanguage enumValue) {
  switch (enumValue) {
    case RuleLanguage::NOT_SET:
      return {};
    case RuleLanguage::SQL:
      return "SQL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleLanguageMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
