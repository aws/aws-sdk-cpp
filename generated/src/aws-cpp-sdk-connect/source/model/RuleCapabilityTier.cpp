/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RuleCapabilityTier.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace RuleCapabilityTierMapper {

static const int GenerativeAI_HASH = HashingUtils::HashString("GenerativeAI");

RuleCapabilityTier GetRuleCapabilityTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GenerativeAI_HASH) {
    return RuleCapabilityTier::GenerativeAI;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleCapabilityTier>(hashCode);
  }

  return RuleCapabilityTier::NOT_SET;
}

Aws::String GetNameForRuleCapabilityTier(RuleCapabilityTier enumValue) {
  switch (enumValue) {
    case RuleCapabilityTier::NOT_SET:
      return {};
    case RuleCapabilityTier::GenerativeAI:
      return "GenerativeAI";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleCapabilityTierMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
