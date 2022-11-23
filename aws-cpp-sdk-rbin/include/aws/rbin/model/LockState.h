/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RecycleBin
{
namespace Model
{
  enum class LockState
  {
    NOT_SET,
    locked,
    pending_unlock,
    unlocked
  };

namespace LockStateMapper
{
AWS_RECYCLEBIN_API LockState GetLockStateForName(const Aws::String& name);

AWS_RECYCLEBIN_API Aws::String GetNameForLockState(LockState value);
} // namespace LockStateMapper
} // namespace Model
} // namespace RecycleBin
} // namespace Aws
