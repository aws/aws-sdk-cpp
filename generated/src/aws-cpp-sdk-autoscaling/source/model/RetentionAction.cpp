/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/RetentionAction.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AutoScaling {
namespace Model {
namespace RetentionActionMapper {

static const int retain_HASH = HashingUtils::HashString("retain");
static const int terminate_HASH = HashingUtils::HashString("terminate");

RetentionAction GetRetentionActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == retain_HASH) {
    return RetentionAction::retain;
  } else if (hashCode == terminate_HASH) {
    return RetentionAction::terminate;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RetentionAction>(hashCode);
  }

  return RetentionAction::NOT_SET;
}

Aws::String GetNameForRetentionAction(RetentionAction enumValue) {
  switch (enumValue) {
    case RetentionAction::NOT_SET:
      return {};
    case RetentionAction::retain:
      return "retain";
    case RetentionAction::terminate:
      return "terminate";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RetentionActionMapper
}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
