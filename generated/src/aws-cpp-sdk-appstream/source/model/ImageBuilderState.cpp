/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ImageBuilderState.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {
namespace ImageBuilderStateMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int UPDATING_AGENT_HASH = HashingUtils::HashString("UPDATING_AGENT");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int REBOOTING_HASH = HashingUtils::HashString("REBOOTING");
static const int SNAPSHOTTING_HASH = HashingUtils::HashString("SNAPSHOTTING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int PENDING_QUALIFICATION_HASH = HashingUtils::HashString("PENDING_QUALIFICATION");
static const int PENDING_SYNCING_APPS_HASH = HashingUtils::HashString("PENDING_SYNCING_APPS");
static const int SYNCING_APPS_HASH = HashingUtils::HashString("SYNCING_APPS");
static const int PENDING_IMAGE_IMPORT_HASH = HashingUtils::HashString("PENDING_IMAGE_IMPORT");

ImageBuilderState GetImageBuilderStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ImageBuilderState::PENDING;
  } else if (hashCode == UPDATING_AGENT_HASH) {
    return ImageBuilderState::UPDATING_AGENT;
  } else if (hashCode == RUNNING_HASH) {
    return ImageBuilderState::RUNNING;
  } else if (hashCode == STOPPING_HASH) {
    return ImageBuilderState::STOPPING;
  } else if (hashCode == STOPPED_HASH) {
    return ImageBuilderState::STOPPED;
  } else if (hashCode == REBOOTING_HASH) {
    return ImageBuilderState::REBOOTING;
  } else if (hashCode == SNAPSHOTTING_HASH) {
    return ImageBuilderState::SNAPSHOTTING;
  } else if (hashCode == DELETING_HASH) {
    return ImageBuilderState::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return ImageBuilderState::FAILED;
  } else if (hashCode == UPDATING_HASH) {
    return ImageBuilderState::UPDATING;
  } else if (hashCode == PENDING_QUALIFICATION_HASH) {
    return ImageBuilderState::PENDING_QUALIFICATION;
  } else if (hashCode == PENDING_SYNCING_APPS_HASH) {
    return ImageBuilderState::PENDING_SYNCING_APPS;
  } else if (hashCode == SYNCING_APPS_HASH) {
    return ImageBuilderState::SYNCING_APPS;
  } else if (hashCode == PENDING_IMAGE_IMPORT_HASH) {
    return ImageBuilderState::PENDING_IMAGE_IMPORT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImageBuilderState>(hashCode);
  }

  return ImageBuilderState::NOT_SET;
}

Aws::String GetNameForImageBuilderState(ImageBuilderState enumValue) {
  switch (enumValue) {
    case ImageBuilderState::NOT_SET:
      return {};
    case ImageBuilderState::PENDING:
      return "PENDING";
    case ImageBuilderState::UPDATING_AGENT:
      return "UPDATING_AGENT";
    case ImageBuilderState::RUNNING:
      return "RUNNING";
    case ImageBuilderState::STOPPING:
      return "STOPPING";
    case ImageBuilderState::STOPPED:
      return "STOPPED";
    case ImageBuilderState::REBOOTING:
      return "REBOOTING";
    case ImageBuilderState::SNAPSHOTTING:
      return "SNAPSHOTTING";
    case ImageBuilderState::DELETING:
      return "DELETING";
    case ImageBuilderState::FAILED:
      return "FAILED";
    case ImageBuilderState::UPDATING:
      return "UPDATING";
    case ImageBuilderState::PENDING_QUALIFICATION:
      return "PENDING_QUALIFICATION";
    case ImageBuilderState::PENDING_SYNCING_APPS:
      return "PENDING_SYNCING_APPS";
    case ImageBuilderState::SYNCING_APPS:
      return "SYNCING_APPS";
    case ImageBuilderState::PENDING_IMAGE_IMPORT:
      return "PENDING_IMAGE_IMPORT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImageBuilderStateMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
