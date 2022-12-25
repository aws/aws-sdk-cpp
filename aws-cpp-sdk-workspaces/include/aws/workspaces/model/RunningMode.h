/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class RunningMode
  {
    NOT_SET,
    AUTO_STOP,
    ALWAYS_ON,
    MANUAL
  };

namespace RunningModeMapper
{
AWS_WORKSPACES_API RunningMode GetRunningModeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForRunningMode(RunningMode value);
} // namespace RunningModeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
