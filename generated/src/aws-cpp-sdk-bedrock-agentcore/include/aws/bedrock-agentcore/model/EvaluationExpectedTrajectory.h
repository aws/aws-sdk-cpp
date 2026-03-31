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
 * <p> The expected tool call trajectory for trajectory-based evaluation.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EvaluationExpectedTrajectory">AWS
 * API Reference</a></p>
 */
class EvaluationExpectedTrajectory {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluationExpectedTrajectory() = default;
  AWS_BEDROCKAGENTCORE_API EvaluationExpectedTrajectory(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EvaluationExpectedTrajectory& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The list of tool names representing the expected tool call sequence. </p>
   */
  inline const Aws::Vector<Aws::String>& GetToolNames() const { return m_toolNames; }
  inline bool ToolNamesHasBeenSet() const { return m_toolNamesHasBeenSet; }
  template <typename ToolNamesT = Aws::Vector<Aws::String>>
  void SetToolNames(ToolNamesT&& value) {
    m_toolNamesHasBeenSet = true;
    m_toolNames = std::forward<ToolNamesT>(value);
  }
  template <typename ToolNamesT = Aws::Vector<Aws::String>>
  EvaluationExpectedTrajectory& WithToolNames(ToolNamesT&& value) {
    SetToolNames(std::forward<ToolNamesT>(value));
    return *this;
  }
  template <typename ToolNamesT = Aws::String>
  EvaluationExpectedTrajectory& AddToolNames(ToolNamesT&& value) {
    m_toolNamesHasBeenSet = true;
    m_toolNames.emplace_back(std::forward<ToolNamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_toolNames;
  bool m_toolNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
