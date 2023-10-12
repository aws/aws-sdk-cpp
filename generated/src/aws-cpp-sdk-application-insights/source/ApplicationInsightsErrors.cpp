/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/application-insights/ApplicationInsightsErrors.h>
#include <aws/application-insights/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ApplicationInsights;
using namespace Aws::ApplicationInsights::Model;

namespace Aws
{
namespace ApplicationInsights
{
template<> AWS_APPLICATIONINSIGHTS_API TooManyTagsException ApplicationInsightsError::GetModeledError()
{
  assert(this->GetErrorType() == ApplicationInsightsErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace ApplicationInsightsErrorMapper
{

static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t TAGS_ALREADY_EXIST_HASH = ConstExprHashingUtils::HashString("TagsAlreadyExistException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationInsightsErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == TAGS_ALREADY_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationInsightsErrors::TAGS_ALREADY_EXIST), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationInsightsErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationInsightsErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ApplicationInsightsErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ApplicationInsightsErrorMapper
} // namespace ApplicationInsights
} // namespace Aws
