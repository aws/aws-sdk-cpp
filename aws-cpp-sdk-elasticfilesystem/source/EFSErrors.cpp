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
#include <aws/elasticfilesystem/EFSErrors.h>

using namespace Aws::Client;
using namespace Aws::EFS;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace EFSErrorMapper
{

static const int SECURITY_GROUP_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SecurityGroupLimitExceeded");
static const int THROUGHPUT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ThroughputLimitExceeded");
static const int SECURITY_GROUP_NOT_FOUND_HASH = HashingUtils::HashString("SecurityGroupNotFound");
static const int NO_FREE_ADDRESSES_IN_SUBNET_HASH = HashingUtils::HashString("NoFreeAddressesInSubnet");
static const int DEPENDENCY_TIMEOUT_HASH = HashingUtils::HashString("DependencyTimeout");
static const int INSUFFICIENT_THROUGHPUT_CAPACITY_HASH = HashingUtils::HashString("InsufficientThroughputCapacity");
static const int MOUNT_TARGET_NOT_FOUND_HASH = HashingUtils::HashString("MountTargetNotFound");
static const int FILE_SYSTEM_NOT_FOUND_HASH = HashingUtils::HashString("FileSystemNotFound");
static const int INCORRECT_FILE_SYSTEM_LIFE_CYCLE_STATE_HASH = HashingUtils::HashString("IncorrectFileSystemLifeCycleState");
static const int FILE_SYSTEM_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FileSystemLimitExceeded");
static const int UNSUPPORTED_AVAILABILITY_ZONE_HASH = HashingUtils::HashString("UnsupportedAvailabilityZone");
static const int FILE_SYSTEM_ALREADY_EXISTS_HASH = HashingUtils::HashString("FileSystemAlreadyExists");
static const int FILE_SYSTEM_IN_USE_HASH = HashingUtils::HashString("FileSystemInUse");
static const int NETWORK_INTERFACE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("NetworkInterfaceLimitExceeded");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequests");
static const int IP_ADDRESS_IN_USE_HASH = HashingUtils::HashString("IpAddressInUse");
static const int INCORRECT_MOUNT_TARGET_STATE_HASH = HashingUtils::HashString("IncorrectMountTargetState");
static const int SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("SubnetNotFound");
static const int MOUNT_TARGET_CONFLICT_HASH = HashingUtils::HashString("MountTargetConflict");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequest");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SECURITY_GROUP_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::SECURITY_GROUP_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == THROUGHPUT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::THROUGHPUT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == SECURITY_GROUP_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::SECURITY_GROUP_NOT_FOUND), false);
  }
  else if (hashCode == NO_FREE_ADDRESSES_IN_SUBNET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::NO_FREE_ADDRESSES_IN_SUBNET), false);
  }
  else if (hashCode == DEPENDENCY_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::DEPENDENCY_TIMEOUT), false);
  }
  else if (hashCode == INSUFFICIENT_THROUGHPUT_CAPACITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::INSUFFICIENT_THROUGHPUT_CAPACITY), false);
  }
  else if (hashCode == MOUNT_TARGET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::MOUNT_TARGET_NOT_FOUND), false);
  }
  else if (hashCode == FILE_SYSTEM_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::FILE_SYSTEM_NOT_FOUND), false);
  }
  else if (hashCode == INCORRECT_FILE_SYSTEM_LIFE_CYCLE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::INCORRECT_FILE_SYSTEM_LIFE_CYCLE_STATE), false);
  }
  else if (hashCode == FILE_SYSTEM_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::FILE_SYSTEM_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == UNSUPPORTED_AVAILABILITY_ZONE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::UNSUPPORTED_AVAILABILITY_ZONE), false);
  }
  else if (hashCode == FILE_SYSTEM_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::FILE_SYSTEM_ALREADY_EXISTS), false);
  }
  else if (hashCode == FILE_SYSTEM_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::FILE_SYSTEM_IN_USE), false);
  }
  else if (hashCode == NETWORK_INTERFACE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::NETWORK_INTERFACE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::TOO_MANY_REQUESTS), false);
  }
  else if (hashCode == IP_ADDRESS_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::IP_ADDRESS_IN_USE), false);
  }
  else if (hashCode == INCORRECT_MOUNT_TARGET_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::INCORRECT_MOUNT_TARGET_STATE), false);
  }
  else if (hashCode == SUBNET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::SUBNET_NOT_FOUND), false);
  }
  else if (hashCode == MOUNT_TARGET_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::MOUNT_TARGET_CONFLICT), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EFSErrorMapper
} // namespace EFS
} // namespace Aws
