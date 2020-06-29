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
  enum class PendingAutomaticFailoverStatus
  {
    NOT_SET,
    enabled,
    disabled
  };

namespace PendingAutomaticFailoverStatusMapper
{
AWS_ELASTICACHE_API PendingAutomaticFailoverStatus GetPendingAutomaticFailoverStatusForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForPendingAutomaticFailoverStatus(PendingAutomaticFailoverStatus value);
} // namespace PendingAutomaticFailoverStatusMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
