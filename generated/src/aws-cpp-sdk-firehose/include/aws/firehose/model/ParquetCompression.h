/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/Firehose_EXPORTS.h>

namespace Aws {
namespace Firehose {
namespace Model {
enum class ParquetCompression { NOT_SET, UNCOMPRESSED, GZIP, SNAPPY };

namespace ParquetCompressionMapper {
AWS_FIREHOSE_API ParquetCompression GetParquetCompressionForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForParquetCompression(ParquetCompression value);
}  // namespace ParquetCompressionMapper
}  // namespace Model
}  // namespace Firehose
}  // namespace Aws
