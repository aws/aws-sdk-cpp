/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/ChronologicalOrder.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace ChronologicalOrderMapper {

static const int forward_HASH = HashingUtils::HashString("forward");
static const int reverse_HASH = HashingUtils::HashString("reverse");

ChronologicalOrder GetChronologicalOrderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == forward_HASH) {
    return ChronologicalOrder::forward;
  } else if (hashCode == reverse_HASH) {
    return ChronologicalOrder::reverse;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChronologicalOrder>(hashCode);
  }

  return ChronologicalOrder::NOT_SET;
}

Aws::String GetNameForChronologicalOrder(ChronologicalOrder enumValue) {
  switch (enumValue) {
    case ChronologicalOrder::NOT_SET:
      return {};
    case ChronologicalOrder::forward:
      return "forward";
    case ChronologicalOrder::reverse:
      return "reverse";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChronologicalOrderMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
