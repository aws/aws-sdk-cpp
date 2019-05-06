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
#include <aws/ram/RAMErrors.h>

using namespace Aws::Client;
using namespace Aws::RAM;
using namespace Aws::Utils;

namespace Aws
{
namespace RAM
{
namespace RAMErrorMapper
{

static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermittedException");
static const int RESOURCE_SHARE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceShareLimitExceededException");
static const int RESOURCE_ARN_NOT_FOUND_HASH = HashingUtils::HashString("ResourceArnNotFoundException");
static const int INVALID_CLIENT_TOKEN_HASH = HashingUtils::HashString("InvalidClientTokenException");
static const int INVALID_MAX_RESULTS_HASH = HashingUtils::HashString("InvalidMaxResultsException");
static const int MISSING_REQUIRED_PARAMETER_HASH = HashingUtils::HashString("MissingRequiredParameterException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int MALFORMED_ARN_HASH = HashingUtils::HashString("MalformedArnException");
static const int RESOURCE_SHARE_INVITATION_ALREADY_ACCEPTED_HASH = HashingUtils::HashString("ResourceShareInvitationAlreadyAcceptedException");
static const int UNKNOWN_RESOURCE_HASH = HashingUtils::HashString("UnknownResourceException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int RESOURCE_SHARE_INVITATION_ARN_NOT_FOUND_HASH = HashingUtils::HashString("ResourceShareInvitationArnNotFoundException");
static const int SERVER_INTERNAL_HASH = HashingUtils::HashString("ServerInternalException");
static const int INVALID_RESOURCE_TYPE_HASH = HashingUtils::HashString("InvalidResourceTypeException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int RESOURCE_SHARE_INVITATION_EXPIRED_HASH = HashingUtils::HashString("ResourceShareInvitationExpiredException");
static const int TAG_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TagLimitExceededException");
static const int RESOURCE_SHARE_INVITATION_ALREADY_REJECTED_HASH = HashingUtils::HashString("ResourceShareInvitationAlreadyRejectedException");
static const int INVALID_STATE_TRANSITION_HASH = HashingUtils::HashString("InvalidStateTransitionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::OPERATION_NOT_PERMITTED), false);
  }
  else if (hashCode == RESOURCE_SHARE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == RESOURCE_ARN_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_ARN_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_CLIENT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_CLIENT_TOKEN), false);
  }
  else if (hashCode == INVALID_MAX_RESULTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_MAX_RESULTS), false);
  }
  else if (hashCode == MISSING_REQUIRED_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::MISSING_REQUIRED_PARAMETER), false);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == MALFORMED_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::MALFORMED_ARN), false);
  }
  else if (hashCode == RESOURCE_SHARE_INVITATION_ALREADY_ACCEPTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_INVITATION_ALREADY_ACCEPTED), false);
  }
  else if (hashCode == UNKNOWN_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::UNKNOWN_RESOURCE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == RESOURCE_SHARE_INVITATION_ARN_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_INVITATION_ARN_NOT_FOUND), false);
  }
  else if (hashCode == SERVER_INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::SERVER_INTERNAL), false);
  }
  else if (hashCode == INVALID_RESOURCE_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_RESOURCE_TYPE), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == RESOURCE_SHARE_INVITATION_EXPIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_INVITATION_EXPIRED), false);
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::TAG_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == RESOURCE_SHARE_INVITATION_ALREADY_REJECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_INVITATION_ALREADY_REJECTED), false);
  }
  else if (hashCode == INVALID_STATE_TRANSITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_STATE_TRANSITION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RAMErrorMapper
} // namespace RAM
} // namespace Aws
