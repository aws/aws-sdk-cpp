/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Passed to show that AWS Skills should be included.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessSkillAwsSkillsSource">AWS
 * API Reference</a></p>
 */
class HarnessSkillAwsSkillsSource {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSkillAwsSkillsSource() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSkillAwsSkillsSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSkillAwsSkillsSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Optionally filter allowed skills with glob syntax, e.g.,
   * ['core-skills/ *'].</p>
   */
  inline const Aws::Vector<Aws::String>& GetPaths() const { return m_paths; }
  inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
  template <typename PathsT = Aws::Vector<Aws::String>>
  void SetPaths(PathsT&& value) {
    m_pathsHasBeenSet = true;
    m_paths = std::forward<PathsT>(value);
  }
  template <typename PathsT = Aws::Vector<Aws::String>>
  HarnessSkillAwsSkillsSource& WithPaths(PathsT&& value) {
    SetPaths(std::forward<PathsT>(value));
    return *this;
  }
  template <typename PathsT = Aws::String>
  HarnessSkillAwsSkillsSource& AddPaths(PathsT&& value) {
    m_pathsHasBeenSet = true;
    m_paths.emplace_back(std::forward<PathsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_paths;
  bool m_pathsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
