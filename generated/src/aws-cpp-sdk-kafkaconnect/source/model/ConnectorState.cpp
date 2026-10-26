/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafkaconnect/model/ConnectorState.h>

using namespace Aws::Utils;

namespace Aws {
namespace KafkaConnect {
namespace Model {
namespace ConnectorStateMapper {

static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
static const int RESTARTING_HASH = HashingUtils::HashString("RESTARTING");
static const int PAUSING_HASH = HashingUtils::HashString("PAUSING");
static const int RESUMING_HASH = HashingUtils::HashString("RESUMING");

ConnectorState GetConnectorStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RUNNING_HASH) {
    return ConnectorState::RUNNING;
  } else if (hashCode == CREATING_HASH) {
    return ConnectorState::CREATING;
  } else if (hashCode == UPDATING_HASH) {
    return ConnectorState::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return ConnectorState::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return ConnectorState::FAILED;
  } else if (hashCode == PAUSED_HASH) {
    return ConnectorState::PAUSED;
  } else if (hashCode == RESTARTING_HASH) {
    return ConnectorState::RESTARTING;
  } else if (hashCode == PAUSING_HASH) {
    return ConnectorState::PAUSING;
  } else if (hashCode == RESUMING_HASH) {
    return ConnectorState::RESUMING;
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
    case ConnectorState::RUNNING:
      return "RUNNING";
    case ConnectorState::CREATING:
      return "CREATING";
    case ConnectorState::UPDATING:
      return "UPDATING";
    case ConnectorState::DELETING:
      return "DELETING";
    case ConnectorState::FAILED:
      return "FAILED";
    case ConnectorState::PAUSED:
      return "PAUSED";
    case ConnectorState::RESTARTING:
      return "RESTARTING";
    case ConnectorState::PAUSING:
      return "PAUSING";
    case ConnectorState::RESUMING:
      return "RESUMING";
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
}  // namespace KafkaConnect
}  // namespace Aws
