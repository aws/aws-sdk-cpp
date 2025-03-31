/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{
  enum class CachePointType
  {
    NOT_SET,
    default_
  };

namespace CachePointTypeMapper
{
AWS_BEDROCKRUNTIME_API CachePointType GetCachePointTypeForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForCachePointType(CachePointType value);
} // namespace CachePointTypeMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
