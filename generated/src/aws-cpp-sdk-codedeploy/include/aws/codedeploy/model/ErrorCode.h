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
    TIMEOUT,
    CLOUDFORMATION_STACK_FAILURE
  };

namespace ErrorCodeMapper
{
AWS_CODEDEPLOY_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
