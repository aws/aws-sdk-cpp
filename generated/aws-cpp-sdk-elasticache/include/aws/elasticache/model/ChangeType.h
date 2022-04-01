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
  enum class ChangeType
  {
    NOT_SET,
    immediate,
    requires_reboot
  };

namespace ChangeTypeMapper
{
AWS_ELASTICACHE_API ChangeType GetChangeTypeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForChangeType(ChangeType value);
} // namespace ChangeTypeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
