/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class S3ChecksumAlgorithm
  {
    NOT_SET,
    CRC32,
    CRC32C,
    SHA1,
    SHA256
  };

namespace S3ChecksumAlgorithmMapper
{
AWS_S3CONTROL_API S3ChecksumAlgorithm GetS3ChecksumAlgorithmForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3ChecksumAlgorithm(S3ChecksumAlgorithm value);
} // namespace S3ChecksumAlgorithmMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
