/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotanalytics/IoTAnalyticsErrors.h>
#include <aws/iotanalytics/model/ResourceAlreadyExistsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoTAnalytics;
using namespace Aws::IoTAnalytics::Model;

namespace Aws
{
namespace IoTAnalytics
{
template<> AWS_IOTANALYTICS_API ResourceAlreadyExistsException IoTAnalyticsError::GetModeledError()
{
  assert(this->GetErrorType() == IoTAnalyticsErrors::RESOURCE_ALREADY_EXISTS);
  return ResourceAlreadyExistsException(this->GetJsonPayload().View());
}

namespace IoTAnalyticsErrorMapper
{

static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTAnalyticsErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTAnalyticsErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTAnalyticsErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTAnalyticsErrorMapper
} // namespace IoTAnalytics
} // namespace Aws
