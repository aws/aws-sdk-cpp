/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class S3EncryptionMode
  {
    NOT_SET,
    DISABLED,
    SSE_KMS,
    SSE_S3
  };

namespace S3EncryptionModeMapper
{
AWS_GLUE_API S3EncryptionMode GetS3EncryptionModeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForS3EncryptionMode(S3EncryptionMode value);
} // namespace S3EncryptionModeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
