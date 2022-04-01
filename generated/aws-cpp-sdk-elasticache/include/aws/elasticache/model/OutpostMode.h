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
  enum class OutpostMode
  {
    NOT_SET,
    single_outpost,
    cross_outpost
  };

namespace OutpostModeMapper
{
AWS_ELASTICACHE_API OutpostMode GetOutpostModeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForOutpostMode(OutpostMode value);
} // namespace OutpostModeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
