/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/alexaforbusiness/AlexaForBusinessErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AlexaForBusiness;

namespace Aws
{
namespace AlexaForBusiness
{
namespace AlexaForBusinessErrorMapper
{

static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AlexaForBusinessErrorMapper
} // namespace AlexaForBusiness
} // namespace Aws
