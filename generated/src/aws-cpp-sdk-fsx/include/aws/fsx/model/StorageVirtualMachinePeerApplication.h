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
enum class StorageVirtualMachinePeerApplication { NOT_SET, SNAPMIRROR, FILE_COPY, LUN_COPY, FLEXCACHE };

namespace StorageVirtualMachinePeerApplicationMapper {
AWS_FSX_API StorageVirtualMachinePeerApplication GetStorageVirtualMachinePeerApplicationForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForStorageVirtualMachinePeerApplication(StorageVirtualMachinePeerApplication value);
}  // namespace StorageVirtualMachinePeerApplicationMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
