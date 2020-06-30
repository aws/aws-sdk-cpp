/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/macie/MacieErrors.h>
#include <aws/macie/model/InternalException.h>
#include <aws/macie/model/LimitExceededException.h>
#include <aws/macie/model/AccessDeniedException.h>
#include <aws/macie/model/InvalidInputException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Macie;
using namespace Aws::Macie::Model;

namespace Aws
{
namespace Macie
{
template<> AWS_MACIE_API InternalException MacieError::GetModeledError()
{
  assert(this->GetErrorType() == MacieErrors::INTERNAL);
  return InternalException(this->GetJsonPayload().View());
}

template<> AWS_MACIE_API LimitExceededException MacieError::GetModeledError()
{
  assert(this->GetErrorType() == MacieErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_MACIE_API AccessDeniedException MacieError::GetModeledError()
{
  assert(this->GetErrorType() == MacieErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_MACIE_API InvalidInputException MacieError::GetModeledError()
{
  assert(this->GetErrorType() == MacieErrors::INVALID_INPUT);
  return InvalidInputException(this->GetJsonPayload().View());
}

namespace MacieErrorMapper
{

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MacieErrors::INTERNAL), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MacieErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MacieErrors::INVALID_INPUT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MacieErrorMapper
} // namespace Macie
} // namespace Aws
