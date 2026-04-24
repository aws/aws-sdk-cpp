/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OperationalStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace OperationalStatusMapper {

static const int OPEN_HASH = HashingUtils::HashString("OPEN");
static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");

OperationalStatus GetOperationalStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPEN_HASH) {
    return OperationalStatus::OPEN;
  } else if (hashCode == CLOSED_HASH) {
    return OperationalStatus::CLOSED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OperationalStatus>(hashCode);
  }

  return OperationalStatus::NOT_SET;
}

Aws::String GetNameForOperationalStatus(OperationalStatus enumValue) {
  switch (enumValue) {
    case OperationalStatus::NOT_SET:
      return {};
    case OperationalStatus::OPEN:
      return "OPEN";
    case OperationalStatus::CLOSED:
      return "CLOSED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OperationalStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
