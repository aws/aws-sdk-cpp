/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/ImageActionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace ImageActionTypeMapper {

static const int EXPIRE_HASH = HashingUtils::HashString("EXPIRE");
static const int TRANSITION_HASH = HashingUtils::HashString("TRANSITION");

ImageActionType GetImageActionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXPIRE_HASH) {
    return ImageActionType::EXPIRE;
  } else if (hashCode == TRANSITION_HASH) {
    return ImageActionType::TRANSITION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImageActionType>(hashCode);
  }

  return ImageActionType::NOT_SET;
}

Aws::String GetNameForImageActionType(ImageActionType enumValue) {
  switch (enumValue) {
    case ImageActionType::NOT_SET:
      return {};
    case ImageActionType::EXPIRE:
      return "EXPIRE";
    case ImageActionType::TRANSITION:
      return "TRANSITION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImageActionTypeMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
