/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class EncryptionType
  {
    NOT_SET,
    CUSTOMER_MANAGED_KMS_KEY,
    AWS_OWNED_KMS_KEY
  };

namespace EncryptionTypeMapper
{
AWS_IOT_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForEncryptionType(EncryptionType value);
} // namespace EncryptionTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
