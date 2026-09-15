/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/directconnect/model/ResiliencyGroupState.h>

using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {
namespace ResiliencyGroupStateMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int available_HASH = HashingUtils::HashString("available");
static const int deleting_HASH = HashingUtils::HashString("deleting");
static const int deleted_HASH = HashingUtils::HashString("deleted");

ResiliencyGroupState GetResiliencyGroupStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return ResiliencyGroupState::pending;
  } else if (hashCode == available_HASH) {
    return ResiliencyGroupState::available;
  } else if (hashCode == deleting_HASH) {
    return ResiliencyGroupState::deleting;
  } else if (hashCode == deleted_HASH) {
    return ResiliencyGroupState::deleted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResiliencyGroupState>(hashCode);
  }

  return ResiliencyGroupState::NOT_SET;
}

Aws::String GetNameForResiliencyGroupState(ResiliencyGroupState enumValue) {
  switch (enumValue) {
    case ResiliencyGroupState::NOT_SET:
      return {};
    case ResiliencyGroupState::pending:
      return "pending";
    case ResiliencyGroupState::available:
      return "available";
    case ResiliencyGroupState::deleting:
      return "deleting";
    case ResiliencyGroupState::deleted:
      return "deleted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResiliencyGroupStateMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
