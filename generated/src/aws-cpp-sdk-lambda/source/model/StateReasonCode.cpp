/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/StateReasonCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace StateReasonCodeMapper {

static const int Idle_HASH = HashingUtils::HashString("Idle");
static const int Creating_HASH = HashingUtils::HashString("Creating");
static const int Restoring_HASH = HashingUtils::HashString("Restoring");
static const int EniLimitExceeded_HASH = HashingUtils::HashString("EniLimitExceeded");
static const int InsufficientRolePermissions_HASH = HashingUtils::HashString("InsufficientRolePermissions");
static const int InvalidConfiguration_HASH = HashingUtils::HashString("InvalidConfiguration");
static const int InternalError_HASH = HashingUtils::HashString("InternalError");
static const int SubnetOutOfIPAddresses_HASH = HashingUtils::HashString("SubnetOutOfIPAddresses");
static const int InvalidSubnet_HASH = HashingUtils::HashString("InvalidSubnet");
static const int InvalidSecurityGroup_HASH = HashingUtils::HashString("InvalidSecurityGroup");
static const int ImageDeleted_HASH = HashingUtils::HashString("ImageDeleted");
static const int ImageAccessDenied_HASH = HashingUtils::HashString("ImageAccessDenied");
static const int InvalidImage_HASH = HashingUtils::HashString("InvalidImage");
static const int KMSKeyAccessDenied_HASH = HashingUtils::HashString("KMSKeyAccessDenied");
static const int KMSKeyNotFound_HASH = HashingUtils::HashString("KMSKeyNotFound");
static const int InvalidStateKMSKey_HASH = HashingUtils::HashString("InvalidStateKMSKey");
static const int DisabledKMSKey_HASH = HashingUtils::HashString("DisabledKMSKey");
static const int EFSIOError_HASH = HashingUtils::HashString("EFSIOError");
static const int EFSMountConnectivityError_HASH = HashingUtils::HashString("EFSMountConnectivityError");
static const int EFSMountFailure_HASH = HashingUtils::HashString("EFSMountFailure");
static const int EFSMountTimeout_HASH = HashingUtils::HashString("EFSMountTimeout");
static const int InvalidRuntime_HASH = HashingUtils::HashString("InvalidRuntime");
static const int InvalidZipFileException_HASH = HashingUtils::HashString("InvalidZipFileException");
static const int FunctionError_HASH = HashingUtils::HashString("FunctionError");
static const int VcpuLimitExceeded_HASH = HashingUtils::HashString("VcpuLimitExceeded");
static const int CapacityProviderScalingLimitExceeded_HASH = HashingUtils::HashString("CapacityProviderScalingLimitExceeded");
static const int InsufficientCapacity_HASH = HashingUtils::HashString("InsufficientCapacity");
static const int EC2RequestLimitExceeded_HASH = HashingUtils::HashString("EC2RequestLimitExceeded");
static const int FunctionError_InitTimeout_HASH = HashingUtils::HashString("FunctionError.InitTimeout");
static const int FunctionError_RuntimeInitError_HASH = HashingUtils::HashString("FunctionError.RuntimeInitError");
static const int FunctionError_ExtensionInitError_HASH = HashingUtils::HashString("FunctionError.ExtensionInitError");
static const int FunctionError_InvalidEntryPoint_HASH = HashingUtils::HashString("FunctionError.InvalidEntryPoint");
static const int FunctionError_InvalidWorkingDirectory_HASH = HashingUtils::HashString("FunctionError.InvalidWorkingDirectory");
static const int FunctionError_PermissionDenied_HASH = HashingUtils::HashString("FunctionError.PermissionDenied");
static const int FunctionError_TooManyExtensions_HASH = HashingUtils::HashString("FunctionError.TooManyExtensions");
static const int FunctionError_InitResourceExhausted_HASH = HashingUtils::HashString("FunctionError.InitResourceExhausted");

StateReasonCode GetStateReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Idle_HASH) {
    return StateReasonCode::Idle;
  } else if (hashCode == Creating_HASH) {
    return StateReasonCode::Creating;
  } else if (hashCode == Restoring_HASH) {
    return StateReasonCode::Restoring;
  } else if (hashCode == EniLimitExceeded_HASH) {
    return StateReasonCode::EniLimitExceeded;
  } else if (hashCode == InsufficientRolePermissions_HASH) {
    return StateReasonCode::InsufficientRolePermissions;
  } else if (hashCode == InvalidConfiguration_HASH) {
    return StateReasonCode::InvalidConfiguration;
  } else if (hashCode == InternalError_HASH) {
    return StateReasonCode::InternalError;
  } else if (hashCode == SubnetOutOfIPAddresses_HASH) {
    return StateReasonCode::SubnetOutOfIPAddresses;
  } else if (hashCode == InvalidSubnet_HASH) {
    return StateReasonCode::InvalidSubnet;
  } else if (hashCode == InvalidSecurityGroup_HASH) {
    return StateReasonCode::InvalidSecurityGroup;
  } else if (hashCode == ImageDeleted_HASH) {
    return StateReasonCode::ImageDeleted;
  } else if (hashCode == ImageAccessDenied_HASH) {
    return StateReasonCode::ImageAccessDenied;
  } else if (hashCode == InvalidImage_HASH) {
    return StateReasonCode::InvalidImage;
  } else if (hashCode == KMSKeyAccessDenied_HASH) {
    return StateReasonCode::KMSKeyAccessDenied;
  } else if (hashCode == KMSKeyNotFound_HASH) {
    return StateReasonCode::KMSKeyNotFound;
  } else if (hashCode == InvalidStateKMSKey_HASH) {
    return StateReasonCode::InvalidStateKMSKey;
  } else if (hashCode == DisabledKMSKey_HASH) {
    return StateReasonCode::DisabledKMSKey;
  } else if (hashCode == EFSIOError_HASH) {
    return StateReasonCode::EFSIOError;
  } else if (hashCode == EFSMountConnectivityError_HASH) {
    return StateReasonCode::EFSMountConnectivityError;
  } else if (hashCode == EFSMountFailure_HASH) {
    return StateReasonCode::EFSMountFailure;
  } else if (hashCode == EFSMountTimeout_HASH) {
    return StateReasonCode::EFSMountTimeout;
  } else if (hashCode == InvalidRuntime_HASH) {
    return StateReasonCode::InvalidRuntime;
  } else if (hashCode == InvalidZipFileException_HASH) {
    return StateReasonCode::InvalidZipFileException;
  } else if (hashCode == FunctionError_HASH) {
    return StateReasonCode::FunctionError;
  } else if (hashCode == VcpuLimitExceeded_HASH) {
    return StateReasonCode::VcpuLimitExceeded;
  } else if (hashCode == CapacityProviderScalingLimitExceeded_HASH) {
    return StateReasonCode::CapacityProviderScalingLimitExceeded;
  } else if (hashCode == InsufficientCapacity_HASH) {
    return StateReasonCode::InsufficientCapacity;
  } else if (hashCode == EC2RequestLimitExceeded_HASH) {
    return StateReasonCode::EC2RequestLimitExceeded;
  } else if (hashCode == FunctionError_InitTimeout_HASH) {
    return StateReasonCode::FunctionError_InitTimeout;
  } else if (hashCode == FunctionError_RuntimeInitError_HASH) {
    return StateReasonCode::FunctionError_RuntimeInitError;
  } else if (hashCode == FunctionError_ExtensionInitError_HASH) {
    return StateReasonCode::FunctionError_ExtensionInitError;
  } else if (hashCode == FunctionError_InvalidEntryPoint_HASH) {
    return StateReasonCode::FunctionError_InvalidEntryPoint;
  } else if (hashCode == FunctionError_InvalidWorkingDirectory_HASH) {
    return StateReasonCode::FunctionError_InvalidWorkingDirectory;
  } else if (hashCode == FunctionError_PermissionDenied_HASH) {
    return StateReasonCode::FunctionError_PermissionDenied;
  } else if (hashCode == FunctionError_TooManyExtensions_HASH) {
    return StateReasonCode::FunctionError_TooManyExtensions;
  } else if (hashCode == FunctionError_InitResourceExhausted_HASH) {
    return StateReasonCode::FunctionError_InitResourceExhausted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StateReasonCode>(hashCode);
  }

  return StateReasonCode::NOT_SET;
}

