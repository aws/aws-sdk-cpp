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
enum class ConnectionType { NOT_SET, vpc, public_ };

namespace ConnectionTypeMapper {
AWS_ELASTICACHE_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForConnectionType(ConnectionType value);
}  // namespace ConnectionTypeMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
