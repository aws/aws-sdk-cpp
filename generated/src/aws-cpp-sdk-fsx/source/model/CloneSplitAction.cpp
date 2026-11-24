/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/CloneSplitAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace CloneSplitActionMapper {

static const int START_HASH = HashingUtils::HashString("START");

CloneSplitAction GetCloneSplitActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == START_HASH) {
    return CloneSplitAction::START;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CloneSplitAction>(hashCode);
  }

  return CloneSplitAction::NOT_SET;
}

Aws::String GetNameForCloneSplitAction(CloneSplitAction enumValue) {
  switch (enumValue) {
    case CloneSplitAction::NOT_SET:
      return {};
    case CloneSplitAction::START:
      return "START";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CloneSplitActionMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
