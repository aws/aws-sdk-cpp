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
  enum class SlaMet
  {
    NOT_SET,
    yes,
    no,
    n_a
  };

namespace SlaMetMapper
{
AWS_ELASTICACHE_API SlaMet GetSlaMetForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForSlaMet(SlaMet value);
} // namespace SlaMetMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
