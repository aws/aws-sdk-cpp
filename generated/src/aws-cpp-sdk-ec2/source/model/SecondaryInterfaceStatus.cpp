/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/SecondaryInterfaceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace SecondaryInterfaceStatusMapper {

static const int available_HASH = HashingUtils::HashString("available");
static const int in_use_HASH = HashingUtils::HashString("in-use");

SecondaryInterfaceStatus GetSecondaryInterfaceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == available_HASH) {
    return SecondaryInterfaceStatus::available;
  } else if (hashCode == in_use_HASH) {
    return SecondaryInterfaceStatus::in_use;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecondaryInterfaceStatus>(hashCode);
  }

  return SecondaryInterfaceStatus::NOT_SET;
}

Aws::String GetNameForSecondaryInterfaceStatus(SecondaryInterfaceStatus enumValue) {
  switch (enumValue) {
    case SecondaryInterfaceStatus::NOT_SET:
      return {};
    case SecondaryInterfaceStatus::available:
      return "available";
    case SecondaryInterfaceStatus::in_use:
      return "in-use";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecondaryInterfaceStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
