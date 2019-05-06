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
#include <aws/workspaces/WorkSpacesErrors.h>

using namespace Aws::Client;
using namespace Aws::WorkSpaces;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace WorkSpacesErrorMapper
{

static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int OPERATION_NOT_SUPPORTED_HASH = HashingUtils::HashString("OperationNotSupportedException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int UNSUPPORTED_WORKSPACE_CONFIGURATION_HASH = HashingUtils::HashString("UnsupportedWorkspaceConfigurationException");
static const int OPERATION_IN_PROGRESS_HASH = HashingUtils::HashString("OperationInProgressException");
static const int INVALID_RESOURCE_STATE_HASH = HashingUtils::HashString("InvalidResourceStateException");
static const int RESOURCE_CREATION_FAILED_HASH = HashingUtils::HashString("ResourceCreationFailedException");
static const int INVALID_PARAMETER_VALUES_HASH = HashingUtils::HashString("InvalidParameterValuesException");
static const int RESOURCE_UNAVAILABLE_HASH = HashingUtils::HashString("ResourceUnavailableException");
static const int RESOURCE_ASSOCIATED_HASH = HashingUtils::HashString("ResourceAssociatedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == OPERATION_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::OPERATION_NOT_SUPPORTED), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == UNSUPPORTED_WORKSPACE_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::UNSUPPORTED_WORKSPACE_CONFIGURATION), false);
  }
  else if (hashCode == OPERATION_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::OPERATION_IN_PROGRESS), false);
  }
  else if (hashCode == INVALID_RESOURCE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::INVALID_RESOURCE_STATE), false);
  }
  else if (hashCode == RESOURCE_CREATION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_CREATION_FAILED), false);
  }
  else if (hashCode == INVALID_PARAMETER_VALUES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::INVALID_PARAMETER_VALUES), false);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_UNAVAILABLE), false);
  }
  else if (hashCode == RESOURCE_ASSOCIATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::RESOURCE_ASSOCIATED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WorkSpacesErrorMapper
} // namespace WorkSpaces
} // namespace Aws
