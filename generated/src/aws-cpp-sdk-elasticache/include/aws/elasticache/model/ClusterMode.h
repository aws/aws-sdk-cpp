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
  enum class ClusterMode
  {
    NOT_SET,
    enabled,
    disabled,
    compatible
  };

namespace ClusterModeMapper
{
AWS_ELASTICACHE_API ClusterMode GetClusterModeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForClusterMode(ClusterMode value);
} // namespace ClusterModeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
