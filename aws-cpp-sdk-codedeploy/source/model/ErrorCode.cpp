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

        static const int AGENT_ISSUE_HASH = HashingUtils::HashString("AGENT_ISSUE");
        static const int ALARM_ACTIVE_HASH = HashingUtils::HashString("ALARM_ACTIVE");
        static const int APPLICATION_MISSING_HASH = HashingUtils::HashString("APPLICATION_MISSING");
        static const int AUTOSCALING_VALIDATION_ERROR_HASH = HashingUtils::HashString("AUTOSCALING_VALIDATION_ERROR");
        static const int AUTO_SCALING_CONFIGURATION_HASH = HashingUtils::HashString("AUTO_SCALING_CONFIGURATION");
        static const int AUTO_SCALING_IAM_ROLE_PERMISSIONS_HASH = HashingUtils::HashString("AUTO_SCALING_IAM_ROLE_PERMISSIONS");
        static const int CODEDEPLOY_RESOURCE_CANNOT_BE_FOUND_HASH = HashingUtils::HashString("CODEDEPLOY_RESOURCE_CANNOT_BE_FOUND");
        static const int CUSTOMER_APPLICATION_UNHEALTHY_HASH = HashingUtils::HashString("CUSTOMER_APPLICATION_UNHEALTHY");
        static const int DEPLOYMENT_GROUP_MISSING_HASH = HashingUtils::HashString("DEPLOYMENT_GROUP_MISSING");
        static const int ECS_UPDATE_ERROR_HASH = HashingUtils::HashString("ECS_UPDATE_ERROR");
        static const int ELASTIC_LOAD_BALANCING_INVALID_HASH = HashingUtils::HashString("ELASTIC_LOAD_BALANCING_INVALID");
        static const int ELB_INVALID_INSTANCE_HASH = HashingUtils::HashString("ELB_INVALID_INSTANCE");
        static const int HEALTH_CONSTRAINTS_HASH = HashingUtils::HashString("HEALTH_CONSTRAINTS");
        static const int HEALTH_CONSTRAINTS_INVALID_HASH = HashingUtils::HashString("HEALTH_CONSTRAINTS_INVALID");
        static const int HOOK_EXECUTION_FAILURE_HASH = HashingUtils::HashString("HOOK_EXECUTION_FAILURE");
        static const int IAM_ROLE_MISSING_HASH = HashingUtils::HashString("IAM_ROLE_MISSING");
        static const int IAM_ROLE_PERMISSIONS_HASH = HashingUtils::HashString("IAM_ROLE_PERMISSIONS");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int INVALID_ECS_SERVICE_HASH = HashingUtils::HashString("INVALID_ECS_SERVICE");
        static const int INVALID_LAMBDA_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_LAMBDA_CONFIGURATION");
        static const int INVALID_LAMBDA_FUNCTION_HASH = HashingUtils::HashString("INVALID_LAMBDA_FUNCTION");
        static const int INVALID_REVISION_HASH = HashingUtils::HashString("INVALID_REVISION");
        static const int MANUAL_STOP_HASH = HashingUtils::HashString("MANUAL_STOP");
        static const int MISSING_BLUE_GREEN_DEPLOYMENT_CONFIGURATION_HASH = HashingUtils::HashString("MISSING_BLUE_GREEN_DEPLOYMENT_CONFIGURATION");
        static const int MISSING_ELB_INFORMATION_HASH = HashingUtils::HashString("MISSING_ELB_INFORMATION");
        static const int MISSING_GITHUB_TOKEN_HASH = HashingUtils::HashString("MISSING_GITHUB_TOKEN");
        static const int NO_EC2_SUBSCRIPTION_HASH = HashingUtils::HashString("NO_EC2_SUBSCRIPTION");
        static const int NO_INSTANCES_HASH = HashingUtils::HashString("NO_INSTANCES");
        static const int OVER_MAX_INSTANCES_HASH = HashingUtils::HashString("OVER_MAX_INSTANCES");
        static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RESOURCE_LIMIT_EXCEEDED");
        static const int REVISION_MISSING_HASH = HashingUtils::HashString("REVISION_MISSING");
        static const int THROTTLED_HASH = HashingUtils::HashString("THROTTLED");
        static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
