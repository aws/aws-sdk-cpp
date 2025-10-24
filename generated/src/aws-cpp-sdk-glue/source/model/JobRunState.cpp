﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/JobRunState.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace JobRunStateMapper {

static const int STARTING_HASH = HashingUtils::HashString("STARTING");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");
static const int WAITING_HASH = HashingUtils::HashString("WAITING");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");

JobRunState GetJobRunStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STARTING_HASH) {
    return JobRunState::STARTING;
  } else if (hashCode == RUNNING_HASH) {
    return JobRunState::RUNNING;
  } else if (hashCode == STOPPING_HASH) {
    return JobRunState::STOPPING;
  } else if (hashCode == STOPPED_HASH) {
    return JobRunState::STOPPED;
  } else if (hashCode == SUCCEEDED_HASH) {
    return JobRunState::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return JobRunState::FAILED;
  } else if (hashCode == TIMEOUT_HASH) {
    return JobRunState::TIMEOUT;
  } else if (hashCode == ERROR__HASH) {
    return JobRunState::ERROR_;
  } else if (hashCode == WAITING_HASH) {
    return JobRunState::WAITING;
  } else if (hashCode == EXPIRED_HASH) {
    return JobRunState::EXPIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobRunState>(hashCode);
  }

  return JobRunState::NOT_SET;
}

Aws::String GetNameForJobRunState(JobRunState enumValue) {
  switch (enumValue) {
    case JobRunState::NOT_SET:
      return {};
    case JobRunState::STARTING:
      return "STARTING";
    case JobRunState::RUNNING:
      return "RUNNING";
    case JobRunState::STOPPING:
      return "STOPPING";
    case JobRunState::STOPPED:
      return "STOPPED";
    case JobRunState::SUCCEEDED:
      return "SUCCEEDED";
    case JobRunState::FAILED:
      return "FAILED";
    case JobRunState::TIMEOUT:
      return "TIMEOUT";
    case JobRunState::ERROR_:
      return "ERROR";
    case JobRunState::WAITING:
      return "WAITING";
    case JobRunState::EXPIRED:
      return "EXPIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobRunStateMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
