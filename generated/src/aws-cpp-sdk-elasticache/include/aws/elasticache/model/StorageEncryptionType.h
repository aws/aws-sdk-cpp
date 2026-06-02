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
enum class StorageEncryptionType { NOT_SET, none, sse_elasticache, sse_kms };

namespace StorageEncryptionTypeMapper {
AWS_ELASTICACHE_API StorageEncryptionType GetStorageEncryptionTypeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForStorageEncryptionType(StorageEncryptionType value);
}  // namespace StorageEncryptionTypeMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
