/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/EventInput.h>

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
 * <p>Contains details about a chained function invocation that has started
 * execution, including start time and execution context.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ChainedInvokeStartedDetails">AWS
 * API Reference</a></p>
 */
class ChainedInvokeStartedDetails {
 public:
  AWS_LAMBDA_API ChainedInvokeStartedDetails() = default;
  AWS_LAMBDA_API ChainedInvokeStartedDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ChainedInvokeStartedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name or ARN of the Lambda function being invoked.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  ChainedInvokeStartedDetails& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tenant identifier for the chained invocation.</p>
   */
  inline const Aws::String& GetTenantId() const { return m_tenantId; }
  inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
  template <typename TenantIdT = Aws::String>
  void SetTenantId(TenantIdT&& value) {
    m_tenantIdHasBeenSet = true;
    m_tenantId = std::forward<TenantIdT>(value);
  }
  template <typename TenantIdT = Aws::String>
  ChainedInvokeStartedDetails& WithTenantId(TenantIdT&& value) {
    SetTenantId(std::forward<TenantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON input payload provided to the chained invocation.</p>
   */
  inline const EventInput& GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = EventInput>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = EventInput>
  ChainedInvokeStartedDetails& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the function that was executed.</p>
   */
  inline const Aws::String& GetExecutedVersion() const { return m_executedVersion; }
  inline bool ExecutedVersionHasBeenSet() const { return m_executedVersionHasBeenSet; }
  template <typename ExecutedVersionT = Aws::String>
  void SetExecutedVersion(ExecutedVersionT&& value) {
    m_executedVersionHasBeenSet = true;
    m_executedVersion = std::forward<ExecutedVersionT>(value);
  }
  template <typename ExecutedVersionT = Aws::String>
  ChainedInvokeStartedDetails& WithExecutedVersion(ExecutedVersionT&& value) {
    SetExecutedVersion(std::forward<ExecutedVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that identifies the durable execution.</p>
   */
  inline const Aws::String& GetDurableExecutionArn() const { return m_durableExecutionArn; }
  inline bool DurableExecutionArnHasBeenSet() const { return m_durableExecutionArnHasBeenSet; }
  template <typename DurableExecutionArnT = Aws::String>
  void SetDurableExecutionArn(DurableExecutionArnT&& value) {
    m_durableExecutionArnHasBeenSet = true;
    m_durableExecutionArn = std::forward<DurableExecutionArnT>(value);
  }
  template <typename DurableExecutionArnT = Aws::String>
  ChainedInvokeStartedDetails& WithDurableExecutionArn(DurableExecutionArnT&& value) {
    SetDurableExecutionArn(std::forward<DurableExecutionArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;
  bool m_functionNameHasBeenSet = false;

  Aws::String m_tenantId;
  bool m_tenantIdHasBeenSet = false;

  EventInput m_input;
  bool m_inputHasBeenSet = false;

  Aws::String m_executedVersion;
  bool m_executedVersionHasBeenSet = false;

  Aws::String m_durableExecutionArn;
  bool m_durableExecutionArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
