/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/ClientVpnDeviceTrustProviderType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace ClientVpnDeviceTrustProviderTypeMapper {

static const int crowdstrike_HASH = HashingUtils::HashString("crowdstrike");
static const int jamf_HASH = HashingUtils::HashString("jamf");
static const int jumpcloud_HASH = HashingUtils::HashString("jumpcloud");

ClientVpnDeviceTrustProviderType GetClientVpnDeviceTrustProviderTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == crowdstrike_HASH) {
    return ClientVpnDeviceTrustProviderType::crowdstrike;
  } else if (hashCode == jamf_HASH) {
    return ClientVpnDeviceTrustProviderType::jamf;
  } else if (hashCode == jumpcloud_HASH) {
    return ClientVpnDeviceTrustProviderType::jumpcloud;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClientVpnDeviceTrustProviderType>(hashCode);
  }

  return ClientVpnDeviceTrustProviderType::NOT_SET;
}

Aws::String GetNameForClientVpnDeviceTrustProviderType(ClientVpnDeviceTrustProviderType enumValue) {
  switch (enumValue) {
    case ClientVpnDeviceTrustProviderType::NOT_SET:
      return {};
    case ClientVpnDeviceTrustProviderType::crowdstrike:
      return "crowdstrike";
    case ClientVpnDeviceTrustProviderType::jamf:
      return "jamf";
    case ClientVpnDeviceTrustProviderType::jumpcloud:
      return "jumpcloud";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClientVpnDeviceTrustProviderTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
