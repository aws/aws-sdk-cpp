/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/UpdatableSnapmirrorRelationshipState.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace UpdatableSnapmirrorRelationshipStateMapper {

static const int SNAPMIRRORED_HASH = HashingUtils::HashString("SNAPMIRRORED");
static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
static const int BROKEN_OFF_HASH = HashingUtils::HashString("BROKEN_OFF");

UpdatableSnapmirrorRelationshipState GetUpdatableSnapmirrorRelationshipStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SNAPMIRRORED_HASH) {
    return UpdatableSnapmirrorRelationshipState::SNAPMIRRORED;
  } else if (hashCode == PAUSED_HASH) {
    return UpdatableSnapmirrorRelationshipState::PAUSED;
  } else if (hashCode == BROKEN_OFF_HASH) {
    return UpdatableSnapmirrorRelationshipState::BROKEN_OFF;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UpdatableSnapmirrorRelationshipState>(hashCode);
  }

  return UpdatableSnapmirrorRelationshipState::NOT_SET;
}

Aws::String GetNameForUpdatableSnapmirrorRelationshipState(UpdatableSnapmirrorRelationshipState enumValue) {
  switch (enumValue) {
    case UpdatableSnapmirrorRelationshipState::NOT_SET:
      return {};
    case UpdatableSnapmirrorRelationshipState::SNAPMIRRORED:
      return "SNAPMIRRORED";
    case UpdatableSnapmirrorRelationshipState::PAUSED:
      return "PAUSED";
    case UpdatableSnapmirrorRelationshipState::BROKEN_OFF:
      return "BROKEN_OFF";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UpdatableSnapmirrorRelationshipStateMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
