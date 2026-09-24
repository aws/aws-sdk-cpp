/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/SubscriberState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace SubscriberStateMapper {

static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

SubscriberState GetSubscriberStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RUNNING_HASH) {
    return SubscriberState::RUNNING;
  } else if (hashCode == STOPPED_HASH) {
    return SubscriberState::STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubscriberState>(hashCode);
  }

  return SubscriberState::NOT_SET;
}

Aws::String GetNameForSubscriberState(SubscriberState enumValue) {
  switch (enumValue) {
    case SubscriberState::NOT_SET:
      return {};
    case SubscriberState::RUNNING:
      return "RUNNING";
    case SubscriberState::STOPPED:
      return "STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubscriberStateMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
