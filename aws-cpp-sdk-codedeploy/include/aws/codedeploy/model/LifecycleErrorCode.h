/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class LifecycleErrorCode
  {
    NOT_SET,
    Success,
    ScriptMissing,
    ScriptNotExecutable,
    ScriptTimedOut,
    ScriptFailed,
    UnknownError
  };

namespace LifecycleErrorCodeMapper
{
AWS_CODEDEPLOY_API LifecycleErrorCode GetLifecycleErrorCodeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForLifecycleErrorCode(LifecycleErrorCode value);
} // namespace LifecycleErrorCodeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
