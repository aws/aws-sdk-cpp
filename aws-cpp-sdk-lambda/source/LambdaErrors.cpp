/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/LambdaErrors.h>

using namespace Aws::Client;
using namespace Aws::Lambda;
using namespace Aws::Utils;

static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflictException");
static const int INVALID_REQUEST_CONTENT_HASH = HashingUtils::HashString("InvalidRequestContentException");
static const int POLICY_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("PolicyLengthExceededException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int CODE_STORAGE_EXCEEDED_HASH = HashingUtils::HashString("CodeStorageExceededException");
static const int UNSUPPORTED_MEDIA_TYPE_HASH = HashingUtils::HashString("UnsupportedMediaTypeException");
static const int REQUEST_TOO_LARGE_HASH = HashingUtils::HashString("RequestTooLargeException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");

namespace Aws
{
namespace Lambda
{
namespace LambdaErrorMapper
{

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == INVALID_REQUEST_CONTENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::INVALID_REQUEST_CONTENT), false);
  }
  else if (hashCode == POLICY_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::POLICY_LENGTH_EXCEEDED), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::TOO_MANY_REQUESTS), false);
  }
  else if (hashCode == CODE_STORAGE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::CODE_STORAGE_EXCEEDED), false);
  }
  else if (hashCode == UNSUPPORTED_MEDIA_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::UNSUPPORTED_MEDIA_TYPE), false);
  }
  else if (hashCode == REQUEST_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::REQUEST_TOO_LARGE), false);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::SERVICE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LambdaErrorMapper
} // namespace Lambda
} // namespace Aws
