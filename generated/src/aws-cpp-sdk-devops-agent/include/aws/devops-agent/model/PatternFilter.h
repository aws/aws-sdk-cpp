/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>A regex-based match condition. Passes when the value matches any
 * pattern.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/PatternFilter">AWS
 * API Reference</a></p>
 */
class PatternFilter {
 public:
  AWS_DEVOPSAGENT_API PatternFilter() = default;
  AWS_DEVOPSAGENT_API PatternFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API PatternFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Anchored full-match regex patterns. The condition passes when the value
   * matches at least one pattern.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPatterns() const { return m_patterns; }
  inline bool PatternsHasBeenSet() const { return m_patternsHasBeenSet; }
  template <typename PatternsT = Aws::Vector<Aws::String>>
  void SetPatterns(PatternsT&& value) {
    m_patternsHasBeenSet = true;
    m_patterns = std::forward<PatternsT>(value);
  }
  template <typename PatternsT = Aws::Vector<Aws::String>>
  PatternFilter& WithPatterns(PatternsT&& value) {
    SetPatterns(std::forward<PatternsT>(value));
    return *this;
  }
  template <typename PatternsT = Aws::String>
  PatternFilter& AddPatterns(PatternsT&& value) {
    m_patternsHasBeenSet = true;
    m_patterns.emplace_back(std::forward<PatternsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_patterns;
  bool m_patternsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
