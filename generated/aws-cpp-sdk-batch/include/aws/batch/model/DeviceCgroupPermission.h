/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class DeviceCgroupPermission
  {
    NOT_SET,
    READ,
    WRITE,
    MKNOD
  };

namespace DeviceCgroupPermissionMapper
{
AWS_BATCH_API DeviceCgroupPermission GetDeviceCgroupPermissionForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForDeviceCgroupPermission(DeviceCgroupPermission value);
} // namespace DeviceCgroupPermissionMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
