/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/NetworkConnectorStateReasonCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace NetworkConnectorStateReasonCodeMapper {

static const int DisallowedByVpcEncryptionControl_HASH = HashingUtils::HashString("DisallowedByVpcEncryptionControl");
static const int Ec2RequestLimitExceeded_HASH = HashingUtils::HashString("Ec2RequestLimitExceeded");
static const int InsufficientRolePermissions_HASH = HashingUtils::HashString("InsufficientRolePermissions");
static const int InternalError_HASH = HashingUtils::HashString("InternalError");
static const int InvalidSecurityGroup_HASH = HashingUtils::HashString("InvalidSecurityGroup");
static const int InvalidSubnet_HASH = HashingUtils::HashString("InvalidSubnet");
static const int SubnetOutOfIPAddresses_HASH = HashingUtils::HashString("SubnetOutOfIPAddresses");

NetworkConnectorStateReasonCode GetNetworkConnectorStateReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DisallowedByVpcEncryptionControl_HASH) {
    return NetworkConnectorStateReasonCode::DisallowedByVpcEncryptionControl;
  } else if (hashCode == Ec2RequestLimitExceeded_HASH) {
    return NetworkConnectorStateReasonCode::Ec2RequestLimitExceeded;
  } else if (hashCode == InsufficientRolePermissions_HASH) {
    return NetworkConnectorStateReasonCode::InsufficientRolePermissions;
  } else if (hashCode == InternalError_HASH) {
    return NetworkConnectorStateReasonCode::InternalError;
  } else if (hashCode == InvalidSecurityGroup_HASH) {
    return NetworkConnectorStateReasonCode::InvalidSecurityGroup;
  } else if (hashCode == InvalidSubnet_HASH) {
    return NetworkConnectorStateReasonCode::InvalidSubnet;
  } else if (hashCode == SubnetOutOfIPAddresses_HASH) {
    return NetworkConnectorStateReasonCode::SubnetOutOfIPAddresses;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkConnectorStateReasonCode>(hashCode);
  }

  return NetworkConnectorStateReasonCode::NOT_SET;
}

Aws::String GetNameForNetworkConnectorStateReasonCode(NetworkConnectorStateReasonCode enumValue) {
  switch (enumValue) {
    case NetworkConnectorStateReasonCode::NOT_SET:
      return {};
    case NetworkConnectorStateReasonCode::DisallowedByVpcEncryptionControl:
      return "DisallowedByVpcEncryptionControl";
    case NetworkConnectorStateReasonCode::Ec2RequestLimitExceeded:
      return "Ec2RequestLimitExceeded";
    case NetworkConnectorStateReasonCode::InsufficientRolePermissions:
      return "InsufficientRolePermissions";
    case NetworkConnectorStateReasonCode::InternalError:
      return "InternalError";
    case NetworkConnectorStateReasonCode::InvalidSecurityGroup:
      return "InvalidSecurityGroup";
    case NetworkConnectorStateReasonCode::InvalidSubnet:
      return "InvalidSubnet";
    case NetworkConnectorStateReasonCode::SubnetOutOfIPAddresses:
      return "SubnetOutOfIPAddresses";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkConnectorStateReasonCodeMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
