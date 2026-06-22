/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/NetworkConnectorState.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace NetworkConnectorStateMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

NetworkConnectorState GetNetworkConnectorStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return NetworkConnectorState::PENDING;
  } else if (hashCode == ACTIVE_HASH) {
    return NetworkConnectorState::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return NetworkConnectorState::INACTIVE;
  } else if (hashCode == FAILED_HASH) {
    return NetworkConnectorState::FAILED;
  } else if (hashCode == DELETING_HASH) {
    return NetworkConnectorState::DELETING;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return NetworkConnectorState::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkConnectorState>(hashCode);
  }

  return NetworkConnectorState::NOT_SET;
}

Aws::String GetNameForNetworkConnectorState(NetworkConnectorState enumValue) {
  switch (enumValue) {
    case NetworkConnectorState::NOT_SET:
      return {};
    case NetworkConnectorState::PENDING:
      return "PENDING";
    case NetworkConnectorState::ACTIVE:
      return "ACTIVE";
    case NetworkConnectorState::INACTIVE:
      return "INACTIVE";
    case NetworkConnectorState::FAILED:
      return "FAILED";
    case NetworkConnectorState::DELETING:
      return "DELETING";
    case NetworkConnectorState::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkConnectorStateMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
