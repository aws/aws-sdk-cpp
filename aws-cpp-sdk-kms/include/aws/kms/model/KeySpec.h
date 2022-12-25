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
  enum class KeySpec
  {
    NOT_SET,
    RSA_2048,
    RSA_3072,
    RSA_4096,
    ECC_NIST_P256,
    ECC_NIST_P384,
    ECC_NIST_P521,
    ECC_SECG_P256K1,
    SYMMETRIC_DEFAULT,
    HMAC_224,
    HMAC_256,
    HMAC_384,
    HMAC_512,
    SM2
  };

namespace KeySpecMapper
{
AWS_KMS_API KeySpec GetKeySpecForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForKeySpec(KeySpec value);
} // namespace KeySpecMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
