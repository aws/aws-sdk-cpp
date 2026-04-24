/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/ImageStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace ImageStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");
static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");

ImageStatus GetImageStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ImageStatus::ACTIVE;
  } else if (hashCode == ARCHIVED_HASH) {
    return ImageStatus::ARCHIVED;
  } else if (hashCode == ACTIVATING_HASH) {
    return ImageStatus::ACTIVATING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImageStatus>(hashCode);
  }

  return ImageStatus::NOT_SET;
}

Aws::String GetNameForImageStatus(ImageStatus enumValue) {
  switch (enumValue) {
    case ImageStatus::NOT_SET:
      return {};
    case ImageStatus::ACTIVE:
      return "ACTIVE";
    case ImageStatus::ARCHIVED:
      return "ARCHIVED";
    case ImageStatus::ACTIVATING:
      return "ACTIVATING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImageStatusMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
