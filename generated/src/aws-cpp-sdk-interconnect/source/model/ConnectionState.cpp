/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/interconnect/model/ConnectionState.h>

using namespace Aws::Utils;

namespace Aws {
namespace Interconnect {
namespace Model {
namespace ConnectionStateMapper {

static const int available_HASH = HashingUtils::HashString("available");
static const int requested_HASH = HashingUtils::HashString("requested");
static const int pending_HASH = HashingUtils::HashString("pending");
static const int down_HASH = HashingUtils::HashString("down");
static const int deleting_HASH = HashingUtils::HashString("deleting");
static const int deleted_HASH = HashingUtils::HashString("deleted");
static const int failed_HASH = HashingUtils::HashString("failed");
static const int updating_HASH = HashingUtils::HashString("updating");

ConnectionState GetConnectionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == available_HASH) {
    return ConnectionState::available;
  } else if (hashCode == requested_HASH) {
    return ConnectionState::requested;
  } else if (hashCode == pending_HASH) {
    return ConnectionState::pending;
  } else if (hashCode == down_HASH) {
    return ConnectionState::down;
  } else if (hashCode == deleting_HASH) {
    return ConnectionState::deleting;
  } else if (hashCode == deleted_HASH) {
    return ConnectionState::deleted;
  } else if (hashCode == failed_HASH) {
    return ConnectionState::failed;
  } else if (hashCode == updating_HASH) {
    return ConnectionState::updating;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectionState>(hashCode);
  }

  return ConnectionState::NOT_SET;
}

Aws::String GetNameForConnectionState(ConnectionState enumValue) {
  switch (enumValue) {
    case ConnectionState::NOT_SET:
      return {};
    case ConnectionState::available:
      return "available";
    case ConnectionState::requested:
      return "requested";
    case ConnectionState::pending:
      return "pending";
    case ConnectionState::down:
      return "down";
    case ConnectionState::deleting:
      return "deleting";
    case ConnectionState::deleted:
      return "deleted";
    case ConnectionState::failed:
      return "failed";
    case ConnectionState::updating:
      return "updating";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectionStateMapper
}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
