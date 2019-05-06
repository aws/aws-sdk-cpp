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
#include <aws/organizations/OrganizationsErrors.h>

using namespace Aws::Client;
using namespace Aws::Organizations;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace OrganizationsErrorMapper
{

static const int UNSUPPORTED_A_P_I_ENDPOINT_HASH = HashingUtils::HashString("UnsupportedAPIEndpointException");
static const int POLICY_TYPE_NOT_AVAILABLE_FOR_ORGANIZATION_HASH = HashingUtils::HashString("PolicyTypeNotAvailableForOrganizationException");
static const int A_W_S_ORGANIZATIONS_NOT_IN_USE_HASH = HashingUtils::HashString("AWSOrganizationsNotInUseException");
static const int DUPLICATE_POLICY_ATTACHMENT_HASH = HashingUtils::HashString("DuplicatePolicyAttachmentException");
static const int FINALIZING_ORGANIZATION_HASH = HashingUtils::HashString("FinalizingOrganizationException");
static const int DESTINATION_PARENT_NOT_FOUND_HASH = HashingUtils::HashString("DestinationParentNotFoundException");
static const int MASTER_CANNOT_LEAVE_ORGANIZATION_HASH = HashingUtils::HashString("MasterCannotLeaveOrganizationException");
static const int DUPLICATE_ACCOUNT_HASH = HashingUtils::HashString("DuplicateAccountException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int HANDSHAKE_NOT_FOUND_HASH = HashingUtils::HashString("HandshakeNotFoundException");
static const int PARENT_NOT_FOUND_HASH = HashingUtils::HashString("ParentNotFoundException");
static const int MALFORMED_POLICY_DOCUMENT_HASH = HashingUtils::HashString("MalformedPolicyDocumentException");
static const int CHILD_NOT_FOUND_HASH = HashingUtils::HashString("ChildNotFoundException");
static const int HANDSHAKE_ALREADY_IN_STATE_HASH = HashingUtils::HashString("HandshakeAlreadyInStateException");
static const int POLICY_TYPE_NOT_ENABLED_HASH = HashingUtils::HashString("PolicyTypeNotEnabledException");
static const int ROOT_NOT_FOUND_HASH = HashingUtils::HashString("RootNotFoundException");
static const int CONSTRAINT_VIOLATION_HASH = HashingUtils::HashString("ConstraintViolationException");
static const int ORGANIZATIONAL_UNIT_NOT_FOUND_HASH = HashingUtils::HashString("OrganizationalUnitNotFoundException");
static const int HANDSHAKE_CONSTRAINT_VIOLATION_HASH = HashingUtils::HashString("HandshakeConstraintViolationException");
static const int DUPLICATE_ORGANIZATIONAL_UNIT_HASH = HashingUtils::HashString("DuplicateOrganizationalUnitException");
static const int ACCOUNT_NOT_FOUND_HASH = HashingUtils::HashString("AccountNotFoundException");
static const int POLICY_TYPE_ALREADY_ENABLED_HASH = HashingUtils::HashString("PolicyTypeAlreadyEnabledException");
static const int DUPLICATE_HANDSHAKE_HASH = HashingUtils::HashString("DuplicateHandshakeException");
static const int TARGET_NOT_FOUND_HASH = HashingUtils::HashString("TargetNotFoundException");
static const int ORGANIZATIONAL_UNIT_NOT_EMPTY_HASH = HashingUtils::HashString("OrganizationalUnitNotEmptyException");
static const int INVALID_HANDSHAKE_TRANSITION_HASH = HashingUtils::HashString("InvalidHandshakeTransitionException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int ORGANIZATION_NOT_EMPTY_HASH = HashingUtils::HashString("OrganizationNotEmptyException");
static const int POLICY_NOT_FOUND_HASH = HashingUtils::HashString("PolicyNotFoundException");
static const int CREATE_ACCOUNT_STATUS_NOT_FOUND_HASH = HashingUtils::HashString("CreateAccountStatusNotFoundException");
static const int SOURCE_PARENT_NOT_FOUND_HASH = HashingUtils::HashString("SourceParentNotFoundException");
static const int ACCESS_DENIED_FOR_DEPENDENCY_HASH = HashingUtils::HashString("AccessDeniedForDependencyException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int DUPLICATE_POLICY_HASH = HashingUtils::HashString("DuplicatePolicyException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int POLICY_IN_USE_HASH = HashingUtils::HashString("PolicyInUseException");
static const int POLICY_NOT_ATTACHED_HASH = HashingUtils::HashString("PolicyNotAttachedException");
static const int ALREADY_IN_ORGANIZATION_HASH = HashingUtils::HashString("AlreadyInOrganizationException");
static const int ACCOUNT_OWNER_NOT_VERIFIED_HASH = HashingUtils::HashString("AccountOwnerNotVerifiedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == UNSUPPORTED_A_P_I_ENDPOINT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::UNSUPPORTED_A_P_I_ENDPOINT), false);
  }
  else if (hashCode == POLICY_TYPE_NOT_AVAILABLE_FOR_ORGANIZATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::POLICY_TYPE_NOT_AVAILABLE_FOR_ORGANIZATION), false);
  }
  else if (hashCode == A_W_S_ORGANIZATIONS_NOT_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::A_W_S_ORGANIZATIONS_NOT_IN_USE), false);
  }
  else if (hashCode == DUPLICATE_POLICY_ATTACHMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::DUPLICATE_POLICY_ATTACHMENT), false);
  }
  else if (hashCode == FINALIZING_ORGANIZATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::FINALIZING_ORGANIZATION), false);
  }
  else if (hashCode == DESTINATION_PARENT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::DESTINATION_PARENT_NOT_FOUND), false);
  }
  else if (hashCode == MASTER_CANNOT_LEAVE_ORGANIZATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::MASTER_CANNOT_LEAVE_ORGANIZATION), false);
  }
  else if (hashCode == DUPLICATE_ACCOUNT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::DUPLICATE_ACCOUNT), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == HANDSHAKE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::HANDSHAKE_NOT_FOUND), false);
  }
  else if (hashCode == PARENT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::PARENT_NOT_FOUND), false);
  }
  else if (hashCode == MALFORMED_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::MALFORMED_POLICY_DOCUMENT), false);
  }
  else if (hashCode == CHILD_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::CHILD_NOT_FOUND), false);
  }
  else if (hashCode == HANDSHAKE_ALREADY_IN_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::HANDSHAKE_ALREADY_IN_STATE), false);
  }
  else if (hashCode == POLICY_TYPE_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::POLICY_TYPE_NOT_ENABLED), false);
  }
  else if (hashCode == ROOT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::ROOT_NOT_FOUND), false);
  }
  else if (hashCode == CONSTRAINT_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::CONSTRAINT_VIOLATION), false);
  }
  else if (hashCode == ORGANIZATIONAL_UNIT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::ORGANIZATIONAL_UNIT_NOT_FOUND), false);
  }
  else if (hashCode == HANDSHAKE_CONSTRAINT_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::HANDSHAKE_CONSTRAINT_VIOLATION), false);
  }
  else if (hashCode == DUPLICATE_ORGANIZATIONAL_UNIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::DUPLICATE_ORGANIZATIONAL_UNIT), false);
  }
  else if (hashCode == ACCOUNT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::ACCOUNT_NOT_FOUND), false);
  }
  else if (hashCode == POLICY_TYPE_ALREADY_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::POLICY_TYPE_ALREADY_ENABLED), false);
  }
  else if (hashCode == DUPLICATE_HANDSHAKE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::DUPLICATE_HANDSHAKE), false);
  }
  else if (hashCode == TARGET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::TARGET_NOT_FOUND), false);
  }
  else if (hashCode == ORGANIZATIONAL_UNIT_NOT_EMPTY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::ORGANIZATIONAL_UNIT_NOT_EMPTY), false);
  }
  else if (hashCode == INVALID_HANDSHAKE_TRANSITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::INVALID_HANDSHAKE_TRANSITION), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::INVALID_INPUT), false);
  }
  else if (hashCode == ORGANIZATION_NOT_EMPTY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::ORGANIZATION_NOT_EMPTY), false);
  }
  else if (hashCode == POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::POLICY_NOT_FOUND), false);
  }
  else if (hashCode == CREATE_ACCOUNT_STATUS_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::CREATE_ACCOUNT_STATUS_NOT_FOUND), false);
  }
  else if (hashCode == SOURCE_PARENT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::SOURCE_PARENT_NOT_FOUND), false);
  }
  else if (hashCode == ACCESS_DENIED_FOR_DEPENDENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::ACCESS_DENIED_FOR_DEPENDENCY), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::TOO_MANY_REQUESTS), false);
  }
  else if (hashCode == DUPLICATE_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::DUPLICATE_POLICY), false);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::SERVICE), false);
  }
  else if (hashCode == POLICY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::POLICY_IN_USE), false);
  }
  else if (hashCode == POLICY_NOT_ATTACHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::POLICY_NOT_ATTACHED), false);
  }
  else if (hashCode == ALREADY_IN_ORGANIZATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::ALREADY_IN_ORGANIZATION), false);
  }
  else if (hashCode == ACCOUNT_OWNER_NOT_VERIFIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::ACCOUNT_OWNER_NOT_VERIFIED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace OrganizationsErrorMapper
} // namespace Organizations
} // namespace Aws
