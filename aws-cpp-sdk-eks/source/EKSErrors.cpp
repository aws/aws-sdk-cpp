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
#include <aws/eks/EKSErrors.h>

using namespace Aws::Client;
using namespace Aws::EKS;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace EKSErrorMapper
{

static const int CLIENT_HASH = HashingUtils::HashString("ClientException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int UNSUPPORTED_AVAILABILITY_ZONE_HASH = HashingUtils::HashString("UnsupportedAvailabilityZoneException");
static const int SERVER_HASH = HashingUtils::HashString("ServerException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::CLIENT), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::RESOURCE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == UNSUPPORTED_AVAILABILITY_ZONE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::UNSUPPORTED_AVAILABILITY_ZONE), false);
  }
  else if (hashCode == SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::SERVER), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EKSErrorMapper
} // namespace EKS
} // namespace Aws
