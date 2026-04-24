/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/EventType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace EventTypeMapper {

static const int ExecutionStarted_HASH = HashingUtils::HashString("ExecutionStarted");
static const int ExecutionSucceeded_HASH = HashingUtils::HashString("ExecutionSucceeded");
static const int ExecutionFailed_HASH = HashingUtils::HashString("ExecutionFailed");
static const int ExecutionTimedOut_HASH = HashingUtils::HashString("ExecutionTimedOut");
static const int ExecutionStopped_HASH = HashingUtils::HashString("ExecutionStopped");
static const int ContextStarted_HASH = HashingUtils::HashString("ContextStarted");
static const int ContextSucceeded_HASH = HashingUtils::HashString("ContextSucceeded");
static const int ContextFailed_HASH = HashingUtils::HashString("ContextFailed");
static const int WaitStarted_HASH = HashingUtils::HashString("WaitStarted");
static const int WaitSucceeded_HASH = HashingUtils::HashString("WaitSucceeded");
static const int WaitCancelled_HASH = HashingUtils::HashString("WaitCancelled");
static const int StepStarted_HASH = HashingUtils::HashString("StepStarted");
static const int StepSucceeded_HASH = HashingUtils::HashString("StepSucceeded");
static const int StepFailed_HASH = HashingUtils::HashString("StepFailed");
static const int ChainedInvokeStarted_HASH = HashingUtils::HashString("ChainedInvokeStarted");
static const int ChainedInvokeSucceeded_HASH = HashingUtils::HashString("ChainedInvokeSucceeded");
static const int ChainedInvokeFailed_HASH = HashingUtils::HashString("ChainedInvokeFailed");
static const int ChainedInvokeTimedOut_HASH = HashingUtils::HashString("ChainedInvokeTimedOut");
static const int ChainedInvokeStopped_HASH = HashingUtils::HashString("ChainedInvokeStopped");
static const int CallbackStarted_HASH = HashingUtils::HashString("CallbackStarted");
static const int CallbackSucceeded_HASH = HashingUtils::HashString("CallbackSucceeded");
static const int CallbackFailed_HASH = HashingUtils::HashString("CallbackFailed");
static const int CallbackTimedOut_HASH = HashingUtils::HashString("CallbackTimedOut");
static const int InvocationCompleted_HASH = HashingUtils::HashString("InvocationCompleted");

EventType GetEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ExecutionStarted_HASH) {
    return EventType::ExecutionStarted;
  } else if (hashCode == ExecutionSucceeded_HASH) {
    return EventType::ExecutionSucceeded;
  } else if (hashCode == ExecutionFailed_HASH) {
    return EventType::ExecutionFailed;
  } else if (hashCode == ExecutionTimedOut_HASH) {
    return EventType::ExecutionTimedOut;
  } else if (hashCode == ExecutionStopped_HASH) {
    return EventType::ExecutionStopped;
  } else if (hashCode == ContextStarted_HASH) {
    return EventType::ContextStarted;
  } else if (hashCode == ContextSucceeded_HASH) {
    return EventType::ContextSucceeded;
  } else if (hashCode == ContextFailed_HASH) {
    return EventType::ContextFailed;
  } else if (hashCode == WaitStarted_HASH) {
    return EventType::WaitStarted;
  } else if (hashCode == WaitSucceeded_HASH) {
    return EventType::WaitSucceeded;
  } else if (hashCode == WaitCancelled_HASH) {
    return EventType::WaitCancelled;
  } else if (hashCode == StepStarted_HASH) {
    return EventType::StepStarted;
  } else if (hashCode == StepSucceeded_HASH) {
    return EventType::StepSucceeded;
  } else if (hashCode == StepFailed_HASH) {
    return EventType::StepFailed;
  } else if (hashCode == ChainedInvokeStarted_HASH) {
    return EventType::ChainedInvokeStarted;
  } else if (hashCode == ChainedInvokeSucceeded_HASH) {
    return EventType::ChainedInvokeSucceeded;
  } else if (hashCode == ChainedInvokeFailed_HASH) {
    return EventType::ChainedInvokeFailed;
  } else if (hashCode == ChainedInvokeTimedOut_HASH) {
    return EventType::ChainedInvokeTimedOut;
  } else if (hashCode == ChainedInvokeStopped_HASH) {
    return EventType::ChainedInvokeStopped;
  } else if (hashCode == CallbackStarted_HASH) {
    return EventType::CallbackStarted;
  } else if (hashCode == CallbackSucceeded_HASH) {
    return EventType::CallbackSucceeded;
  } else if (hashCode == CallbackFailed_HASH) {
    return EventType::CallbackFailed;
  } else if (hashCode == CallbackTimedOut_HASH) {
    return EventType::CallbackTimedOut;
  } else if (hashCode == InvocationCompleted_HASH) {
    return EventType::InvocationCompleted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventType>(hashCode);
  }

  return EventType::NOT_SET;
}

Aws::String GetNameForEventType(EventType enumValue) {
  switch (enumValue) {
    case EventType::NOT_SET:
      return {};
    case EventType::ExecutionStarted:
      return "ExecutionStarted";
    case EventType::ExecutionSucceeded:
      return "ExecutionSucceeded";
    case EventType::ExecutionFailed:
      return "ExecutionFailed";
    case EventType::ExecutionTimedOut:
      return "ExecutionTimedOut";
    case EventType::ExecutionStopped:
      return "ExecutionStopped";
    case EventType::ContextStarted:
      return "ContextStarted";
    case EventType::ContextSucceeded:
      return "ContextSucceeded";
    case EventType::ContextFailed:
      return "ContextFailed";
    case EventType::WaitStarted:
      return "WaitStarted";
    case EventType::WaitSucceeded:
      return "WaitSucceeded";
    case EventType::WaitCancelled:
      return "WaitCancelled";
    case EventType::StepStarted:
      return "StepStarted";
    case EventType::StepSucceeded:
      return "StepSucceeded";
    case EventType::StepFailed:
      return "StepFailed";
    case EventType::ChainedInvokeStarted:
      return "ChainedInvokeStarted";
    case EventType::ChainedInvokeSucceeded:
      return "ChainedInvokeSucceeded";
    case EventType::ChainedInvokeFailed:
      return "ChainedInvokeFailed";
    case EventType::ChainedInvokeTimedOut:
      return "ChainedInvokeTimedOut";
    case EventType::ChainedInvokeStopped:
      return "ChainedInvokeStopped";
    case EventType::CallbackStarted:
      return "CallbackStarted";
    case EventType::CallbackSucceeded:
      return "CallbackSucceeded";
    case EventType::CallbackFailed:
      return "CallbackFailed";
    case EventType::CallbackTimedOut:
      return "CallbackTimedOut";
    case EventType::InvocationCompleted:
      return "InvocationCompleted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventTypeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
