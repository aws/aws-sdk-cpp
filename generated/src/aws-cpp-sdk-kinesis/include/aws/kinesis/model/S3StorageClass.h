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
enum class S3StorageClass { NOT_SET, STANDARD, INTELLIGENT_TIERING, GLACIER_IR };

namespace S3StorageClassMapper {
AWS_KINESIS_API S3StorageClass GetS3StorageClassForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForS3StorageClass(S3StorageClass value);
}  // namespace S3StorageClassMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
