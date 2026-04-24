/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/ManagedResourceDefaultVisibility.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace ManagedResourceDefaultVisibilityMapper {

static const int hidden_HASH = HashingUtils::HashString("hidden");
static const int visible_HASH = HashingUtils::HashString("visible");

ManagedResourceDefaultVisibility GetManagedResourceDefaultVisibilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == hidden_HASH) {
    return ManagedResourceDefaultVisibility::hidden;
  } else if (hashCode == visible_HASH) {
    return ManagedResourceDefaultVisibility::visible;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedResourceDefaultVisibility>(hashCode);
  }

  return ManagedResourceDefaultVisibility::NOT_SET;
}

Aws::String GetNameForManagedResourceDefaultVisibility(ManagedResourceDefaultVisibility enumValue) {
  switch (enumValue) {
    case ManagedResourceDefaultVisibility::NOT_SET:
      return {};
    case ManagedResourceDefaultVisibility::hidden:
      return "hidden";
    case ManagedResourceDefaultVisibility::visible:
      return "visible";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedResourceDefaultVisibilityMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
