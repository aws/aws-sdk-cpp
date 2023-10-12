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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INVALID_ARGS_HASH = ConstExprHashingUtils::HashString("InvalidArgsException");
static constexpr uint32_t INVALID_DOMAIN_VALIDATION_OPTIONS_HASH = ConstExprHashingUtils::HashString("InvalidDomainValidationOptionsException");
static constexpr uint32_t REQUEST_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("RequestInProgressException");
static constexpr uint32_t INVALID_ARN_HASH = ConstExprHashingUtils::HashString("InvalidArnException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t INVALID_TAG_HASH = ConstExprHashingUtils::HashString("InvalidTagException");
static constexpr uint32_t TAG_POLICY_HASH = ConstExprHashingUtils::HashString("TagPolicyException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t INVALID_STATE_HASH = ConstExprHashingUtils::HashString("InvalidStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
