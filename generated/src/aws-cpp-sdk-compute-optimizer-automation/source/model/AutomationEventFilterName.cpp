/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/AutomationEventFilterName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace AutomationEventFilterNameMapper {

static const int AccountId_HASH = HashingUtils::HashString("AccountId");
static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");
static const int EventType_HASH = HashingUtils::HashString("EventType");
static const int EventStatus_HASH = HashingUtils::HashString("EventStatus");

AutomationEventFilterName GetAutomationEventFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AccountId_HASH) {
    return AutomationEventFilterName::AccountId;
  } else if (hashCode == ResourceType_HASH) {
    return AutomationEventFilterName::ResourceType;
  } else if (hashCode == EventType_HASH) {
    return AutomationEventFilterName::EventType;
  } else if (hashCode == EventStatus_HASH) {
    return AutomationEventFilterName::EventStatus;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutomationEventFilterName>(hashCode);
  }

  return AutomationEventFilterName::NOT_SET;
}

Aws::String GetNameForAutomationEventFilterName(AutomationEventFilterName enumValue) {
  switch (enumValue) {
    case AutomationEventFilterName::NOT_SET:
      return {};
    case AutomationEventFilterName::AccountId:
      return "AccountId";
    case AutomationEventFilterName::ResourceType:
      return "ResourceType";
    case AutomationEventFilterName::EventType:
      return "EventType";
    case AutomationEventFilterName::EventStatus:
      return "EventStatus";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutomationEventFilterNameMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
