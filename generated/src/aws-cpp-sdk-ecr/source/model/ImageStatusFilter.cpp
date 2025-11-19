/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/ImageStatusFilter.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace ImageStatusFilterMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");
static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
static const int ANY_HASH = HashingUtils::HashString("ANY");

ImageStatusFilter GetImageStatusFilterForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ImageStatusFilter::ACTIVE;
  } else if (hashCode == ARCHIVED_HASH) {
    return ImageStatusFilter::ARCHIVED;
  } else if (hashCode == ACTIVATING_HASH) {
    return ImageStatusFilter::ACTIVATING;
  } else if (hashCode == ANY_HASH) {
    return ImageStatusFilter::ANY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImageStatusFilter>(hashCode);
  }

  return ImageStatusFilter::NOT_SET;
}

Aws::String GetNameForImageStatusFilter(ImageStatusFilter enumValue) {
  switch (enumValue) {
    case ImageStatusFilter::NOT_SET:
      return {};
    case ImageStatusFilter::ACTIVE:
      return "ACTIVE";
    case ImageStatusFilter::ARCHIVED:
      return "ARCHIVED";
    case ImageStatusFilter::ACTIVATING:
      return "ACTIVATING";
    case ImageStatusFilter::ANY:
      return "ANY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImageStatusFilterMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
