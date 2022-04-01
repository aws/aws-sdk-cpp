/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class ChangeServerLifeCycleStateSourceServerLifecycleState
  {
    NOT_SET,
    READY_FOR_TEST,
    READY_FOR_CUTOVER,
    CUTOVER
  };

namespace ChangeServerLifeCycleStateSourceServerLifecycleStateMapper
{
AWS_MGN_API ChangeServerLifeCycleStateSourceServerLifecycleState GetChangeServerLifeCycleStateSourceServerLifecycleStateForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForChangeServerLifeCycleStateSourceServerLifecycleState(ChangeServerLifeCycleStateSourceServerLifecycleState value);
} // namespace ChangeServerLifeCycleStateSourceServerLifecycleStateMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
