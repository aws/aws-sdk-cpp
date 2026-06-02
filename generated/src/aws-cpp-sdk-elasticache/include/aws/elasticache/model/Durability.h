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
enum class Durability { NOT_SET, default_, async, sync, disabled };

namespace DurabilityMapper {
AWS_ELASTICACHE_API Durability GetDurabilityForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForDurability(Durability value);
}  // namespace DurabilityMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
