/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessHookEventBridgeTarget.h>
#include <aws/bedrock-agentcore-control/model/HarnessHookLambdaTarget.h>
#include <aws/bedrock-agentcore-control/model/HarnessHookSnsTarget.h>

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
 * <p>The target that receives lifecycle hook events. Specify one target
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessHookTarget">AWS
 * API Reference</a></p>
 */
class HarnessHookTarget {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessHookTarget() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessHookTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessHookTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A Lambda hook target that invokes an AWS Lambda function synchronously and
   * waits for its response.</p>
   */
  inline const HarnessHookLambdaTarget& GetLambda() const { return m_lambda; }
  inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
  template <typename LambdaT = HarnessHookLambdaTarget>
  void SetLambda(LambdaT&& value) {
    m_lambdaHasBeenSet = true;
    m_lambda = std::forward<LambdaT>(value);
  }
  template <typename LambdaT = HarnessHookLambdaTarget>
  HarnessHookTarget& WithLambda(LambdaT&& value) {
    SetLambda(std::forward<LambdaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon SNS hook target that publishes the hook event without waiting for a
   * response.</p>
   */
  inline const HarnessHookSnsTarget& GetSns() const { return m_sns; }
  inline bool SnsHasBeenSet() const { return m_snsHasBeenSet; }
  template <typename SnsT = HarnessHookSnsTarget>
  void SetSns(SnsT&& value) {
    m_snsHasBeenSet = true;
    m_sns = std::forward<SnsT>(value);
  }
  template <typename SnsT = HarnessHookSnsTarget>
  HarnessHookTarget& WithSns(SnsT&& value) {
    SetSns(std::forward<SnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon EventBridge hook target that sends the hook event without waiting
   * for a response.</p>
   */
  inline const HarnessHookEventBridgeTarget& GetEventBridge() const { return m_eventBridge; }
  inline bool EventBridgeHasBeenSet() const { return m_eventBridgeHasBeenSet; }
  template <typename EventBridgeT = HarnessHookEventBridgeTarget>
  void SetEventBridge(EventBridgeT&& value) {
    m_eventBridgeHasBeenSet = true;
    m_eventBridge = std::forward<EventBridgeT>(value);
  }
  template <typename EventBridgeT = HarnessHookEventBridgeTarget>
  HarnessHookTarget& WithEventBridge(EventBridgeT&& value) {
    SetEventBridge(std::forward<EventBridgeT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessHookLambdaTarget m_lambda;

  HarnessHookSnsTarget m_sns;

  HarnessHookEventBridgeTarget m_eventBridge;
  bool m_lambdaHasBeenSet = false;
  bool m_snsHasBeenSet = false;
  bool m_eventBridgeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
