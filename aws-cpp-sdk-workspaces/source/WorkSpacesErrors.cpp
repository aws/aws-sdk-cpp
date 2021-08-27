/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces/WorkSpacesErrors.h>
#include <aws/workspaces/model/ResourceNotFoundException.h>
#include <aws/workspaces/model/ResourceUnavailableException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WorkSpaces;
using namespace Aws::WorkSpaces::Model;

namespace Aws
{
namespace WorkSpaces
{
template<> AWS_WORKSPACES_API ResourceNotFoundException WorkSpacesError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_WORKSPACES_API ResourceUnavailableException WorkSpacesError::GetModeledError()
{
  assert(this->GetErrorType() == WorkSpacesErrors::RESOURCE_UNAVAILABLE);
  return ResourceUnavailableException(this->GetJsonPayload().View());
}

namespace WorkSpacesErrorMapper
{

static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int OPERATION_NOT_SUPPORTED_HASH = HashingUtils::HashString("OperationNotSupportedException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int WORKSPACES_DEFAULT_ROLE_NOT_FOUND_HASH = HashingUtils::HashString("WorkspacesDefaultRoleNotFoundException");
static const int UNSUPPORTED_WORKSPACE_CONFIGURATION_HASH = HashingUtils::HashString("UnsupportedWorkspaceConfigurationException");
static const int OPERATION_IN_PROGRESS_HASH = HashingUtils::HashString("OperationInProgressException");
static const int INVALID_RESOURCE_STATE_HASH = HashingUtils::HashString("InvalidResourceStateException");
static const int RESOURCE_CREATION_FAILED_HASH = HashingUtils::HashString("ResourceCreationFailedException");
static const int INVALID_PARAMETER_VALUES_HASH = HashingUtils::HashString("InvalidParameterValuesException");
static const int UNSUPPORTED_NETWORK_CONFIGURATION_HASH = HashingUtils::HashString("UnsupportedNetworkConfigurationException");
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
  else if (hashCode == WORKSPACES_DEFAULT_ROLE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::WORKSPACES_DEFAULT_ROLE_NOT_FOUND), false);
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
  else if (hashCode == UNSUPPORTED_NETWORK_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkSpacesErrors::UNSUPPORTED_NETWORK_CONFIGURATION), false);
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
