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
#include <aws/globalaccelerator/GlobalAcceleratorErrors.h>

using namespace Aws::Client;
using namespace Aws::GlobalAccelerator;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace GlobalAcceleratorErrorMapper
{

static const int LISTENER_NOT_FOUND_HASH = HashingUtils::HashString("ListenerNotFoundException");
static const int ASSOCIATED_LISTENER_FOUND_HASH = HashingUtils::HashString("AssociatedListenerFoundException");
static const int INVALID_PORT_RANGE_HASH = HashingUtils::HashString("InvalidPortRangeException");
static const int ENDPOINT_GROUP_NOT_FOUND_HASH = HashingUtils::HashString("EndpointGroupNotFoundException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int ACCELERATOR_NOT_FOUND_HASH = HashingUtils::HashString("AcceleratorNotFoundException");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("InternalServiceErrorException");
static const int ENDPOINT_GROUP_ALREADY_EXISTS_HASH = HashingUtils::HashString("EndpointGroupAlreadyExistsException");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgumentException");
static const int ASSOCIATED_ENDPOINT_GROUP_FOUND_HASH = HashingUtils::HashString("AssociatedEndpointGroupFoundException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int ACCELERATOR_NOT_DISABLED_HASH = HashingUtils::HashString("AcceleratorNotDisabledException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LISTENER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::LISTENER_NOT_FOUND), false);
  }
  else if (hashCode == ASSOCIATED_LISTENER_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ASSOCIATED_LISTENER_FOUND), false);
  }
  else if (hashCode == INVALID_PORT_RANGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::INVALID_PORT_RANGE), false);
  }
  else if (hashCode == ENDPOINT_GROUP_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ENDPOINT_GROUP_NOT_FOUND), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ACCELERATOR_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ACCELERATOR_NOT_FOUND), false);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::INTERNAL_SERVICE_ERROR), false);
  }
  else if (hashCode == ENDPOINT_GROUP_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ENDPOINT_GROUP_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::INVALID_ARGUMENT), false);
  }
  else if (hashCode == ASSOCIATED_ENDPOINT_GROUP_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ASSOCIATED_ENDPOINT_GROUP_FOUND), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == ACCELERATOR_NOT_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlobalAcceleratorErrors::ACCELERATOR_NOT_DISABLED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GlobalAcceleratorErrorMapper
} // namespace GlobalAccelerator
} // namespace Aws
