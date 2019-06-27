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
#include <aws/ec2-instance-connect/EC2InstanceConnectErrors.h>

using namespace Aws::Client;
using namespace Aws::EC2InstanceConnect;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2InstanceConnect
{
namespace EC2InstanceConnectErrorMapper
{

static const int INVALID_ARGS_HASH = HashingUtils::HashString("InvalidArgsException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int AUTH_HASH = HashingUtils::HashString("AuthException");
static const int E_C2_INSTANCE_NOT_FOUND_HASH = HashingUtils::HashString("EC2InstanceNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_ARGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EC2InstanceConnectErrors::INVALID_ARGS), false);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EC2InstanceConnectErrors::SERVICE), false);
  }
  else if (hashCode == AUTH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EC2InstanceConnectErrors::AUTH), false);
  }
  else if (hashCode == E_C2_INSTANCE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EC2InstanceConnectErrors::E_C2_INSTANCE_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EC2InstanceConnectErrorMapper
} // namespace EC2InstanceConnect
} // namespace Aws
