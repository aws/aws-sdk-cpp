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
enum class S3CompressionType { NOT_SET, NONE, GZIP, ZSTD };

namespace S3CompressionTypeMapper {
AWS_KINESIS_API S3CompressionType GetS3CompressionTypeForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForS3CompressionType(S3CompressionType value);
}  // namespace S3CompressionTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
