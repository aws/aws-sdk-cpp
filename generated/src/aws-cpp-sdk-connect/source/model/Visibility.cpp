/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Visibility.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace VisibilityMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int ASSIGNED_HASH = HashingUtils::HashString("ASSIGNED");
static const int NONE_HASH = HashingUtils::HashString("NONE");

Visibility GetVisibilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return Visibility::ALL;
  } else if (hashCode == ASSIGNED_HASH) {
    return Visibility::ASSIGNED;
  } else if (hashCode == NONE_HASH) {
    return Visibility::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Visibility>(hashCode);
  }

  return Visibility::NOT_SET;
}

Aws::String GetNameForVisibility(Visibility enumValue) {
  switch (enumValue) {
    case Visibility::NOT_SET:
      return {};
    case Visibility::ALL:
      return "ALL";
    case Visibility::ASSIGNED:
      return "ASSIGNED";
    case Visibility::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VisibilityMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
