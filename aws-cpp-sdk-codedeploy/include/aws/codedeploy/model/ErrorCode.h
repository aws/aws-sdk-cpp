/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  enum class ErrorCode
  {
    NOT_SET,
    DEPLOYMENT_GROUP_MISSING,
    APPLICATION_MISSING,
    REVISION_MISSING,
    IAM_ROLE_MISSING,
    IAM_ROLE_PERMISSIONS,
    NO_EC2_SUBSCRIPTION,
    OVER_MAX_INSTANCES,
    NO_INSTANCES,
    TIMEOUT,
    HEALTH_CONSTRAINTS_INVALID,
    HEALTH_CONSTRAINTS,
    INTERNAL_ERROR,
    THROTTLED,
    ALARM_ACTIVE,
    AGENT_ISSUE,
    AUTO_SCALING_IAM_ROLE_PERMISSIONS,
    AUTO_SCALING_CONFIGURATION,
    MANUAL_STOP
  };

namespace ErrorCodeMapper
{
AWS_CODEDEPLOY_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
