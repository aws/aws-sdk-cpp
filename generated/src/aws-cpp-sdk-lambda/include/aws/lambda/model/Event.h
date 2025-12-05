/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/CallbackFailedDetails.h>
#include <aws/lambda/model/CallbackStartedDetails.h>
#include <aws/lambda/model/CallbackSucceededDetails.h>
#include <aws/lambda/model/CallbackTimedOutDetails.h>
#include <aws/lambda/model/ChainedInvokeFailedDetails.h>
#include <aws/lambda/model/ChainedInvokeStartedDetails.h>
#include <aws/lambda/model/ChainedInvokeStoppedDetails.h>
#include <aws/lambda/model/ChainedInvokeSucceededDetails.h>
#include <aws/lambda/model/ChainedInvokeTimedOutDetails.h>
#include <aws/lambda/model/ContextFailedDetails.h>
#include <aws/lambda/model/ContextStartedDetails.h>
#include <aws/lambda/model/ContextSucceededDetails.h>
#include <aws/lambda/model/EventType.h>
#include <aws/lambda/model/ExecutionFailedDetails.h>
#include <aws/lambda/model/ExecutionStartedDetails.h>
#include <aws/lambda/model/ExecutionStoppedDetails.h>
#include <aws/lambda/model/ExecutionSucceededDetails.h>
#include <aws/lambda/model/ExecutionTimedOutDetails.h>
#include <aws/lambda/model/InvocationCompletedDetails.h>
#include <aws/lambda/model/StepFailedDetails.h>
#include <aws/lambda/model/StepStartedDetails.h>
#include <aws/lambda/model/StepSucceededDetails.h>
#include <aws/lambda/model/WaitCancelledDetails.h>
#include <aws/lambda/model/WaitStartedDetails.h>
#include <aws/lambda/model/WaitSucceededDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>An event that occurred during the execution of a durable
 * function.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Event">AWS API
 * Reference</a></p>
 */
