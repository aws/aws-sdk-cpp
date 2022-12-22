/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class ExecutorState
  {
    NOT_SET,
    CREATING,
    CREATED,
    REGISTERED,
    TERMINATING,
    TERMINATED,
    FAILED
  };

namespace ExecutorStateMapper
{
AWS_ATHENA_API ExecutorState GetExecutorStateForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForExecutorState(ExecutorState value);
} // namespace ExecutorStateMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
