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
  enum class S3ObjectLockRetentionMode
  {
    NOT_SET,
    COMPLIANCE,
    GOVERNANCE
  };

namespace S3ObjectLockRetentionModeMapper
{
AWS_S3CONTROL_API S3ObjectLockRetentionMode GetS3ObjectLockRetentionModeForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3ObjectLockRetentionMode(S3ObjectLockRetentionMode value);
} // namespace S3ObjectLockRetentionModeMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
