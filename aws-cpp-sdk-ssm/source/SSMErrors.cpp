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

static const int INVALID_INSTANCE_ID_HASH = HashingUtils::HashString("InvalidInstanceId");
static const int INVALID_RESOURCE_TYPE_HASH = HashingUtils::HashString("InvalidResourceType");
static const int INVALID_OUTPUT_FOLDER_HASH = HashingUtils::HashString("InvalidOutputFolder");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextToken");
static const int INVALID_ACTIVATION_ID_HASH = HashingUtils::HashString("InvalidActivationId");
static const int DOCUMENT_PERMISSION_LIMIT_HASH = HashingUtils::HashString("DocumentPermissionLimit");
static const int ASSOCIATION_ALREADY_EXISTS_HASH = HashingUtils::HashString("AssociationAlreadyExists");
static const int UNSUPPORTED_PLATFORM_TYPE_HASH = HashingUtils::HashString("UnsupportedPlatformType");
static const int INVALID_FILTER_KEY_HASH = HashingUtils::HashString("InvalidFilterKey");
static const int INVALID_PERMISSION_TYPE_HASH = HashingUtils::HashString("InvalidPermissionType");
static const int INVALID_COMMAND_ID_HASH = HashingUtils::HashString("InvalidCommandId");
static const int INVALID_PARAMETERS_HASH = HashingUtils::HashString("InvalidParameters");
static const int INVALID_DOCUMENT_HASH = HashingUtils::HashString("InvalidDocument");
static const int INVALID_DOCUMENT_CONTENT_HASH = HashingUtils::HashString("InvalidDocumentContent");
static const int ASSOCIATED_INSTANCES_HASH = HashingUtils::HashString("AssociatedInstances");
static const int DOCUMENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DocumentLimitExceeded");
static const int INVALID_RESOURCE_ID_HASH = HashingUtils::HashString("InvalidResourceId");
static const int DUPLICATE_INSTANCE_ID_HASH = HashingUtils::HashString("DuplicateInstanceId");
static const int INVALID_ACTIVATION_HASH = HashingUtils::HashString("InvalidActivation");
static const int ASSOCIATION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AssociationLimitExceeded");
static const int TOO_MANY_UPDATES_HASH = HashingUtils::HashString("TooManyUpdates");
static const int STATUS_UNCHANGED_HASH = HashingUtils::HashString("StatusUnchanged");
static const int DOCUMENT_ALREADY_EXISTS_HASH = HashingUtils::HashString("DocumentAlreadyExists");
static const int INVALID_DOCUMENT_OPERATION_HASH = HashingUtils::HashString("InvalidDocumentOperation");
static const int ASSOCIATION_DOES_NOT_EXIST_HASH = HashingUtils::HashString("AssociationDoesNotExist");
static const int INVALID_ROLE_HASH = HashingUtils::HashString("InvalidRole");
static const int MAX_DOCUMENT_SIZE_EXCEEDED_HASH = HashingUtils::HashString("MaxDocumentSizeExceeded");
static const int INVALID_FILTER_HASH = HashingUtils::HashString("InvalidFilter");
static const int INVALID_INSTANCE_INFORMATION_FILTER_VALUE_HASH = HashingUtils::HashString("InvalidInstanceInformationFilterValue");
static const int INVALID_NOTIFICATION_CONFIG_HASH = HashingUtils::HashString("InvalidNotificationConfig");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_INSTANCE_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INSTANCE_ID), false);
  }
  else if (hashCode == INVALID_RESOURCE_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_RESOURCE_TYPE), false);
  }
  else if (hashCode == INVALID_OUTPUT_FOLDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_OUTPUT_FOLDER), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_ACTIVATION_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ACTIVATION_ID), false);
  }
  else if (hashCode == DOCUMENT_PERMISSION_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_PERMISSION_LIMIT), false);
  }
  else if (hashCode == ASSOCIATION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_ALREADY_EXISTS), false);
  }
  else if (hashCode == UNSUPPORTED_PLATFORM_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::UNSUPPORTED_PLATFORM_TYPE), false);
  }
  else if (hashCode == INVALID_FILTER_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER_KEY), false);
  }
  else if (hashCode == INVALID_PERMISSION_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_PERMISSION_TYPE), false);
  }
  else if (hashCode == INVALID_COMMAND_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_COMMAND_ID), false);
  }
  else if (hashCode == INVALID_PARAMETERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_PARAMETERS), false);
  }
  else if (hashCode == INVALID_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT), false);
  }
  else if (hashCode == INVALID_DOCUMENT_CONTENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_CONTENT), false);
  }
  else if (hashCode == ASSOCIATED_INSTANCES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATED_INSTANCES), false);
  }
  else if (hashCode == DOCUMENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_RESOURCE_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_RESOURCE_ID), false);
  }
  else if (hashCode == DUPLICATE_INSTANCE_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DUPLICATE_INSTANCE_ID), false);
  }
  else if (hashCode == INVALID_ACTIVATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ACTIVATION), false);
  }
  else if (hashCode == ASSOCIATION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == TOO_MANY_UPDATES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::TOO_MANY_UPDATES), false);
  }
  else if (hashCode == STATUS_UNCHANGED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::STATUS_UNCHANGED), false);
  }
  else if (hashCode == DOCUMENT_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::DOCUMENT_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_DOCUMENT_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_DOCUMENT_OPERATION), false);
  }
  else if (hashCode == ASSOCIATION_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::ASSOCIATION_DOES_NOT_EXIST), false);
  }
  else if (hashCode == INVALID_ROLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_ROLE), false);
  }
  else if (hashCode == MAX_DOCUMENT_SIZE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::MAX_DOCUMENT_SIZE_EXCEEDED), false);
  }
  else if (hashCode == INVALID_FILTER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_FILTER), false);
  }
  else if (hashCode == INVALID_INSTANCE_INFORMATION_FILTER_VALUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_INSTANCE_INFORMATION_FILTER_VALUE), false);
  }
  else if (hashCode == INVALID_NOTIFICATION_CONFIG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSMErrors::INVALID_NOTIFICATION_CONFIG), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SSMErrorMapper
} // namespace SSM
} // namespace Aws
