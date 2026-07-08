/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/QueryStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {
namespace QueryStatusMapper {

static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

QueryStatus GetQueryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROCESSING_HASH) {
    return QueryStatus::PROCESSING;
  } else if (hashCode == COMPLETED_HASH) {
    return QueryStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return QueryStatus::FAILED;
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
    case QueryStatus::PROCESSING:
      return "PROCESSING";
    case QueryStatus::COMPLETED:
      return "COMPLETED";
    case QueryStatus::FAILED:
      return "FAILED";
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
}  // namespace Artifact
}  // namespace Aws
