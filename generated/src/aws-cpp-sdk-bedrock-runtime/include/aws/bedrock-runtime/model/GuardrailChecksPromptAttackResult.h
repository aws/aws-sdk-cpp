/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksPromptAttackResultEntry.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockRuntime {
namespace Model {

/**
 * <p>The prompt attack check results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksPromptAttackResult">AWS
 * API Reference</a></p>
 */
class GuardrailChecksPromptAttackResult {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackResult() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The per-category prompt attack results.</p>
   */
  inline const Aws::Vector<GuardrailChecksPromptAttackResultEntry>& GetResults() const { return m_results; }
  inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }
  template <typename ResultsT = Aws::Vector<GuardrailChecksPromptAttackResultEntry>>
  void SetResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results = std::forward<ResultsT>(value);
  }
  template <typename ResultsT = Aws::Vector<GuardrailChecksPromptAttackResultEntry>>
  GuardrailChecksPromptAttackResult& WithResults(ResultsT&& value) {
    SetResults(std::forward<ResultsT>(value));
    return *this;
  }
  template <typename ResultsT = GuardrailChecksPromptAttackResultEntry>
  GuardrailChecksPromptAttackResult& AddResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results.emplace_back(std::forward<ResultsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GuardrailChecksPromptAttackResultEntry> m_results;
  bool m_resultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
