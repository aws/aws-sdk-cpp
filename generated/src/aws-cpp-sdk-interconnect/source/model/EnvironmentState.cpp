/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/interconnect/model/EnvironmentState.h>

using namespace Aws::Utils;

namespace Aws {
namespace Interconnect {
namespace Model {
namespace EnvironmentStateMapper {

static const int available_HASH = HashingUtils::HashString("available");
static const int limited_HASH = HashingUtils::HashString("limited");
static const int unavailable_HASH = HashingUtils::HashString("unavailable");

EnvironmentState GetEnvironmentStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == available_HASH) {
    return EnvironmentState::available;
  } else if (hashCode == limited_HASH) {
    return EnvironmentState::limited;
  } else if (hashCode == unavailable_HASH) {
    return EnvironmentState::unavailable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EnvironmentState>(hashCode);
  }

  return EnvironmentState::NOT_SET;
}

Aws::String GetNameForEnvironmentState(EnvironmentState enumValue) {
  switch (enumValue) {
    case EnvironmentState::NOT_SET:
      return {};
    case EnvironmentState::available:
      return "available";
    case EnvironmentState::limited:
      return "limited";
    case EnvironmentState::unavailable:
      return "unavailable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EnvironmentStateMapper
}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
