/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/Event.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

Event::Event(JsonView jsonValue) { *this = jsonValue; }

Event& Event::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EventType")) {
    m_eventType = EventTypeMapper::GetEventTypeForName(jsonValue.GetString("EventType"));
    m_eventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubType")) {
    m_subType = jsonValue.GetString("SubType");
    m_subTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventId")) {
    m_eventId = jsonValue.GetInteger("EventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventTimestamp")) {
    m_eventTimestamp = jsonValue.GetDouble("EventTimestamp");
    m_eventTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ParentId")) {
    m_parentId = jsonValue.GetString("ParentId");
    m_parentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionStartedDetails")) {
    m_executionStartedDetails = jsonValue.GetObject("ExecutionStartedDetails");
    m_executionStartedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionSucceededDetails")) {
    m_executionSucceededDetails = jsonValue.GetObject("ExecutionSucceededDetails");
    m_executionSucceededDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionFailedDetails")) {
    m_executionFailedDetails = jsonValue.GetObject("ExecutionFailedDetails");
    m_executionFailedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionTimedOutDetails")) {
    m_executionTimedOutDetails = jsonValue.GetObject("ExecutionTimedOutDetails");
    m_executionTimedOutDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionStoppedDetails")) {
    m_executionStoppedDetails = jsonValue.GetObject("ExecutionStoppedDetails");
    m_executionStoppedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContextStartedDetails")) {
    m_contextStartedDetails = jsonValue.GetObject("ContextStartedDetails");
    m_contextStartedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContextSucceededDetails")) {
    m_contextSucceededDetails = jsonValue.GetObject("ContextSucceededDetails");
    m_contextSucceededDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContextFailedDetails")) {
    m_contextFailedDetails = jsonValue.GetObject("ContextFailedDetails");
    m_contextFailedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WaitStartedDetails")) {
    m_waitStartedDetails = jsonValue.GetObject("WaitStartedDetails");
    m_waitStartedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WaitSucceededDetails")) {
    m_waitSucceededDetails = jsonValue.GetObject("WaitSucceededDetails");
    m_waitSucceededDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WaitCancelledDetails")) {
    m_waitCancelledDetails = jsonValue.GetObject("WaitCancelledDetails");
    m_waitCancelledDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StepStartedDetails")) {
    m_stepStartedDetails = jsonValue.GetObject("StepStartedDetails");
    m_stepStartedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StepSucceededDetails")) {
    m_stepSucceededDetails = jsonValue.GetObject("StepSucceededDetails");
    m_stepSucceededDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StepFailedDetails")) {
    m_stepFailedDetails = jsonValue.GetObject("StepFailedDetails");
    m_stepFailedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChainedInvokeStartedDetails")) {
    m_chainedInvokeStartedDetails = jsonValue.GetObject("ChainedInvokeStartedDetails");
    m_chainedInvokeStartedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChainedInvokeSucceededDetails")) {
    m_chainedInvokeSucceededDetails = jsonValue.GetObject("ChainedInvokeSucceededDetails");
    m_chainedInvokeSucceededDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChainedInvokeFailedDetails")) {
    m_chainedInvokeFailedDetails = jsonValue.GetObject("ChainedInvokeFailedDetails");
    m_chainedInvokeFailedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChainedInvokeTimedOutDetails")) {
    m_chainedInvokeTimedOutDetails = jsonValue.GetObject("ChainedInvokeTimedOutDetails");
    m_chainedInvokeTimedOutDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChainedInvokeStoppedDetails")) {
    m_chainedInvokeStoppedDetails = jsonValue.GetObject("ChainedInvokeStoppedDetails");
    m_chainedInvokeStoppedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CallbackStartedDetails")) {
    m_callbackStartedDetails = jsonValue.GetObject("CallbackStartedDetails");
    m_callbackStartedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CallbackSucceededDetails")) {
    m_callbackSucceededDetails = jsonValue.GetObject("CallbackSucceededDetails");
    m_callbackSucceededDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CallbackFailedDetails")) {
    m_callbackFailedDetails = jsonValue.GetObject("CallbackFailedDetails");
    m_callbackFailedDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CallbackTimedOutDetails")) {
    m_callbackTimedOutDetails = jsonValue.GetObject("CallbackTimedOutDetails");
    m_callbackTimedOutDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InvocationCompletedDetails")) {
    m_invocationCompletedDetails = jsonValue.GetObject("InvocationCompletedDetails");
    m_invocationCompletedDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue Event::Jsonize() const {
  JsonValue payload;

  if (m_eventTypeHasBeenSet) {
    payload.WithString("EventType", EventTypeMapper::GetNameForEventType(m_eventType));
  }

  if (m_subTypeHasBeenSet) {
    payload.WithString("SubType", m_subType);
  }

  if (m_eventIdHasBeenSet) {
    payload.WithInteger("EventId", m_eventId);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_eventTimestampHasBeenSet) {
    payload.WithDouble("EventTimestamp", m_eventTimestamp.SecondsWithMSPrecision());
  }

  if (m_parentIdHasBeenSet) {
    payload.WithString("ParentId", m_parentId);
  }

  if (m_executionStartedDetailsHasBeenSet) {
    payload.WithObject("ExecutionStartedDetails", m_executionStartedDetails.Jsonize());
  }

  if (m_executionSucceededDetailsHasBeenSet) {
    payload.WithObject("ExecutionSucceededDetails", m_executionSucceededDetails.Jsonize());
  }

  if (m_executionFailedDetailsHasBeenSet) {
    payload.WithObject("ExecutionFailedDetails", m_executionFailedDetails.Jsonize());
  }

  if (m_executionTimedOutDetailsHasBeenSet) {
    payload.WithObject("ExecutionTimedOutDetails", m_executionTimedOutDetails.Jsonize());
  }

  if (m_executionStoppedDetailsHasBeenSet) {
    payload.WithObject("ExecutionStoppedDetails", m_executionStoppedDetails.Jsonize());
  }

  if (m_contextStartedDetailsHasBeenSet) {
    payload.WithObject("ContextStartedDetails", m_contextStartedDetails.Jsonize());
  }

  if (m_contextSucceededDetailsHasBeenSet) {
    payload.WithObject("ContextSucceededDetails", m_contextSucceededDetails.Jsonize());
  }

  if (m_contextFailedDetailsHasBeenSet) {
    payload.WithObject("ContextFailedDetails", m_contextFailedDetails.Jsonize());
  }

  if (m_waitStartedDetailsHasBeenSet) {
    payload.WithObject("WaitStartedDetails", m_waitStartedDetails.Jsonize());
  }

  if (m_waitSucceededDetailsHasBeenSet) {
    payload.WithObject("WaitSucceededDetails", m_waitSucceededDetails.Jsonize());
  }

  if (m_waitCancelledDetailsHasBeenSet) {
    payload.WithObject("WaitCancelledDetails", m_waitCancelledDetails.Jsonize());
  }

  if (m_stepStartedDetailsHasBeenSet) {
    payload.WithObject("StepStartedDetails", m_stepStartedDetails.Jsonize());
  }

  if (m_stepSucceededDetailsHasBeenSet) {
    payload.WithObject("StepSucceededDetails", m_stepSucceededDetails.Jsonize());
  }

  if (m_stepFailedDetailsHasBeenSet) {
    payload.WithObject("StepFailedDetails", m_stepFailedDetails.Jsonize());
  }

  if (m_chainedInvokeStartedDetailsHasBeenSet) {
    payload.WithObject("ChainedInvokeStartedDetails", m_chainedInvokeStartedDetails.Jsonize());
  }

  if (m_chainedInvokeSucceededDetailsHasBeenSet) {
    payload.WithObject("ChainedInvokeSucceededDetails", m_chainedInvokeSucceededDetails.Jsonize());
  }

  if (m_chainedInvokeFailedDetailsHasBeenSet) {
    payload.WithObject("ChainedInvokeFailedDetails", m_chainedInvokeFailedDetails.Jsonize());
  }

  if (m_chainedInvokeTimedOutDetailsHasBeenSet) {
    payload.WithObject("ChainedInvokeTimedOutDetails", m_chainedInvokeTimedOutDetails.Jsonize());
  }

  if (m_chainedInvokeStoppedDetailsHasBeenSet) {
    payload.WithObject("ChainedInvokeStoppedDetails", m_chainedInvokeStoppedDetails.Jsonize());
  }

  if (m_callbackStartedDetailsHasBeenSet) {
    payload.WithObject("CallbackStartedDetails", m_callbackStartedDetails.Jsonize());
  }

  if (m_callbackSucceededDetailsHasBeenSet) {
    payload.WithObject("CallbackSucceededDetails", m_callbackSucceededDetails.Jsonize());
  }

  if (m_callbackFailedDetailsHasBeenSet) {
    payload.WithObject("CallbackFailedDetails", m_callbackFailedDetails.Jsonize());
  }

  if (m_callbackTimedOutDetailsHasBeenSet) {
    payload.WithObject("CallbackTimedOutDetails", m_callbackTimedOutDetails.Jsonize());
  }

  if (m_invocationCompletedDetailsHasBeenSet) {
    payload.WithObject("InvocationCompletedDetails", m_invocationCompletedDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
