/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodb/model/BulkOperationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace BulkOperationStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int COMPLETED_WITH_ERRORS_HASH = HashingUtils::HashString("COMPLETED_WITH_ERRORS");
static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

BulkOperationStatus GetBulkOperationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return BulkOperationStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return BulkOperationStatus::COMPLETED;
  } else if (hashCode == COMPLETED_WITH_ERRORS_HASH) {
    return BulkOperationStatus::COMPLETED_WITH_ERRORS;
  } else if (hashCode == CANCELLING_HASH) {
    return BulkOperationStatus::CANCELLING;
  } else if (hashCode == CANCELLED_HASH) {
    return BulkOperationStatus::CANCELLED;
  } else if (hashCode == FAILED_HASH) {
    return BulkOperationStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BulkOperationStatus>(hashCode);
  }

  return BulkOperationStatus::NOT_SET;
}

Aws::String GetNameForBulkOperationStatus(BulkOperationStatus enumValue) {
  switch (enumValue) {
    case BulkOperationStatus::NOT_SET:
      return {};
    case BulkOperationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case BulkOperationStatus::COMPLETED:
      return "COMPLETED";
    case BulkOperationStatus::COMPLETED_WITH_ERRORS:
      return "COMPLETED_WITH_ERRORS";
    case BulkOperationStatus::CANCELLING:
      return "CANCELLING";
    case BulkOperationStatus::CANCELLED:
      return "CANCELLED";
    case BulkOperationStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BulkOperationStatusMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
