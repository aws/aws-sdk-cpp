/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/greengrassv2/GreengrassV2Errors.h>
#include <aws/greengrassv2/model/ConflictException.h>
#include <aws/greengrassv2/model/ThrottlingException.h>
#include <aws/greengrassv2/model/ServiceQuotaExceededException.h>
#include <aws/greengrassv2/model/InternalServerException.h>
#include <aws/greengrassv2/model/ResourceNotFoundException.h>
#include <aws/greengrassv2/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::GreengrassV2;
using namespace Aws::GreengrassV2::Model;

namespace Aws
{
namespace GreengrassV2
{
template<> AWS_GREENGRASSV2_API ConflictException GreengrassV2Error::GetModeledError()
{
  assert(this->GetErrorType() == GreengrassV2Errors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_GREENGRASSV2_API ThrottlingException GreengrassV2Error::GetModeledError()
{
  assert(this->GetErrorType() == GreengrassV2Errors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_GREENGRASSV2_API ServiceQuotaExceededException GreengrassV2Error::GetModeledError()
{
  assert(this->GetErrorType() == GreengrassV2Errors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_GREENGRASSV2_API InternalServerException GreengrassV2Error::GetModeledError()
{
  assert(this->GetErrorType() == GreengrassV2Errors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_GREENGRASSV2_API ResourceNotFoundException GreengrassV2Error::GetModeledError()
{
  assert(this->GetErrorType() == GreengrassV2Errors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_GREENGRASSV2_API ValidationException GreengrassV2Error::GetModeledError()
{
  assert(this->GetErrorType() == GreengrassV2Errors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace GreengrassV2ErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int REQUEST_ALREADY_IN_PROGRESS_HASH = HashingUtils::HashString("RequestAlreadyInProgressException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GreengrassV2Errors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GreengrassV2Errors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GreengrassV2Errors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == REQUEST_ALREADY_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GreengrassV2Errors::REQUEST_ALREADY_IN_PROGRESS), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GreengrassV2ErrorMapper
} // namespace GreengrassV2
} // namespace Aws
