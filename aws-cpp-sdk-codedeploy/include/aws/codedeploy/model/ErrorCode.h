/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    AGENT_ISSUE,
    ALARM_ACTIVE,
    APPLICATION_MISSING,
    AUTOSCALING_VALIDATION_ERROR,
    AUTO_SCALING_CONFIGURATION,
    AUTO_SCALING_IAM_ROLE_PERMISSIONS,
    CODEDEPLOY_RESOURCE_CANNOT_BE_FOUND,
    CUSTOMER_APPLICATION_UNHEALTHY,
    DEPLOYMENT_GROUP_MISSING,
    ECS_UPDATE_ERROR,
    ELASTIC_LOAD_BALANCING_INVALID,
    ELB_INVALID_INSTANCE,
    HEALTH_CONSTRAINTS,
    HEALTH_CONSTRAINTS_INVALID,
    HOOK_EXECUTION_FAILURE,
    IAM_ROLE_MISSING,
    IAM_ROLE_PERMISSIONS,
    INTERNAL_ERROR,
    INVALID_ECS_SERVICE,
    INVALID_LAMBDA_CONFIGURATION,
    INVALID_LAMBDA_FUNCTION,
    INVALID_REVISION,
    MANUAL_STOP,
    MISSING_BLUE_GREEN_DEPLOYMENT_CONFIGURATION,
    MISSING_ELB_INFORMATION,
    MISSING_GITHUB_TOKEN,
    NO_EC2_SUBSCRIPTION,
    NO_INSTANCES,
    OVER_MAX_INSTANCES,
    RESOURCE_LIMIT_EXCEEDED,
    REVISION_MISSING,
    THROTTLED,
    TIMEOUT
  };

namespace ErrorCodeMapper
{
AWS_CODEDEPLOY_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
