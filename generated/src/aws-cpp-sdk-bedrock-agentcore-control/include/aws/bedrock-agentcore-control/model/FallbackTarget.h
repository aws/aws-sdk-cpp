/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/FallbackTriggers.h>
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
 * <p>Specifies a target to send the request to when the previous target in the
 * fallback chain fails. Includes the target name, the model to send, and the
 * conditions that trigger a fallback from this target to the next
 * one.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/FallbackTarget">AWS
 * API Reference</a></p>
 */
class FallbackTarget {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API FallbackTarget() = default;
  AWS_BEDROCKAGENTCORECONTROL_API FallbackTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API FallbackTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the gateway target to fall back to. The target must be an
   * inference target.</p>
   */
  inline const Aws::String& GetTargetName() const { return m_targetName; }
  inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
  template <typename TargetNameT = Aws::String>
  void SetTargetName(TargetNameT&& value) {
    m_targetNameHasBeenSet = true;
    m_targetName = std::forward<TargetNameT>(value);
  }
  template <typename TargetNameT = Aws::String>
  FallbackTarget& WithTargetName(TargetNameT&& value) {
    SetTargetName(std::forward<TargetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model ID to send to this fallback target. If you don't specify a model,
   * the gateway sends the model from the original request.</p>
   */
  inline const Aws::String& GetModel() const { return m_model; }
  inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
  template <typename ModelT = Aws::String>
  void SetModel(ModelT&& value) {
    m_modelHasBeenSet = true;
    m_model = std::forward<ModelT>(value);
  }
  template <typename ModelT = Aws::String>
  FallbackTarget& WithModel(ModelT&& value) {
    SetModel(std::forward<ModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status codes and errors from this target that cause the gateway to send
   * the request to the next fallback target. This setting isn't inherited from the
   * route. If you omit it, the gateway uses the default triggers: <code>5XX</code>
   * status codes and the <code>CONNECTION_ERROR</code>,
   * <code>FIRST_BYTE_TIMEOUT</code>, and <code>UNROUTABLE</code> errors.</p>
   */
  inline const FallbackTriggers& GetTriggerOn() const { return m_triggerOn; }
  inline bool TriggerOnHasBeenSet() const { return m_triggerOnHasBeenSet; }
  template <typename TriggerOnT = FallbackTriggers>
  void SetTriggerOn(TriggerOnT&& value) {
    m_triggerOnHasBeenSet = true;
    m_triggerOn = std::forward<TriggerOnT>(value);
  }
  template <typename TriggerOnT = FallbackTriggers>
  FallbackTarget& WithTriggerOn(TriggerOnT&& value) {
    SetTriggerOn(std::forward<TriggerOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time, in milliseconds, from sending the request to this target
   * until the first byte of the response body arrives. This setting isn't inherited
   * from the route. If you don't specify a value, no timeout is enforced.</p>
   */
  inline int GetFirstByteTimeoutMilliseconds() const { return m_firstByteTimeoutMilliseconds; }
  inline bool FirstByteTimeoutMillisecondsHasBeenSet() const { return m_firstByteTimeoutMillisecondsHasBeenSet; }
  inline void SetFirstByteTimeoutMilliseconds(int value) {
    m_firstByteTimeoutMillisecondsHasBeenSet = true;
    m_firstByteTimeoutMilliseconds = value;
  }
  inline FallbackTarget& WithFirstByteTimeoutMilliseconds(int value) {
    SetFirstByteTimeoutMilliseconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetName;

  Aws::String m_model;

  FallbackTriggers m_triggerOn;

  int m_firstByteTimeoutMilliseconds{0};
  bool m_targetNameHasBeenSet = false;
  bool m_modelHasBeenSet = false;
  bool m_triggerOnHasBeenSet = false;
  bool m_firstByteTimeoutMillisecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
