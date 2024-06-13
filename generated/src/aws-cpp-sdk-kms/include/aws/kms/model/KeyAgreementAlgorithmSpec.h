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
  enum class KeyAgreementAlgorithmSpec
  {
    NOT_SET,
    ECDH
  };

namespace KeyAgreementAlgorithmSpecMapper
{
AWS_KMS_API KeyAgreementAlgorithmSpec GetKeyAgreementAlgorithmSpecForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForKeyAgreementAlgorithmSpec(KeyAgreementAlgorithmSpec value);
} // namespace KeyAgreementAlgorithmSpecMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
