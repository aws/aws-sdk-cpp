/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/RuntimeReachabilityComparison.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace RuntimeReachabilityComparisonMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");

RuntimeReachabilityComparison GetRuntimeReachabilityComparisonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return RuntimeReachabilityComparison::EQUALS;
  } else if (hashCode == NOT_EQUALS_HASH) {
    return RuntimeReachabilityComparison::NOT_EQUALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuntimeReachabilityComparison>(hashCode);
  }

  return RuntimeReachabilityComparison::NOT_SET;
}

Aws::String GetNameForRuntimeReachabilityComparison(RuntimeReachabilityComparison enumValue) {
  switch (enumValue) {
    case RuntimeReachabilityComparison::NOT_SET:
      return {};
    case RuntimeReachabilityComparison::EQUALS:
      return "EQUALS";
    case RuntimeReachabilityComparison::NOT_EQUALS:
      return "NOT_EQUALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuntimeReachabilityComparisonMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
