/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Errors.h>
#include <aws/kinesisanalyticsv2/model/UnableToDetectSchemaException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::KinesisAnalyticsV2;
using namespace Aws::KinesisAnalyticsV2::Model;

namespace Aws
{
namespace KinesisAnalyticsV2
{
template<> AWS_KINESISANALYTICSV2_API UnableToDetectSchemaException KinesisAnalyticsV2Error::GetModeledError()
{
  assert(this->GetErrorType() == KinesisAnalyticsV2Errors::UNABLE_TO_DETECT_SCHEMA);
  return UnableToDetectSchemaException(this->GetJsonPayload().View());
}

namespace KinesisAnalyticsV2ErrorMapper
{

static const int RESOURCE_PROVISIONED_THROUGHPUT_EXCEEDED_HASH = HashingUtils::HashString("ResourceProvisionedThroughputExceededException");
static const int CODE_VALIDATION_HASH = HashingUtils::HashString("CodeValidationException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int INVALID_APPLICATION_CONFIGURATION_HASH = HashingUtils::HashString("InvalidApplicationConfigurationException");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgumentException");
static const int UNABLE_TO_DETECT_SCHEMA_HASH = HashingUtils::HashString("UnableToDetectSchemaException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_PROVISIONED_THROUGHPUT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsV2Errors::RESOURCE_PROVISIONED_THROUGHPUT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CODE_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsV2Errors::CODE_VALIDATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsV2Errors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsV2Errors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsV2Errors::CONCURRENT_MODIFICATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsV2Errors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsV2Errors::UNSUPPORTED_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_APPLICATION_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsV2Errors::INVALID_APPLICATION_CONFIGURATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsV2Errors::INVALID_ARGUMENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNABLE_TO_DETECT_SCHEMA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsV2Errors::UNABLE_TO_DETECT_SCHEMA), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsV2Errors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KinesisAnalyticsV2ErrorMapper
} // namespace KinesisAnalyticsV2
} // namespace Aws
