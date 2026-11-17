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
enum class IntegrationStatus { NOT_SET, enabled, disabled, enabling, disabling, failed };

namespace IntegrationStatusMapper {
AWS_ELASTICACHE_API IntegrationStatus GetIntegrationStatusForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForIntegrationStatus(IntegrationStatus value);
}  // namespace IntegrationStatusMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
