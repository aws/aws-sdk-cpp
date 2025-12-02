/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/CallbackOptions.h>
#include <aws/lambda/model/ChainedInvokeOptions.h>
#include <aws/lambda/model/ContextOptions.h>
#include <aws/lambda/model/ErrorObject.h>
#include <aws/lambda/model/OperationAction.h>
#include <aws/lambda/model/OperationType.h>
#include <aws/lambda/model/StepOptions.h>
#include <aws/lambda/model/WaitOptions.h>

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
 * <p>An update to be applied to an operation during checkpointing.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/OperationUpdate">AWS
 * API Reference</a></p>
 */
class OperationUpdate {
 public:
  AWS_LAMBDA_API OperationUpdate() = default;
  AWS_LAMBDA_API OperationUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API OperationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  OperationUpdate& WithId(IdT&& value) {
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
  OperationUpdate& WithParentId(ParentIdT&& value) {
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
  OperationUpdate& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of operation to update.</p>
   */
  inline OperationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(OperationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline OperationUpdate& WithType(OperationType value) {
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
  OperationUpdate& WithSubType(SubTypeT&& value) {
    SetSubType(std::forward<SubTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to take on the operation.</p>
   */
  inline OperationAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(OperationAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline OperationUpdate& WithAction(OperationAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payload for successful operations.</p>
   */
  inline const Aws::String& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = Aws::String>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = Aws::String>
  OperationUpdate& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error information for failed operations.</p>
   */
  inline const ErrorObject& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = ErrorObject>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ErrorObject>
  OperationUpdate& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options for context operations.</p>
   */
  inline const ContextOptions& GetContextOptions() const { return m_contextOptions; }
  inline bool ContextOptionsHasBeenSet() const { return m_contextOptionsHasBeenSet; }
  template <typename ContextOptionsT = ContextOptions>
  void SetContextOptions(ContextOptionsT&& value) {
    m_contextOptionsHasBeenSet = true;
    m_contextOptions = std::forward<ContextOptionsT>(value);
  }
  template <typename ContextOptionsT = ContextOptions>
  OperationUpdate& WithContextOptions(ContextOptionsT&& value) {
    SetContextOptions(std::forward<ContextOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options for step operations.</p>
   */
  inline const StepOptions& GetStepOptions() const { return m_stepOptions; }
  inline bool StepOptionsHasBeenSet() const { return m_stepOptionsHasBeenSet; }
  template <typename StepOptionsT = StepOptions>
  void SetStepOptions(StepOptionsT&& value) {
    m_stepOptionsHasBeenSet = true;
    m_stepOptions = std::forward<StepOptionsT>(value);
  }
  template <typename StepOptionsT = StepOptions>
  OperationUpdate& WithStepOptions(StepOptionsT&& value) {
    SetStepOptions(std::forward<StepOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options for wait operations.</p>
   */
  inline const WaitOptions& GetWaitOptions() const { return m_waitOptions; }
  inline bool WaitOptionsHasBeenSet() const { return m_waitOptionsHasBeenSet; }
  template <typename WaitOptionsT = WaitOptions>
  void SetWaitOptions(WaitOptionsT&& value) {
    m_waitOptionsHasBeenSet = true;
    m_waitOptions = std::forward<WaitOptionsT>(value);
  }
  template <typename WaitOptionsT = WaitOptions>
  OperationUpdate& WithWaitOptions(WaitOptionsT&& value) {
    SetWaitOptions(std::forward<WaitOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CallbackOptions& GetCallbackOptions() const { return m_callbackOptions; }
  inline bool CallbackOptionsHasBeenSet() const { return m_callbackOptionsHasBeenSet; }
  template <typename CallbackOptionsT = CallbackOptions>
  void SetCallbackOptions(CallbackOptionsT&& value) {
    m_callbackOptionsHasBeenSet = true;
    m_callbackOptions = std::forward<CallbackOptionsT>(value);
  }
  template <typename CallbackOptionsT = CallbackOptions>
  OperationUpdate& WithCallbackOptions(CallbackOptionsT&& value) {
    SetCallbackOptions(std::forward<CallbackOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ChainedInvokeOptions& GetChainedInvokeOptions() const { return m_chainedInvokeOptions; }
  inline bool ChainedInvokeOptionsHasBeenSet() const { return m_chainedInvokeOptionsHasBeenSet; }
  template <typename ChainedInvokeOptionsT = ChainedInvokeOptions>
  void SetChainedInvokeOptions(ChainedInvokeOptionsT&& value) {
    m_chainedInvokeOptionsHasBeenSet = true;
    m_chainedInvokeOptions = std::forward<ChainedInvokeOptionsT>(value);
  }
  template <typename ChainedInvokeOptionsT = ChainedInvokeOptions>
  OperationUpdate& WithChainedInvokeOptions(ChainedInvokeOptionsT&& value) {
    SetChainedInvokeOptions(std::forward<ChainedInvokeOptionsT>(value));
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

  OperationAction m_action{OperationAction::NOT_SET};
  bool m_actionHasBeenSet = false;

  Aws::String m_payload;
  bool m_payloadHasBeenSet = false;

  ErrorObject m_error;
  bool m_errorHasBeenSet = false;

  ContextOptions m_contextOptions;
  bool m_contextOptionsHasBeenSet = false;

  StepOptions m_stepOptions;
  bool m_stepOptionsHasBeenSet = false;

  WaitOptions m_waitOptions;
  bool m_waitOptionsHasBeenSet = false;

  CallbackOptions m_callbackOptions;
  bool m_callbackOptionsHasBeenSet = false;

  ChainedInvokeOptions m_chainedInvokeOptions;
  bool m_chainedInvokeOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
