/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class PreserveDevices
  {
    NOT_SET,
    NONE,
    PRESERVE
  };

namespace PreserveDevicesMapper
{
AWS_DATASYNC_API PreserveDevices GetPreserveDevicesForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForPreserveDevices(PreserveDevices value);
} // namespace PreserveDevicesMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