class Event {
 public:
  AWS_LAMBDA_API Event() = default;
  AWS_LAMBDA_API Event(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of event that occurred.</p>
   */
  inline EventType GetEventType() const { return m_eventType; }
  inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
  inline void SetEventType(EventType value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = value;
  }
  inline Event& WithEventType(EventType value) {
    SetEventType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subtype of the event, providing additional categorization.</p>
   */
  inline const Aws::String& GetSubType() const { return m_subType; }
  inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }
  template <typename SubTypeT = Aws::String>
  void SetSubType(SubTypeT&& value) {
    m_subTypeHasBeenSet = true;
    m_subType = std::forward<SubTypeT>(value);
  }
  template <typename SubTypeT = Aws::String>
  Event& WithSubType(SubTypeT&& value) {
    SetSubType(std::forward<SubTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for this event. Event IDs increment sequentially.</p>
   */
  inline int GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  inline void SetEventId(int value) {
    m_eventIdHasBeenSet = true;
    m_eventId = value;
  }
  inline Event& WithEventId(int value) {
    SetEventId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for this operation.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  Event& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer-provided name for this operation.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Event& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when this event occurred, in <a
   * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
   * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
   */
  inline const Aws::Utils::DateTime& GetEventTimestamp() const { return m_eventTimestamp; }
  inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
  template <typename EventTimestampT = Aws::Utils::DateTime>
  void SetEventTimestamp(EventTimestampT&& value) {
    m_eventTimestampHasBeenSet = true;
    m_eventTimestamp = std::forward<EventTimestampT>(value);
  }
  template <typename EventTimestampT = Aws::Utils::DateTime>
  Event& WithEventTimestamp(EventTimestampT&& value) {
    SetEventTimestamp(std::forward<EventTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the parent operation, if this operation is running
   * within a child context.</p>
   */
  inline const Aws::String& GetParentId() const { return m_parentId; }
  inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
  template <typename ParentIdT = Aws::String>
  void SetParentId(ParentIdT&& value) {
    m_parentIdHasBeenSet = true;
    m_parentId = std::forward<ParentIdT>(value);
  }
  template <typename ParentIdT = Aws::String>
  Event& WithParentId(ParentIdT&& value) {
    SetParentId(std::forward<ParentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about an execution that started.</p>
   */
  inline const ExecutionStartedDetails& GetExecutionStartedDetails() const { return m_executionStartedDetails; }
  inline bool ExecutionStartedDetailsHasBeenSet() const { return m_executionStartedDetailsHasBeenSet; }
  template <typename ExecutionStartedDetailsT = ExecutionStartedDetails>
  void SetExecutionStartedDetails(ExecutionStartedDetailsT&& value) {
    m_executionStartedDetailsHasBeenSet = true;
    m_executionStartedDetails = std::forward<ExecutionStartedDetailsT>(value);
  }
  template <typename ExecutionStartedDetailsT = ExecutionStartedDetails>
  Event& WithExecutionStartedDetails(ExecutionStartedDetailsT&& value) {
    SetExecutionStartedDetails(std::forward<ExecutionStartedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about an execution that succeeded.</p>
   */
  inline const ExecutionSucceededDetails& GetExecutionSucceededDetails() const { return m_executionSucceededDetails; }
  inline bool ExecutionSucceededDetailsHasBeenSet() const { return m_executionSucceededDetailsHasBeenSet; }
  template <typename ExecutionSucceededDetailsT = ExecutionSucceededDetails>
  void SetExecutionSucceededDetails(ExecutionSucceededDetailsT&& value) {
    m_executionSucceededDetailsHasBeenSet = true;
    m_executionSucceededDetails = std::forward<ExecutionSucceededDetailsT>(value);
  }
  template <typename ExecutionSucceededDetailsT = ExecutionSucceededDetails>
  Event& WithExecutionSucceededDetails(ExecutionSucceededDetailsT&& value) {
    SetExecutionSucceededDetails(std::forward<ExecutionSucceededDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about an execution that failed.</p>
   */
  inline const ExecutionFailedDetails& GetExecutionFailedDetails() const { return m_executionFailedDetails; }
  inline bool ExecutionFailedDetailsHasBeenSet() const { return m_executionFailedDetailsHasBeenSet; }
  template <typename ExecutionFailedDetailsT = ExecutionFailedDetails>
  void SetExecutionFailedDetails(ExecutionFailedDetailsT&& value) {
    m_executionFailedDetailsHasBeenSet = true;
    m_executionFailedDetails = std::forward<ExecutionFailedDetailsT>(value);
  }
  template <typename ExecutionFailedDetailsT = ExecutionFailedDetails>
  Event& WithExecutionFailedDetails(ExecutionFailedDetailsT&& value) {
    SetExecutionFailedDetails(std::forward<ExecutionFailedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about an execution that timed out.</p>
   */
  inline const ExecutionTimedOutDetails& GetExecutionTimedOutDetails() const { return m_executionTimedOutDetails; }
  inline bool ExecutionTimedOutDetailsHasBeenSet() const { return m_executionTimedOutDetailsHasBeenSet; }
  template <typename ExecutionTimedOutDetailsT = ExecutionTimedOutDetails>
  void SetExecutionTimedOutDetails(ExecutionTimedOutDetailsT&& value) {
    m_executionTimedOutDetailsHasBeenSet = true;
    m_executionTimedOutDetails = std::forward<ExecutionTimedOutDetailsT>(value);
  }
  template <typename ExecutionTimedOutDetailsT = ExecutionTimedOutDetails>
  Event& WithExecutionTimedOutDetails(ExecutionTimedOutDetailsT&& value) {
    SetExecutionTimedOutDetails(std::forward<ExecutionTimedOutDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about an execution that was stopped.</p>
   */
  inline const ExecutionStoppedDetails& GetExecutionStoppedDetails() const { return m_executionStoppedDetails; }
  inline bool ExecutionStoppedDetailsHasBeenSet() const { return m_executionStoppedDetailsHasBeenSet; }
  template <typename ExecutionStoppedDetailsT = ExecutionStoppedDetails>
  void SetExecutionStoppedDetails(ExecutionStoppedDetailsT&& value) {
    m_executionStoppedDetailsHasBeenSet = true;
    m_executionStoppedDetails = std::forward<ExecutionStoppedDetailsT>(value);
  }
  template <typename ExecutionStoppedDetailsT = ExecutionStoppedDetails>
  Event& WithExecutionStoppedDetails(ExecutionStoppedDetailsT&& value) {
    SetExecutionStoppedDetails(std::forward<ExecutionStoppedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a context that started.</p>
   */
  inline const ContextStartedDetails& GetContextStartedDetails() const { return m_contextStartedDetails; }
  inline bool ContextStartedDetailsHasBeenSet() const { return m_contextStartedDetailsHasBeenSet; }
  template <typename ContextStartedDetailsT = ContextStartedDetails>
  void SetContextStartedDetails(ContextStartedDetailsT&& value) {
    m_contextStartedDetailsHasBeenSet = true;
    m_contextStartedDetails = std::forward<ContextStartedDetailsT>(value);
  }
  template <typename ContextStartedDetailsT = ContextStartedDetails>
  Event& WithContextStartedDetails(ContextStartedDetailsT&& value) {
    SetContextStartedDetails(std::forward<ContextStartedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a context that succeeded.</p>
   */
  inline const ContextSucceededDetails& GetContextSucceededDetails() const { return m_contextSucceededDetails; }
  inline bool ContextSucceededDetailsHasBeenSet() const { return m_contextSucceededDetailsHasBeenSet; }
  template <typename ContextSucceededDetailsT = ContextSucceededDetails>
  void SetContextSucceededDetails(ContextSucceededDetailsT&& value) {
    m_contextSucceededDetailsHasBeenSet = true;
    m_contextSucceededDetails = std::forward<ContextSucceededDetailsT>(value);
  }
  template <typename ContextSucceededDetailsT = ContextSucceededDetails>
  Event& WithContextSucceededDetails(ContextSucceededDetailsT&& value) {
    SetContextSucceededDetails(std::forward<ContextSucceededDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a context that failed.</p>
   */
  inline const ContextFailedDetails& GetContextFailedDetails() const { return m_contextFailedDetails; }
  inline bool ContextFailedDetailsHasBeenSet() const { return m_contextFailedDetailsHasBeenSet; }
  template <typename ContextFailedDetailsT = ContextFailedDetails>
  void SetContextFailedDetails(ContextFailedDetailsT&& value) {
    m_contextFailedDetailsHasBeenSet = true;
    m_contextFailedDetails = std::forward<ContextFailedDetailsT>(value);
  }
  template <typename ContextFailedDetailsT = ContextFailedDetails>
  Event& WithContextFailedDetails(ContextFailedDetailsT&& value) {
    SetContextFailedDetails(std::forward<ContextFailedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a wait operation that started.</p>
   */
  inline const WaitStartedDetails& GetWaitStartedDetails() const { return m_waitStartedDetails; }
  inline bool WaitStartedDetailsHasBeenSet() const { return m_waitStartedDetailsHasBeenSet; }
  template <typename WaitStartedDetailsT = WaitStartedDetails>
  void SetWaitStartedDetails(WaitStartedDetailsT&& value) {
    m_waitStartedDetailsHasBeenSet = true;
    m_waitStartedDetails = std::forward<WaitStartedDetailsT>(value);
  }
  template <typename WaitStartedDetailsT = WaitStartedDetails>
  Event& WithWaitStartedDetails(WaitStartedDetailsT&& value) {
    SetWaitStartedDetails(std::forward<WaitStartedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a wait operation that succeeded.</p>
   */
  inline const WaitSucceededDetails& GetWaitSucceededDetails() const { return m_waitSucceededDetails; }
  inline bool WaitSucceededDetailsHasBeenSet() const { return m_waitSucceededDetailsHasBeenSet; }
  template <typename WaitSucceededDetailsT = WaitSucceededDetails>
  void SetWaitSucceededDetails(WaitSucceededDetailsT&& value) {
    m_waitSucceededDetailsHasBeenSet = true;
    m_waitSucceededDetails = std::forward<WaitSucceededDetailsT>(value);
  }
  template <typename WaitSucceededDetailsT = WaitSucceededDetails>
  Event& WithWaitSucceededDetails(WaitSucceededDetailsT&& value) {
    SetWaitSucceededDetails(std::forward<WaitSucceededDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a wait operation that was cancelled.</p>
   */
  inline const WaitCancelledDetails& GetWaitCancelledDetails() const { return m_waitCancelledDetails; }
  inline bool WaitCancelledDetailsHasBeenSet() const { return m_waitCancelledDetailsHasBeenSet; }
  template <typename WaitCancelledDetailsT = WaitCancelledDetails>
  void SetWaitCancelledDetails(WaitCancelledDetailsT&& value) {
    m_waitCancelledDetailsHasBeenSet = true;
    m_waitCancelledDetails = std::forward<WaitCancelledDetailsT>(value);
  }
  template <typename WaitCancelledDetailsT = WaitCancelledDetails>
  Event& WithWaitCancelledDetails(WaitCancelledDetailsT&& value) {
    SetWaitCancelledDetails(std::forward<WaitCancelledDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a step that started.</p>
   */
  inline const StepStartedDetails& GetStepStartedDetails() const { return m_stepStartedDetails; }
  inline bool StepStartedDetailsHasBeenSet() const { return m_stepStartedDetailsHasBeenSet; }
  template <typename StepStartedDetailsT = StepStartedDetails>
  void SetStepStartedDetails(StepStartedDetailsT&& value) {
    m_stepStartedDetailsHasBeenSet = true;
    m_stepStartedDetails = std::forward<StepStartedDetailsT>(value);
  }
  template <typename StepStartedDetailsT = StepStartedDetails>
  Event& WithStepStartedDetails(StepStartedDetailsT&& value) {
    SetStepStartedDetails(std::forward<StepStartedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a step that succeeded.</p>
   */
  inline const StepSucceededDetails& GetStepSucceededDetails() const { return m_stepSucceededDetails; }
  inline bool StepSucceededDetailsHasBeenSet() const { return m_stepSucceededDetailsHasBeenSet; }
  template <typename StepSucceededDetailsT = StepSucceededDetails>
  void SetStepSucceededDetails(StepSucceededDetailsT&& value) {
    m_stepSucceededDetailsHasBeenSet = true;
    m_stepSucceededDetails = std::forward<StepSucceededDetailsT>(value);
  }
  template <typename StepSucceededDetailsT = StepSucceededDetails>
  Event& WithStepSucceededDetails(StepSucceededDetailsT&& value) {
    SetStepSucceededDetails(std::forward<StepSucceededDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a step that failed.</p>
   */
  inline const StepFailedDetails& GetStepFailedDetails() const { return m_stepFailedDetails; }
  inline bool StepFailedDetailsHasBeenSet() const { return m_stepFailedDetailsHasBeenSet; }
  template <typename StepFailedDetailsT = StepFailedDetails>
  void SetStepFailedDetails(StepFailedDetailsT&& value) {
    m_stepFailedDetailsHasBeenSet = true;
    m_stepFailedDetails = std::forward<StepFailedDetailsT>(value);
  }
  template <typename StepFailedDetailsT = StepFailedDetails>
  Event& WithStepFailedDetails(StepFailedDetailsT&& value) {
    SetStepFailedDetails(std::forward<StepFailedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ChainedInvokeStartedDetails& GetChainedInvokeStartedDetails() const { return m_chainedInvokeStartedDetails; }
  inline bool ChainedInvokeStartedDetailsHasBeenSet() const { return m_chainedInvokeStartedDetailsHasBeenSet; }
  template <typename ChainedInvokeStartedDetailsT = ChainedInvokeStartedDetails>
  void SetChainedInvokeStartedDetails(ChainedInvokeStartedDetailsT&& value) {
    m_chainedInvokeStartedDetailsHasBeenSet = true;
    m_chainedInvokeStartedDetails = std::forward<ChainedInvokeStartedDetailsT>(value);
  }
  template <typename ChainedInvokeStartedDetailsT = ChainedInvokeStartedDetails>
  Event& WithChainedInvokeStartedDetails(ChainedInvokeStartedDetailsT&& value) {
    SetChainedInvokeStartedDetails(std::forward<ChainedInvokeStartedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a chained invocation that succeeded.</p>
   */
  inline const ChainedInvokeSucceededDetails& GetChainedInvokeSucceededDetails() const { return m_chainedInvokeSucceededDetails; }
  inline bool ChainedInvokeSucceededDetailsHasBeenSet() const { return m_chainedInvokeSucceededDetailsHasBeenSet; }
  template <typename ChainedInvokeSucceededDetailsT = ChainedInvokeSucceededDetails>
  void SetChainedInvokeSucceededDetails(ChainedInvokeSucceededDetailsT&& value) {
    m_chainedInvokeSucceededDetailsHasBeenSet = true;
    m_chainedInvokeSucceededDetails = std::forward<ChainedInvokeSucceededDetailsT>(value);
  }
  template <typename ChainedInvokeSucceededDetailsT = ChainedInvokeSucceededDetails>
  Event& WithChainedInvokeSucceededDetails(ChainedInvokeSucceededDetailsT&& value) {
    SetChainedInvokeSucceededDetails(std::forward<ChainedInvokeSucceededDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ChainedInvokeFailedDetails& GetChainedInvokeFailedDetails() const { return m_chainedInvokeFailedDetails; }
  inline bool ChainedInvokeFailedDetailsHasBeenSet() const { return m_chainedInvokeFailedDetailsHasBeenSet; }
  template <typename ChainedInvokeFailedDetailsT = ChainedInvokeFailedDetails>
  void SetChainedInvokeFailedDetails(ChainedInvokeFailedDetailsT&& value) {
    m_chainedInvokeFailedDetailsHasBeenSet = true;
    m_chainedInvokeFailedDetails = std::forward<ChainedInvokeFailedDetailsT>(value);
  }
  template <typename ChainedInvokeFailedDetailsT = ChainedInvokeFailedDetails>
  Event& WithChainedInvokeFailedDetails(ChainedInvokeFailedDetailsT&& value) {
    SetChainedInvokeFailedDetails(std::forward<ChainedInvokeFailedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a chained invocation that timed out.</p>
   */
  inline const ChainedInvokeTimedOutDetails& GetChainedInvokeTimedOutDetails() const { return m_chainedInvokeTimedOutDetails; }
  inline bool ChainedInvokeTimedOutDetailsHasBeenSet() const { return m_chainedInvokeTimedOutDetailsHasBeenSet; }
  template <typename ChainedInvokeTimedOutDetailsT = ChainedInvokeTimedOutDetails>
  void SetChainedInvokeTimedOutDetails(ChainedInvokeTimedOutDetailsT&& value) {
    m_chainedInvokeTimedOutDetailsHasBeenSet = true;
    m_chainedInvokeTimedOutDetails = std::forward<ChainedInvokeTimedOutDetailsT>(value);
  }
  template <typename ChainedInvokeTimedOutDetailsT = ChainedInvokeTimedOutDetails>
  Event& WithChainedInvokeTimedOutDetails(ChainedInvokeTimedOutDetailsT&& value) {
    SetChainedInvokeTimedOutDetails(std::forward<ChainedInvokeTimedOutDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a chained invocation that was stopped.</p>
   */
  inline const ChainedInvokeStoppedDetails& GetChainedInvokeStoppedDetails() const { return m_chainedInvokeStoppedDetails; }
  inline bool ChainedInvokeStoppedDetailsHasBeenSet() const { return m_chainedInvokeStoppedDetailsHasBeenSet; }
  template <typename ChainedInvokeStoppedDetailsT = ChainedInvokeStoppedDetails>
  void SetChainedInvokeStoppedDetails(ChainedInvokeStoppedDetailsT&& value) {
    m_chainedInvokeStoppedDetailsHasBeenSet = true;
    m_chainedInvokeStoppedDetails = std::forward<ChainedInvokeStoppedDetailsT>(value);
  }
  template <typename ChainedInvokeStoppedDetailsT = ChainedInvokeStoppedDetails>
  Event& WithChainedInvokeStoppedDetails(ChainedInvokeStoppedDetailsT&& value) {
    SetChainedInvokeStoppedDetails(std::forward<ChainedInvokeStoppedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CallbackStartedDetails& GetCallbackStartedDetails() const { return m_callbackStartedDetails; }
  inline bool CallbackStartedDetailsHasBeenSet() const { return m_callbackStartedDetailsHasBeenSet; }
  template <typename CallbackStartedDetailsT = CallbackStartedDetails>
  void SetCallbackStartedDetails(CallbackStartedDetailsT&& value) {
    m_callbackStartedDetailsHasBeenSet = true;
    m_callbackStartedDetails = std::forward<CallbackStartedDetailsT>(value);
  }
  template <typename CallbackStartedDetailsT = CallbackStartedDetails>
  Event& WithCallbackStartedDetails(CallbackStartedDetailsT&& value) {
    SetCallbackStartedDetails(std::forward<CallbackStartedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CallbackSucceededDetails& GetCallbackSucceededDetails() const { return m_callbackSucceededDetails; }
  inline bool CallbackSucceededDetailsHasBeenSet() const { return m_callbackSucceededDetailsHasBeenSet; }
  template <typename CallbackSucceededDetailsT = CallbackSucceededDetails>
  void SetCallbackSucceededDetails(CallbackSucceededDetailsT&& value) {
    m_callbackSucceededDetailsHasBeenSet = true;
    m_callbackSucceededDetails = std::forward<CallbackSucceededDetailsT>(value);
  }
  template <typename CallbackSucceededDetailsT = CallbackSucceededDetails>
  Event& WithCallbackSucceededDetails(CallbackSucceededDetailsT&& value) {
    SetCallbackSucceededDetails(std::forward<CallbackSucceededDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CallbackFailedDetails& GetCallbackFailedDetails() const { return m_callbackFailedDetails; }
  inline bool CallbackFailedDetailsHasBeenSet() const { return m_callbackFailedDetailsHasBeenSet; }
  template <typename CallbackFailedDetailsT = CallbackFailedDetails>
  void SetCallbackFailedDetails(CallbackFailedDetailsT&& value) {
    m_callbackFailedDetailsHasBeenSet = true;
    m_callbackFailedDetails = std::forward<CallbackFailedDetailsT>(value);
  }
  template <typename CallbackFailedDetailsT = CallbackFailedDetails>
  Event& WithCallbackFailedDetails(CallbackFailedDetailsT&& value) {
    SetCallbackFailedDetails(std::forward<CallbackFailedDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CallbackTimedOutDetails& GetCallbackTimedOutDetails() const { return m_callbackTimedOutDetails; }
  inline bool CallbackTimedOutDetailsHasBeenSet() const { return m_callbackTimedOutDetailsHasBeenSet; }
  template <typename CallbackTimedOutDetailsT = CallbackTimedOutDetails>
  void SetCallbackTimedOutDetails(CallbackTimedOutDetailsT&& value) {
    m_callbackTimedOutDetailsHasBeenSet = true;
    m_callbackTimedOutDetails = std::forward<CallbackTimedOutDetailsT>(value);
  }
  template <typename CallbackTimedOutDetailsT = CallbackTimedOutDetails>
  Event& WithCallbackTimedOutDetails(CallbackTimedOutDetailsT&& value) {
    SetCallbackTimedOutDetails(std::forward<CallbackTimedOutDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a function invocation that completed.</p>
   */
  inline const InvocationCompletedDetails& GetInvocationCompletedDetails() const { return m_invocationCompletedDetails; }
  inline bool InvocationCompletedDetailsHasBeenSet() const { return m_invocationCompletedDetailsHasBeenSet; }
  template <typename InvocationCompletedDetailsT = InvocationCompletedDetails>
  void SetInvocationCompletedDetails(InvocationCompletedDetailsT&& value) {
    m_invocationCompletedDetailsHasBeenSet = true;
    m_invocationCompletedDetails = std::forward<InvocationCompletedDetailsT>(value);
  }
  template <typename InvocationCompletedDetailsT = InvocationCompletedDetails>
  Event& WithInvocationCompletedDetails(InvocationCompletedDetailsT&& value) {
    SetInvocationCompletedDetails(std::forward<InvocationCompletedDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  EventType m_eventType{EventType::NOT_SET};

  Aws::String m_subType;

  int m_eventId{0};

  Aws::String m_id;

  Aws::String m_name;

  Aws::Utils::DateTime m_eventTimestamp{};

  Aws::String m_parentId;

  ExecutionStartedDetails m_executionStartedDetails;

  ExecutionSucceededDetails m_executionSucceededDetails;

  ExecutionFailedDetails m_executionFailedDetails;

  ExecutionTimedOutDetails m_executionTimedOutDetails;

  ExecutionStoppedDetails m_executionStoppedDetails;

  ContextStartedDetails m_contextStartedDetails;

  ContextSucceededDetails m_contextSucceededDetails;

  ContextFailedDetails m_contextFailedDetails;

  WaitStartedDetails m_waitStartedDetails;

  WaitSucceededDetails m_waitSucceededDetails;

  WaitCancelledDetails m_waitCancelledDetails;

  StepStartedDetails m_stepStartedDetails;

  StepSucceededDetails m_stepSucceededDetails;

  StepFailedDetails m_stepFailedDetails;

  ChainedInvokeStartedDetails m_chainedInvokeStartedDetails;

  ChainedInvokeSucceededDetails m_chainedInvokeSucceededDetails;

  ChainedInvokeFailedDetails m_chainedInvokeFailedDetails;

  ChainedInvokeTimedOutDetails m_chainedInvokeTimedOutDetails;

  ChainedInvokeStoppedDetails m_chainedInvokeStoppedDetails;

  CallbackStartedDetails m_callbackStartedDetails;

  CallbackSucceededDetails m_callbackSucceededDetails;

  CallbackFailedDetails m_callbackFailedDetails;

  CallbackTimedOutDetails m_callbackTimedOutDetails;

  InvocationCompletedDetails m_invocationCompletedDetails;
  bool m_eventTypeHasBeenSet = false;
  bool m_subTypeHasBeenSet = false;
  bool m_eventIdHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_eventTimestampHasBeenSet = false;
  bool m_parentIdHasBeenSet = false;
  bool m_executionStartedDetailsHasBeenSet = false;
  bool m_executionSucceededDetailsHasBeenSet = false;
  bool m_executionFailedDetailsHasBeenSet = false;
  bool m_executionTimedOutDetailsHasBeenSet = false;
  bool m_executionStoppedDetailsHasBeenSet = false;
  bool m_contextStartedDetailsHasBeenSet = false;
  bool m_contextSucceededDetailsHasBeenSet = false;
  bool m_contextFailedDetailsHasBeenSet = false;
  bool m_waitStartedDetailsHasBeenSet = false;
  bool m_waitSucceededDetailsHasBeenSet = false;
  bool m_waitCancelledDetailsHasBeenSet = false;
  bool m_stepStartedDetailsHasBeenSet = false;
  bool m_stepSucceededDetailsHasBeenSet = false;
  bool m_stepFailedDetailsHasBeenSet = false;
  bool m_chainedInvokeStartedDetailsHasBeenSet = false;
  bool m_chainedInvokeSucceededDetailsHasBeenSet = false;
  bool m_chainedInvokeFailedDetailsHasBeenSet = false;
  bool m_chainedInvokeTimedOutDetailsHasBeenSet = false;
  bool m_chainedInvokeStoppedDetailsHasBeenSet = false;
  bool m_callbackStartedDetailsHasBeenSet = false;
  bool m_callbackSucceededDetailsHasBeenSet = false;
  bool m_callbackFailedDetailsHasBeenSet = false;
  bool m_callbackTimedOutDetailsHasBeenSet = false;
  bool m_invocationCompletedDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
