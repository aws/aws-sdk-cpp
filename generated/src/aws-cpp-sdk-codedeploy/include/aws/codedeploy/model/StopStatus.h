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
  enum class StopStatus
  {
    NOT_SET,
    Pending,
    Succeeded
  };

namespace StopStatusMapper
{
AWS_CODEDEPLOY_API StopStatus GetStopStatusForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForStopStatus(StopStatus value);
} // namespace StopStatusMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
