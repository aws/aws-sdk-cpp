/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/evs/EVSErrors.h>
#include <aws/evs/model/ThrottlingException.h>
#include <aws/evs/model/ResourceNotFoundException.h>
#include <aws/evs/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EVS;
using namespace Aws::EVS::Model;

namespace Aws
{
namespace EVS
{
template<> AWS_EVS_API ThrottlingException EVSError::GetModeledError()
{
  assert(this->GetErrorType() == EVSErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_EVS_API ResourceNotFoundException EVSError::GetModeledError()
{
  assert(this->GetErrorType() == EVSErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_EVS_API ValidationException EVSError::GetModeledError()
{
  assert(this->GetErrorType() == EVSErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace EVSErrorMapper
{

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int TAG_POLICY_HASH = HashingUtils::HashString("TagPolicyException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EVSErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EVSErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TAG_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EVSErrors::TAG_POLICY), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EVSErrorMapper
} // namespace EVS
} // namespace Aws
