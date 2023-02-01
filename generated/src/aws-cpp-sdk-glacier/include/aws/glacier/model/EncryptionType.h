/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{
  enum class EncryptionType
  {
    NOT_SET,
    aws_kms,
    AES256
  };

namespace EncryptionTypeMapper
{
AWS_GLACIER_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_GLACIER_API Aws::String GetNameForEncryptionType(EncryptionType value);
} // namespace EncryptionTypeMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws
