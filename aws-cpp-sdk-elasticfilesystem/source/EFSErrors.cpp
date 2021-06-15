/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticfilesystem/EFSErrors.h>
#include <aws/elasticfilesystem/model/SecurityGroupLimitExceeded.h>
#include <aws/elasticfilesystem/model/SecurityGroupNotFound.h>
#include <aws/elasticfilesystem/model/AccessPointAlreadyExists.h>
#include <aws/elasticfilesystem/model/NoFreeAddressesInSubnet.h>
#include <aws/elasticfilesystem/model/DependencyTimeout.h>
#include <aws/elasticfilesystem/model/ValidationException.h>
#include <aws/elasticfilesystem/model/InternalServerError.h>
#include <aws/elasticfilesystem/model/InsufficientThroughputCapacity.h>
#include <aws/elasticfilesystem/model/MountTargetNotFound.h>
#include <aws/elasticfilesystem/model/FileSystemNotFound.h>
#include <aws/elasticfilesystem/model/IncorrectFileSystemLifeCycleState.h>
#include <aws/elasticfilesystem/model/FileSystemLimitExceeded.h>
#include <aws/elasticfilesystem/model/UnsupportedAvailabilityZone.h>
#include <aws/elasticfilesystem/model/FileSystemAlreadyExists.h>
#include <aws/elasticfilesystem/model/PolicyNotFound.h>
#include <aws/elasticfilesystem/model/AccessPointNotFound.h>
#include <aws/elasticfilesystem/model/AccessPointLimitExceeded.h>
#include <aws/elasticfilesystem/model/IpAddressInUse.h>
#include <aws/elasticfilesystem/model/IncorrectMountTargetState.h>
#include <aws/elasticfilesystem/model/AvailabilityZonesMismatch.h>
#include <aws/elasticfilesystem/model/MountTargetConflict.h>
#include <aws/elasticfilesystem/model/InvalidPolicyException.h>
#include <aws/elasticfilesystem/model/ThroughputLimitExceeded.h>
#include <aws/elasticfilesystem/model/FileSystemInUse.h>
#include <aws/elasticfilesystem/model/NetworkInterfaceLimitExceeded.h>
#include <aws/elasticfilesystem/model/TooManyRequests.h>
#include <aws/elasticfilesystem/model/SubnetNotFound.h>
#include <aws/elasticfilesystem/model/BadRequest.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EFS;
using namespace Aws::EFS::Model;

namespace Aws
{
namespace EFS
{
template<> AWS_EFS_API SecurityGroupLimitExceeded EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::SECURITY_GROUP_LIMIT_EXCEEDED);
  return SecurityGroupLimitExceeded(this->GetJsonPayload().View());
}

template<> AWS_EFS_API SecurityGroupNotFound EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::SECURITY_GROUP_NOT_FOUND);
  return SecurityGroupNotFound(this->GetJsonPayload().View());
}

template<> AWS_EFS_API AccessPointAlreadyExists EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::ACCESS_POINT_ALREADY_EXISTS);
  return AccessPointAlreadyExists(this->GetJsonPayload().View());
}

template<> AWS_EFS_API NoFreeAddressesInSubnet EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::NO_FREE_ADDRESSES_IN_SUBNET);
  return NoFreeAddressesInSubnet(this->GetJsonPayload().View());
}

template<> AWS_EFS_API DependencyTimeout EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::DEPENDENCY_TIMEOUT);
  return DependencyTimeout(this->GetJsonPayload().View());
}

template<> AWS_EFS_API ValidationException EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_EFS_API InternalServerError EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::INTERNAL_FAILURE);
  return InternalServerError(this->GetJsonPayload().View());
}

template<> AWS_EFS_API InsufficientThroughputCapacity EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::INSUFFICIENT_THROUGHPUT_CAPACITY);
  return InsufficientThroughputCapacity(this->GetJsonPayload().View());
}

template<> AWS_EFS_API MountTargetNotFound EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::MOUNT_TARGET_NOT_FOUND);
  return MountTargetNotFound(this->GetJsonPayload().View());
}

template<> AWS_EFS_API FileSystemNotFound EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::FILE_SYSTEM_NOT_FOUND);
  return FileSystemNotFound(this->GetJsonPayload().View());
}

template<> AWS_EFS_API IncorrectFileSystemLifeCycleState EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::INCORRECT_FILE_SYSTEM_LIFE_CYCLE_STATE);
  return IncorrectFileSystemLifeCycleState(this->GetJsonPayload().View());
}

template<> AWS_EFS_API FileSystemLimitExceeded EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::FILE_SYSTEM_LIMIT_EXCEEDED);
  return FileSystemLimitExceeded(this->GetJsonPayload().View());
}

template<> AWS_EFS_API UnsupportedAvailabilityZone EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::UNSUPPORTED_AVAILABILITY_ZONE);
  return UnsupportedAvailabilityZone(this->GetJsonPayload().View());
}

template<> AWS_EFS_API FileSystemAlreadyExists EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::FILE_SYSTEM_ALREADY_EXISTS);
  return FileSystemAlreadyExists(this->GetJsonPayload().View());
}

template<> AWS_EFS_API PolicyNotFound EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::POLICY_NOT_FOUND);
  return PolicyNotFound(this->GetJsonPayload().View());
}

template<> AWS_EFS_API AccessPointNotFound EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::ACCESS_POINT_NOT_FOUND);
  return AccessPointNotFound(this->GetJsonPayload().View());
}

template<> AWS_EFS_API AccessPointLimitExceeded EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::ACCESS_POINT_LIMIT_EXCEEDED);
  return AccessPointLimitExceeded(this->GetJsonPayload().View());
}

template<> AWS_EFS_API IpAddressInUse EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::IP_ADDRESS_IN_USE);
  return IpAddressInUse(this->GetJsonPayload().View());
}

template<> AWS_EFS_API IncorrectMountTargetState EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::INCORRECT_MOUNT_TARGET_STATE);
  return IncorrectMountTargetState(this->GetJsonPayload().View());
}

template<> AWS_EFS_API AvailabilityZonesMismatch EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::AVAILABILITY_ZONES_MISMATCH);
  return AvailabilityZonesMismatch(this->GetJsonPayload().View());
}

template<> AWS_EFS_API MountTargetConflict EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::MOUNT_TARGET_CONFLICT);
  return MountTargetConflict(this->GetJsonPayload().View());
}

template<> AWS_EFS_API InvalidPolicyException EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::INVALID_POLICY);
  return InvalidPolicyException(this->GetJsonPayload().View());
}

template<> AWS_EFS_API ThroughputLimitExceeded EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::THROUGHPUT_LIMIT_EXCEEDED);
  return ThroughputLimitExceeded(this->GetJsonPayload().View());
}

template<> AWS_EFS_API FileSystemInUse EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::FILE_SYSTEM_IN_USE);
  return FileSystemInUse(this->GetJsonPayload().View());
}

template<> AWS_EFS_API NetworkInterfaceLimitExceeded EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::NETWORK_INTERFACE_LIMIT_EXCEEDED);
  return NetworkInterfaceLimitExceeded(this->GetJsonPayload().View());
}

template<> AWS_EFS_API TooManyRequests EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::TOO_MANY_REQUESTS);
  return TooManyRequests(this->GetJsonPayload().View());
}

template<> AWS_EFS_API SubnetNotFound EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::SUBNET_NOT_FOUND);
  return SubnetNotFound(this->GetJsonPayload().View());
}

template<> AWS_EFS_API BadRequest EFSError::GetModeledError()
{
  assert(this->GetErrorType() == EFSErrors::BAD_REQUEST);
  return BadRequest(this->GetJsonPayload().View());
}

namespace EFSErrorMapper
{

static const int SECURITY_GROUP_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SecurityGroupLimitExceeded");
static const int SECURITY_GROUP_NOT_FOUND_HASH = HashingUtils::HashString("SecurityGroupNotFound");
static const int ACCESS_POINT_ALREADY_EXISTS_HASH = HashingUtils::HashString("AccessPointAlreadyExists");
static const int NO_FREE_ADDRESSES_IN_SUBNET_HASH = HashingUtils::HashString("NoFreeAddressesInSubnet");
static const int DEPENDENCY_TIMEOUT_HASH = HashingUtils::HashString("DependencyTimeout");
static const int INSUFFICIENT_THROUGHPUT_CAPACITY_HASH = HashingUtils::HashString("InsufficientThroughputCapacity");
static const int MOUNT_TARGET_NOT_FOUND_HASH = HashingUtils::HashString("MountTargetNotFound");
static const int FILE_SYSTEM_NOT_FOUND_HASH = HashingUtils::HashString("FileSystemNotFound");
static const int INCORRECT_FILE_SYSTEM_LIFE_CYCLE_STATE_HASH = HashingUtils::HashString("IncorrectFileSystemLifeCycleState");
static const int FILE_SYSTEM_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FileSystemLimitExceeded");
static const int UNSUPPORTED_AVAILABILITY_ZONE_HASH = HashingUtils::HashString("UnsupportedAvailabilityZone");
static const int FILE_SYSTEM_ALREADY_EXISTS_HASH = HashingUtils::HashString("FileSystemAlreadyExists");
static const int POLICY_NOT_FOUND_HASH = HashingUtils::HashString("PolicyNotFound");
static const int ACCESS_POINT_NOT_FOUND_HASH = HashingUtils::HashString("AccessPointNotFound");
static const int ACCESS_POINT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AccessPointLimitExceeded");
static const int IP_ADDRESS_IN_USE_HASH = HashingUtils::HashString("IpAddressInUse");
static const int INCORRECT_MOUNT_TARGET_STATE_HASH = HashingUtils::HashString("IncorrectMountTargetState");
static const int AVAILABILITY_ZONES_MISMATCH_HASH = HashingUtils::HashString("AvailabilityZonesMismatch");
static const int MOUNT_TARGET_CONFLICT_HASH = HashingUtils::HashString("MountTargetConflict");
static const int INVALID_POLICY_HASH = HashingUtils::HashString("InvalidPolicyException");
static const int THROUGHPUT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ThroughputLimitExceeded");
static const int FILE_SYSTEM_IN_USE_HASH = HashingUtils::HashString("FileSystemInUse");
static const int NETWORK_INTERFACE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("NetworkInterfaceLimitExceeded");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequests");
static const int SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("SubnetNotFound");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequest");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SECURITY_GROUP_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::SECURITY_GROUP_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == SECURITY_GROUP_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::SECURITY_GROUP_NOT_FOUND), false);
  }
  else if (hashCode == ACCESS_POINT_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::ACCESS_POINT_ALREADY_EXISTS), false);
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
  else if (hashCode == POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::POLICY_NOT_FOUND), false);
  }
  else if (hashCode == ACCESS_POINT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::ACCESS_POINT_NOT_FOUND), false);
  }
  else if (hashCode == ACCESS_POINT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::ACCESS_POINT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == IP_ADDRESS_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::IP_ADDRESS_IN_USE), false);
  }
  else if (hashCode == INCORRECT_MOUNT_TARGET_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::INCORRECT_MOUNT_TARGET_STATE), false);
  }
  else if (hashCode == AVAILABILITY_ZONES_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::AVAILABILITY_ZONES_MISMATCH), false);
  }
  else if (hashCode == MOUNT_TARGET_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::MOUNT_TARGET_CONFLICT), false);
  }
  else if (hashCode == INVALID_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::INVALID_POLICY), false);
  }
  else if (hashCode == THROUGHPUT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::THROUGHPUT_LIMIT_EXCEEDED), false);
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
  else if (hashCode == SUBNET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EFSErrors::SUBNET_NOT_FOUND), false);
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
