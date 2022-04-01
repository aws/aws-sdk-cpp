/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class CommandInvocationStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Delayed,
    Success,
    Cancelled,
    TimedOut,
    Failed,
    Cancelling
  };

namespace CommandInvocationStatusMapper
{
AWS_SSM_API CommandInvocationStatus GetCommandInvocationStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForCommandInvocationStatus(CommandInvocationStatus value);
} // namespace CommandInvocationStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
