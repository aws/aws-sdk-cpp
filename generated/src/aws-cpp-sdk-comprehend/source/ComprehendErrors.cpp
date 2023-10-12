/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/comprehend/ComprehendErrors.h>
#include <aws/comprehend/model/InvalidRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Comprehend;
using namespace Aws::Comprehend::Model;

namespace Aws
{
namespace Comprehend
{
template<> AWS_COMPREHEND_API InvalidRequestException ComprehendError::GetModeledError()
{
  assert(this->GetErrorType() == ComprehendErrors::INVALID_REQUEST);
  return InvalidRequestException(this->GetJsonPayload().View());
}

namespace ComprehendErrorMapper
{

static constexpr uint32_t UNSUPPORTED_LANGUAGE_HASH = ConstExprHashingUtils::HashString("UnsupportedLanguageException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t BATCH_SIZE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("BatchSizeLimitExceededException");
static constexpr uint32_t KMS_KEY_VALIDATION_HASH = ConstExprHashingUtils::HashString("KmsKeyValidationException");
static constexpr uint32_t JOB_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("JobNotFoundException");
static constexpr uint32_t RESOURCE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceLimitExceededException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t TOO_MANY_TAG_KEYS_HASH = ConstExprHashingUtils::HashString("TooManyTagKeysException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t INVALID_FILTER_HASH = ConstExprHashingUtils::HashString("InvalidFilterException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t RESOURCE_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("ResourceUnavailableException");
static constexpr uint32_t TEXT_SIZE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TextSizeLimitExceededException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == UNSUPPORTED_LANGUAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::UNSUPPORTED_LANGUAGE), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == BATCH_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::BATCH_SIZE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == KMS_KEY_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::KMS_KEY_VALIDATION), false);
  }
  else if (hashCode == JOB_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::JOB_NOT_FOUND), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == TOO_MANY_TAG_KEYS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::TOO_MANY_TAG_KEYS), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == INVALID_FILTER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::INVALID_FILTER), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::RESOURCE_UNAVAILABLE), false);
  }
  else if (hashCode == TEXT_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::TEXT_SIZE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ComprehendErrorMapper
} // namespace Comprehend
} // namespace Aws
