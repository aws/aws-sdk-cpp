/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/ArtifactStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace ArtifactStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");
static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");

ArtifactStatus GetArtifactStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ArtifactStatus::ACTIVE;
  } else if (hashCode == ARCHIVED_HASH) {
    return ArtifactStatus::ARCHIVED;
  } else if (hashCode == ACTIVATING_HASH) {
    return ArtifactStatus::ACTIVATING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ArtifactStatus>(hashCode);
  }

  return ArtifactStatus::NOT_SET;
}

Aws::String GetNameForArtifactStatus(ArtifactStatus enumValue) {
  switch (enumValue) {
    case ArtifactStatus::NOT_SET:
      return {};
    case ArtifactStatus::ACTIVE:
      return "ACTIVE";
    case ArtifactStatus::ARCHIVED:
      return "ARCHIVED";
    case ArtifactStatus::ACTIVATING:
      return "ACTIVATING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ArtifactStatusMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
