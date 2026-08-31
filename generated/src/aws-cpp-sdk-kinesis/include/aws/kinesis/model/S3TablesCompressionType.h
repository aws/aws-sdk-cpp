/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

namespace Aws {
namespace Kinesis {
namespace Model {
enum class S3TablesCompressionType { NOT_SET, NONE, ZSTD, SNAPPY };

namespace S3TablesCompressionTypeMapper {
AWS_KINESIS_API S3TablesCompressionType GetS3TablesCompressionTypeForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForS3TablesCompressionType(S3TablesCompressionType value);
}  // namespace S3TablesCompressionTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
