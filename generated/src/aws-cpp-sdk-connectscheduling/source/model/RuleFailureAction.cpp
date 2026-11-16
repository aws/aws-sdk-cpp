/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/RuleFailureAction.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectScheduling {
namespace Model {
namespace RuleFailureActionMapper {

static const int REJECT_HASH = HashingUtils::HashString("REJECT");
static const int OVERRIDE_HASH = HashingUtils::HashString("OVERRIDE");

RuleFailureAction GetRuleFailureActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REJECT_HASH) {
    return RuleFailureAction::REJECT;
  } else if (hashCode == OVERRIDE_HASH) {
    return RuleFailureAction::OVERRIDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleFailureAction>(hashCode);
  }

  return RuleFailureAction::NOT_SET;
}

Aws::String GetNameForRuleFailureAction(RuleFailureAction enumValue) {
  switch (enumValue) {
    case RuleFailureAction::NOT_SET:
      return {};
    case RuleFailureAction::REJECT:
      return "REJECT";
    case RuleFailureAction::OVERRIDE:
      return "OVERRIDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleFailureActionMapper
}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
