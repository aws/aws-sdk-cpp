/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessHookFailureMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The configuration for an AWS Lambda hook target.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessHookLambdaTarget">AWS
 * API Reference</a></p>
 */
class HarnessHookLambdaTarget {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessHookLambdaTarget() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessHookLambdaTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessHookLambdaTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Lambda function to invoke.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  HarnessHookLambdaTarget& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of seconds to wait for the Lambda function response. The
   * default is 60 seconds.</p>
   */
  inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
  inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
  inline void SetTimeoutSeconds(int value) {
    m_timeoutSecondsHasBeenSet = true;
    m_timeoutSeconds = value;
  }
  inline HarnessHookLambdaTarget& WithTimeoutSeconds(int value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The behavior when the Lambda function times out, returns an error, or returns
   * an invalid response. The default is <code>DENY</code>.</p>
   */
  inline HarnessHookFailureMode GetFailureMode() const { return m_failureMode; }
  inline bool FailureModeHasBeenSet() const { return m_failureModeHasBeenSet; }
  inline void SetFailureMode(HarnessHookFailureMode value) {
    m_failureModeHasBeenSet = true;
    m_failureMode = value;
  }
  inline HarnessHookLambdaTarget& WithFailureMode(HarnessHookFailureMode value) {
    SetFailureMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  int m_timeoutSeconds{0};

  HarnessHookFailureMode m_failureMode{HarnessHookFailureMode::NOT_SET};
  bool m_arnHasBeenSet = false;
  bool m_timeoutSecondsHasBeenSet = false;
  bool m_failureModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
