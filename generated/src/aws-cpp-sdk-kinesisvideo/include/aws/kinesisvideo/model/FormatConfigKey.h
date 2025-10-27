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
enum class FormatConfigKey { NOT_SET, JPEGQuality };

namespace FormatConfigKeyMapper {
AWS_KINESISVIDEO_API FormatConfigKey GetFormatConfigKeyForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForFormatConfigKey(FormatConfigKey value);
}  // namespace FormatConfigKeyMapper
}  // namespace Model
}  // namespace KinesisVideo
}  // namespace Aws
