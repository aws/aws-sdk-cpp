/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/EdgeType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace EdgeTypeMapper {

static const int CALLS_HASH = HashingUtils::HashString("CALLS");
static const int ACCESSES_HASH = HashingUtils::HashString("ACCESSES");
static const int RUNS_ON_HASH = HashingUtils::HashString("RUNS_ON");

EdgeType GetEdgeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CALLS_HASH) {
    return EdgeType::CALLS;
  } else if (hashCode == ACCESSES_HASH) {
    return EdgeType::ACCESSES;
  } else if (hashCode == RUNS_ON_HASH) {
    return EdgeType::RUNS_ON;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EdgeType>(hashCode);
  }

  return EdgeType::NOT_SET;
}

Aws::String GetNameForEdgeType(EdgeType enumValue) {
  switch (enumValue) {
    case EdgeType::NOT_SET:
      return {};
    case EdgeType::CALLS:
      return "CALLS";
    case EdgeType::ACCESSES:
      return "ACCESSES";
    case EdgeType::RUNS_ON:
      return "RUNS_ON";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EdgeTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
