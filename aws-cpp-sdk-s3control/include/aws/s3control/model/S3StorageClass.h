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
  enum class S3StorageClass
  {
    NOT_SET,
    STANDARD,
    STANDARD_IA,
    ONEZONE_IA,
    GLACIER,
    INTELLIGENT_TIERING,
    DEEP_ARCHIVE
  };

namespace S3StorageClassMapper
{
AWS_S3CONTROL_API S3StorageClass GetS3StorageClassForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3StorageClass(S3StorageClass value);
} // namespace S3StorageClassMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
