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

static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
