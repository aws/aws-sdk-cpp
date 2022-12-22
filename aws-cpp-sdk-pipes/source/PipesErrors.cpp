/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pipes/PipesErrors.h>
#include <aws/pipes/model/InternalException.h>
#include <aws/pipes/model/ConflictException.h>
#include <aws/pipes/model/ThrottlingException.h>
#include <aws/pipes/model/ServiceQuotaExceededException.h>
#include <aws/pipes/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Pipes;
using namespace Aws::Pipes::Model;

namespace Aws
{
namespace Pipes
{
template<> AWS_PIPES_API InternalException PipesError::GetModeledError()
{
  assert(this->GetErrorType() == PipesErrors::INTERNAL);
  return InternalException(this->GetJsonPayload().View());
}

template<> AWS_PIPES_API ConflictException PipesError::GetModeledError()
{
  assert(this->GetErrorType() == PipesErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_PIPES_API ThrottlingException PipesError::GetModeledError()
{
  assert(this->GetErrorType() == PipesErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_PIPES_API ServiceQuotaExceededException PipesError::GetModeledError()
{
  assert(this->GetErrorType() == PipesErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_PIPES_API ValidationException PipesError::GetModeledError()
{
  assert(this->GetErrorType() == PipesErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace PipesErrorMapper
{

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PipesErrors::INTERNAL), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PipesErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PipesErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PipesErrors::NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PipesErrorMapper
} // namespace Pipes
} // namespace Aws
