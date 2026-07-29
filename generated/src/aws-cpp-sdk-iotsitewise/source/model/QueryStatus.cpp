/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/QueryStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace QueryStatusMapper {

static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
static const int CANCELING_HASH = HashingUtils::HashString("CANCELING");

QueryStatus GetQueryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUBMITTED_HASH) {
    return QueryStatus::SUBMITTED;
  } else if (hashCode == RUNNING_HASH) {
    return QueryStatus::RUNNING;
  } else if (hashCode == COMPLETED_HASH) {
    return QueryStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return QueryStatus::FAILED;
  } else if (hashCode == CANCELED_HASH) {
    return QueryStatus::CANCELED;
  } else if (hashCode == CANCELING_HASH) {
    return QueryStatus::CANCELING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QueryStatus>(hashCode);
  }

  return QueryStatus::NOT_SET;
}

Aws::String GetNameForQueryStatus(QueryStatus enumValue) {
  switch (enumValue) {
    case QueryStatus::NOT_SET:
      return {};
    case QueryStatus::SUBMITTED:
      return "SUBMITTED";
    case QueryStatus::RUNNING:
      return "RUNNING";
    case QueryStatus::COMPLETED:
      return "COMPLETED";
    case QueryStatus::FAILED:
      return "FAILED";
    case QueryStatus::CANCELED:
      return "CANCELED";
    case QueryStatus::CANCELING:
      return "CANCELING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QueryStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
