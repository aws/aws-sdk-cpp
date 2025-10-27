/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/GlueDataBrew_EXPORTS.h>

namespace Aws {
namespace GlueDataBrew {
namespace Model {
enum class CompressionFormat { NOT_SET, GZIP, LZ4, SNAPPY, BZIP2, DEFLATE, LZO, BROTLI, ZSTD, ZLIB };

namespace CompressionFormatMapper {
AWS_GLUEDATABREW_API CompressionFormat GetCompressionFormatForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForCompressionFormat(CompressionFormat value);
}  // namespace CompressionFormatMapper
}  // namespace Model
}  // namespace GlueDataBrew
}  // namespace Aws
