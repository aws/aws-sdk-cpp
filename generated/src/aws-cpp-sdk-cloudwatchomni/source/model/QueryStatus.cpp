/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/QueryStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace QueryStatusMapper {

static const int Running_HASH = HashingUtils::HashString("Running");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Complete_HASH = HashingUtils::HashString("Complete");
static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");

QueryStatus GetQueryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Running_HASH) {
    return QueryStatus::Running;
  } else if (hashCode == Failed_HASH) {
    return QueryStatus::Failed;
  } else if (hashCode == Complete_HASH) {
    return QueryStatus::Complete;
  } else if (hashCode == Cancelled_HASH) {
    return QueryStatus::Cancelled;
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
    case QueryStatus::Running:
      return "Running";
    case QueryStatus::Failed:
      return "Failed";
    case QueryStatus::Complete:
      return "Complete";
    case QueryStatus::Cancelled:
      return "Cancelled";
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
}  // namespace CloudWatchOmni
}  // namespace Aws
