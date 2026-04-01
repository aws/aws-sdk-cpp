/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ActionFailurePolicy.h>
#include <aws/mailmanager/model/LambdaInvocationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MailManager {
namespace Model {

/**
 * <p>The action to invoke an Amazon Web Services Lambda function for processing
 * the email.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/InvokeLambdaAction">AWS
 * API Reference</a></p>
 */
class InvokeLambdaAction {
 public:
  AWS_MAILMANAGER_API InvokeLambdaAction() = default;
  AWS_MAILMANAGER_API InvokeLambdaAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_MAILMANAGER_API InvokeLambdaAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A policy that states what to do in the case of failure. The action will fail
   * if there are configuration errors. For example, the Amazon Web Services Lambda
   * function no longer exists.</p>
   */
  inline ActionFailurePolicy GetActionFailurePolicy() const { return m_actionFailurePolicy; }
  inline bool ActionFailurePolicyHasBeenSet() const { return m_actionFailurePolicyHasBeenSet; }
  inline void SetActionFailurePolicy(ActionFailurePolicy value) {
    m_actionFailurePolicyHasBeenSet = true;
    m_actionFailurePolicy = value;
  }
  inline InvokeLambdaAction& WithActionFailurePolicy(ActionFailurePolicy value) {
    SetActionFailurePolicy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Lambda function to invoke.</p>
   */
  inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
  inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
  template <typename FunctionArnT = Aws::String>
  void SetFunctionArn(FunctionArnT&& value) {
    m_functionArnHasBeenSet = true;
    m_functionArn = std::forward<FunctionArnT>(value);
  }
  template <typename FunctionArnT = Aws::String>
  InvokeLambdaAction& WithFunctionArn(FunctionArnT&& value) {
    SetFunctionArn(std::forward<FunctionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The invocation type of the Lambda function. Use EVENT for asynchronous
   * invocation or REQUEST_RESPONSE for synchronous invocation.</p>
   */
  inline LambdaInvocationType GetInvocationType() const { return m_invocationType; }
  inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }
  inline void SetInvocationType(LambdaInvocationType value) {
    m_invocationTypeHasBeenSet = true;
    m_invocationType = value;
  }
  inline InvokeLambdaAction& WithInvocationType(LambdaInvocationType value) {
    SetInvocationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role to use to invoke the Lambda
   * function.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  InvokeLambdaAction& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time in minutes that the email processing can be retried if the
   * Lambda invocation fails. The maximum value is 2160 minutes (36 hours).</p>
   */
  inline int GetRetryTimeMinutes() const { return m_retryTimeMinutes; }
  inline bool RetryTimeMinutesHasBeenSet() const { return m_retryTimeMinutesHasBeenSet; }
  inline void SetRetryTimeMinutes(int value) {
    m_retryTimeMinutesHasBeenSet = true;
    m_retryTimeMinutes = value;
  }
  inline InvokeLambdaAction& WithRetryTimeMinutes(int value) {
    SetRetryTimeMinutes(value);
    return *this;
  }
  ///@}
 private:
  ActionFailurePolicy m_actionFailurePolicy{ActionFailurePolicy::NOT_SET};

  Aws::String m_functionArn;

  LambdaInvocationType m_invocationType{LambdaInvocationType::NOT_SET};

  Aws::String m_roleArn;

  int m_retryTimeMinutes{0};
  bool m_actionFailurePolicyHasBeenSet = false;
  bool m_functionArnHasBeenSet = false;
  bool m_invocationTypeHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_retryTimeMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
