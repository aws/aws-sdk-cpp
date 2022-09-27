﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EC2InstanceConnect;

namespace Aws
{
namespace EC2InstanceConnect
{
namespace EC2InstanceConnectErrorMapper
{

static const int INVALID_ARGS_HASH = HashingUtils::HashString("InvalidArgsException");
static const int E_C2_INSTANCE_STATE_INVALID_HASH = HashingUtils::HashString("EC2InstanceStateInvalidException");
static const int SERIAL_CONSOLE_SESSION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SerialConsoleSessionLimitExceededException");
static const int SERIAL_CONSOLE_SESSION_UNAVAILABLE_HASH = HashingUtils::HashString("SerialConsoleSessionUnavailableException");
static const int SERIAL_CONSOLE_ACCESS_DISABLED_HASH = HashingUtils::HashString("SerialConsoleAccessDisabledException");
static const int E_C2_INSTANCE_UNAVAILABLE_HASH = HashingUtils::HashString("EC2InstanceUnavailableException");
static const int E_C2_INSTANCE_TYPE_INVALID_HASH = HashingUtils::HashString("EC2InstanceTypeInvalidException");
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
  else if (hashCode == E_C2_INSTANCE_STATE_INVALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EC2InstanceConnectErrors::E_C2_INSTANCE_STATE_INVALID), false);
  }
  else if (hashCode == SERIAL_CONSOLE_SESSION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EC2InstanceConnectErrors::SERIAL_CONSOLE_SESSION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == SERIAL_CONSOLE_SESSION_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EC2InstanceConnectErrors::SERIAL_CONSOLE_SESSION_UNAVAILABLE), false);
  }
  else if (hashCode == SERIAL_CONSOLE_ACCESS_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EC2InstanceConnectErrors::SERIAL_CONSOLE_ACCESS_DISABLED), false);
  }
  else if (hashCode == E_C2_INSTANCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EC2InstanceConnectErrors::E_C2_INSTANCE_UNAVAILABLE), false);
  }
  else if (hashCode == E_C2_INSTANCE_TYPE_INVALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EC2InstanceConnectErrors::E_C2_INSTANCE_TYPE_INVALID), false);
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
