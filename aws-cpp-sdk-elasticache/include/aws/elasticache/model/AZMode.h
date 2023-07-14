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
  enum class AZMode
  {
    NOT_SET,
    single_az,
    cross_az
  };

namespace AZModeMapper
{
AWS_ELASTICACHE_API AZMode GetAZModeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForAZMode(AZMode value);
} // namespace AZModeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
