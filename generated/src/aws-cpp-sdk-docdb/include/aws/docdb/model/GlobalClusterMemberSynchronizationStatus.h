/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/DocDB_EXPORTS.h>

namespace Aws {
namespace DocDB {
namespace Model {
enum class GlobalClusterMemberSynchronizationStatus { NOT_SET, connected, pending_resync };

namespace GlobalClusterMemberSynchronizationStatusMapper {
AWS_DOCDB_API GlobalClusterMemberSynchronizationStatus GetGlobalClusterMemberSynchronizationStatusForName(const Aws::String& name);

AWS_DOCDB_API Aws::String GetNameForGlobalClusterMemberSynchronizationStatus(GlobalClusterMemberSynchronizationStatus value);
}  // namespace GlobalClusterMemberSynchronizationStatusMapper
}  // namespace Model
}  // namespace DocDB
}  // namespace Aws
