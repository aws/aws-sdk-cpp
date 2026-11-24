/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws {
namespace FSx {
namespace Model {
enum class StorageVirtualMachinePeerFilterName { NOT_SET, file_system_id, storage_virtual_machine_id };

namespace StorageVirtualMachinePeerFilterNameMapper {
AWS_FSX_API StorageVirtualMachinePeerFilterName GetStorageVirtualMachinePeerFilterNameForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForStorageVirtualMachinePeerFilterName(StorageVirtualMachinePeerFilterName value);
}  // namespace StorageVirtualMachinePeerFilterNameMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
