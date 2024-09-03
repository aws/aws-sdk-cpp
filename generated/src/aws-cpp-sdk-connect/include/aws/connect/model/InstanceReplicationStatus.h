/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class InstanceReplicationStatus
  {
    NOT_SET,
    INSTANCE_REPLICATION_COMPLETE,
    INSTANCE_REPLICATION_IN_PROGRESS,
    INSTANCE_REPLICATION_FAILED,
    INSTANCE_REPLICA_DELETING,
    INSTANCE_REPLICATION_DELETION_FAILED,
    RESOURCE_REPLICATION_NOT_STARTED
  };

namespace InstanceReplicationStatusMapper
{
AWS_CONNECT_API InstanceReplicationStatus GetInstanceReplicationStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForInstanceReplicationStatus(InstanceReplicationStatus value);
} // namespace InstanceReplicationStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
