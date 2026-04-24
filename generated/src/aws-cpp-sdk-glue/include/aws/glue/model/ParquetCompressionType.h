/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class ParquetCompressionType { NOT_SET, snappy, lzo, gzip, brotli, lz4, uncompressed, none };

namespace ParquetCompressionTypeMapper {
AWS_GLUE_API ParquetCompressionType GetParquetCompressionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForParquetCompressionType(ParquetCompressionType value);
}  // namespace ParquetCompressionTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
