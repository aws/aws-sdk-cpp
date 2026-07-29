/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class VideoDataType { NOT_SET, VIDEO_MP4 };

namespace VideoDataTypeMapper {
AWS_IOTSITEWISE_API VideoDataType GetVideoDataTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForVideoDataType(VideoDataType value);
}  // namespace VideoDataTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
