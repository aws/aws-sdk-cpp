/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

namespace Aws {
namespace Kafka {
namespace Model {
enum class IcebergCompressionType { NOT_SET, ZSTD, SNAPPY };

namespace IcebergCompressionTypeMapper {
AWS_KAFKA_API IcebergCompressionType GetIcebergCompressionTypeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForIcebergCompressionType(IcebergCompressionType value);
}  // namespace IcebergCompressionTypeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
