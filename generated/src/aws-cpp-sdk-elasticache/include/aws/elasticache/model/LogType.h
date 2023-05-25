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
  enum class LogType
  {
    NOT_SET,
    slow_log,
    engine_log
  };

namespace LogTypeMapper
{
AWS_ELASTICACHE_API LogType GetLogTypeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForLogType(LogType value);
} // namespace LogTypeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
