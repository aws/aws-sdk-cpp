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
  enum class IncludeKeyMaterial
  {
    NOT_SET,
    ALL_KEY_MATERIAL,
    ROTATIONS_ONLY
  };

namespace IncludeKeyMaterialMapper
{
AWS_KMS_API IncludeKeyMaterial GetIncludeKeyMaterialForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForIncludeKeyMaterial(IncludeKeyMaterial value);
} // namespace IncludeKeyMaterialMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