Aws::String GetNameForStateReasonCode(StateReasonCode enumValue) {
  switch (enumValue) {
    case StateReasonCode::NOT_SET:
      return {};
    case StateReasonCode::Idle:
      return "Idle";
    case StateReasonCode::Creating:
      return "Creating";
    case StateReasonCode::Restoring:
      return "Restoring";
    case StateReasonCode::EniLimitExceeded:
      return "EniLimitExceeded";
    case StateReasonCode::InsufficientRolePermissions:
      return "InsufficientRolePermissions";
    case StateReasonCode::InvalidConfiguration:
      return "InvalidConfiguration";
    case StateReasonCode::InternalError:
      return "InternalError";
    case StateReasonCode::SubnetOutOfIPAddresses:
      return "SubnetOutOfIPAddresses";
    case StateReasonCode::InvalidSubnet:
      return "InvalidSubnet";
    case StateReasonCode::InvalidSecurityGroup:
      return "InvalidSecurityGroup";
    case StateReasonCode::ImageDeleted:
      return "ImageDeleted";
    case StateReasonCode::ImageAccessDenied:
      return "ImageAccessDenied";
    case StateReasonCode::InvalidImage:
      return "InvalidImage";
    case StateReasonCode::KMSKeyAccessDenied:
      return "KMSKeyAccessDenied";
    case StateReasonCode::KMSKeyNotFound:
      return "KMSKeyNotFound";
    case StateReasonCode::InvalidStateKMSKey:
      return "InvalidStateKMSKey";
    case StateReasonCode::DisabledKMSKey:
      return "DisabledKMSKey";
    case StateReasonCode::EFSIOError:
      return "EFSIOError";
    case StateReasonCode::EFSMountConnectivityError:
      return "EFSMountConnectivityError";
    case StateReasonCode::EFSMountFailure:
      return "EFSMountFailure";
    case StateReasonCode::EFSMountTimeout:
      return "EFSMountTimeout";
    case StateReasonCode::InvalidRuntime:
      return "InvalidRuntime";
    case StateReasonCode::InvalidZipFileException:
      return "InvalidZipFileException";
    case StateReasonCode::FunctionError:
      return "FunctionError";
    case StateReasonCode::VcpuLimitExceeded:
      return "VcpuLimitExceeded";
    case StateReasonCode::CapacityProviderScalingLimitExceeded:
      return "CapacityProviderScalingLimitExceeded";
    case StateReasonCode::InsufficientCapacity:
      return "InsufficientCapacity";
    case StateReasonCode::EC2RequestLimitExceeded:
      return "EC2RequestLimitExceeded";
    case StateReasonCode::FunctionError_InitTimeout:
      return "FunctionError.InitTimeout";
    case StateReasonCode::FunctionError_RuntimeInitError:
      return "FunctionError.RuntimeInitError";
    case StateReasonCode::FunctionError_ExtensionInitError:
      return "FunctionError.ExtensionInitError";
    case StateReasonCode::FunctionError_InvalidEntryPoint:
      return "FunctionError.InvalidEntryPoint";
    case StateReasonCode::FunctionError_InvalidWorkingDirectory:
      return "FunctionError.InvalidWorkingDirectory";
    case StateReasonCode::FunctionError_PermissionDenied:
      return "FunctionError.PermissionDenied";
    case StateReasonCode::FunctionError_TooManyExtensions:
      return "FunctionError.TooManyExtensions";
    case StateReasonCode::FunctionError_InitResourceExhausted:
      return "FunctionError.InitResourceExhausted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StateReasonCodeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
