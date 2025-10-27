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
enum class DeleteFileSystemOpenZFSOption { NOT_SET, DELETE_CHILD_VOLUMES_AND_SNAPSHOTS };

namespace DeleteFileSystemOpenZFSOptionMapper {
AWS_FSX_API DeleteFileSystemOpenZFSOption GetDeleteFileSystemOpenZFSOptionForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForDeleteFileSystemOpenZFSOption(DeleteFileSystemOpenZFSOption value);
}  // namespace DeleteFileSystemOpenZFSOptionMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
