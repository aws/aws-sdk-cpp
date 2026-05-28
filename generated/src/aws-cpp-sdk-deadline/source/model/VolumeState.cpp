/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/VolumeState.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace VolumeStateMapper {

static const int PENDING_CREATION_HASH = HashingUtils::HashString("PENDING_CREATION");
static const int PENDING_ATTACHMENT_HASH = HashingUtils::HashString("PENDING_ATTACHMENT");
static const int IN_USE_HASH = HashingUtils::HashString("IN_USE");
static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");

VolumeState GetVolumeStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_CREATION_HASH) {
    return VolumeState::PENDING_CREATION;
  } else if (hashCode == PENDING_ATTACHMENT_HASH) {
    return VolumeState::PENDING_ATTACHMENT;
  } else if (hashCode == IN_USE_HASH) {
    return VolumeState::IN_USE;
  } else if (hashCode == AVAILABLE_HASH) {
    return VolumeState::AVAILABLE;
  } else if (hashCode == PENDING_DELETION_HASH) {
    return VolumeState::PENDING_DELETION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VolumeState>(hashCode);
  }

  return VolumeState::NOT_SET;
}

Aws::String GetNameForVolumeState(VolumeState enumValue) {
  switch (enumValue) {
    case VolumeState::NOT_SET:
      return {};
    case VolumeState::PENDING_CREATION:
      return "PENDING_CREATION";
    case VolumeState::PENDING_ATTACHMENT:
      return "PENDING_ATTACHMENT";
    case VolumeState::IN_USE:
      return "IN_USE";
    case VolumeState::AVAILABLE:
      return "AVAILABLE";
    case VolumeState::PENDING_DELETION:
      return "PENDING_DELETION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VolumeStateMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
