/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/ContentPolicyFilterAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace ContentPolicyFilterActionMapper {

static const int BLOCKED_HASH = HashingUtils::HashString("BLOCKED");
static const int NONE_HASH = HashingUtils::HashString("NONE");

ContentPolicyFilterAction GetContentPolicyFilterActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BLOCKED_HASH) {
    return ContentPolicyFilterAction::BLOCKED;
  } else if (hashCode == NONE_HASH) {
    return ContentPolicyFilterAction::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContentPolicyFilterAction>(hashCode);
  }

  return ContentPolicyFilterAction::NOT_SET;
}

Aws::String GetNameForContentPolicyFilterAction(ContentPolicyFilterAction enumValue) {
  switch (enumValue) {
    case ContentPolicyFilterAction::NOT_SET:
      return {};
    case ContentPolicyFilterAction::BLOCKED:
      return "BLOCKED";
    case ContentPolicyFilterAction::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContentPolicyFilterActionMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
