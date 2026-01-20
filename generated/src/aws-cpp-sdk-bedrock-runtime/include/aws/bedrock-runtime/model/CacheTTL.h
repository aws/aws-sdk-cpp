/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockRuntime {
namespace Model {
enum class CacheTTL { NOT_SET, _5m, _1h };

namespace CacheTTLMapper {
AWS_BEDROCKRUNTIME_API CacheTTL GetCacheTTLForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForCacheTTL(CacheTTL value);
}  // namespace CacheTTLMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
