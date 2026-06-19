/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/InsightsFailureCategory.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A signal indicating a detected failure within a span.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InsightsFailureSignal">AWS
 * API Reference</a></p>
 */
class InsightsFailureSignal {
 public:
  AWS_BEDROCKAGENTCORE_API InsightsFailureSignal() = default;
  AWS_BEDROCKAGENTCORE_API InsightsFailureSignal(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API InsightsFailureSignal& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The failure category classification for this signal.</p>
   */
  inline InsightsFailureCategory GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  inline void SetCategory(InsightsFailureCategory value) {
    m_categoryHasBeenSet = true;
    m_category = value;
  }
  inline InsightsFailureSignal& WithCategory(InsightsFailureCategory value) {
    SetCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evidence supporting the failure detection.</p>
   */
  inline const Aws::String& GetEvidence() const { return m_evidence; }
  inline bool EvidenceHasBeenSet() const { return m_evidenceHasBeenSet; }
  template <typename EvidenceT = Aws::String>
  void SetEvidence(EvidenceT&& value) {
    m_evidenceHasBeenSet = true;
    m_evidence = std::forward<EvidenceT>(value);
  }
  template <typename EvidenceT = Aws::String>
  InsightsFailureSignal& WithEvidence(EvidenceT&& value) {
    SetEvidence(std::forward<EvidenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence score of the failure detection.</p>
   */
  inline double GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(double value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline InsightsFailureSignal& WithConfidence(double value) {
    SetConfidence(value);
    return *this;
  }
  ///@}
 private:
  InsightsFailureCategory m_category{InsightsFailureCategory::NOT_SET};

  Aws::String m_evidence;

  double m_confidence{0.0};
  bool m_categoryHasBeenSet = false;
  bool m_evidenceHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
