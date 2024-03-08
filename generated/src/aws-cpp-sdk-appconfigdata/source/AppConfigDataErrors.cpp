/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/appconfigdata/AppConfigDataErrors.h>
#include <aws/appconfigdata/model/ResourceNotFoundException.h>
#include <aws/appconfigdata/model/BadRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AppConfigData;
using namespace Aws::AppConfigData::Model;

namespace Aws
{
namespace AppConfigData
{
template<> AWS_APPCONFIGDATA_API ResourceNotFoundException AppConfigDataError::GetModeledError()
{
  assert(this->GetErrorType() == AppConfigDataErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_APPCONFIGDATA_API BadRequestException AppConfigDataError::GetModeledError()
{
  assert(this->GetErrorType() == AppConfigDataErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

namespace AppConfigDataErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppConfigDataErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppConfigDataErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AppConfigDataErrorMapper
} // namespace AppConfigData
} // namespace Aws
