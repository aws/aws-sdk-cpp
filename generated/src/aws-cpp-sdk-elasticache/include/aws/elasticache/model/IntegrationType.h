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
enum class IntegrationType { NOT_SET, dynamodb };

namespace IntegrationTypeMapper {
AWS_ELASTICACHE_API IntegrationType GetIntegrationTypeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForIntegrationType(IntegrationType value);
}  // namespace IntegrationTypeMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
