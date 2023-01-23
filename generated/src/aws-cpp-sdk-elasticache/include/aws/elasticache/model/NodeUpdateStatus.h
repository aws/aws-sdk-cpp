/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{
  enum class NodeUpdateStatus
  {
    NOT_SET,
    not_applied,
    waiting_to_start,
    in_progress,
    stopping,
    stopped,
    complete
  };

namespace NodeUpdateStatusMapper
{
AWS_ELASTICACHE_API NodeUpdateStatus GetNodeUpdateStatusForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForNodeUpdateStatus(NodeUpdateStatus value);
} // namespace NodeUpdateStatusMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
