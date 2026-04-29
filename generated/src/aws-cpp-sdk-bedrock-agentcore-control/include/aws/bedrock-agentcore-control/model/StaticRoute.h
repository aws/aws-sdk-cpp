/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
 private:
  Aws::String m_targetName;
  bool m_targetNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
