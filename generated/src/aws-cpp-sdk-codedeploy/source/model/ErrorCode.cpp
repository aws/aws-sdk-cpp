/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static constexpr uint32_t AGENT_ISSUE_HASH = ConstExprHashingUtils::HashString("AGENT_ISSUE");
        static constexpr uint32_t ALARM_ACTIVE_HASH = ConstExprHashingUtils::HashString("ALARM_ACTIVE");
        static constexpr uint32_t APPLICATION_MISSING_HASH = ConstExprHashingUtils::HashString("APPLICATION_MISSING");
        static constexpr uint32_t AUTOSCALING_VALIDATION_ERROR_HASH = ConstExprHashingUtils::HashString("AUTOSCALING_VALIDATION_ERROR");
        static constexpr uint32_t AUTO_SCALING_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("AUTO_SCALING_CONFIGURATION");
        static constexpr uint32_t AUTO_SCALING_IAM_ROLE_PERMISSIONS_HASH = ConstExprHashingUtils::HashString("AUTO_SCALING_IAM_ROLE_PERMISSIONS");
        static constexpr uint32_t CODEDEPLOY_RESOURCE_CANNOT_BE_FOUND_HASH = ConstExprHashingUtils::HashString("CODEDEPLOY_RESOURCE_CANNOT_BE_FOUND");
        static constexpr uint32_t CUSTOMER_APPLICATION_UNHEALTHY_HASH = ConstExprHashingUtils::HashString("CUSTOMER_APPLICATION_UNHEALTHY");
        static constexpr uint32_t DEPLOYMENT_GROUP_MISSING_HASH = ConstExprHashingUtils::HashString("DEPLOYMENT_GROUP_MISSING");
        static constexpr uint32_t ECS_UPDATE_ERROR_HASH = ConstExprHashingUtils::HashString("ECS_UPDATE_ERROR");
        static constexpr uint32_t ELASTIC_LOAD_BALANCING_INVALID_HASH = ConstExprHashingUtils::HashString("ELASTIC_LOAD_BALANCING_INVALID");
        static constexpr uint32_t ELB_INVALID_INSTANCE_HASH = ConstExprHashingUtils::HashString("ELB_INVALID_INSTANCE");
        static constexpr uint32_t HEALTH_CONSTRAINTS_HASH = ConstExprHashingUtils::HashString("HEALTH_CONSTRAINTS");
        static constexpr uint32_t HEALTH_CONSTRAINTS_INVALID_HASH = ConstExprHashingUtils::HashString("HEALTH_CONSTRAINTS_INVALID");
        static constexpr uint32_t HOOK_EXECUTION_FAILURE_HASH = ConstExprHashingUtils::HashString("HOOK_EXECUTION_FAILURE");
        static constexpr uint32_t IAM_ROLE_MISSING_HASH = ConstExprHashingUtils::HashString("IAM_ROLE_MISSING");
        static constexpr uint32_t IAM_ROLE_PERMISSIONS_HASH = ConstExprHashingUtils::HashString("IAM_ROLE_PERMISSIONS");
        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");
        static constexpr uint32_t INVALID_ECS_SERVICE_HASH = ConstExprHashingUtils::HashString("INVALID_ECS_SERVICE");
        static constexpr uint32_t INVALID_LAMBDA_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("INVALID_LAMBDA_CONFIGURATION");
        static constexpr uint32_t INVALID_LAMBDA_FUNCTION_HASH = ConstExprHashingUtils::HashString("INVALID_LAMBDA_FUNCTION");
        static constexpr uint32_t INVALID_REVISION_HASH = ConstExprHashingUtils::HashString("INVALID_REVISION");
        static constexpr uint32_t MANUAL_STOP_HASH = ConstExprHashingUtils::HashString("MANUAL_STOP");
        static constexpr uint32_t MISSING_BLUE_GREEN_DEPLOYMENT_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("MISSING_BLUE_GREEN_DEPLOYMENT_CONFIGURATION");
        static constexpr uint32_t MISSING_ELB_INFORMATION_HASH = ConstExprHashingUtils::HashString("MISSING_ELB_INFORMATION");
        static constexpr uint32_t MISSING_GITHUB_TOKEN_HASH = ConstExprHashingUtils::HashString("MISSING_GITHUB_TOKEN");
        static constexpr uint32_t NO_EC2_SUBSCRIPTION_HASH = ConstExprHashingUtils::HashString("NO_EC2_SUBSCRIPTION");
        static constexpr uint32_t NO_INSTANCES_HASH = ConstExprHashingUtils::HashString("NO_INSTANCES");
        static constexpr uint32_t OVER_MAX_INSTANCES_HASH = ConstExprHashingUtils::HashString("OVER_MAX_INSTANCES");
        static constexpr uint32_t RESOURCE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("RESOURCE_LIMIT_EXCEEDED");
        static constexpr uint32_t REVISION_MISSING_HASH = ConstExprHashingUtils::HashString("REVISION_MISSING");
        static constexpr uint32_t THROTTLED_HASH = ConstExprHashingUtils::HashString("THROTTLED");
        static constexpr uint32_t TIMEOUT_HASH = ConstExprHashingUtils::HashString("TIMEOUT");
        static constexpr uint32_t CLOUDFORMATION_STACK_FAILURE_HASH = ConstExprHashingUtils::HashString("CLOUDFORMATION_STACK_FAILURE");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENT_ISSUE_HASH)
          {
            return ErrorCode::AGENT_ISSUE;
          }
          else if (hashCode == ALARM_ACTIVE_HASH)
          {
            return ErrorCode::ALARM_ACTIVE;
          }
          else if (hashCode == APPLICATION_MISSING_HASH)
          {
            return ErrorCode::APPLICATION_MISSING;
          }
          else if (hashCode == AUTOSCALING_VALIDATION_ERROR_HASH)
          {
            return ErrorCode::AUTOSCALING_VALIDATION_ERROR;
          }
          else if (hashCode == AUTO_SCALING_CONFIGURATION_HASH)
          {
            return ErrorCode::AUTO_SCALING_CONFIGURATION;
          }
          else if (hashCode == AUTO_SCALING_IAM_ROLE_PERMISSIONS_HASH)
          {
            return ErrorCode::AUTO_SCALING_IAM_ROLE_PERMISSIONS;
          }
          else if (hashCode == CODEDEPLOY_RESOURCE_CANNOT_BE_FOUND_HASH)
          {
            return ErrorCode::CODEDEPLOY_RESOURCE_CANNOT_BE_FOUND;
          }
          else if (hashCode == CUSTOMER_APPLICATION_UNHEALTHY_HASH)
          {
            return ErrorCode::CUSTOMER_APPLICATION_UNHEALTHY;
          }
          else if (hashCode == DEPLOYMENT_GROUP_MISSING_HASH)
          {
            return ErrorCode::DEPLOYMENT_GROUP_MISSING;
          }
          else if (hashCode == ECS_UPDATE_ERROR_HASH)
          {
            return ErrorCode::ECS_UPDATE_ERROR;
          }
          else if (hashCode == ELASTIC_LOAD_BALANCING_INVALID_HASH)
          {
            return ErrorCode::ELASTIC_LOAD_BALANCING_INVALID;
          }
          else if (hashCode == ELB_INVALID_INSTANCE_HASH)
          {
            return ErrorCode::ELB_INVALID_INSTANCE;
          }
          else if (hashCode == HEALTH_CONSTRAINTS_HASH)
          {
            return ErrorCode::HEALTH_CONSTRAINTS;
          }
          else if (hashCode == HEALTH_CONSTRAINTS_INVALID_HASH)
          {
            return ErrorCode::HEALTH_CONSTRAINTS_INVALID;
          }
          else if (hashCode == HOOK_EXECUTION_FAILURE_HASH)
          {
            return ErrorCode::HOOK_EXECUTION_FAILURE;
          }
          else if (hashCode == IAM_ROLE_MISSING_HASH)
          {
            return ErrorCode::IAM_ROLE_MISSING;
          }
          else if (hashCode == IAM_ROLE_PERMISSIONS_HASH)
          {
            return ErrorCode::IAM_ROLE_PERMISSIONS;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ErrorCode::INTERNAL_ERROR;
          }
          else if (hashCode == INVALID_ECS_SERVICE_HASH)
          {
            return ErrorCode::INVALID_ECS_SERVICE;
          }
          else if (hashCode == INVALID_LAMBDA_CONFIGURATION_HASH)
          {
            return ErrorCode::INVALID_LAMBDA_CONFIGURATION;
          }
          else if (hashCode == INVALID_LAMBDA_FUNCTION_HASH)
          {
            return ErrorCode::INVALID_LAMBDA_FUNCTION;
          }
          else if (hashCode == INVALID_REVISION_HASH)
          {
            return ErrorCode::INVALID_REVISION;
          }
          else if (hashCode == MANUAL_STOP_HASH)
          {
            return ErrorCode::MANUAL_STOP;
          }
          else if (hashCode == MISSING_BLUE_GREEN_DEPLOYMENT_CONFIGURATION_HASH)
          {
            return ErrorCode::MISSING_BLUE_GREEN_DEPLOYMENT_CONFIGURATION;
          }
          else if (hashCode == MISSING_ELB_INFORMATION_HASH)
          {
            return ErrorCode::MISSING_ELB_INFORMATION;
          }
          else if (hashCode == MISSING_GITHUB_TOKEN_HASH)
          {
            return ErrorCode::MISSING_GITHUB_TOKEN;
          }
          else if (hashCode == NO_EC2_SUBSCRIPTION_HASH)
          {
            return ErrorCode::NO_EC2_SUBSCRIPTION;
          }
          else if (hashCode == NO_INSTANCES_HASH)
          {
            return ErrorCode::NO_INSTANCES;
          }
          else if (hashCode == OVER_MAX_INSTANCES_HASH)
          {
            return ErrorCode::OVER_MAX_INSTANCES;
          }
          else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
          {
            return ErrorCode::RESOURCE_LIMIT_EXCEEDED;
          }
          else if (hashCode == REVISION_MISSING_HASH)
          {
            return ErrorCode::REVISION_MISSING;
          }
          else if (hashCode == THROTTLED_HASH)
          {
            return ErrorCode::THROTTLED;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return ErrorCode::TIMEOUT;
          }
          else if (hashCode == CLOUDFORMATION_STACK_FAILURE_HASH)
          {
            return ErrorCode::CLOUDFORMATION_STACK_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCode>(hashCode);
          }

          return ErrorCode::NOT_SET;
        }

        Aws::String GetNameForErrorCode(ErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ErrorCode::NOT_SET:
            return {};
          case ErrorCode::AGENT_ISSUE:
            return "AGENT_ISSUE";
          case ErrorCode::ALARM_ACTIVE:
            return "ALARM_ACTIVE";
          case ErrorCode::APPLICATION_MISSING:
            return "APPLICATION_MISSING";
          case ErrorCode::AUTOSCALING_VALIDATION_ERROR:
            return "AUTOSCALING_VALIDATION_ERROR";
          case ErrorCode::AUTO_SCALING_CONFIGURATION:
            return "AUTO_SCALING_CONFIGURATION";
          case ErrorCode::AUTO_SCALING_IAM_ROLE_PERMISSIONS:
            return "AUTO_SCALING_IAM_ROLE_PERMISSIONS";
          case ErrorCode::CODEDEPLOY_RESOURCE_CANNOT_BE_FOUND:
            return "CODEDEPLOY_RESOURCE_CANNOT_BE_FOUND";
          case ErrorCode::CUSTOMER_APPLICATION_UNHEALTHY:
            return "CUSTOMER_APPLICATION_UNHEALTHY";
          case ErrorCode::DEPLOYMENT_GROUP_MISSING:
            return "DEPLOYMENT_GROUP_MISSING";
          case ErrorCode::ECS_UPDATE_ERROR:
            return "ECS_UPDATE_ERROR";
          case ErrorCode::ELASTIC_LOAD_BALANCING_INVALID:
            return "ELASTIC_LOAD_BALANCING_INVALID";
          case ErrorCode::ELB_INVALID_INSTANCE:
            return "ELB_INVALID_INSTANCE";
          case ErrorCode::HEALTH_CONSTRAINTS:
            return "HEALTH_CONSTRAINTS";
          case ErrorCode::HEALTH_CONSTRAINTS_INVALID:
            return "HEALTH_CONSTRAINTS_INVALID";
          case ErrorCode::HOOK_EXECUTION_FAILURE:
            return "HOOK_EXECUTION_FAILURE";
          case ErrorCode::IAM_ROLE_MISSING:
            return "IAM_ROLE_MISSING";
          case ErrorCode::IAM_ROLE_PERMISSIONS:
            return "IAM_ROLE_PERMISSIONS";
          case ErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case ErrorCode::INVALID_ECS_SERVICE:
            return "INVALID_ECS_SERVICE";
          case ErrorCode::INVALID_LAMBDA_CONFIGURATION:
            return "INVALID_LAMBDA_CONFIGURATION";
          case ErrorCode::INVALID_LAMBDA_FUNCTION:
            return "INVALID_LAMBDA_FUNCTION";
          case ErrorCode::INVALID_REVISION:
            return "INVALID_REVISION";
          case ErrorCode::MANUAL_STOP:
            return "MANUAL_STOP";
          case ErrorCode::MISSING_BLUE_GREEN_DEPLOYMENT_CONFIGURATION:
            return "MISSING_BLUE_GREEN_DEPLOYMENT_CONFIGURATION";
          case ErrorCode::MISSING_ELB_INFORMATION:
            return "MISSING_ELB_INFORMATION";
          case ErrorCode::MISSING_GITHUB_TOKEN:
            return "MISSING_GITHUB_TOKEN";
          case ErrorCode::NO_EC2_SUBSCRIPTION:
            return "NO_EC2_SUBSCRIPTION";
          case ErrorCode::NO_INSTANCES:
            return "NO_INSTANCES";
          case ErrorCode::OVER_MAX_INSTANCES:
            return "OVER_MAX_INSTANCES";
          case ErrorCode::RESOURCE_LIMIT_EXCEEDED:
            return "RESOURCE_LIMIT_EXCEEDED";
          case ErrorCode::REVISION_MISSING:
            return "REVISION_MISSING";
          case ErrorCode::THROTTLED:
            return "THROTTLED";
          case ErrorCode::TIMEOUT:
            return "TIMEOUT";
          case ErrorCode::CLOUDFORMATION_STACK_FAILURE:
            return "CLOUDFORMATION_STACK_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCodeMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
