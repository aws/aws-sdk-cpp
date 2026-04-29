/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>A filter to restrict which gateway target paths are included in the A/B
 * test.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GatewayFilter">AWS
 * API Reference</a></p>
 */
class GatewayFilter {
 public:
  AWS_BEDROCKAGENTCORE_API GatewayFilter() = default;
  AWS_BEDROCKAGENTCORE_API GatewayFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GatewayFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of target path patterns to include in the A/B test.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTargetPaths() const { return m_targetPaths; }
  inline bool TargetPathsHasBeenSet() const { return m_targetPathsHasBeenSet; }
  template <typename TargetPathsT = Aws::Vector<Aws::String>>
  void SetTargetPaths(TargetPathsT&& value) {
    m_targetPathsHasBeenSet = true;
    m_targetPaths = std::forward<TargetPathsT>(value);
  }
  template <typename TargetPathsT = Aws::Vector<Aws::String>>
  GatewayFilter& WithTargetPaths(TargetPathsT&& value) {
    SetTargetPaths(std::forward<TargetPathsT>(value));
    return *this;
  }
  template <typename TargetPathsT = Aws::String>
  GatewayFilter& AddTargetPaths(TargetPathsT&& value) {
    m_targetPathsHasBeenSet = true;
    m_targetPaths.emplace_back(std::forward<TargetPathsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_targetPaths;
  bool m_targetPathsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
