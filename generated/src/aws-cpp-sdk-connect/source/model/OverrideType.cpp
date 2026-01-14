/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OverrideType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace OverrideTypeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int OPEN_HASH = HashingUtils::HashString("OPEN");
static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");

OverrideType GetOverrideTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return OverrideType::STANDARD;
  } else if (hashCode == OPEN_HASH) {
    return OverrideType::OPEN;
  } else if (hashCode == CLOSED_HASH) {
    return OverrideType::CLOSED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OverrideType>(hashCode);
  }

  return OverrideType::NOT_SET;
}

Aws::String GetNameForOverrideType(OverrideType enumValue) {
  switch (enumValue) {
    case OverrideType::NOT_SET:
      return {};
    case OverrideType::STANDARD:
      return "STANDARD";
    case OverrideType::OPEN:
      return "OPEN";
    case OverrideType::CLOSED:
      return "CLOSED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OverrideTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
