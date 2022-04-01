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
  enum class SourceType
  {
    NOT_SET,
    cache_cluster,
    cache_parameter_group,
    cache_security_group,
    cache_subnet_group,
    replication_group,
    user,
    user_group
  };

namespace SourceTypeMapper
{
AWS_ELASTICACHE_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
