/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/EFS_EXPORTS.h>

namespace Aws {
namespace EFS {
namespace Model {
enum class ReplicationStatus { NOT_SET, ENABLED, ENABLING, DELETING, ERROR_, PAUSED, PAUSING };

namespace ReplicationStatusMapper {
AWS_EFS_API ReplicationStatus GetReplicationStatusForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForReplicationStatus(ReplicationStatus value);
}  // namespace ReplicationStatusMapper
}  // namespace Model
}  // namespace EFS
}  // namespace Aws
