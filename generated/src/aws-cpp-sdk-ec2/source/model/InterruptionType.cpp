/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/InterruptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace InterruptionTypeMapper {

static const int adhoc_HASH = HashingUtils::HashString("adhoc");

InterruptionType GetInterruptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == adhoc_HASH) {
    return InterruptionType::adhoc;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InterruptionType>(hashCode);
  }

  return InterruptionType::NOT_SET;
}

Aws::String GetNameForInterruptionType(InterruptionType enumValue) {
  switch (enumValue) {
    case InterruptionType::NOT_SET:
      return {};
    case InterruptionType::adhoc:
      return "adhoc";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InterruptionTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
