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
  enum class MultiAZStatus
  {
    NOT_SET,
    enabled,
    disabled
  };

namespace MultiAZStatusMapper
{
AWS_ELASTICACHE_API MultiAZStatus GetMultiAZStatusForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForMultiAZStatus(MultiAZStatus value);
} // namespace MultiAZStatusMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
