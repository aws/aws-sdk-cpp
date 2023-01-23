/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/acm/ACMErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ACM;

namespace Aws
{
namespace ACM
{
namespace ACMErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INVALID_ARGS_HASH = HashingUtils::HashString("InvalidArgsException");
static const int INVALID_DOMAIN_VALIDATION_OPTIONS_HASH = HashingUtils::HashString("InvalidDomainValidationOptionsException");
static const int REQUEST_IN_PROGRESS_HASH = HashingUtils::HashString("RequestInProgressException");
static const int INVALID_ARN_HASH = HashingUtils::HashString("InvalidArnException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int INVALID_TAG_HASH = HashingUtils::HashString("InvalidTagException");
static const int TAG_POLICY_HASH = HashingUtils::HashString("TagPolicyException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INVALID_STATE_HASH = HashingUtils::HashString("InvalidStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::CONFLICT), false);
  }
  else if (hashCode == INVALID_ARGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::INVALID_ARGS), false);
  }
  else if (hashCode == INVALID_DOMAIN_VALIDATION_OPTIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::INVALID_DOMAIN_VALIDATION_OPTIONS), false);
  }
  else if (hashCode == REQUEST_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::REQUEST_IN_PROGRESS), false);
  }
  else if (hashCode == INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::INVALID_ARN), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::INVALID_TAG), false);
  }
  else if (hashCode == TAG_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::TAG_POLICY), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMErrors::INVALID_STATE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ACMErrorMapper
} // namespace ACM
} // namespace Aws
