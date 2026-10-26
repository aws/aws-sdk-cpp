/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafkaconnect/model/ConnectorOperationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace KafkaConnect {
namespace Model {
namespace ConnectorOperationStateMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
static const int UPDATE_COMPLETE_HASH = HashingUtils::HashString("UPDATE_COMPLETE");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int ROLLBACK_IN_PROGRESS_HASH = HashingUtils::HashString("ROLLBACK_IN_PROGRESS");
static const int ROLLBACK_FAILED_HASH = HashingUtils::HashString("ROLLBACK_FAILED");
static const int ROLLBACK_COMPLETE_HASH = HashingUtils::HashString("ROLLBACK_COMPLETE");
static const int PAUSE_COMPLETE_HASH = HashingUtils::HashString("PAUSE_COMPLETE");
static const int PAUSE_FAILED_HASH = HashingUtils::HashString("PAUSE_FAILED");
static const int RESUME_COMPLETE_HASH = HashingUtils::HashString("RESUME_COMPLETE");
static const int RESUME_FAILED_HASH = HashingUtils::HashString("RESUME_FAILED");
static const int PAUSE_IN_PROGRESS_HASH = HashingUtils::HashString("PAUSE_IN_PROGRESS");
static const int RESUME_IN_PROGRESS_HASH = HashingUtils::HashString("RESUME_IN_PROGRESS");
static const int RESTART_IN_PROGRESS_HASH = HashingUtils::HashString("RESTART_IN_PROGRESS");
static const int RESTART_COMPLETE_HASH = HashingUtils::HashString("RESTART_COMPLETE");
static const int RESTART_FAILED_HASH = HashingUtils::HashString("RESTART_FAILED");

ConnectorOperationState GetConnectorOperationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ConnectorOperationState::PENDING;
  } else if (hashCode == UPDATE_IN_PROGRESS_HASH) {
    return ConnectorOperationState::UPDATE_IN_PROGRESS;
  } else if (hashCode == UPDATE_COMPLETE_HASH) {
    return ConnectorOperationState::UPDATE_COMPLETE;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return ConnectorOperationState::UPDATE_FAILED;
  } else if (hashCode == ROLLBACK_IN_PROGRESS_HASH) {
    return ConnectorOperationState::ROLLBACK_IN_PROGRESS;
  } else if (hashCode == ROLLBACK_FAILED_HASH) {
    return ConnectorOperationState::ROLLBACK_FAILED;
  } else if (hashCode == ROLLBACK_COMPLETE_HASH) {
    return ConnectorOperationState::ROLLBACK_COMPLETE;
  } else if (hashCode == PAUSE_COMPLETE_HASH) {
    return ConnectorOperationState::PAUSE_COMPLETE;
  } else if (hashCode == PAUSE_FAILED_HASH) {
    return ConnectorOperationState::PAUSE_FAILED;
  } else if (hashCode == RESUME_COMPLETE_HASH) {
    return ConnectorOperationState::RESUME_COMPLETE;
  } else if (hashCode == RESUME_FAILED_HASH) {
    return ConnectorOperationState::RESUME_FAILED;
  } else if (hashCode == PAUSE_IN_PROGRESS_HASH) {
    return ConnectorOperationState::PAUSE_IN_PROGRESS;
  } else if (hashCode == RESUME_IN_PROGRESS_HASH) {
    return ConnectorOperationState::RESUME_IN_PROGRESS;
  } else if (hashCode == RESTART_IN_PROGRESS_HASH) {
    return ConnectorOperationState::RESTART_IN_PROGRESS;
  } else if (hashCode == RESTART_COMPLETE_HASH) {
    return ConnectorOperationState::RESTART_COMPLETE;
  } else if (hashCode == RESTART_FAILED_HASH) {
    return ConnectorOperationState::RESTART_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectorOperationState>(hashCode);
  }

  return ConnectorOperationState::NOT_SET;
}

Aws::String GetNameForConnectorOperationState(ConnectorOperationState enumValue) {
  switch (enumValue) {
    case ConnectorOperationState::NOT_SET:
      return {};
    case ConnectorOperationState::PENDING:
      return "PENDING";
    case ConnectorOperationState::UPDATE_IN_PROGRESS:
      return "UPDATE_IN_PROGRESS";
    case ConnectorOperationState::UPDATE_COMPLETE:
      return "UPDATE_COMPLETE";
    case ConnectorOperationState::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case ConnectorOperationState::ROLLBACK_IN_PROGRESS:
      return "ROLLBACK_IN_PROGRESS";
    case ConnectorOperationState::ROLLBACK_FAILED:
      return "ROLLBACK_FAILED";
    case ConnectorOperationState::ROLLBACK_COMPLETE:
      return "ROLLBACK_COMPLETE";
    case ConnectorOperationState::PAUSE_COMPLETE:
      return "PAUSE_COMPLETE";
    case ConnectorOperationState::PAUSE_FAILED:
      return "PAUSE_FAILED";
    case ConnectorOperationState::RESUME_COMPLETE:
      return "RESUME_COMPLETE";
    case ConnectorOperationState::RESUME_FAILED:
      return "RESUME_FAILED";
    case ConnectorOperationState::PAUSE_IN_PROGRESS:
      return "PAUSE_IN_PROGRESS";
    case ConnectorOperationState::RESUME_IN_PROGRESS:
      return "RESUME_IN_PROGRESS";
    case ConnectorOperationState::RESTART_IN_PROGRESS:
      return "RESTART_IN_PROGRESS";
    case ConnectorOperationState::RESTART_COMPLETE:
      return "RESTART_COMPLETE";
    case ConnectorOperationState::RESTART_FAILED:
      return "RESTART_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectorOperationStateMapper
}  // namespace Model
}  // namespace KafkaConnect
}  // namespace Aws
