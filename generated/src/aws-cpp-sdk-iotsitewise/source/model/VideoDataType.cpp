/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/VideoDataType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace VideoDataTypeMapper {

static const int VIDEO_MP4_HASH = HashingUtils::HashString("VIDEO-MP4");

VideoDataType GetVideoDataTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VIDEO_MP4_HASH) {
    return VideoDataType::VIDEO_MP4;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VideoDataType>(hashCode);
  }

  return VideoDataType::NOT_SET;
}

Aws::String GetNameForVideoDataType(VideoDataType enumValue) {
  switch (enumValue) {
    case VideoDataType::NOT_SET:
      return {};
    case VideoDataType::VIDEO_MP4:
      return "VIDEO-MP4";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VideoDataTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
