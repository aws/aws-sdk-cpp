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
enum class DefaultStorageTier { NOT_SET, HOT, WARM };

namespace DefaultStorageTierMapper {
AWS_KINESISVIDEO_API DefaultStorageTier GetDefaultStorageTierForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForDefaultStorageTier(DefaultStorageTier value);
}  // namespace DefaultStorageTierMapper
}  // namespace Model
}  // namespace KinesisVideo
}  // namespace Aws
