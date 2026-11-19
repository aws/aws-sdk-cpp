/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/ConnectivityState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace ConnectivityStateMapper {

static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
static const int PROVISION_FAILED_HASH = HashingUtils::HashString("PROVISION_FAILED");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");

ConnectivityState GetConnectivityStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROVISIONING_HASH) {
    return ConnectivityState::PROVISIONING;
  } else if (hashCode == PROVISION_FAILED_HASH) {
    return ConnectivityState::PROVISION_FAILED;
  } else if (hashCode == ACTIVE_HASH) {
    return ConnectivityState::ACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectivityState>(hashCode);
  }

  return ConnectivityState::NOT_SET;
}

Aws::String GetNameForConnectivityState(ConnectivityState enumValue) {
  switch (enumValue) {
    case ConnectivityState::NOT_SET:
      return {};
    case ConnectivityState::PROVISIONING:
      return "PROVISIONING";
    case ConnectivityState::PROVISION_FAILED:
      return "PROVISION_FAILED";
    case ConnectivityState::ACTIVE:
      return "ACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectivityStateMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
