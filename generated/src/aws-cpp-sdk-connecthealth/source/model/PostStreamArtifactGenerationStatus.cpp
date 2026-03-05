/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/PostStreamArtifactGenerationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace PostStreamArtifactGenerationStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");

PostStreamArtifactGenerationStatus GetPostStreamArtifactGenerationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return PostStreamArtifactGenerationStatus::IN_PROGRESS;
  } else if (hashCode == FAILED_HASH) {
    return PostStreamArtifactGenerationStatus::FAILED;
  } else if (hashCode == COMPLETED_HASH) {
    return PostStreamArtifactGenerationStatus::COMPLETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PostStreamArtifactGenerationStatus>(hashCode);
  }

  return PostStreamArtifactGenerationStatus::NOT_SET;
}

Aws::String GetNameForPostStreamArtifactGenerationStatus(PostStreamArtifactGenerationStatus enumValue) {
  switch (enumValue) {
    case PostStreamArtifactGenerationStatus::NOT_SET:
      return {};
    case PostStreamArtifactGenerationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case PostStreamArtifactGenerationStatus::FAILED:
      return "FAILED";
    case PostStreamArtifactGenerationStatus::COMPLETED:
      return "COMPLETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PostStreamArtifactGenerationStatusMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
