/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{
  enum class RecorderStatus
  {
    NOT_SET,
    SUCCESS,
    USER_ERROR,
    SYSTEM_ERROR
  };

namespace RecorderStatusMapper
{
AWS_KINESISVIDEO_API RecorderStatus GetRecorderStatusForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForRecorderStatus(RecorderStatus value);
} // namespace RecorderStatusMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
