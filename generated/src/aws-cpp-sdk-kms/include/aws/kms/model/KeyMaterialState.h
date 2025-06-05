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
  enum class KeyMaterialState
  {
    NOT_SET,
    NON_CURRENT,
    CURRENT,
    PENDING_ROTATION
  };

namespace KeyMaterialStateMapper
{
AWS_KMS_API KeyMaterialState GetKeyMaterialStateForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForKeyMaterialState(KeyMaterialState value);
} // namespace KeyMaterialStateMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
