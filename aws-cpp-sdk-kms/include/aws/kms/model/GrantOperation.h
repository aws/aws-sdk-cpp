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
  enum class GrantOperation
  {
    NOT_SET,
    Decrypt,
    Encrypt,
    GenerateDataKey,
    GenerateDataKeyWithoutPlaintext,
    ReEncryptFrom,
    ReEncryptTo,
    Sign,
    Verify,
    GetPublicKey,
    CreateGrant,
    RetireGrant,
    DescribeKey,
    GenerateDataKeyPair,
    GenerateDataKeyPairWithoutPlaintext
  };

namespace GrantOperationMapper
{
AWS_KMS_API GrantOperation GetGrantOperationForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForGrantOperation(GrantOperation value);
} // namespace GrantOperationMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
