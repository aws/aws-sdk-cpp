/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/SearchStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace SearchStatusMapper {

static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

SearchStatus GetSearchStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUEUED_HASH) {
    return SearchStatus::QUEUED;
  } else if (hashCode == RUNNING_HASH) {
    return SearchStatus::RUNNING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return SearchStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return SearchStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchStatus>(hashCode);
  }

  return SearchStatus::NOT_SET;
}

Aws::String GetNameForSearchStatus(SearchStatus enumValue) {
  switch (enumValue) {
    case SearchStatus::NOT_SET:
      return {};
    case SearchStatus::QUEUED:
      return "QUEUED";
    case SearchStatus::RUNNING:
      return "RUNNING";
    case SearchStatus::SUCCEEDED:
      return "SUCCEEDED";
    case SearchStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
