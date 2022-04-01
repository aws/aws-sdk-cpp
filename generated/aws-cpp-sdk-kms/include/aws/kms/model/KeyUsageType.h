/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{
  enum class KeyUsageType
  {
    NOT_SET,
    SIGN_VERIFY,
    ENCRYPT_DECRYPT
  };

namespace KeyUsageTypeMapper
{
AWS_KMS_API KeyUsageType GetKeyUsageTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForKeyUsageType(KeyUsageType value);
} // namespace KeyUsageTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
