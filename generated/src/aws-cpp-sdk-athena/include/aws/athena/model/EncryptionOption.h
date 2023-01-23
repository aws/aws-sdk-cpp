/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class EncryptionOption
  {
    NOT_SET,
    SSE_S3,
    SSE_KMS,
    CSE_KMS
  };

namespace EncryptionOptionMapper
{
AWS_ATHENA_API EncryptionOption GetEncryptionOptionForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForEncryptionOption(EncryptionOption value);
} // namespace EncryptionOptionMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
