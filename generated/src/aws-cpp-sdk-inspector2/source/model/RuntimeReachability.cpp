/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/RuntimeReachability.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace RuntimeReachabilityMapper {

static const int REACHABLE_HASH = HashingUtils::HashString("REACHABLE");
static const int NOT_REACHABLE_HASH = HashingUtils::HashString("NOT_REACHABLE");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

RuntimeReachability GetRuntimeReachabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REACHABLE_HASH) {
    return RuntimeReachability::REACHABLE;
  } else if (hashCode == NOT_REACHABLE_HASH) {
    return RuntimeReachability::NOT_REACHABLE;
  } else if (hashCode == UNKNOWN_HASH) {
    return RuntimeReachability::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuntimeReachability>(hashCode);
  }

  return RuntimeReachability::NOT_SET;
}

Aws::String GetNameForRuntimeReachability(RuntimeReachability enumValue) {
  switch (enumValue) {
    case RuntimeReachability::NOT_SET:
      return {};
    case RuntimeReachability::REACHABLE:
      return "REACHABLE";
    case RuntimeReachability::NOT_REACHABLE:
      return "NOT_REACHABLE";
    case RuntimeReachability::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuntimeReachabilityMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
