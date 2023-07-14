/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace signer
{
namespace Model
{
  enum class EncryptionAlgorithm
  {
    NOT_SET,
    RSA,
    ECDSA
  };

namespace EncryptionAlgorithmMapper
{
AWS_SIGNER_API EncryptionAlgorithm GetEncryptionAlgorithmForName(const Aws::String& name);

AWS_SIGNER_API Aws::String GetNameForEncryptionAlgorithm(EncryptionAlgorithm value);
} // namespace EncryptionAlgorithmMapper
} // namespace Model
} // namespace signer
} // namespace Aws
