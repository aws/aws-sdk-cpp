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
  enum class EncryptionAlgorithmSpec
  {
    NOT_SET,
    SYMMETRIC_DEFAULT,
    RSAES_OAEP_SHA_1,
    RSAES_OAEP_SHA_256
  };

namespace EncryptionAlgorithmSpecMapper
{
AWS_KMS_API EncryptionAlgorithmSpec GetEncryptionAlgorithmSpecForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForEncryptionAlgorithmSpec(EncryptionAlgorithmSpec value);
} // namespace EncryptionAlgorithmSpecMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
