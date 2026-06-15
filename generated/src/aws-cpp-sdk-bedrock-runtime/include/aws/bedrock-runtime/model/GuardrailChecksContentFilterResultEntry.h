/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksContentFilterCategory.h>

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
 * <p>The evaluation result for a single content filter category.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksContentFilterResultEntry">AWS
 * API Reference</a></p>
 */
class GuardrailChecksContentFilterResultEntry {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterResultEntry() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterResultEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content filter category that was evaluated.</p>
   */
  inline GuardrailChecksContentFilterCategory GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  inline void SetCategory(GuardrailChecksContentFilterCategory value) {
    m_categoryHasBeenSet = true;
    m_category = value;
  }
  inline GuardrailChecksContentFilterResultEntry& WithCategory(GuardrailChecksContentFilterCategory value) {
    SetCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity score for the category, ranging from 0.0 to 1.0. Higher values
   * indicate greater severity.</p>
   */
  inline double GetSeverityScore() const { return m_severityScore; }
  inline bool SeverityScoreHasBeenSet() const { return m_severityScoreHasBeenSet; }
  inline void SetSeverityScore(double value) {
    m_severityScoreHasBeenSet = true;
    m_severityScore = value;
  }
  inline GuardrailChecksContentFilterResultEntry& WithSeverityScore(double value) {
    SetSeverityScore(value);
    return *this;
  }
  ///@}
 private:
  GuardrailChecksContentFilterCategory m_category{GuardrailChecksContentFilterCategory::NOT_SET};

  double m_severityScore{0.0};
  bool m_categoryHasBeenSet = false;
  bool m_severityScoreHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
