/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>

namespace Aws {
namespace ElastiCache {
namespace Model {
enum class EffectiveDurability { NOT_SET, async, sync, disabled };

namespace EffectiveDurabilityMapper {
AWS_ELASTICACHE_API EffectiveDurability GetEffectiveDurabilityForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForEffectiveDurability(EffectiveDurability value);
}  // namespace EffectiveDurabilityMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
