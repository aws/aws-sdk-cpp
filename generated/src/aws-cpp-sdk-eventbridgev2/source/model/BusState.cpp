/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/BusState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace BusStateMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

BusState GetBusStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return BusState::CREATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return BusState::CREATE_FAILED;
  } else if (hashCode == UPDATING_HASH) {
    return BusState::UPDATING;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return BusState::UPDATE_FAILED;
  } else if (hashCode == DELETING_HASH) {
    return BusState::DELETING;
  } else if (hashCode == ACTIVE_HASH) {
    return BusState::ACTIVE;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return BusState::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BusState>(hashCode);
  }

  return BusState::NOT_SET;
}

Aws::String GetNameForBusState(BusState enumValue) {
  switch (enumValue) {
    case BusState::NOT_SET:
      return {};
    case BusState::CREATING:
      return "CREATING";
    case BusState::CREATE_FAILED:
      return "CREATE_FAILED";
    case BusState::UPDATING:
      return "UPDATING";
    case BusState::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case BusState::DELETING:
      return "DELETING";
    case BusState::ACTIVE:
      return "ACTIVE";
    case BusState::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BusStateMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
