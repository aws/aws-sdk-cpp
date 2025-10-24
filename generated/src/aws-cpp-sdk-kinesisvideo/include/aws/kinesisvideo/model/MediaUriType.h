/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>

namespace Aws {
namespace KinesisVideo {
namespace Model {
enum class MediaUriType { NOT_SET, RTSP_URI, FILE_URI };

namespace MediaUriTypeMapper {
AWS_KINESISVIDEO_API MediaUriType GetMediaUriTypeForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForMediaUriType(MediaUriType value);
}  // namespace MediaUriTypeMapper
}  // namespace Model
}  // namespace KinesisVideo
}  // namespace Aws
