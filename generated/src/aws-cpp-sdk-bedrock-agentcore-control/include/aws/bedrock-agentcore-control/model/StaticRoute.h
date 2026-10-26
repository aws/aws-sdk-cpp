/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Fallback.h>
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
 * <p>A static route to a single gateway target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/StaticRoute">AWS
 * API Reference</a></p>
 */
class StaticRoute {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API StaticRoute() = default;
  AWS_BEDROCKAGENTCORECONTROL_API StaticRoute(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API StaticRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the target to route requests to.</p>
   */
  inline const Aws::String& GetTargetName() const { return m_targetName; }
  inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
  template <typename TargetNameT = Aws::String>
  void SetTargetName(TargetNameT&& value) {
    m_targetNameHasBeenSet = true;
    m_targetName = std::forward<TargetNameT>(value);
  }
  template <typename TargetNameT = Aws::String>
  StaticRoute& WithTargetName(TargetNameT&& value) {
    SetTargetName(std::forward<TargetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model ID to send to the target. Supported only for inference targets. If
   * you don't specify a model, the gateway sends the model from the original
   * request.</p>
   */
  inline const Aws::String& GetModel() const { return m_model; }
  inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
  template <typename ModelT = Aws::String>
  void SetModel(ModelT&& value) {
    m_modelHasBeenSet = true;
    m_model = std::forward<ModelT>(value);
  }
  template <typename ModelT = Aws::String>
  StaticRoute& WithModel(ModelT&& value) {
    SetModel(std::forward<ModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fallback configuration for this route. Supported only for inference
   * targets.</p>
   */
  inline const Fallback& GetFallback() const { return m_fallback; }
  inline bool FallbackHasBeenSet() const { return m_fallbackHasBeenSet; }
  template <typename FallbackT = Fallback>
  void SetFallback(FallbackT&& value) {
    m_fallbackHasBeenSet = true;
    m_fallback = std::forward<FallbackT>(value);
  }
  template <typename FallbackT = Fallback>
  StaticRoute& WithFallback(FallbackT&& value) {
    SetFallback(std::forward<FallbackT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetName;

  Aws::String m_model;

  Fallback m_fallback;
  bool m_targetNameHasBeenSet = false;
  bool m_modelHasBeenSet = false;
  bool m_fallbackHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
