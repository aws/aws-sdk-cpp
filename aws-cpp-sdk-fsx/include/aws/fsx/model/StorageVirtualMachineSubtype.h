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
  enum class StorageVirtualMachineSubtype
  {
    NOT_SET,
    DEFAULT,
    DP_DESTINATION,
    SYNC_DESTINATION,
    SYNC_SOURCE
  };

namespace StorageVirtualMachineSubtypeMapper
{
AWS_FSX_API StorageVirtualMachineSubtype GetStorageVirtualMachineSubtypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForStorageVirtualMachineSubtype(StorageVirtualMachineSubtype value);
} // namespace StorageVirtualMachineSubtypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
