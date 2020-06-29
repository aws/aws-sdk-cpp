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
  enum class AutomaticFailoverStatus
  {
    NOT_SET,
    enabled,
    disabled,
    enabling,
    disabling
  };

namespace AutomaticFailoverStatusMapper
{
AWS_ELASTICACHE_API AutomaticFailoverStatus GetAutomaticFailoverStatusForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForAutomaticFailoverStatus(AutomaticFailoverStatus value);
} // namespace AutomaticFailoverStatusMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
