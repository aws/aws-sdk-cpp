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
  enum class KeyState
  {
    NOT_SET,
    Enabled,
    Disabled,
    PendingDeletion,
    PendingImport,
    Unavailable
  };

namespace KeyStateMapper
{
AWS_KMS_API KeyState GetKeyStateForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForKeyState(KeyState value);
} // namespace KeyStateMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
