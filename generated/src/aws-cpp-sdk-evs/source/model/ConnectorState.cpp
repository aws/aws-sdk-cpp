/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/evs/model/ConnectorState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EVS {
namespace Model {
namespace ConnectorStateMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

ConnectorState GetConnectorStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return ConnectorState::CREATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return ConnectorState::CREATE_FAILED;
  } else if (hashCode == ACTIVE_HASH) {
    return ConnectorState::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return ConnectorState::UPDATING;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return ConnectorState::UPDATE_FAILED;
  } else if (hashCode == DELETING_HASH) {
    return ConnectorState::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return ConnectorState::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectorState>(hashCode);
  }

  return ConnectorState::NOT_SET;
}

Aws::String GetNameForConnectorState(ConnectorState enumValue) {
  switch (enumValue) {
    case ConnectorState::NOT_SET:
      return {};
    case ConnectorState::CREATING:
      return "CREATING";
    case ConnectorState::CREATE_FAILED:
      return "CREATE_FAILED";
    case ConnectorState::ACTIVE:
      return "ACTIVE";
    case ConnectorState::UPDATING:
      return "UPDATING";
    case ConnectorState::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case ConnectorState::DELETING:
      return "DELETING";
    case ConnectorState::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectorStateMapper
}  // namespace Model
}  // namespace EVS
}  // namespace Aws
