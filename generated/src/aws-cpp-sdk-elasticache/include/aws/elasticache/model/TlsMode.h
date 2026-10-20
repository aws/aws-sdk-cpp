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
enum class TlsMode { NOT_SET, none, verify_ca };

namespace TlsModeMapper {
AWS_ELASTICACHE_API TlsMode GetTlsModeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForTlsMode(TlsMode value);
}  // namespace TlsModeMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
