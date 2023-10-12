/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/appconfig/AppConfigErrors.h>
#include <aws/appconfig/model/ResourceNotFoundException.h>
#include <aws/appconfig/model/PayloadTooLargeException.h>
#include <aws/appconfig/model/BadRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AppConfig;
using namespace Aws::AppConfig::Model;

namespace Aws
{
namespace AppConfig
{
template<> AWS_APPCONFIG_API ResourceNotFoundException AppConfigError::GetModeledError()
{
  assert(this->GetErrorType() == AppConfigErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_APPCONFIG_API PayloadTooLargeException AppConfigError::GetModeledError()
{
  assert(this->GetErrorType() == AppConfigErrors::PAYLOAD_TOO_LARGE);
  return PayloadTooLargeException(this->GetJsonPayload().View());
}

template<> AWS_APPCONFIG_API BadRequestException AppConfigError::GetModeledError()
{
  assert(this->GetErrorType() == AppConfigErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

namespace AppConfigErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t PAYLOAD_TOO_LARGE_HASH = ConstExprHashingUtils::HashString("PayloadTooLargeException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppConfigErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppConfigErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppConfigErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == PAYLOAD_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppConfigErrors::PAYLOAD_TOO_LARGE), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppConfigErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AppConfigErrorMapper
} // namespace AppConfig
} // namespace Aws
