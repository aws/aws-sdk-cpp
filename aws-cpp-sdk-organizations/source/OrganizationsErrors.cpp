/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/organizations/OrganizationsErrors.h>
#include <aws/organizations/model/ConstraintViolationException.h>
#include <aws/organizations/model/HandshakeConstraintViolationException.h>
#include <aws/organizations/model/InvalidInputException.h>
#include <aws/organizations/model/AccessDeniedForDependencyException.h>
#include <aws/organizations/model/TooManyRequestsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Organizations;
using namespace Aws::Organizations::Model;

namespace Aws
{
namespace Organizations
{
template<> AWS_ORGANIZATIONS_API ConstraintViolationException OrganizationsError::GetModeledError()
{
  assert(this->GetErrorType() == OrganizationsErrors::CONSTRAINT_VIOLATION);
  return ConstraintViolationException(this->GetJsonPayload().View());
}

template<> AWS_ORGANIZATIONS_API HandshakeConstraintViolationException OrganizationsError::GetModeledError()
{
  assert(this->GetErrorType() == OrganizationsErrors::HANDSHAKE_CONSTRAINT_VIOLATION);
  return HandshakeConstraintViolationException(this->GetJsonPayload().View());
}

template<> AWS_ORGANIZATIONS_API InvalidInputException OrganizationsError::GetModeledError()
{
  assert(this->GetErrorType() == OrganizationsErrors::INVALID_INPUT);
  return InvalidInputException(this->GetJsonPayload().View());
}

template<> AWS_ORGANIZATIONS_API AccessDeniedForDependencyException OrganizationsError::GetModeledError()
{
  assert(this->GetErrorType() == OrganizationsErrors::ACCESS_DENIED_FOR_DEPENDENCY);
  return AccessDeniedForDependencyException(this->GetJsonPayload().View());
}

template<> AWS_ORGANIZATIONS_API TooManyRequestsException OrganizationsError::GetModeledError()
{
  assert(this->GetErrorType() == OrganizationsErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

namespace OrganizationsErrorMapper
{

static const int UNSUPPORTED_A_P_I_ENDPOINT_HASH = HashingUtils::HashString("UnsupportedAPIEndpointException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int POLICY_TYPE_NOT_AVAILABLE_FOR_ORGANIZATION_HASH = HashingUtils::HashString("PolicyTypeNotAvailableForOrganizationException");
static const int A_W_S_ORGANIZATIONS_NOT_IN_USE_HASH = HashingUtils::HashString("AWSOrganizationsNotInUseException");
static const int DUPLICATE_POLICY_ATTACHMENT_HASH = HashingUtils::HashString("DuplicatePolicyAttachmentException");
static const int FINALIZING_ORGANIZATION_HASH = HashingUtils::HashString("FinalizingOrganizationException");
static const int DESTINATION_PARENT_NOT_FOUND_HASH = HashingUtils::HashString("DestinationParentNotFoundException");
static const int POLICY_CHANGES_IN_PROGRESS_HASH = HashingUtils::HashString("PolicyChangesInProgressException");
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
static const int ACCOUNT_NOT_FOUND_HASH = HashingUtils::HashString("AccountNotFoundException");
static const int DUPLICATE_ORGANIZATIONAL_UNIT_HASH = HashingUtils::HashString("DuplicateOrganizationalUnitException");
static const int RESOURCE_POLICY_NOT_FOUND_HASH = HashingUtils::HashString("ResourcePolicyNotFoundException");
static const int POLICY_TYPE_ALREADY_ENABLED_HASH = HashingUtils::HashString("PolicyTypeAlreadyEnabledException");
static const int DUPLICATE_HANDSHAKE_HASH = HashingUtils::HashString("DuplicateHandshakeException");
static const int TARGET_NOT_FOUND_HASH = HashingUtils::HashString("TargetNotFoundException");
static const int ORGANIZATIONAL_UNIT_NOT_EMPTY_HASH = HashingUtils::HashString("OrganizationalUnitNotEmptyException");
static const int INVALID_HANDSHAKE_TRANSITION_HASH = HashingUtils::HashString("InvalidHandshakeTransitionException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int ORGANIZATION_NOT_EMPTY_HASH = HashingUtils::HashString("OrganizationNotEmptyException");
static const int ACCOUNT_NOT_REGISTERED_HASH = HashingUtils::HashString("AccountNotRegisteredException");
static const int ACCOUNT_ALREADY_REGISTERED_HASH = HashingUtils::HashString("AccountAlreadyRegisteredException");
static const int POLICY_NOT_FOUND_HASH = HashingUtils::HashString("PolicyNotFoundException");
static const int CREATE_ACCOUNT_STATUS_NOT_FOUND_HASH = HashingUtils::HashString("CreateAccountStatusNotFoundException");
static const int EFFECTIVE_POLICY_NOT_FOUND_HASH = HashingUtils::HashString("EffectivePolicyNotFoundException");
static const int SOURCE_PARENT_NOT_FOUND_HASH = HashingUtils::HashString("SourceParentNotFoundException");
static const int ACCESS_DENIED_FOR_DEPENDENCY_HASH = HashingUtils::HashString("AccessDeniedForDependencyException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int DUPLICATE_POLICY_HASH = HashingUtils::HashString("DuplicatePolicyException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int POLICY_IN_USE_HASH = HashingUtils::HashString("PolicyInUseException");
static const int POLICY_NOT_ATTACHED_HASH = HashingUtils::HashString("PolicyNotAttachedException");
static const int ACCOUNT_ALREADY_CLOSED_HASH = HashingUtils::HashString("AccountAlreadyClosedException");
static const int ALREADY_IN_ORGANIZATION_HASH = HashingUtils::HashString("AlreadyInOrganizationException");
static const int ACCOUNT_OWNER_NOT_VERIFIED_HASH = HashingUtils::HashString("AccountOwnerNotVerifiedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == UNSUPPORTED_A_P_I_ENDPOINT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::UNSUPPORTED_A_P_I_ENDPOINT), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::CONFLICT), false);
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
  else if (hashCode == POLICY_CHANGES_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::POLICY_CHANGES_IN_PROGRESS), false);
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
  else if (hashCode == ACCOUNT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::ACCOUNT_NOT_FOUND), false);
  }
  else if (hashCode == DUPLICATE_ORGANIZATIONAL_UNIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::DUPLICATE_ORGANIZATIONAL_UNIT), false);
  }
  else if (hashCode == RESOURCE_POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::RESOURCE_POLICY_NOT_FOUND), false);
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
  else if (hashCode == ACCOUNT_NOT_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::ACCOUNT_NOT_REGISTERED), false);
  }
  else if (hashCode == ACCOUNT_ALREADY_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::ACCOUNT_ALREADY_REGISTERED), false);
  }
  else if (hashCode == POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::POLICY_NOT_FOUND), false);
  }
  else if (hashCode == CREATE_ACCOUNT_STATUS_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::CREATE_ACCOUNT_STATUS_NOT_FOUND), false);
  }
  else if (hashCode == EFFECTIVE_POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::EFFECTIVE_POLICY_NOT_FOUND), false);
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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::TOO_MANY_REQUESTS), true);
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
  else if (hashCode == ACCOUNT_ALREADY_CLOSED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OrganizationsErrors::ACCOUNT_ALREADY_CLOSED), false);
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
