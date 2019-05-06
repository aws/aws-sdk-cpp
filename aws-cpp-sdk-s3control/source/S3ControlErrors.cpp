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
#include <aws/s3control/S3ControlErrors.h>

using namespace Aws::Client;
using namespace Aws::S3Control;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace S3ControlErrorMapper
{

static const int IDEMPOTENCY_HASH = HashingUtils::HashString("IdempotencyException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int NO_SUCH_PUBLIC_ACCESS_BLOCK_CONFIGURATION_HASH = HashingUtils::HashString("NoSuchPublicAccessBlockConfiguration");
static const int JOB_STATUS_HASH = HashingUtils::HashString("JobStatusException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == IDEMPOTENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::IDEMPOTENCY), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::NOT_FOUND), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::TOO_MANY_REQUESTS), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::BAD_REQUEST), false);
  }
  else if (hashCode == NO_SUCH_PUBLIC_ACCESS_BLOCK_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::NO_SUCH_PUBLIC_ACCESS_BLOCK_CONFIGURATION), false);
  }
  else if (hashCode == JOB_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::JOB_STATUS), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(S3ControlErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace S3ControlErrorMapper
} // namespace S3Control
} // namespace Aws
