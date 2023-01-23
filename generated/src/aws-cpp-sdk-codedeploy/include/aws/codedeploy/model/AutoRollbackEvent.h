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
  enum class AutoRollbackEvent
  {
    NOT_SET,
    DEPLOYMENT_FAILURE,
    DEPLOYMENT_STOP_ON_ALARM,
    DEPLOYMENT_STOP_ON_REQUEST
  };

namespace AutoRollbackEventMapper
{
AWS_CODEDEPLOY_API AutoRollbackEvent GetAutoRollbackEventForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForAutoRollbackEvent(AutoRollbackEvent value);
} // namespace AutoRollbackEventMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
