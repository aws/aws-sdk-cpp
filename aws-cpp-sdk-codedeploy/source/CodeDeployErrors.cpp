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
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codedeploy/CodeDeployErrors.h>

using namespace Aws::Client;
using namespace Aws::CodeDeploy;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace CodeDeployErrorMapper
{

static const int BUCKET_NAME_FILTER_REQUIRED_HASH = HashingUtils::HashString("BucketNameFilterRequiredException");
static const int INSTANCE_NAME_REQUIRED_HASH = HashingUtils::HashString("InstanceNameRequiredException");
static const int TAG_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TagLimitExceededException");
static const int INSTANCE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("InstanceDoesNotExistException");
static const int APPLICATION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ApplicationLimitExceededException");
static const int INVALID_MINIMUM_HEALTHY_HOST_VALUE_HASH = HashingUtils::HashString("InvalidMinimumHealthyHostValueException");
static const int DEPLOYMENT_NOT_STARTED_HASH = HashingUtils::HashString("DeploymentNotStartedException");
static const int INVALID_REGISTRATION_STATUS_HASH = HashingUtils::HashString("InvalidRegistrationStatusException");
static const int INSTANCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("InstanceLimitExceededException");
static const int REVISION_REQUIRED_HASH = HashingUtils::HashString("RevisionRequiredException");
static const int INVALID_ROLE_HASH = HashingUtils::HashString("InvalidRoleException");
static const int APPLICATION_NAME_REQUIRED_HASH = HashingUtils::HashString("ApplicationNameRequiredException");
static const int INVALID_REVISION_HASH = HashingUtils::HashString("InvalidRevisionException");
static const int INVALID_DEPLOYMENT_CONFIG_NAME_HASH = HashingUtils::HashString("InvalidDeploymentConfigNameException");
static const int ALARMS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AlarmsLimitExceededException");
static const int DEPLOYMENT_ID_REQUIRED_HASH = HashingUtils::HashString("DeploymentIdRequiredException");
static const int APPLICATION_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ApplicationDoesNotExistException");
static const int INVALID_OPERATION_HASH = HashingUtils::HashString("InvalidOperationException");
static const int DEPLOYMENT_GROUP_DOES_NOT_EXIST_HASH = HashingUtils::HashString("DeploymentGroupDoesNotExistException");
static const int IAM_USER_ARN_ALREADY_REGISTERED_HASH = HashingUtils::HashString("IamUserArnAlreadyRegisteredException");
static const int DEPLOYMENT_GROUP_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DeploymentGroupLimitExceededException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_INSTANCE_NAME_HASH = HashingUtils::HashString("InvalidInstanceNameException");
static const int BATCH_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("BatchLimitExceededException");
static const int DEPLOYMENT_CONFIG_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DeploymentConfigLimitExceededException");
static const int INVALID_SORT_ORDER_HASH = HashingUtils::HashString("InvalidSortOrderException");
static const int DESCRIPTION_TOO_LONG_HASH = HashingUtils::HashString("DescriptionTooLongException");
static const int TRIGGER_TARGETS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TriggerTargetsLimitExceededException");
static const int DEPLOYMENT_CONFIG_IN_USE_HASH = HashingUtils::HashString("DeploymentConfigInUseException");
static const int INVALID_TAG_FILTER_HASH = HashingUtils::HashString("InvalidTagFilterException");
static const int INVALID_DEPLOYED_STATE_FILTER_HASH = HashingUtils::HashString("InvalidDeployedStateFilterException");
static const int INVALID_ALARM_CONFIG_HASH = HashingUtils::HashString("InvalidAlarmConfigException");
static const int INVALID_INSTANCE_STATUS_HASH = HashingUtils::HashString("InvalidInstanceStatusException");
static const int REVISION_DOES_NOT_EXIST_HASH = HashingUtils::HashString("RevisionDoesNotExistException");
static const int INVALID_TRIGGER_CONFIG_HASH = HashingUtils::HashString("InvalidTriggerConfigException");
static const int INVALID_DEPLOYMENT_GROUP_NAME_HASH = HashingUtils::HashString("InvalidDeploymentGroupNameException");
static const int DEPLOYMENT_CONFIG_NAME_REQUIRED_HASH = HashingUtils::HashString("DeploymentConfigNameRequiredException");
static const int INSTANCE_ID_REQUIRED_HASH = HashingUtils::HashString("InstanceIdRequiredException");
static const int DEPLOYMENT_CONFIG_DOES_NOT_EXIST_HASH = HashingUtils::HashString("DeploymentConfigDoesNotExistException");
static const int APPLICATION_ALREADY_EXISTS_HASH = HashingUtils::HashString("ApplicationAlreadyExistsException");
static const int INVALID_E_C2_TAG_HASH = HashingUtils::HashString("InvalidEC2TagException");
static const int INVALID_AUTO_SCALING_GROUP_HASH = HashingUtils::HashString("InvalidAutoScalingGroupException");
static const int DEPLOYMENT_ALREADY_COMPLETED_HASH = HashingUtils::HashString("DeploymentAlreadyCompletedException");
static const int INSTANCE_NOT_REGISTERED_HASH = HashingUtils::HashString("InstanceNotRegisteredException");
static const int ROLE_REQUIRED_HASH = HashingUtils::HashString("RoleRequiredException");
static const int DEPLOYMENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DeploymentLimitExceededException");
static const int LIFECYCLE_HOOK_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LifecycleHookLimitExceededException");
static const int DEPLOYMENT_DOES_NOT_EXIST_HASH = HashingUtils::HashString("DeploymentDoesNotExistException");
static const int IAM_USER_ARN_REQUIRED_HASH = HashingUtils::HashString("IamUserArnRequiredException");
static const int INVALID_TIME_RANGE_HASH = HashingUtils::HashString("InvalidTimeRangeException");
static const int DEPLOYMENT_GROUP_NAME_REQUIRED_HASH = HashingUtils::HashString("DeploymentGroupNameRequiredException");
static const int INVALID_DEPLOYMENT_ID_HASH = HashingUtils::HashString("InvalidDeploymentIdException");
static const int INVALID_DEPLOYMENT_STATUS_HASH = HashingUtils::HashString("InvalidDeploymentStatusException");
static const int INSTANCE_NAME_ALREADY_REGISTERED_HASH = HashingUtils::HashString("InstanceNameAlreadyRegisteredException");
static const int INVALID_SORT_BY_HASH = HashingUtils::HashString("InvalidSortByException");
static const int INVALID_BUCKET_NAME_FILTER_HASH = HashingUtils::HashString("InvalidBucketNameFilterException");
static const int INVALID_IAM_USER_ARN_HASH = HashingUtils::HashString("InvalidIamUserArnException");
static const int INVALID_APPLICATION_NAME_HASH = HashingUtils::HashString("InvalidApplicationNameException");
static const int DEPLOYMENT_GROUP_ALREADY_EXISTS_HASH = HashingUtils::HashString("DeploymentGroupAlreadyExistsException");
static const int INVALID_KEY_PREFIX_FILTER_HASH = HashingUtils::HashString("InvalidKeyPrefixFilterException");
static const int INVALID_TAG_HASH = HashingUtils::HashString("InvalidTagException");
static const int INVALID_AUTO_ROLLBACK_CONFIG_HASH = HashingUtils::HashString("InvalidAutoRollbackConfigException");
static const int TAG_REQUIRED_HASH = HashingUtils::HashString("TagRequiredException");
static const int DEPLOYMENT_CONFIG_ALREADY_EXISTS_HASH = HashingUtils::HashString("DeploymentConfigAlreadyExistsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == BUCKET_NAME_FILTER_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::BUCKET_NAME_FILTER_REQUIRED), false);
  }
  else if (hashCode == INSTANCE_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INSTANCE_NAME_REQUIRED), false);
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::TAG_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INSTANCE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INSTANCE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == APPLICATION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::APPLICATION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_MINIMUM_HEALTHY_HOST_VALUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_MINIMUM_HEALTHY_HOST_VALUE), false);
  }
  else if (hashCode == DEPLOYMENT_NOT_STARTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_NOT_STARTED), false);
  }
  else if (hashCode == INVALID_REGISTRATION_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_REGISTRATION_STATUS), false);
  }
  else if (hashCode == INSTANCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INSTANCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == REVISION_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::REVISION_REQUIRED), false);
  }
  else if (hashCode == INVALID_ROLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_ROLE), false);
  }
  else if (hashCode == APPLICATION_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::APPLICATION_NAME_REQUIRED), false);
  }
  else if (hashCode == INVALID_REVISION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_REVISION), false);
  }
  else if (hashCode == INVALID_DEPLOYMENT_CONFIG_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYMENT_CONFIG_NAME), false);
  }
  else if (hashCode == ALARMS_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::ALARMS_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DEPLOYMENT_ID_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_ID_REQUIRED), false);
  }
  else if (hashCode == APPLICATION_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::APPLICATION_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_OPERATION), false);
  }
  else if (hashCode == DEPLOYMENT_GROUP_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_GROUP_DOES_NOT_EXIST), false);
  }
  else if (hashCode == IAM_USER_ARN_ALREADY_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::IAM_USER_ARN_ALREADY_REGISTERED), false);
  }
  else if (hashCode == DEPLOYMENT_GROUP_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_GROUP_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_INSTANCE_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_INSTANCE_NAME), false);
  }
  else if (hashCode == BATCH_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::BATCH_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DEPLOYMENT_CONFIG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_CONFIG_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_SORT_ORDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_SORT_ORDER), false);
  }
  else if (hashCode == DESCRIPTION_TOO_LONG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DESCRIPTION_TOO_LONG), false);
  }
  else if (hashCode == TRIGGER_TARGETS_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::TRIGGER_TARGETS_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DEPLOYMENT_CONFIG_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_CONFIG_IN_USE), false);
  }
  else if (hashCode == INVALID_TAG_FILTER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_TAG_FILTER), false);
  }
  else if (hashCode == INVALID_DEPLOYED_STATE_FILTER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYED_STATE_FILTER), false);
  }
  else if (hashCode == INVALID_ALARM_CONFIG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_ALARM_CONFIG), false);
  }
  else if (hashCode == INVALID_INSTANCE_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_INSTANCE_STATUS), false);
  }
  else if (hashCode == REVISION_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::REVISION_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_TRIGGER_CONFIG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_TRIGGER_CONFIG), false);
  }
  else if (hashCode == INVALID_DEPLOYMENT_GROUP_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYMENT_GROUP_NAME), false);
  }
  else if (hashCode == DEPLOYMENT_CONFIG_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_CONFIG_NAME_REQUIRED), false);
  }
  else if (hashCode == INSTANCE_ID_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INSTANCE_ID_REQUIRED), false);
  }
  else if (hashCode == DEPLOYMENT_CONFIG_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_CONFIG_DOES_NOT_EXIST), false);
  }
  else if (hashCode == APPLICATION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::APPLICATION_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_E_C2_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_E_C2_TAG), false);
  }
  else if (hashCode == INVALID_AUTO_SCALING_GROUP_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_AUTO_SCALING_GROUP), false);
  }
  else if (hashCode == DEPLOYMENT_ALREADY_COMPLETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_ALREADY_COMPLETED), false);
  }
  else if (hashCode == INSTANCE_NOT_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INSTANCE_NOT_REGISTERED), false);
  }
  else if (hashCode == ROLE_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::ROLE_REQUIRED), false);
  }
  else if (hashCode == DEPLOYMENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == LIFECYCLE_HOOK_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::LIFECYCLE_HOOK_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DEPLOYMENT_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_DOES_NOT_EXIST), false);
  }
  else if (hashCode == IAM_USER_ARN_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::IAM_USER_ARN_REQUIRED), false);
  }
  else if (hashCode == INVALID_TIME_RANGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_TIME_RANGE), false);
  }
  else if (hashCode == DEPLOYMENT_GROUP_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_GROUP_NAME_REQUIRED), false);
  }
  else if (hashCode == INVALID_DEPLOYMENT_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYMENT_ID), false);
  }
  else if (hashCode == INVALID_DEPLOYMENT_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYMENT_STATUS), false);
  }
  else if (hashCode == INSTANCE_NAME_ALREADY_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INSTANCE_NAME_ALREADY_REGISTERED), false);
  }
  else if (hashCode == INVALID_SORT_BY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_SORT_BY), false);
  }
  else if (hashCode == INVALID_BUCKET_NAME_FILTER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_BUCKET_NAME_FILTER), false);
  }
  else if (hashCode == INVALID_IAM_USER_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_IAM_USER_ARN), false);
  }
  else if (hashCode == INVALID_APPLICATION_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_APPLICATION_NAME), false);
  }
  else if (hashCode == DEPLOYMENT_GROUP_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_GROUP_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_KEY_PREFIX_FILTER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_KEY_PREFIX_FILTER), false);
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_TAG), false);
  }
  else if (hashCode == INVALID_AUTO_ROLLBACK_CONFIG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_AUTO_ROLLBACK_CONFIG), false);
  }
  else if (hashCode == TAG_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::TAG_REQUIRED), false);
  }
  else if (hashCode == DEPLOYMENT_CONFIG_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_CONFIG_ALREADY_EXISTS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeDeployErrorMapper
} // namespace CodeDeploy
} // namespace Aws
