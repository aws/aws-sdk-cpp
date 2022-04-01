/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Crt
{
namespace Model
{
  enum class SseKmsEncryptedObjectsStatus
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace SseKmsEncryptedObjectsStatusMapper
{
AWS_S3CRT_API SseKmsEncryptedObjectsStatus GetSseKmsEncryptedObjectsStatusForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForSseKmsEncryptedObjectsStatus(SseKmsEncryptedObjectsStatus value);
} // namespace SseKmsEncryptedObjectsStatusMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
