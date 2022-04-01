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
  enum class StorageVirtualMachineFilterName
  {
    NOT_SET,
    file_system_id
  };

namespace StorageVirtualMachineFilterNameMapper
{
AWS_FSX_API StorageVirtualMachineFilterName GetStorageVirtualMachineFilterNameForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForStorageVirtualMachineFilterName(StorageVirtualMachineFilterName value);
} // namespace StorageVirtualMachineFilterNameMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
