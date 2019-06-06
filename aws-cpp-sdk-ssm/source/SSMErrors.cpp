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

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm/SSMErrors.h>

using namespace Aws::Client;
using namespace Aws::SSM;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace SSMErrorMapper
{

static const int INVALID_OUTPUT_LOCATION_HASH = HashingUtils::HashString("InvalidOutputLocation");
static const int RESOURCE_DATA_SYNC_COUNT_EXCEEDED_HASH = HashingUtils::HashString("ResourceDataSyncCountExceededException");
static const int PARAMETER_VERSION_NOT_FOUND_HASH = HashingUtils::HashString("ParameterVersionNotFound");
static const int INVALID_POLICY_TYPE_HASH = HashingUtils::HashString("InvalidPolicyTypeException");
static const int INVALID_AGGREGATOR_HASH = HashingUtils::HashString("InvalidAggregatorException");
static const int INVALID_INVENTORY_REQUEST_HASH = HashingUtils::HashString("InvalidInventoryRequestException");
static const int DUPLICATE_DOCUMENT_VERSION_NAME_HASH = HashingUtils::HashString("DuplicateDocumentVersionName");
static const int INVALID_TYPE_NAME_HASH = HashingUtils::HashString("InvalidTypeNameException");
static const int UNSUPPORTED_INVENTORY_SCHEMA_VERSION_HASH = HashingUtils::HashString("UnsupportedInventorySchemaVersionException");
static const int ASSOCIATION_DOES_NOT_EXIST_HASH = HashingUtils::HashString("AssociationDoesNotExist");
static const int ASSOCIATION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AssociationLimitExceeded");
static const int INVALID_OPTION_HASH = HashingUtils::HashString("InvalidOptionException");
static const int PARAMETER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ParameterLimitExceeded");
static const int SUB_TYPE_COUNT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SubTypeCountLimitExceededException");
static const int ASSOCIATION_VERSION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AssociationVersionLimitExceeded");
static const int INVALID_PERMISSION_TYPE_HASH = HashingUtils::HashString("InvalidPermissionType");
static const int INCOMPATIBLE_POLICY_HASH = HashingUtils::HashString("IncompatiblePolicyException");
static const int INVALID_ASSOCIATION_VERSION_HASH = HashingUtils::HashString("InvalidAssociationVersion");
static const int PARAMETER_NOT_FOUND_HASH = HashingUtils::HashString("ParameterNotFound");
static const int PARAMETER_ALREADY_EXISTS_HASH = HashingUtils::HashString("ParameterAlreadyExists");
static const int HIERARCHY_LEVEL_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("HierarchyLevelLimitExceededException");
static const int DOCUMENT_VERSION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DocumentVersionLimitExceeded");
static const int RESOURCE_DATA_SYNC_NOT_FOUND_HASH = HashingUtils::HashString("ResourceDataSyncNotFoundException");
static const int INVALID_FILTER_VALUE_HASH = HashingUtils::HashString("InvalidFilterValue");
static const int OPS_ITEM_ALREADY_EXISTS_HASH = HashingUtils::HashString("OpsItemAlreadyExistsException");
static const int INVALID_DELETE_INVENTORY_PARAMETERS_HASH = HashingUtils::HashString("InvalidDeleteInventoryParametersException");
static const int FEATURE_NOT_AVAILABLE_HASH = HashingUtils::HashString("FeatureNotAvailableException");
static const int INVALID_PLUGIN_NAME_HASH = HashingUtils::HashString("InvalidPluginName");
static const int INVALID_DOCUMENT_HASH = HashingUtils::HashString("InvalidDocument");
static const int INVALID_AUTOMATION_SIGNAL_HASH = HashingUtils::HashString("InvalidAutomationSignalException");
static const int AUTOMATION_EXECUTION_NOT_FOUND_HASH = HashingUtils::HashString("AutomationExecutionNotFoundException");
static const int INVALID_INVENTORY_ITEM_CONTEXT_HASH = HashingUtils::HashString("InvalidInventoryItemContextException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int ASSOCIATION_EXECUTION_DOES_NOT_EXIST_HASH = HashingUtils::HashString("AssociationExecutionDoesNotExist");
static const int INVALID_RESOURCE_ID_HASH = HashingUtils::HashString("InvalidResourceId");
static const int INVALID_INSTANCE_ID_HASH = HashingUtils::HashString("InvalidInstanceId");
static const int ASSOCIATED_INSTANCES_HASH = HashingUtils::HashString("AssociatedInstances");
static const int TARGET_IN_USE_HASH = HashingUtils::HashString("TargetInUseException");
static const int INVALID_KEY_ID_HASH = HashingUtils::HashString("InvalidKeyId");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int ITEM_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ItemSizeLimitExceededException");
static const int PARAMETER_VERSION_LABEL_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ParameterVersionLabelLimitExceeded");
static const int INVALID_RESOURCE_TYPE_HASH = HashingUtils::HashString("InvalidResourceType");
static const int DOCUMENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DocumentLimitExceeded");
static const int ASSOCIATION_ALREADY_EXISTS_HASH = HashingUtils::HashString("AssociationAlreadyExists");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextToken");
static const int UNSUPPORTED_OPERATING_SYSTEM_HASH = HashingUtils::HashString("UnsupportedOperatingSystem");
static const int AUTOMATION_EXECUTION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AutomationExecutionLimitExceededException");
static const int INVALID_DELETION_ID_HASH = HashingUtils::HashString("InvalidDeletionIdException");
static const int INVALID_TARGET_HASH = HashingUtils::HashString("InvalidTarget");
static const int INVALID_DOCUMENT_CONTENT_HASH = HashingUtils::HashString("InvalidDocumentContent");
static const int UNSUPPORTED_INVENTORY_ITEM_CONTEXT_HASH = HashingUtils::HashString("UnsupportedInventoryItemContextException");
static const int INVALID_POLICY_ATTRIBUTE_HASH = HashingUtils::HashString("InvalidPolicyAttributeException");
static const int AUTOMATION_DEFINITION_VERSION_NOT_FOUND_HASH = HashingUtils::HashString("AutomationDefinitionVersionNotFoundException");
static const int COMPLIANCE_TYPE_COUNT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ComplianceTypeCountLimitExceededException");
static const int PARAMETER_MAX_VERSION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ParameterMaxVersionLimitExceeded");
static const int AUTOMATION_STEP_NOT_FOUND_HASH = HashingUtils::HashString("AutomationStepNotFoundException");
static const int RESOURCE_DATA_SYNC_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceDataSyncAlreadyExistsException");
static const int INVALID_RESULT_ATTRIBUTE_HASH = HashingUtils::HashString("InvalidResultAttributeException");
static const int UNSUPPORTED_FEATURE_REQUIRED_HASH = HashingUtils::HashString("UnsupportedFeatureRequiredException");
static const int STATUS_UNCHANGED_HASH = HashingUtils::HashString("StatusUnchanged");
static const int OPS_ITEM_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OpsItemLimitExceededException");
static const int DUPLICATE_INSTANCE_ID_HASH = HashingUtils::HashString("DuplicateInstanceId");
static const int DUPLICATE_DOCUMENT_CONTENT_HASH = HashingUtils::HashString("DuplicateDocumentContent");
static const int INVALID_OUTPUT_FOLDER_HASH = HashingUtils::HashString("InvalidOutputFolder");
static const int TOO_MANY_UPDATES_HASH = HashingUtils::HashString("TooManyUpdates");
static const int INVALID_DOCUMENT_SCHEMA_VERSION_HASH = HashingUtils::HashString("InvalidDocumentSchemaVersion");
static const int INVALID_AUTOMATION_STATUS_UPDATE_HASH = HashingUtils::HashString("InvalidAutomationStatusUpdateException");
static const int INVALID_AUTOMATION_EXECUTION_PARAMETERS_HASH = HashingUtils::HashString("InvalidAutomationExecutionParametersException");
static const int ITEM_CONTENT_MISMATCH_HASH = HashingUtils::HashString("ItemContentMismatchException");
static const int PARAMETER_PATTERN_MISMATCH_HASH = HashingUtils::HashString("ParameterPatternMismatchException");
static const int INVALID_INSTANCE_INFORMATION_FILTER_VALUE_HASH = HashingUtils::HashString("InvalidInstanceInformationFilterValue");
static const int INVALID_COMMAND_ID_HASH = HashingUtils::HashString("InvalidCommandId");
static const int INVOCATION_DOES_NOT_EXIST_HASH = HashingUtils::HashString("InvocationDoesNotExist");
static const int TOTAL_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TotalSizeLimitExceededException");
static const int AUTOMATION_DEFINITION_NOT_FOUND_HASH = HashingUtils::HashString("AutomationDefinitionNotFoundException");
static const int CUSTOM_SCHEMA_COUNT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CustomSchemaCountLimitExceededException");
static const int INVALID_ALLOWED_PATTERN_HASH = HashingUtils::HashString("InvalidAllowedPatternException");
static const int INVALID_ROLE_HASH = HashingUtils::HashString("InvalidRole");
static const int INVALID_PARAMETERS_HASH = HashingUtils::HashString("InvalidParameters");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsError");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int INVALID_ACTIVATION_HASH = HashingUtils::HashString("InvalidActivation");
static const int RESOURCE_DATA_SYNC_INVALID_CONFIGURATION_HASH = HashingUtils::HashString("ResourceDataSyncInvalidConfigurationException");
static const int INVALID_ASSOCIATION_HASH = HashingUtils::HashString("InvalidAssociation");
static const int HIERARCHY_TYPE_MISMATCH_HASH = HashingUtils::HashString("HierarchyTypeMismatchException");
static const int DOES_NOT_EXIST_HASH = HashingUtils::HashString("DoesNotExistException");
static const int INVALID_DOCUMENT_OPERATION_HASH = HashingUtils::HashString("InvalidDocumentOperation");
static const int OPS_ITEM_NOT_FOUND_HASH = HashingUtils::HashString("OpsItemNotFoundException");
static const int INVALID_UPDATE_HASH = HashingUtils::HashString("InvalidUpdate");
static const int INVALID_FILTER_OPTION_HASH = HashingUtils::HashString("InvalidFilterOption");
static const int INVALID_ITEM_CONTENT_HASH = HashingUtils::HashString("InvalidItemContentException");
static const int TARGET_NOT_CONNECTED_HASH = HashingUtils::HashString("TargetNotConnected");
static const int DOCUMENT_ALREADY_EXISTS_HASH = HashingUtils::HashString("DocumentAlreadyExists");
static const int INVALID_DOCUMENT_VERSION_HASH = HashingUtils::HashString("InvalidDocumentVersion");
static const int INVALID_NOTIFICATION_CONFIG_HASH = HashingUtils::HashString("InvalidNotificationConfig");
static const int INVALID_SCHEDULE_HASH = HashingUtils::HashString("InvalidSchedule");
static const int INVALID_ACTIVATION_ID_HASH = HashingUtils::HashString("InvalidActivationId");
static const int INVALID_FILTER_HASH = HashingUtils::HashString("InvalidFilter");
static const int OPS_ITEM_INVALID_PARAMETER_HASH = HashingUtils::HashString("OpsItemInvalidParameterException");
static const int INVALID_INVENTORY_GROUP_HASH = HashingUtils::HashString("InvalidInventoryGroupException");
static const int POLICIES_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("PoliciesLimitExceededException");
static const int UNSUPPORTED_PARAMETER_TYPE_HASH = HashingUtils::HashString("UnsupportedParameterType");
static const int MAX_DOCUMENT_SIZE_EXCEEDED_HASH = HashingUtils::HashString("MaxDocumentSizeExceeded");
static const int INVALID_FILTER_KEY_HASH = HashingUtils::HashString("InvalidFilterKey");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatch");
static const int UNSUPPORTED_PLATFORM_TYPE_HASH = HashingUtils::HashString("UnsupportedPlatformType");
static const int SERVICE_SETTING_NOT_FOUND_HASH = HashingUtils::HashString("ServiceSettingNotFound");
static const int DOCUMENT_PERMISSION_LIMIT_HASH = HashingUtils::HashString("DocumentPermissionLimit");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_OUTPUT_LOCATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_OUTPUT_LOCATION), false);
  }
  else if (hashCode == RESOURCE_DATA_SYNC_COUNT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_COUNT_EXCEEDED), false);
  }
  else if (hashCode == PARAMETER_VERSION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_VERSION_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_POLICY_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_POLICY_TYPE), false);
  }
  else if (hashCode == INVALID_AGGREGATOR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_AGGREGATOR), false);
  }
  else if (hashCode == INVALID_INVENTORY_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INVENTORY_REQUEST), false);
  }
  else if (hashCode == DUPLICATE_DOCUMENT_VERSION_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DUPLICATE_DOCUMENT_VERSION_NAME), false);
  }
  else if (hashCode == INVALID_TYPE_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_TYPE_NAME), false);
  }
  else if (hashCode == UNSUPPORTED_INVENTORY_SCHEMA_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_INVENTORY_SCHEMA_VERSION), false);
  }
  else if (hashCode == ASSOCIATION_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_DOES_NOT_EXIST), false);
  }
  else if (hashCode == ASSOCIATION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_OPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_OPTION), false);
  }
  else if (hashCode == PARAMETER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == SUB_TYPE_COUNT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::SUB_TYPE_COUNT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ASSOCIATION_VERSION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_VERSION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_PERMISSION_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_PERMISSION_TYPE), false);
  }
  else if (hashCode == INCOMPATIBLE_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INCOMPATIBLE_POLICY), false);
  }
  else if (hashCode == INVALID_ASSOCIATION_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ASSOCIATION_VERSION), false);
  }
  else if (hashCode == PARAMETER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_NOT_FOUND), false);
  }
  else if (hashCode == PARAMETER_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_ALREADY_EXISTS), false);
  }
  else if (hashCode == HIERARCHY_LEVEL_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::HIERARCHY_LEVEL_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DOCUMENT_VERSION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_VERSION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == RESOURCE_DATA_SYNC_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_FILTER_VALUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER_VALUE), false);
  }
  else if (hashCode == OPS_ITEM_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_DELETE_INVENTORY_PARAMETERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DELETE_INVENTORY_PARAMETERS), false);
  }
  else if (hashCode == FEATURE_NOT_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::FEATURE_NOT_AVAILABLE), false);
  }
  else if (hashCode == INVALID_PLUGIN_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_PLUGIN_NAME), false);
  }
  else if (hashCode == INVALID_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT), false);
  }
  else if (hashCode == INVALID_AUTOMATION_SIGNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_AUTOMATION_SIGNAL), false);
  }
  else if (hashCode == AUTOMATION_EXECUTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_EXECUTION_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_INVENTORY_ITEM_CONTEXT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INVENTORY_ITEM_CONTEXT), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == ASSOCIATION_EXECUTION_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_EXECUTION_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_RESOURCE_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_RESOURCE_ID), false);
  }
  else if (hashCode == INVALID_INSTANCE_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INSTANCE_ID), false);
  }
  else if (hashCode == ASSOCIATED_INSTANCES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATED_INSTANCES), false);
  }
  else if (hashCode == TARGET_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TARGET_IN_USE), false);
  }
  else if (hashCode == INVALID_KEY_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_KEY_ID), false);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == ITEM_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ITEM_SIZE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == PARAMETER_VERSION_LABEL_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_VERSION_LABEL_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_RESOURCE_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_RESOURCE_TYPE), false);
  }
  else if (hashCode == DOCUMENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ASSOCIATION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATING_SYSTEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_OPERATING_SYSTEM), false);
  }
  else if (hashCode == AUTOMATION_EXECUTION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_EXECUTION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_DELETION_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DELETION_ID), false);
  }
  else if (hashCode == INVALID_TARGET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_TARGET), false);
  }
  else if (hashCode == INVALID_DOCUMENT_CONTENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_CONTENT), false);
  }
  else if (hashCode == UNSUPPORTED_INVENTORY_ITEM_CONTEXT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_INVENTORY_ITEM_CONTEXT), false);
  }
  else if (hashCode == INVALID_POLICY_ATTRIBUTE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_POLICY_ATTRIBUTE), false);
  }
  else if (hashCode == AUTOMATION_DEFINITION_VERSION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_DEFINITION_VERSION_NOT_FOUND), false);
  }
  else if (hashCode == COMPLIANCE_TYPE_COUNT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::COMPLIANCE_TYPE_COUNT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == PARAMETER_MAX_VERSION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_MAX_VERSION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == AUTOMATION_STEP_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_STEP_NOT_FOUND), false);
  }
  else if (hashCode == RESOURCE_DATA_SYNC_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_RESULT_ATTRIBUTE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_RESULT_ATTRIBUTE), false);
  }
  else if (hashCode == UNSUPPORTED_FEATURE_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_FEATURE_REQUIRED), false);
  }
  else if (hashCode == STATUS_UNCHANGED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::STATUS_UNCHANGED), false);
  }
  else if (hashCode == OPS_ITEM_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DUPLICATE_INSTANCE_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DUPLICATE_INSTANCE_ID), false);
  }
  else if (hashCode == DUPLICATE_DOCUMENT_CONTENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DUPLICATE_DOCUMENT_CONTENT), false);
  }
  else if (hashCode == INVALID_OUTPUT_FOLDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_OUTPUT_FOLDER), false);
  }
  else if (hashCode == TOO_MANY_UPDATES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TOO_MANY_UPDATES), false);
  }
  else if (hashCode == INVALID_DOCUMENT_SCHEMA_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_SCHEMA_VERSION), false);
  }
  else if (hashCode == INVALID_AUTOMATION_STATUS_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_AUTOMATION_STATUS_UPDATE), false);
  }
  else if (hashCode == INVALID_AUTOMATION_EXECUTION_PARAMETERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_AUTOMATION_EXECUTION_PARAMETERS), false);
  }
  else if (hashCode == ITEM_CONTENT_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ITEM_CONTENT_MISMATCH), false);
  }
  else if (hashCode == PARAMETER_PATTERN_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::PARAMETER_PATTERN_MISMATCH), false);
  }
  else if (hashCode == INVALID_INSTANCE_INFORMATION_FILTER_VALUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INSTANCE_INFORMATION_FILTER_VALUE), false);
  }
  else if (hashCode == INVALID_COMMAND_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_COMMAND_ID), false);
  }
  else if (hashCode == INVOCATION_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVOCATION_DOES_NOT_EXIST), false);
  }
  else if (hashCode == TOTAL_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TOTAL_SIZE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == AUTOMATION_DEFINITION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::AUTOMATION_DEFINITION_NOT_FOUND), false);
  }
  else if (hashCode == CUSTOM_SCHEMA_COUNT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::CUSTOM_SCHEMA_COUNT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_ALLOWED_PATTERN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ALLOWED_PATTERN), false);
  }
  else if (hashCode == INVALID_ROLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ROLE), false);
  }
  else if (hashCode == INVALID_PARAMETERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_PARAMETERS), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_ACTIVATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ACTIVATION), false);
  }
  else if (hashCode == RESOURCE_DATA_SYNC_INVALID_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::RESOURCE_DATA_SYNC_INVALID_CONFIGURATION), false);
  }
  else if (hashCode == INVALID_ASSOCIATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ASSOCIATION), false);
  }
  else if (hashCode == HIERARCHY_TYPE_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::HIERARCHY_TYPE_MISMATCH), false);
  }
  else if (hashCode == DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_DOCUMENT_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_OPERATION), false);
  }
  else if (hashCode == OPS_ITEM_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_UPDATE), false);
  }
  else if (hashCode == INVALID_FILTER_OPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER_OPTION), false);
  }
  else if (hashCode == INVALID_ITEM_CONTENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ITEM_CONTENT), false);
  }
  else if (hashCode == TARGET_NOT_CONNECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TARGET_NOT_CONNECTED), false);
  }
  else if (hashCode == DOCUMENT_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_DOCUMENT_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_VERSION), false);
  }
  else if (hashCode == INVALID_NOTIFICATION_CONFIG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_NOTIFICATION_CONFIG), false);
  }
  else if (hashCode == INVALID_SCHEDULE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_SCHEDULE), false);
  }
  else if (hashCode == INVALID_ACTIVATION_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ACTIVATION_ID), false);
  }
  else if (hashCode == INVALID_FILTER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER), false);
  }
  else if (hashCode == OPS_ITEM_INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::OPS_ITEM_INVALID_PARAMETER), false);
  }
  else if (hashCode == INVALID_INVENTORY_GROUP_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INVENTORY_GROUP), false);
  }
  else if (hashCode == POLICIES_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::POLICIES_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == UNSUPPORTED_PARAMETER_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_PARAMETER_TYPE), false);
  }
  else if (hashCode == MAX_DOCUMENT_SIZE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::MAX_DOCUMENT_SIZE_EXCEEDED), false);
  }
  else if (hashCode == INVALID_FILTER_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER_KEY), false);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == UNSUPPORTED_PLATFORM_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_PLATFORM_TYPE), false);
  }
  else if (hashCode == SERVICE_SETTING_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::SERVICE_SETTING_NOT_FOUND), false);
  }
  else if (hashCode == DOCUMENT_PERMISSION_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_PERMISSION_LIMIT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SSMErrorMapper
} // namespace SSM
} // namespace Aws
