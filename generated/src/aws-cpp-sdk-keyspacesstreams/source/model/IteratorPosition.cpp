/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/keyspacesstreams/model/IteratorPosition.h>

using namespace Aws::Utils;

namespace Aws {
namespace KeyspacesStreams {
namespace Model {
namespace IteratorPositionMapper {

static const int AT_TIP_HASH = HashingUtils::HashString("AT_TIP");
static const int BEHIND_TIP_HASH = HashingUtils::HashString("BEHIND_TIP");

IteratorPosition GetIteratorPositionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AT_TIP_HASH) {
    return IteratorPosition::AT_TIP;
  } else if (hashCode == BEHIND_TIP_HASH) {
    return IteratorPosition::BEHIND_TIP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IteratorPosition>(hashCode);
  }

  return IteratorPosition::NOT_SET;
}

Aws::String GetNameForIteratorPosition(IteratorPosition enumValue) {
  switch (enumValue) {
    case IteratorPosition::NOT_SET:
      return {};
    case IteratorPosition::AT_TIP:
      return "AT_TIP";
    case IteratorPosition::BEHIND_TIP:
      return "BEHIND_TIP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IteratorPositionMapper
}  // namespace Model
}  // namespace KeyspacesStreams
}  // namespace Aws
