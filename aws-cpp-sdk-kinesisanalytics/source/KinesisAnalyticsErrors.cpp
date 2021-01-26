/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesisanalytics/KinesisAnalyticsErrors.h>
#include <aws/kinesisanalytics/model/UnableToDetectSchemaException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::KinesisAnalytics;
using namespace Aws::KinesisAnalytics::Model;

namespace Aws
{
namespace KinesisAnalytics
{
template<> AWS_KINESISANALYTICS_API UnableToDetectSchemaException KinesisAnalyticsError::GetModeledError()
{
  assert(this->GetErrorType() == KinesisAnalyticsErrors::UNABLE_TO_DETECT_SCHEMA);
  return UnableToDetectSchemaException(this->GetJsonPayload().View());
}

namespace KinesisAnalyticsErrorMapper
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


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_PROVISIONED_THROUGHPUT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsErrors::RESOURCE_PROVISIONED_THROUGHPUT_EXCEEDED), false);
  }
  else if (hashCode == CODE_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsErrors::CODE_VALIDATION), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == INVALID_APPLICATION_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsErrors::INVALID_APPLICATION_CONFIGURATION), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsErrors::INVALID_ARGUMENT), false);
  }
  else if (hashCode == UNABLE_TO_DETECT_SCHEMA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KinesisAnalyticsErrors::UNABLE_TO_DETECT_SCHEMA), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KinesisAnalyticsErrorMapper
} // namespace KinesisAnalytics
} // namespace Aws
