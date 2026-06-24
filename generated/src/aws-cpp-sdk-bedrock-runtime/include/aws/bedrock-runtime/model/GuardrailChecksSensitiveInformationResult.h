/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksSensitiveInformationResultEntry.h>
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
 * <p>The sensitive information check results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksSensitiveInformationResult">AWS
 * API Reference</a></p>
 */
class GuardrailChecksSensitiveInformationResult {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksSensitiveInformationResult() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksSensitiveInformationResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksSensitiveInformationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The detected sensitive information entities.</p>
   */
  inline const Aws::Vector<GuardrailChecksSensitiveInformationResultEntry>& GetResults() const { return m_results; }
  inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }
  template <typename ResultsT = Aws::Vector<GuardrailChecksSensitiveInformationResultEntry>>
  void SetResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results = std::forward<ResultsT>(value);
  }
  template <typename ResultsT = Aws::Vector<GuardrailChecksSensitiveInformationResultEntry>>
  GuardrailChecksSensitiveInformationResult& WithResults(ResultsT&& value) {
    SetResults(std::forward<ResultsT>(value));
    return *this;
  }
  template <typename ResultsT = GuardrailChecksSensitiveInformationResultEntry>
  GuardrailChecksSensitiveInformationResult& AddResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results.emplace_back(std::forward<ResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the results were truncated because the number of detected
   * entities exceeded the maximum limit.</p>
   */
  inline bool GetTruncated() const { return m_truncated; }
  inline bool TruncatedHasBeenSet() const { return m_truncatedHasBeenSet; }
  inline void SetTruncated(bool value) {
    m_truncatedHasBeenSet = true;
    m_truncated = value;
  }
  inline GuardrailChecksSensitiveInformationResult& WithTruncated(bool value) {
    SetTruncated(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GuardrailChecksSensitiveInformationResultEntry> m_results;

  bool m_truncated{false};
  bool m_resultsHasBeenSet = false;
  bool m_truncatedHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
