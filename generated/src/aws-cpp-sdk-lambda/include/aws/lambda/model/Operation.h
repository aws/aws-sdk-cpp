/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/CallbackDetails.h>
#include <aws/lambda/model/ChainedInvokeDetails.h>
#include <aws/lambda/model/ContextDetails.h>
#include <aws/lambda/model/ExecutionDetails.h>
#include <aws/lambda/model/OperationStatus.h>
#include <aws/lambda/model/OperationType.h>
#include <aws/lambda/model/StepDetails.h>
#include <aws/lambda/model/WaitDetails.h>

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
 * <p>Information about an operation within a durable execution.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Operation">AWS
 * API Reference</a></p>
 */
class Operation {
 public:
  AWS_LAMBDA_API Operation() = default;
  AWS_LAMBDA_API Operation(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Operation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  Operation& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
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
  Operation& WithParentId(ParentIdT&& value) {
    SetParentId(std::forward<ParentIdT>(value));
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
  Operation& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of operation.</p>
   */
  inline OperationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(OperationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Operation& WithType(OperationType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subtype of the operation, providing additional categorization.</p>
   */
  inline const Aws::String& GetSubType() const { return m_subType; }
  inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }
  template <typename SubTypeT = Aws::String>
  void SetSubType(SubTypeT&& value) {
    m_subTypeHasBeenSet = true;
    m_subType = std::forward<SubTypeT>(value);
  }
  template <typename SubTypeT = Aws::String>
  Operation& WithSubType(SubTypeT&& value) {
    SetSubType(std::forward<SubTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the operation started, in <a
   * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
   * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
   */
  inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
  inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  void SetStartTimestamp(StartTimestampT&& value) {
    m_startTimestampHasBeenSet = true;
    m_startTimestamp = std::forward<StartTimestampT>(value);
  }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  Operation& WithStartTimestamp(StartTimestampT&& value) {
    SetStartTimestamp(std::forward<StartTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the operation ended, in <a
   * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
   * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
   */
  inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
  inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
  template <typename EndTimestampT = Aws::Utils::DateTime>
  void SetEndTimestamp(EndTimestampT&& value) {
    m_endTimestampHasBeenSet = true;
    m_endTimestamp = std::forward<EndTimestampT>(value);
  }
  template <typename EndTimestampT = Aws::Utils::DateTime>
  Operation& WithEndTimestamp(EndTimestampT&& value) {
    SetEndTimestamp(std::forward<EndTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the operation.</p>
   */
  inline OperationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(OperationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Operation& WithStatus(OperationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the execution, if this operation represents an execution.</p>
   */
  inline const ExecutionDetails& GetExecutionDetails() const { return m_executionDetails; }
  inline bool ExecutionDetailsHasBeenSet() const { return m_executionDetailsHasBeenSet; }
  template <typename ExecutionDetailsT = ExecutionDetails>
  void SetExecutionDetails(ExecutionDetailsT&& value) {
    m_executionDetailsHasBeenSet = true;
    m_executionDetails = std::forward<ExecutionDetailsT>(value);
  }
  template <typename ExecutionDetailsT = ExecutionDetails>
  Operation& WithExecutionDetails(ExecutionDetailsT&& value) {
    SetExecutionDetails(std::forward<ExecutionDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the context, if this operation represents a context.</p>
   */
  inline const ContextDetails& GetContextDetails() const { return m_contextDetails; }
  inline bool ContextDetailsHasBeenSet() const { return m_contextDetailsHasBeenSet; }
  template <typename ContextDetailsT = ContextDetails>
  void SetContextDetails(ContextDetailsT&& value) {
    m_contextDetailsHasBeenSet = true;
    m_contextDetails = std::forward<ContextDetailsT>(value);
  }
  template <typename ContextDetailsT = ContextDetails>
  Operation& WithContextDetails(ContextDetailsT&& value) {
    SetContextDetails(std::forward<ContextDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the step, if this operation represents a step.</p>
   */
  inline const StepDetails& GetStepDetails() const { return m_stepDetails; }
  inline bool StepDetailsHasBeenSet() const { return m_stepDetailsHasBeenSet; }
  template <typename StepDetailsT = StepDetails>
  void SetStepDetails(StepDetailsT&& value) {
    m_stepDetailsHasBeenSet = true;
    m_stepDetails = std::forward<StepDetailsT>(value);
  }
  template <typename StepDetailsT = StepDetails>
  Operation& WithStepDetails(StepDetailsT&& value) {
    SetStepDetails(std::forward<StepDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the wait operation, if this operation represents a wait.</p>
   */
  inline const WaitDetails& GetWaitDetails() const { return m_waitDetails; }
  inline bool WaitDetailsHasBeenSet() const { return m_waitDetailsHasBeenSet; }
  template <typename WaitDetailsT = WaitDetails>
  void SetWaitDetails(WaitDetailsT&& value) {
    m_waitDetailsHasBeenSet = true;
    m_waitDetails = std::forward<WaitDetailsT>(value);
  }
  template <typename WaitDetailsT = WaitDetails>
  Operation& WithWaitDetails(WaitDetailsT&& value) {
    SetWaitDetails(std::forward<WaitDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CallbackDetails& GetCallbackDetails() const { return m_callbackDetails; }
  inline bool CallbackDetailsHasBeenSet() const { return m_callbackDetailsHasBeenSet; }
  template <typename CallbackDetailsT = CallbackDetails>
  void SetCallbackDetails(CallbackDetailsT&& value) {
    m_callbackDetailsHasBeenSet = true;
    m_callbackDetails = std::forward<CallbackDetailsT>(value);
  }
  template <typename CallbackDetailsT = CallbackDetails>
  Operation& WithCallbackDetails(CallbackDetailsT&& value) {
    SetCallbackDetails(std::forward<CallbackDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ChainedInvokeDetails& GetChainedInvokeDetails() const { return m_chainedInvokeDetails; }
  inline bool ChainedInvokeDetailsHasBeenSet() const { return m_chainedInvokeDetailsHasBeenSet; }
  template <typename ChainedInvokeDetailsT = ChainedInvokeDetails>
  void SetChainedInvokeDetails(ChainedInvokeDetailsT&& value) {
    m_chainedInvokeDetailsHasBeenSet = true;
    m_chainedInvokeDetails = std::forward<ChainedInvokeDetailsT>(value);
  }
  template <typename ChainedInvokeDetailsT = ChainedInvokeDetails>
  Operation& WithChainedInvokeDetails(ChainedInvokeDetailsT&& value) {
    SetChainedInvokeDetails(std::forward<ChainedInvokeDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_parentId;
  bool m_parentIdHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  OperationType m_type{OperationType::NOT_SET};
  bool m_typeHasBeenSet = false;

  Aws::String m_subType;
  bool m_subTypeHasBeenSet = false;

  Aws::Utils::DateTime m_startTimestamp{};
  bool m_startTimestampHasBeenSet = false;

  Aws::Utils::DateTime m_endTimestamp{};
  bool m_endTimestampHasBeenSet = false;

  OperationStatus m_status{OperationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  ExecutionDetails m_executionDetails;
  bool m_executionDetailsHasBeenSet = false;

  ContextDetails m_contextDetails;
  bool m_contextDetailsHasBeenSet = false;

  StepDetails m_stepDetails;
  bool m_stepDetailsHasBeenSet = false;

  WaitDetails m_waitDetails;
  bool m_waitDetailsHasBeenSet = false;

  CallbackDetails m_callbackDetails;
  bool m_callbackDetailsHasBeenSet = false;

  ChainedInvokeDetails m_chainedInvokeDetails;
  bool m_chainedInvokeDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
