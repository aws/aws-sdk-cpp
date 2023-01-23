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
  enum class CustomKeyStoreType
  {
    NOT_SET,
    AWS_CLOUDHSM,
    EXTERNAL_KEY_STORE
  };

namespace CustomKeyStoreTypeMapper
{
AWS_KMS_API CustomKeyStoreType GetCustomKeyStoreTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForCustomKeyStoreType(CustomKeyStoreType value);
} // namespace CustomKeyStoreTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
