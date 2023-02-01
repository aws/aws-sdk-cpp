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
  enum class KeyManagerType
  {
    NOT_SET,
    AWS,
    CUSTOMER
  };

namespace KeyManagerTypeMapper
{
AWS_KMS_API KeyManagerType GetKeyManagerTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForKeyManagerType(KeyManagerType value);
} // namespace KeyManagerTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
