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
  enum class StorageVirtualMachineLifecycle
  {
    NOT_SET,
    CREATED,
    CREATING,
    DELETING,
    FAILED,
    MISCONFIGURED,
    PENDING
  };

namespace StorageVirtualMachineLifecycleMapper
{
AWS_FSX_API StorageVirtualMachineLifecycle GetStorageVirtualMachineLifecycleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForStorageVirtualMachineLifecycle(StorageVirtualMachineLifecycle value);
} // namespace StorageVirtualMachineLifecycleMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
