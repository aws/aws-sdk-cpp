/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/appconfig/AppConfigErrors.h>
#include <aws/appconfig/model/ResourceNotFoundException.h>
#include <aws/appconfig/model/PayloadTooLargeException.h>

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

namespace AppConfigErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int PAYLOAD_TOO_LARGE_HASH = HashingUtils::HashString("PayloadTooLargeException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
