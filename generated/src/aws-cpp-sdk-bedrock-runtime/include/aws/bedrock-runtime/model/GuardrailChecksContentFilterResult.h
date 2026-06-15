/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksContentFilterResultEntry.h>
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
 * <p>The content filter check results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksContentFilterResult">AWS
 * API Reference</a></p>
 */
class GuardrailChecksContentFilterResult {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterResult() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The per-category content filter results.</p>
   */
  inline const Aws::Vector<GuardrailChecksContentFilterResultEntry>& GetResults() const { return m_results; }
  inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }
  template <typename ResultsT = Aws::Vector<GuardrailChecksContentFilterResultEntry>>
  void SetResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results = std::forward<ResultsT>(value);
  }
  template <typename ResultsT = Aws::Vector<GuardrailChecksContentFilterResultEntry>>
  GuardrailChecksContentFilterResult& WithResults(ResultsT&& value) {
    SetResults(std::forward<ResultsT>(value));
    return *this;
  }
  template <typename ResultsT = GuardrailChecksContentFilterResultEntry>
  GuardrailChecksContentFilterResult& AddResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results.emplace_back(std::forward<ResultsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GuardrailChecksContentFilterResultEntry> m_results;
  bool m_resultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
