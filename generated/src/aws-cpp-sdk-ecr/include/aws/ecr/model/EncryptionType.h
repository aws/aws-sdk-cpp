/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{
  enum class EncryptionType
  {
    NOT_SET,
    AES256,
    KMS,
    KMS_DSSE
  };

namespace EncryptionTypeMapper
{
AWS_ECR_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForEncryptionType(EncryptionType value);
} // namespace EncryptionTypeMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
