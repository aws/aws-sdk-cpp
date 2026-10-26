/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalAccessLevel.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace SignalAccessLevelMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int ANY_AUTHENTICATED_HASH = HashingUtils::HashString("ANY_AUTHENTICATED");
static const int PRIVILEGED_HASH = HashingUtils::HashString("PRIVILEGED");

SignalAccessLevel GetSignalAccessLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return SignalAccessLevel::NONE;
  } else if (hashCode == ANY_AUTHENTICATED_HASH) {
    return SignalAccessLevel::ANY_AUTHENTICATED;
  } else if (hashCode == PRIVILEGED_HASH) {
    return SignalAccessLevel::PRIVILEGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SignalAccessLevel>(hashCode);
  }

  return SignalAccessLevel::NOT_SET;
}

Aws::String GetNameForSignalAccessLevel(SignalAccessLevel enumValue) {
  switch (enumValue) {
    case SignalAccessLevel::NOT_SET:
      return {};
    case SignalAccessLevel::NONE:
      return "NONE";
    case SignalAccessLevel::ANY_AUTHENTICATED:
      return "ANY_AUTHENTICATED";
    case SignalAccessLevel::PRIVILEGED:
      return "PRIVILEGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignalAccessLevelMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
