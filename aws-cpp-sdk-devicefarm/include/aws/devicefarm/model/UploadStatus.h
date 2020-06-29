/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class UploadStatus
  {
    NOT_SET,
    INITIALIZED,
    PROCESSING,
    SUCCEEDED,
    FAILED
  };

namespace UploadStatusMapper
{
AWS_DEVICEFARM_API UploadStatus GetUploadStatusForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForUploadStatus(UploadStatus value);
} // namespace UploadStatusMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
