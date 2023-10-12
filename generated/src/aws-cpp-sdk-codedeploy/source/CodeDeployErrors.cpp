/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codedeploy/CodeDeployErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CodeDeploy;

namespace Aws
{
namespace CodeDeploy
{
namespace CodeDeployErrorMapper
{

static constexpr uint32_t INSTANCE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("InstanceLimitExceededException");
static constexpr uint32_t INVALID_E_C2_TAG_COMBINATION_HASH = ConstExprHashingUtils::HashString("InvalidEC2TagCombinationException");
static constexpr uint32_t DEPLOYMENT_CONFIG_NAME_REQUIRED_HASH = ConstExprHashingUtils::HashString("DeploymentConfigNameRequiredException");
static constexpr uint32_t DEPLOYMENT_NOT_STARTED_HASH = ConstExprHashingUtils::HashString("DeploymentNotStartedException");
static constexpr uint32_t LIFECYCLE_EVENT_ALREADY_COMPLETED_HASH = ConstExprHashingUtils::HashString("LifecycleEventAlreadyCompletedException");
static constexpr uint32_t DEPLOYMENT_GROUP_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("DeploymentGroupAlreadyExistsException");
static constexpr uint32_t DEPLOYMENT_ID_REQUIRED_HASH = ConstExprHashingUtils::HashString("DeploymentIdRequiredException");
static constexpr uint32_t INVALID_IGNORE_APPLICATION_STOP_FAILURES_VALUE_HASH = ConstExprHashingUtils::HashString("InvalidIgnoreApplicationStopFailuresValueException");
static constexpr uint32_t DEPLOYMENT_CONFIG_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DeploymentConfigLimitExceededException");
static constexpr uint32_t TAG_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TagLimitExceededException");
static constexpr uint32_t INVALID_REVISION_HASH = ConstExprHashingUtils::HashString("InvalidRevisionException");
static constexpr uint32_t INVALID_UPDATE_OUTDATED_INSTANCES_ONLY_VALUE_HASH = ConstExprHashingUtils::HashString("InvalidUpdateOutdatedInstancesOnlyValueException");
static constexpr uint32_t DEPLOYMENT_GROUP_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("DeploymentGroupDoesNotExistException");
static constexpr uint32_t IAM_SESSION_ARN_ALREADY_REGISTERED_HASH = ConstExprHashingUtils::HashString("IamSessionArnAlreadyRegisteredException");
static constexpr uint32_t DEPLOYMENT_CONFIG_IN_USE_HASH = ConstExprHashingUtils::HashString("DeploymentConfigInUseException");
static constexpr uint32_t MULTIPLE_IAM_ARNS_PROVIDED_HASH = ConstExprHashingUtils::HashString("MultipleIamArnsProvidedException");
static constexpr uint32_t DEPLOYMENT_TARGET_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("DeploymentTargetDoesNotExistException");
static constexpr uint32_t UNSUPPORTED_ACTION_FOR_DEPLOYMENT_TYPE_HASH = ConstExprHashingUtils::HashString("UnsupportedActionForDeploymentTypeException");
static constexpr uint32_t GIT_HUB_ACCOUNT_TOKEN_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("GitHubAccountTokenDoesNotExistException");
static constexpr uint32_t ARN_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("ArnNotSupportedException");
static constexpr uint32_t APPLICATION_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ApplicationDoesNotExistException");
static constexpr uint32_t INVALID_AUTO_SCALING_GROUP_HASH = ConstExprHashingUtils::HashString("InvalidAutoScalingGroupException");
static constexpr uint32_t TRIGGER_TARGETS_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TriggerTargetsLimitExceededException");
static constexpr uint32_t DEPLOYMENT_TARGET_LIST_SIZE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DeploymentTargetListSizeExceededException");
static constexpr uint32_t INVALID_TRAFFIC_ROUTING_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("InvalidTrafficRoutingConfigurationException");
static constexpr uint32_t INVALID_GIT_HUB_ACCOUNT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidGitHubAccountTokenException");
static constexpr uint32_t INVALID_ON_PREMISES_TAG_COMBINATION_HASH = ConstExprHashingUtils::HashString("InvalidOnPremisesTagCombinationException");
static constexpr uint32_t INVALID_EXTERNAL_ID_HASH = ConstExprHashingUtils::HashString("InvalidExternalIdException");
static constexpr uint32_t DEPLOYMENT_CONFIG_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("DeploymentConfigAlreadyExistsException");
static constexpr uint32_t INVALID_ROLE_HASH = ConstExprHashingUtils::HashString("InvalidRoleException");
static constexpr uint32_t INVALID_BLUE_GREEN_DEPLOYMENT_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("InvalidBlueGreenDeploymentConfigurationException");
static constexpr uint32_t INSTANCE_NAME_ALREADY_REGISTERED_HASH = ConstExprHashingUtils::HashString("InstanceNameAlreadyRegisteredException");
static constexpr uint32_t INVALID_TAG_HASH = ConstExprHashingUtils::HashString("InvalidTagException");
static constexpr uint32_t INVALID_DEPLOYMENT_CONFIG_NAME_HASH = ConstExprHashingUtils::HashString("InvalidDeploymentConfigNameException");
static constexpr uint32_t INVALID_AUTO_ROLLBACK_CONFIG_HASH = ConstExprHashingUtils::HashString("InvalidAutoRollbackConfigException");
static constexpr uint32_t ALARMS_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("AlarmsLimitExceededException");
static constexpr uint32_t INVALID_INSTANCE_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidInstanceTypeException");
static constexpr uint32_t IAM_USER_ARN_ALREADY_REGISTERED_HASH = ConstExprHashingUtils::HashString("IamUserArnAlreadyRegisteredException");
static constexpr uint32_t INVALID_TRIGGER_CONFIG_HASH = ConstExprHashingUtils::HashString("InvalidTriggerConfigException");
static constexpr uint32_t INVALID_SORT_BY_HASH = ConstExprHashingUtils::HashString("InvalidSortByException");
static constexpr uint32_t DEPLOYMENT_IS_NOT_IN_READY_STATE_HASH = ConstExprHashingUtils::HashString("DeploymentIsNotInReadyStateException");
static constexpr uint32_t TAG_SET_LIST_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TagSetListLimitExceededException");
static constexpr uint32_t INVALID_TIME_RANGE_HASH = ConstExprHashingUtils::HashString("InvalidTimeRangeException");
static constexpr uint32_t TAG_REQUIRED_HASH = ConstExprHashingUtils::HashString("TagRequiredException");
static constexpr uint32_t INVALID_KEY_PREFIX_FILTER_HASH = ConstExprHashingUtils::HashString("InvalidKeyPrefixFilterException");
static constexpr uint32_t INVALID_E_C_S_SERVICE_HASH = ConstExprHashingUtils::HashString("InvalidECSServiceException");
static constexpr uint32_t INVALID_INSTANCE_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidInstanceStatusException");
static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInputException");
static constexpr uint32_t INVALID_LIFECYCLE_EVENT_HOOK_EXECUTION_ID_HASH = ConstExprHashingUtils::HashString("InvalidLifecycleEventHookExecutionIdException");
static constexpr uint32_t DEPLOYMENT_TARGET_ID_REQUIRED_HASH = ConstExprHashingUtils::HashString("DeploymentTargetIdRequiredException");
static constexpr uint32_t GIT_HUB_ACCOUNT_TOKEN_NAME_REQUIRED_HASH = ConstExprHashingUtils::HashString("GitHubAccountTokenNameRequiredException");
static constexpr uint32_t DEPLOYMENT_CONFIG_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("DeploymentConfigDoesNotExistException");
static constexpr uint32_t E_C_S_SERVICE_MAPPING_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ECSServiceMappingLimitExceededException");
static constexpr uint32_t DEPLOYMENT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DeploymentLimitExceededException");
static constexpr uint32_t DEPLOYMENT_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("DeploymentDoesNotExistException");
static constexpr uint32_t INVALID_COMPUTE_PLATFORM_HASH = ConstExprHashingUtils::HashString("InvalidComputePlatformException");
static constexpr uint32_t IAM_USER_ARN_REQUIRED_HASH = ConstExprHashingUtils::HashString("IamUserArnRequiredException");
static constexpr uint32_t INVALID_IAM_SESSION_ARN_HASH = ConstExprHashingUtils::HashString("InvalidIamSessionArnException");
static constexpr uint32_t INVALID_DEPLOYMENT_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidDeploymentStatusException");
static constexpr uint32_t APPLICATION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ApplicationLimitExceededException");
static constexpr uint32_t INVALID_TARGET_GROUP_PAIR_HASH = ConstExprHashingUtils::HashString("InvalidTargetGroupPairException");
static constexpr uint32_t INVALID_FILE_EXISTS_BEHAVIOR_HASH = ConstExprHashingUtils::HashString("InvalidFileExistsBehaviorException");
static constexpr uint32_t INSTANCE_NAME_REQUIRED_HASH = ConstExprHashingUtils::HashString("InstanceNameRequiredException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t INVALID_REGISTRATION_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidRegistrationStatusException");
static constexpr uint32_t DEPLOYMENT_ALREADY_COMPLETED_HASH = ConstExprHashingUtils::HashString("DeploymentAlreadyCompletedException");
static constexpr uint32_t INVALID_DEPLOYMENT_INSTANCE_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidDeploymentInstanceTypeException");
static constexpr uint32_t INVALID_DEPLOYMENT_TARGET_ID_HASH = ConstExprHashingUtils::HashString("InvalidDeploymentTargetIdException");
static constexpr uint32_t INVALID_DEPLOYED_STATE_FILTER_HASH = ConstExprHashingUtils::HashString("InvalidDeployedStateFilterException");
static constexpr uint32_t INVALID_DEPLOYMENT_GROUP_NAME_HASH = ConstExprHashingUtils::HashString("InvalidDeploymentGroupNameException");
static constexpr uint32_t INVALID_DEPLOYMENT_WAIT_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidDeploymentWaitTypeException");
static constexpr uint32_t INVALID_LIFECYCLE_EVENT_HOOK_EXECUTION_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidLifecycleEventHookExecutionStatusException");
static constexpr uint32_t INVALID_DEPLOYMENT_ID_HASH = ConstExprHashingUtils::HashString("InvalidDeploymentIdException");
static constexpr uint32_t OPERATION_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("OperationNotSupportedException");
static constexpr uint32_t RESOURCE_ARN_REQUIRED_HASH = ConstExprHashingUtils::HashString("ResourceArnRequiredException");
static constexpr uint32_t DEPLOYMENT_GROUP_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DeploymentGroupLimitExceededException");
static constexpr uint32_t INVALID_MINIMUM_HEALTHY_HOST_VALUE_HASH = ConstExprHashingUtils::HashString("InvalidMinimumHealthyHostValueException");
static constexpr uint32_t INVALID_LOAD_BALANCER_INFO_HASH = ConstExprHashingUtils::HashString("InvalidLoadBalancerInfoException");
static constexpr uint32_t INVALID_INSTANCE_NAME_HASH = ConstExprHashingUtils::HashString("InvalidInstanceNameException");
static constexpr uint32_t RESOURCE_VALIDATION_HASH = ConstExprHashingUtils::HashString("ResourceValidationException");
static constexpr uint32_t INVALID_DEPLOYMENT_STYLE_HASH = ConstExprHashingUtils::HashString("InvalidDeploymentStyleException");
static constexpr uint32_t INVALID_APPLICATION_NAME_HASH = ConstExprHashingUtils::HashString("InvalidApplicationNameException");
static constexpr uint32_t BATCH_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("BatchLimitExceededException");
static constexpr uint32_t LIFECYCLE_HOOK_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LifecycleHookLimitExceededException");
static constexpr uint32_t INVALID_TAGS_TO_ADD_HASH = ConstExprHashingUtils::HashString("InvalidTagsToAddException");
static constexpr uint32_t INVALID_IAM_USER_ARN_HASH = ConstExprHashingUtils::HashString("InvalidIamUserArnException");
static constexpr uint32_t INVALID_GIT_HUB_ACCOUNT_TOKEN_NAME_HASH = ConstExprHashingUtils::HashString("InvalidGitHubAccountTokenNameException");
static constexpr uint32_t REVISION_REQUIRED_HASH = ConstExprHashingUtils::HashString("RevisionRequiredException");
static constexpr uint32_t INVALID_TARGET_INSTANCES_HASH = ConstExprHashingUtils::HashString("InvalidTargetInstancesException");
static constexpr uint32_t INSTANCE_NOT_REGISTERED_HASH = ConstExprHashingUtils::HashString("InstanceNotRegisteredException");
static constexpr uint32_t INVALID_OPERATION_HASH = ConstExprHashingUtils::HashString("InvalidOperationException");
static constexpr uint32_t BUCKET_NAME_FILTER_REQUIRED_HASH = ConstExprHashingUtils::HashString("BucketNameFilterRequiredException");
static constexpr uint32_t INVALID_TAG_FILTER_HASH = ConstExprHashingUtils::HashString("InvalidTagFilterException");
static constexpr uint32_t INVALID_BUCKET_NAME_FILTER_HASH = ConstExprHashingUtils::HashString("InvalidBucketNameFilterException");
static constexpr uint32_t INVALID_ALARM_CONFIG_HASH = ConstExprHashingUtils::HashString("InvalidAlarmConfigException");
static constexpr uint32_t IAM_ARN_REQUIRED_HASH = ConstExprHashingUtils::HashString("IamArnRequiredException");
static constexpr uint32_t APPLICATION_NAME_REQUIRED_HASH = ConstExprHashingUtils::HashString("ApplicationNameRequiredException");
static constexpr uint32_t INSTANCE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("InstanceDoesNotExistException");
static constexpr uint32_t APPLICATION_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ApplicationAlreadyExistsException");
static constexpr uint32_t INVALID_E_C2_TAG_HASH = ConstExprHashingUtils::HashString("InvalidEC2TagException");
static constexpr uint32_t INVALID_ARN_HASH = ConstExprHashingUtils::HashString("InvalidArnException");
static constexpr uint32_t INVALID_SORT_ORDER_HASH = ConstExprHashingUtils::HashString("InvalidSortOrderException");
static constexpr uint32_t DESCRIPTION_TOO_LONG_HASH = ConstExprHashingUtils::HashString("DescriptionTooLongException");
static constexpr uint32_t ROLE_REQUIRED_HASH = ConstExprHashingUtils::HashString("RoleRequiredException");
static constexpr uint32_t DEPLOYMENT_GROUP_NAME_REQUIRED_HASH = ConstExprHashingUtils::HashString("DeploymentGroupNameRequiredException");
static constexpr uint32_t REVISION_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("RevisionDoesNotExistException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INSTANCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INSTANCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_E_C2_TAG_COMBINATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_E_C2_TAG_COMBINATION), false);
  }
  else if (hashCode == DEPLOYMENT_CONFIG_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_CONFIG_NAME_REQUIRED), false);
  }
  else if (hashCode == DEPLOYMENT_NOT_STARTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_NOT_STARTED), false);
  }
  else if (hashCode == LIFECYCLE_EVENT_ALREADY_COMPLETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::LIFECYCLE_EVENT_ALREADY_COMPLETED), false);
  }
  else if (hashCode == DEPLOYMENT_GROUP_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_GROUP_ALREADY_EXISTS), false);
  }
  else if (hashCode == DEPLOYMENT_ID_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_ID_REQUIRED), false);
  }
  else if (hashCode == INVALID_IGNORE_APPLICATION_STOP_FAILURES_VALUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_IGNORE_APPLICATION_STOP_FAILURES_VALUE), false);
  }
  else if (hashCode == DEPLOYMENT_CONFIG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_CONFIG_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::TAG_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_REVISION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_REVISION), false);
  }
  else if (hashCode == INVALID_UPDATE_OUTDATED_INSTANCES_ONLY_VALUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_UPDATE_OUTDATED_INSTANCES_ONLY_VALUE), false);
  }
  else if (hashCode == DEPLOYMENT_GROUP_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_GROUP_DOES_NOT_EXIST), false);
  }
  else if (hashCode == IAM_SESSION_ARN_ALREADY_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::IAM_SESSION_ARN_ALREADY_REGISTERED), false);
  }
  else if (hashCode == DEPLOYMENT_CONFIG_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_CONFIG_IN_USE), false);
  }
  else if (hashCode == MULTIPLE_IAM_ARNS_PROVIDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::MULTIPLE_IAM_ARNS_PROVIDED), false);
  }
  else if (hashCode == DEPLOYMENT_TARGET_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_TARGET_DOES_NOT_EXIST), false);
  }
  else if (hashCode == UNSUPPORTED_ACTION_FOR_DEPLOYMENT_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::UNSUPPORTED_ACTION_FOR_DEPLOYMENT_TYPE), false);
  }
  else if (hashCode == GIT_HUB_ACCOUNT_TOKEN_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::GIT_HUB_ACCOUNT_TOKEN_DOES_NOT_EXIST), false);
  }
  else if (hashCode == ARN_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::ARN_NOT_SUPPORTED), false);
  }
  else if (hashCode == APPLICATION_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::APPLICATION_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_AUTO_SCALING_GROUP_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_AUTO_SCALING_GROUP), false);
  }
  else if (hashCode == TRIGGER_TARGETS_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::TRIGGER_TARGETS_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DEPLOYMENT_TARGET_LIST_SIZE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_TARGET_LIST_SIZE_EXCEEDED), false);
  }
  else if (hashCode == INVALID_TRAFFIC_ROUTING_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_TRAFFIC_ROUTING_CONFIGURATION), false);
  }
  else if (hashCode == INVALID_GIT_HUB_ACCOUNT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_GIT_HUB_ACCOUNT_TOKEN), false);
  }
  else if (hashCode == INVALID_ON_PREMISES_TAG_COMBINATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_ON_PREMISES_TAG_COMBINATION), false);
  }
  else if (hashCode == INVALID_EXTERNAL_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_EXTERNAL_ID), false);
  }
  else if (hashCode == DEPLOYMENT_CONFIG_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_CONFIG_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_ROLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_ROLE), false);
  }
  else if (hashCode == INVALID_BLUE_GREEN_DEPLOYMENT_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_BLUE_GREEN_DEPLOYMENT_CONFIGURATION), false);
  }
  else if (hashCode == INSTANCE_NAME_ALREADY_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INSTANCE_NAME_ALREADY_REGISTERED), false);
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_TAG), false);
  }
  else if (hashCode == INVALID_DEPLOYMENT_CONFIG_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYMENT_CONFIG_NAME), false);
  }
  else if (hashCode == INVALID_AUTO_ROLLBACK_CONFIG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_AUTO_ROLLBACK_CONFIG), false);
  }
  else if (hashCode == ALARMS_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::ALARMS_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_INSTANCE_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_INSTANCE_TYPE), false);
  }
  else if (hashCode == IAM_USER_ARN_ALREADY_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::IAM_USER_ARN_ALREADY_REGISTERED), false);
  }
  else if (hashCode == INVALID_TRIGGER_CONFIG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_TRIGGER_CONFIG), false);
  }
  else if (hashCode == INVALID_SORT_BY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_SORT_BY), false);
  }
  else if (hashCode == DEPLOYMENT_IS_NOT_IN_READY_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_IS_NOT_IN_READY_STATE), false);
  }
  else if (hashCode == TAG_SET_LIST_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::TAG_SET_LIST_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_TIME_RANGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_TIME_RANGE), false);
  }
  else if (hashCode == TAG_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::TAG_REQUIRED), false);
  }
  else if (hashCode == INVALID_KEY_PREFIX_FILTER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_KEY_PREFIX_FILTER), false);
  }
  else if (hashCode == INVALID_E_C_S_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_E_C_S_SERVICE), false);
  }
  else if (hashCode == INVALID_INSTANCE_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_INSTANCE_STATUS), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_INPUT), false);
  }
  else if (hashCode == INVALID_LIFECYCLE_EVENT_HOOK_EXECUTION_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_LIFECYCLE_EVENT_HOOK_EXECUTION_ID), false);
  }
  else if (hashCode == DEPLOYMENT_TARGET_ID_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_TARGET_ID_REQUIRED), false);
  }
  else if (hashCode == GIT_HUB_ACCOUNT_TOKEN_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::GIT_HUB_ACCOUNT_TOKEN_NAME_REQUIRED), false);
  }
  else if (hashCode == DEPLOYMENT_CONFIG_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_CONFIG_DOES_NOT_EXIST), false);
  }
  else if (hashCode == E_C_S_SERVICE_MAPPING_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::E_C_S_SERVICE_MAPPING_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DEPLOYMENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DEPLOYMENT_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_COMPUTE_PLATFORM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_COMPUTE_PLATFORM), false);
  }
  else if (hashCode == IAM_USER_ARN_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::IAM_USER_ARN_REQUIRED), false);
  }
  else if (hashCode == INVALID_IAM_SESSION_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_IAM_SESSION_ARN), false);
  }
  else if (hashCode == INVALID_DEPLOYMENT_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYMENT_STATUS), false);
  }
  else if (hashCode == APPLICATION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::APPLICATION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_TARGET_GROUP_PAIR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_TARGET_GROUP_PAIR), false);
  }
  else if (hashCode == INVALID_FILE_EXISTS_BEHAVIOR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_FILE_EXISTS_BEHAVIOR), false);
  }
  else if (hashCode == INSTANCE_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INSTANCE_NAME_REQUIRED), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_REGISTRATION_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_REGISTRATION_STATUS), false);
  }
  else if (hashCode == DEPLOYMENT_ALREADY_COMPLETED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_ALREADY_COMPLETED), false);
  }
  else if (hashCode == INVALID_DEPLOYMENT_INSTANCE_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYMENT_INSTANCE_TYPE), false);
  }
  else if (hashCode == INVALID_DEPLOYMENT_TARGET_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYMENT_TARGET_ID), false);
  }
  else if (hashCode == INVALID_DEPLOYED_STATE_FILTER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYED_STATE_FILTER), false);
  }
  else if (hashCode == INVALID_DEPLOYMENT_GROUP_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYMENT_GROUP_NAME), false);
  }
  else if (hashCode == INVALID_DEPLOYMENT_WAIT_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYMENT_WAIT_TYPE), false);
  }
  else if (hashCode == INVALID_LIFECYCLE_EVENT_HOOK_EXECUTION_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_LIFECYCLE_EVENT_HOOK_EXECUTION_STATUS), false);
  }
  else if (hashCode == INVALID_DEPLOYMENT_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYMENT_ID), false);
  }
  else if (hashCode == OPERATION_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::OPERATION_NOT_SUPPORTED), false);
  }
  else if (hashCode == RESOURCE_ARN_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::RESOURCE_ARN_REQUIRED), false);
  }
  else if (hashCode == DEPLOYMENT_GROUP_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_GROUP_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_MINIMUM_HEALTHY_HOST_VALUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_MINIMUM_HEALTHY_HOST_VALUE), false);
  }
  else if (hashCode == INVALID_LOAD_BALANCER_INFO_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_LOAD_BALANCER_INFO), false);
  }
  else if (hashCode == INVALID_INSTANCE_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_INSTANCE_NAME), false);
  }
  else if (hashCode == RESOURCE_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::RESOURCE_VALIDATION), false);
  }
  else if (hashCode == INVALID_DEPLOYMENT_STYLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_DEPLOYMENT_STYLE), false);
  }
  else if (hashCode == INVALID_APPLICATION_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_APPLICATION_NAME), false);
  }
  else if (hashCode == BATCH_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::BATCH_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == LIFECYCLE_HOOK_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::LIFECYCLE_HOOK_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_TAGS_TO_ADD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_TAGS_TO_ADD), false);
  }
  else if (hashCode == INVALID_IAM_USER_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_IAM_USER_ARN), false);
  }
  else if (hashCode == INVALID_GIT_HUB_ACCOUNT_TOKEN_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_GIT_HUB_ACCOUNT_TOKEN_NAME), false);
  }
  else if (hashCode == REVISION_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::REVISION_REQUIRED), false);
  }
  else if (hashCode == INVALID_TARGET_INSTANCES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_TARGET_INSTANCES), false);
  }
  else if (hashCode == INSTANCE_NOT_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INSTANCE_NOT_REGISTERED), false);
  }
  else if (hashCode == INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_OPERATION), false);
  }
  else if (hashCode == BUCKET_NAME_FILTER_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::BUCKET_NAME_FILTER_REQUIRED), false);
  }
  else if (hashCode == INVALID_TAG_FILTER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_TAG_FILTER), false);
  }
  else if (hashCode == INVALID_BUCKET_NAME_FILTER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_BUCKET_NAME_FILTER), false);
  }
  else if (hashCode == INVALID_ALARM_CONFIG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_ALARM_CONFIG), false);
  }
  else if (hashCode == IAM_ARN_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::IAM_ARN_REQUIRED), false);
  }
  else if (hashCode == APPLICATION_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::APPLICATION_NAME_REQUIRED), false);
  }
  else if (hashCode == INSTANCE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INSTANCE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == APPLICATION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::APPLICATION_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_E_C2_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_E_C2_TAG), false);
  }
  else if (hashCode == INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_ARN), false);
  }
  else if (hashCode == INVALID_SORT_ORDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::INVALID_SORT_ORDER), false);
  }
  else if (hashCode == DESCRIPTION_TOO_LONG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DESCRIPTION_TOO_LONG), false);
  }
  else if (hashCode == ROLE_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::ROLE_REQUIRED), false);
  }
  else if (hashCode == DEPLOYMENT_GROUP_NAME_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::DEPLOYMENT_GROUP_NAME_REQUIRED), false);
  }
  else if (hashCode == REVISION_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeDeployErrors::REVISION_DOES_NOT_EXIST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeDeployErrorMapper
} // namespace CodeDeploy
} // namespace Aws
