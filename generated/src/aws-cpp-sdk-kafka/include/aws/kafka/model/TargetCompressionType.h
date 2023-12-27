/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Kafka
{
namespace Model
{
  enum class TargetCompressionType
  {
    NOT_SET,
    NONE,
    GZIP,
    SNAPPY,
    LZ4,
    ZSTD
  };

namespace TargetCompressionTypeMapper
{
AWS_KAFKA_API TargetCompressionType GetTargetCompressionTypeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForTargetCompressionType(TargetCompressionType value);
} // namespace TargetCompressionTypeMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
