/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/apptest/AppTestErrors.h>
#include <aws/apptest/model/ConflictException.h>
#include <aws/apptest/model/ServiceQuotaExceededException.h>
#include <aws/apptest/model/ThrottlingException.h>
#include <aws/apptest/model/InternalServerException.h>
#include <aws/apptest/model/ResourceNotFoundException.h>
#include <aws/apptest/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AppTest;
using namespace Aws::AppTest::Model;

namespace Aws
{
namespace AppTest
{
template<> AWS_APPTEST_API ConflictException AppTestError::GetModeledError()
{
  assert(this->GetErrorType() == AppTestErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_APPTEST_API ServiceQuotaExceededException AppTestError::GetModeledError()
{
  assert(this->GetErrorType() == AppTestErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_APPTEST_API ThrottlingException AppTestError::GetModeledError()
{
  assert(this->GetErrorType() == AppTestErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_APPTEST_API InternalServerException AppTestError::GetModeledError()
{
  assert(this->GetErrorType() == AppTestErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_APPTEST_API ResourceNotFoundException AppTestError::GetModeledError()
{
  assert(this->GetErrorType() == AppTestErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_APPTEST_API ValidationException AppTestError::GetModeledError()
{
  assert(this->GetErrorType() == AppTestErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace AppTestErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppTestErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppTestErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppTestErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AppTestErrorMapper
} // namespace AppTest
} // namespace Aws
