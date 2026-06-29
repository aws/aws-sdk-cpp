/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Lambda {
namespace Model {
enum class S3ObjectStorageMode { NOT_SET, COPY, REFERENCE };

namespace S3ObjectStorageModeMapper {
AWS_LAMBDA_API S3ObjectStorageMode GetS3ObjectStorageModeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForS3ObjectStorageMode(S3ObjectStorageMode value);
}  // namespace S3ObjectStorageModeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
