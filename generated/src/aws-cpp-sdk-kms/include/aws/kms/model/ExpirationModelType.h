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
  enum class ExpirationModelType
  {
    NOT_SET,
    KEY_MATERIAL_EXPIRES,
    KEY_MATERIAL_DOES_NOT_EXPIRE
  };

namespace ExpirationModelTypeMapper
{
AWS_KMS_API ExpirationModelType GetExpirationModelTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForExpirationModelType(ExpirationModelType value);
} // namespace ExpirationModelTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
