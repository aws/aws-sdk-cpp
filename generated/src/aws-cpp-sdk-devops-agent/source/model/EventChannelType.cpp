/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/EventChannelType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace EventChannelTypeMapper {

static const int webhook_HASH = HashingUtils::HashString("webhook");

EventChannelType GetEventChannelTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == webhook_HASH) {
    return EventChannelType::webhook;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventChannelType>(hashCode);
  }

  return EventChannelType::NOT_SET;
}

Aws::String GetNameForEventChannelType(EventChannelType enumValue) {
  switch (enumValue) {
    case EventChannelType::NOT_SET:
      return {};
    case EventChannelType::webhook:
      return "webhook";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventChannelTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
