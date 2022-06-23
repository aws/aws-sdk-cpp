/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class StorageVirtualMachineRootVolumeSecurityStyle
  {
    NOT_SET,
    UNIX,
    NTFS,
    MIXED
  };

namespace StorageVirtualMachineRootVolumeSecurityStyleMapper
{
AWS_FSX_API StorageVirtualMachineRootVolumeSecurityStyle GetStorageVirtualMachineRootVolumeSecurityStyleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForStorageVirtualMachineRootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle value);
} // namespace StorageVirtualMachineRootVolumeSecurityStyleMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
