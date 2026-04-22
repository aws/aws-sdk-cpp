/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/emr-serverless/model/SessionState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EMRServerless {
namespace Model {
namespace SessionStateMapper {

static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
static const int STARTING_HASH = HashingUtils::HashString("STARTING");
static const int STARTED_HASH = HashingUtils::HashString("STARTED");
static const int IDLE_HASH = HashingUtils::HashString("IDLE");
static const int BUSY_HASH = HashingUtils::HashString("BUSY");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");

SessionState GetSessionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUBMITTED_HASH) {
    return SessionState::SUBMITTED;
  } else if (hashCode == STARTING_HASH) {
    return SessionState::STARTING;
  } else if (hashCode == STARTED_HASH) {
    return SessionState::STARTED;
  } else if (hashCode == IDLE_HASH) {
    return SessionState::IDLE;
  } else if (hashCode == BUSY_HASH) {
    return SessionState::BUSY;
  } else if (hashCode == FAILED_HASH) {
    return SessionState::FAILED;
  } else if (hashCode == TERMINATING_HASH) {
    return SessionState::TERMINATING;
  } else if (hashCode == TERMINATED_HASH) {
    return SessionState::TERMINATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SessionState>(hashCode);
  }

  return SessionState::NOT_SET;
}

Aws::String GetNameForSessionState(SessionState enumValue) {
  switch (enumValue) {
    case SessionState::NOT_SET:
      return {};
    case SessionState::SUBMITTED:
      return "SUBMITTED";
    case SessionState::STARTING:
      return "STARTING";
    case SessionState::STARTED:
      return "STARTED";
    case SessionState::IDLE:
      return "IDLE";
    case SessionState::BUSY:
      return "BUSY";
    case SessionState::FAILED:
      return "FAILED";
    case SessionState::TERMINATING:
      return "TERMINATING";
    case SessionState::TERMINATED:
      return "TERMINATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SessionStateMapper
}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
