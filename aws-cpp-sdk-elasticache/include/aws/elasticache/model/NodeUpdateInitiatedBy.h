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
  enum class NodeUpdateInitiatedBy
  {
    NOT_SET,
    system,
    customer
  };

namespace NodeUpdateInitiatedByMapper
{
AWS_ELASTICACHE_API NodeUpdateInitiatedBy GetNodeUpdateInitiatedByForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForNodeUpdateInitiatedBy(NodeUpdateInitiatedBy value);
} // namespace NodeUpdateInitiatedByMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
