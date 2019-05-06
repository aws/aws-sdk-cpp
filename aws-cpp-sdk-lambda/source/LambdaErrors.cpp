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
#include <aws/lambda/LambdaErrors.h>

using namespace Aws::Client;
using namespace Aws::Lambda;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace LambdaErrorMapper
{

static const int E_C2_ACCESS_DENIED_HASH = HashingUtils::HashString("EC2AccessDeniedException");
static const int REQUEST_TOO_LARGE_HASH = HashingUtils::HashString("RequestTooLargeException");
static const int K_M_S_INVALID_STATE_HASH = HashingUtils::HashString("KMSInvalidStateException");
static const int INVALID_SECURITY_GROUP_I_D_HASH = HashingUtils::HashString("InvalidSecurityGroupIDException");
static const int INVALID_SUBNET_I_D_HASH = HashingUtils::HashString("InvalidSubnetIDException");
static const int INVALID_RUNTIME_HASH = HashingUtils::HashString("InvalidRuntimeException");
static const int E_C2_UNEXPECTED_HASH = HashingUtils::HashString("EC2UnexpectedException");
static const int INVALID_ZIP_FILE_HASH = HashingUtils::HashString("InvalidZipFileException");
static const int UNSUPPORTED_MEDIA_TYPE_HASH = HashingUtils::HashString("UnsupportedMediaTypeException");
static const int POLICY_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("PolicyLengthExceededException");
static const int K_M_S_NOT_FOUND_HASH = HashingUtils::HashString("KMSNotFoundException");
static const int K_M_S_DISABLED_HASH = HashingUtils::HashString("KMSDisabledException");
static const int K_M_S_ACCESS_DENIED_HASH = HashingUtils::HashString("KMSAccessDeniedException");
static const int PRECONDITION_FAILED_HASH = HashingUtils::HashString("PreconditionFailedException");
static const int E_C2_THROTTLED_HASH = HashingUtils::HashString("EC2ThrottledException");
static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflictException");
static const int E_N_I_LIMIT_REACHED_HASH = HashingUtils::HashString("ENILimitReachedException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int SUBNET_I_P_ADDRESS_LIMIT_REACHED_HASH = HashingUtils::HashString("SubnetIPAddressLimitReachedException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int INVALID_REQUEST_CONTENT_HASH = HashingUtils::HashString("InvalidRequestContentException");
static const int CODE_STORAGE_EXCEEDED_HASH = HashingUtils::HashString("CodeStorageExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == E_C2_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::E_C2_ACCESS_DENIED), false);
  }
  else if (hashCode == REQUEST_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::REQUEST_TOO_LARGE), false);
  }
  else if (hashCode == K_M_S_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::K_M_S_INVALID_STATE), false);
  }
  else if (hashCode == INVALID_SECURITY_GROUP_I_D_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::INVALID_SECURITY_GROUP_I_D), false);
  }
  else if (hashCode == INVALID_SUBNET_I_D_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::INVALID_SUBNET_I_D), false);
  }
  else if (hashCode == INVALID_RUNTIME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::INVALID_RUNTIME), false);
  }
  else if (hashCode == E_C2_UNEXPECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::E_C2_UNEXPECTED), false);
  }
  else if (hashCode == INVALID_ZIP_FILE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::INVALID_ZIP_FILE), false);
  }
  else if (hashCode == UNSUPPORTED_MEDIA_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::UNSUPPORTED_MEDIA_TYPE), false);
  }
  else if (hashCode == POLICY_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::POLICY_LENGTH_EXCEEDED), false);
  }
  else if (hashCode == K_M_S_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::K_M_S_NOT_FOUND), false);
  }
  else if (hashCode == K_M_S_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::K_M_S_DISABLED), false);
  }
  else if (hashCode == K_M_S_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::K_M_S_ACCESS_DENIED), false);
  }
  else if (hashCode == PRECONDITION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::PRECONDITION_FAILED), false);
  }
  else if (hashCode == E_C2_THROTTLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::E_C2_THROTTLED), false);
  }
  else if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == E_N_I_LIMIT_REACHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::E_N_I_LIMIT_REACHED), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::TOO_MANY_REQUESTS), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == SUBNET_I_P_ADDRESS_LIMIT_REACHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::SUBNET_I_P_ADDRESS_LIMIT_REACHED), false);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::SERVICE), false);
  }
  else if (hashCode == INVALID_REQUEST_CONTENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::INVALID_REQUEST_CONTENT), false);
  }
  else if (hashCode == CODE_STORAGE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::CODE_STORAGE_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LambdaErrorMapper
} // namespace Lambda
} // namespace Aws
