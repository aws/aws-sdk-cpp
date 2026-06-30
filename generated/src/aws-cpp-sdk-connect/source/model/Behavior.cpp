/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Behavior.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace BehaviorMapper {

static const int Enable_HASH = HashingUtils::HashString("Enable");
static const int Disable_HASH = HashingUtils::HashString("Disable");

Behavior GetBehaviorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Enable_HASH) {
    return Behavior::Enable;
  } else if (hashCode == Disable_HASH) {
    return Behavior::Disable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Behavior>(hashCode);
  }

  return Behavior::NOT_SET;
}

Aws::String GetNameForBehavior(Behavior enumValue) {
  switch (enumValue) {
    case Behavior::NOT_SET:
      return {};
    case Behavior::Enable:
      return "Enable";
    case Behavior::Disable:
      return "Disable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BehaviorMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
