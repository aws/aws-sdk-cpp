/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/NetworkConnectorLastUpdateStatusReasonCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace NetworkConnectorLastUpdateStatusReasonCodeMapper {

static const int DisallowedByVpcEncryptionControl_HASH = HashingUtils::HashString("DisallowedByVpcEncryptionControl");
static const int Ec2RequestLimitExceeded_HASH = HashingUtils::HashString("Ec2RequestLimitExceeded");
static const int InsufficientRolePermissions_HASH = HashingUtils::HashString("InsufficientRolePermissions");
static const int InternalError_HASH = HashingUtils::HashString("InternalError");
static const int InvalidSecurityGroup_HASH = HashingUtils::HashString("InvalidSecurityGroup");
static const int InvalidSubnet_HASH = HashingUtils::HashString("InvalidSubnet");
static const int SubnetOutOfIPAddresses_HASH = HashingUtils::HashString("SubnetOutOfIPAddresses");

NetworkConnectorLastUpdateStatusReasonCode GetNetworkConnectorLastUpdateStatusReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DisallowedByVpcEncryptionControl_HASH) {
    return NetworkConnectorLastUpdateStatusReasonCode::DisallowedByVpcEncryptionControl;
  } else if (hashCode == Ec2RequestLimitExceeded_HASH) {
    return NetworkConnectorLastUpdateStatusReasonCode::Ec2RequestLimitExceeded;
  } else if (hashCode == InsufficientRolePermissions_HASH) {
    return NetworkConnectorLastUpdateStatusReasonCode::InsufficientRolePermissions;
  } else if (hashCode == InternalError_HASH) {
    return NetworkConnectorLastUpdateStatusReasonCode::InternalError;
  } else if (hashCode == InvalidSecurityGroup_HASH) {
    return NetworkConnectorLastUpdateStatusReasonCode::InvalidSecurityGroup;
  } else if (hashCode == InvalidSubnet_HASH) {
    return NetworkConnectorLastUpdateStatusReasonCode::InvalidSubnet;
  } else if (hashCode == SubnetOutOfIPAddresses_HASH) {
    return NetworkConnectorLastUpdateStatusReasonCode::SubnetOutOfIPAddresses;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkConnectorLastUpdateStatusReasonCode>(hashCode);
  }

  return NetworkConnectorLastUpdateStatusReasonCode::NOT_SET;
}

Aws::String GetNameForNetworkConnectorLastUpdateStatusReasonCode(NetworkConnectorLastUpdateStatusReasonCode enumValue) {
  switch (enumValue) {
    case NetworkConnectorLastUpdateStatusReasonCode::NOT_SET:
      return {};
    case NetworkConnectorLastUpdateStatusReasonCode::DisallowedByVpcEncryptionControl:
      return "DisallowedByVpcEncryptionControl";
    case NetworkConnectorLastUpdateStatusReasonCode::Ec2RequestLimitExceeded:
      return "Ec2RequestLimitExceeded";
    case NetworkConnectorLastUpdateStatusReasonCode::InsufficientRolePermissions:
      return "InsufficientRolePermissions";
    case NetworkConnectorLastUpdateStatusReasonCode::InternalError:
      return "InternalError";
    case NetworkConnectorLastUpdateStatusReasonCode::InvalidSecurityGroup:
      return "InvalidSecurityGroup";
    case NetworkConnectorLastUpdateStatusReasonCode::InvalidSubnet:
      return "InvalidSubnet";
    case NetworkConnectorLastUpdateStatusReasonCode::SubnetOutOfIPAddresses:
      return "SubnetOutOfIPAddresses";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkConnectorLastUpdateStatusReasonCodeMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
