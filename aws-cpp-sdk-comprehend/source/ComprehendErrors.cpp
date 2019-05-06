/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/comprehend/ComprehendErrors.h>

using namespace Aws::Client;
using namespace Aws::Comprehend;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace ComprehendErrorMapper
{

static const int UNSUPPORTED_LANGUAGE_HASH = HashingUtils::HashString("UnsupportedLanguageException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int BATCH_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("BatchSizeLimitExceededException");
static const int KMS_KEY_VALIDATION_HASH = HashingUtils::HashString("KmsKeyValidationException");
static const int JOB_NOT_FOUND_HASH = HashingUtils::HashString("JobNotFoundException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int TOO_MANY_TAG_KEYS_HASH = HashingUtils::HashString("TooManyTagKeysException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int INVALID_FILTER_HASH = HashingUtils::HashString("InvalidFilterException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int RESOURCE_UNAVAILABLE_HASH = HashingUtils::HashString("ResourceUnavailableException");
static const int TEXT_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TextSizeLimitExceededException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComprehendErrors::TOO_MANY_REQUESTS), false);
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
