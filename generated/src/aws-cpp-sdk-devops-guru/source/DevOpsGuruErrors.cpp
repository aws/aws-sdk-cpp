/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-guru/DevOpsGuruErrors.h>
#include <aws/devops-guru/model/ConflictException.h>
#include <aws/devops-guru/model/ThrottlingException.h>
#include <aws/devops-guru/model/InternalServerException.h>
#include <aws/devops-guru/model/ResourceNotFoundException.h>
#include <aws/devops-guru/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DevOpsGuru;
using namespace Aws::DevOpsGuru::Model;

namespace Aws
{
namespace DevOpsGuru
{
template<> AWS_DEVOPSGURU_API ConflictException DevOpsGuruError::GetModeledError()
{
  assert(this->GetErrorType() == DevOpsGuruErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_DEVOPSGURU_API ThrottlingException DevOpsGuruError::GetModeledError()
{
  assert(this->GetErrorType() == DevOpsGuruErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_DEVOPSGURU_API InternalServerException DevOpsGuruError::GetModeledError()
{
  assert(this->GetErrorType() == DevOpsGuruErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_DEVOPSGURU_API ResourceNotFoundException DevOpsGuruError::GetModeledError()
{
  assert(this->GetErrorType() == DevOpsGuruErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_DEVOPSGURU_API ValidationException DevOpsGuruError::GetModeledError()
{
  assert(this->GetErrorType() == DevOpsGuruErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace DevOpsGuruErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DevOpsGuruErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DevOpsGuruErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DevOpsGuruErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DevOpsGuruErrorMapper
} // namespace DevOpsGuru
} // namespace Aws
