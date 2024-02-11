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
  enum class KeyEncryptionMechanism
  {
    NOT_SET,
    RSAES_OAEP_SHA_256
  };

namespace KeyEncryptionMechanismMapper
{
AWS_KMS_API KeyEncryptionMechanism GetKeyEncryptionMechanismForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForKeyEncryptionMechanism(KeyEncryptionMechanism value);
} // namespace KeyEncryptionMechanismMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
