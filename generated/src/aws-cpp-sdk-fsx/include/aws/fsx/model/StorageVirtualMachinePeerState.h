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
enum class StorageVirtualMachinePeerState { NOT_SET, PEERED, REJECTED, SUSPENDED, INITIATED, PENDING, INITIALIZING };

namespace StorageVirtualMachinePeerStateMapper {
AWS_FSX_API StorageVirtualMachinePeerState GetStorageVirtualMachinePeerStateForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForStorageVirtualMachinePeerState(StorageVirtualMachinePeerState value);
}  // namespace StorageVirtualMachinePeerStateMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
