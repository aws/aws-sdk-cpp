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
enum class StorageVirtualMachinePeerUpdateState { NOT_SET, PEERED, REJECTED, SUSPENDED };

namespace StorageVirtualMachinePeerUpdateStateMapper {
AWS_FSX_API StorageVirtualMachinePeerUpdateState GetStorageVirtualMachinePeerUpdateStateForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForStorageVirtualMachinePeerUpdateState(StorageVirtualMachinePeerUpdateState value);
}  // namespace StorageVirtualMachinePeerUpdateStateMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
