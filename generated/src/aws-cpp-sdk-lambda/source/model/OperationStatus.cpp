/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/OperationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace OperationStatusMapper {

static const int STARTED_HASH = HashingUtils::HashString("STARTED");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int READY_HASH = HashingUtils::HashString("READY");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

OperationStatus GetOperationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STARTED_HASH) {
    return OperationStatus::STARTED;
  } else if (hashCode == PENDING_HASH) {
    return OperationStatus::PENDING;
  } else if (hashCode == READY_HASH) {
    return OperationStatus::READY;
  } else if (hashCode == SUCCEEDED_HASH) {
    return OperationStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return OperationStatus::FAILED;
  } else if (hashCode == CANCELLED_HASH) {
    return OperationStatus::CANCELLED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return OperationStatus::TIMED_OUT;
  } else if (hashCode == STOPPED_HASH) {
    return OperationStatus::STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OperationStatus>(hashCode);
  }

  return OperationStatus::NOT_SET;
}

Aws::String GetNameForOperationStatus(OperationStatus enumValue) {
  switch (enumValue) {
    case OperationStatus::NOT_SET:
      return {};
    case OperationStatus::STARTED:
      return "STARTED";
    case OperationStatus::PENDING:
      return "PENDING";
    case OperationStatus::READY:
      return "READY";
    case OperationStatus::SUCCEEDED:
      return "SUCCEEDED";
    case OperationStatus::FAILED:
      return "FAILED";
    case OperationStatus::CANCELLED:
      return "CANCELLED";
    case OperationStatus::TIMED_OUT:
      return "TIMED_OUT";
    case OperationStatus::STOPPED:
      return "STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OperationStatusMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
