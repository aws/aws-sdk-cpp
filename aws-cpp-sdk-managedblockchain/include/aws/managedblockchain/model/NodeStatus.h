/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{
  enum class NodeStatus
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    UNHEALTHY,
    CREATE_FAILED,
    UPDATING,
    DELETING,
    DELETED,
    FAILED,
    INACCESSIBLE_ENCRYPTION_KEY
  };

namespace NodeStatusMapper
{
AWS_MANAGEDBLOCKCHAIN_API NodeStatus GetNodeStatusForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForNodeStatus(NodeStatus value);
} // namespace NodeStatusMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
