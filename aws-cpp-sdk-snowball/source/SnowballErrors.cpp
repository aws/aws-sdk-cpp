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
#include <aws/snowball/SnowballErrors.h>

using namespace Aws::Client;
using namespace Aws::Snowball;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace SnowballErrorMapper
{

static const int CLUSTER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ClusterLimitExceededException");
static const int INVALID_ADDRESS_HASH = HashingUtils::HashString("InvalidAddressException");
static const int INVALID_JOB_STATE_HASH = HashingUtils::HashString("InvalidJobStateException");
static const int K_M_S_REQUEST_FAILED_HASH = HashingUtils::HashString("KMSRequestFailedException");
static const int EC2_REQUEST_FAILED_HASH = HashingUtils::HashString("Ec2RequestFailedException");
static const int INVALID_INPUT_COMBINATION_HASH = HashingUtils::HashString("InvalidInputCombinationException");
static const int UNSUPPORTED_ADDRESS_HASH = HashingUtils::HashString("UnsupportedAddressException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_RESOURCE_HASH = HashingUtils::HashString("InvalidResourceException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLUSTER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::CLUSTER_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_ADDRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_ADDRESS), false);
  }
  else if (hashCode == INVALID_JOB_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_JOB_STATE), false);
  }
  else if (hashCode == K_M_S_REQUEST_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::K_M_S_REQUEST_FAILED), false);
  }
  else if (hashCode == EC2_REQUEST_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::EC2_REQUEST_FAILED), false);
  }
  else if (hashCode == INVALID_INPUT_COMBINATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_INPUT_COMBINATION), false);
  }
  else if (hashCode == UNSUPPORTED_ADDRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::UNSUPPORTED_ADDRESS), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_RESOURCE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SnowballErrorMapper
} // namespace Snowball
} // namespace Aws
