/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/groundstation/model/VersionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {
namespace VersionStatusMapper {

static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int SUPERSEDED_HASH = HashingUtils::HashString("SUPERSEDED");
static const int FAILED_TO_UPDATE_HASH = HashingUtils::HashString("FAILED_TO_UPDATE");

VersionStatus GetVersionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UPDATING_HASH) {
    return VersionStatus::UPDATING;
  } else if (hashCode == ACTIVE_HASH) {
    return VersionStatus::ACTIVE;
  } else if (hashCode == SUPERSEDED_HASH) {
    return VersionStatus::SUPERSEDED;
  } else if (hashCode == FAILED_TO_UPDATE_HASH) {
    return VersionStatus::FAILED_TO_UPDATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VersionStatus>(hashCode);
  }

  return VersionStatus::NOT_SET;
}

Aws::String GetNameForVersionStatus(VersionStatus enumValue) {
  switch (enumValue) {
    case VersionStatus::NOT_SET:
      return {};
    case VersionStatus::UPDATING:
      return "UPDATING";
    case VersionStatus::ACTIVE:
      return "ACTIVE";
    case VersionStatus::SUPERSEDED:
      return "SUPERSEDED";
    case VersionStatus::FAILED_TO_UPDATE:
      return "FAILED_TO_UPDATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VersionStatusMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
