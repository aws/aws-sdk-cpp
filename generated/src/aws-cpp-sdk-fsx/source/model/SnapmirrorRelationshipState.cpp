/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/SnapmirrorRelationshipState.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace SnapmirrorRelationshipStateMapper {

static const int UNINITIALIZED_HASH = HashingUtils::HashString("UNINITIALIZED");
static const int TRANSFERRING_HASH = HashingUtils::HashString("TRANSFERRING");
static const int SNAPMIRRORED_HASH = HashingUtils::HashString("SNAPMIRRORED");
static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
static const int BROKEN_OFF_HASH = HashingUtils::HashString("BROKEN_OFF");

SnapmirrorRelationshipState GetSnapmirrorRelationshipStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UNINITIALIZED_HASH) {
    return SnapmirrorRelationshipState::UNINITIALIZED;
  } else if (hashCode == TRANSFERRING_HASH) {
    return SnapmirrorRelationshipState::TRANSFERRING;
  } else if (hashCode == SNAPMIRRORED_HASH) {
    return SnapmirrorRelationshipState::SNAPMIRRORED;
  } else if (hashCode == PAUSED_HASH) {
    return SnapmirrorRelationshipState::PAUSED;
  } else if (hashCode == BROKEN_OFF_HASH) {
    return SnapmirrorRelationshipState::BROKEN_OFF;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapmirrorRelationshipState>(hashCode);
  }

  return SnapmirrorRelationshipState::NOT_SET;
}

Aws::String GetNameForSnapmirrorRelationshipState(SnapmirrorRelationshipState enumValue) {
  switch (enumValue) {
    case SnapmirrorRelationshipState::NOT_SET:
      return {};
    case SnapmirrorRelationshipState::UNINITIALIZED:
      return "UNINITIALIZED";
    case SnapmirrorRelationshipState::TRANSFERRING:
      return "TRANSFERRING";
    case SnapmirrorRelationshipState::SNAPMIRRORED:
      return "SNAPMIRRORED";
    case SnapmirrorRelationshipState::PAUSED:
      return "PAUSED";
    case SnapmirrorRelationshipState::BROKEN_OFF:
      return "BROKEN_OFF";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapmirrorRelationshipStateMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
