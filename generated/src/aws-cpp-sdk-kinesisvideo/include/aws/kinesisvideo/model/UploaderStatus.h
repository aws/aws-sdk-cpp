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
  enum class UploaderStatus
  {
    NOT_SET,
    SUCCESS,
    USER_ERROR,
    SYSTEM_ERROR
  };

namespace UploaderStatusMapper
{
AWS_KINESISVIDEO_API UploaderStatus GetUploaderStatusForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForUploaderStatus(UploaderStatus value);
} // namespace UploaderStatusMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
