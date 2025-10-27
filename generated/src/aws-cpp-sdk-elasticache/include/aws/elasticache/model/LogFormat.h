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
enum class LogFormat { NOT_SET, text, json };

namespace LogFormatMapper {
AWS_ELASTICACHE_API LogFormat GetLogFormatForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForLogFormat(LogFormat value);
}  // namespace LogFormatMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
