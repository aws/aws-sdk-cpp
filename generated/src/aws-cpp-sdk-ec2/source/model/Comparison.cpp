/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/Comparison.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace ComparisonMapper {

static const int equals_HASH = HashingUtils::HashString("equals");
static const int in_HASH = HashingUtils::HashString("in");

Comparison GetComparisonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == equals_HASH) {
    return Comparison::equals;
  } else if (hashCode == in_HASH) {
    return Comparison::in;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Comparison>(hashCode);
  }

  return Comparison::NOT_SET;
}

Aws::String GetNameForComparison(Comparison enumValue) {
  switch (enumValue) {
    case Comparison::NOT_SET:
      return {};
    case Comparison::equals:
      return "equals";
    case Comparison::in:
      return "in";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ComparisonMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
