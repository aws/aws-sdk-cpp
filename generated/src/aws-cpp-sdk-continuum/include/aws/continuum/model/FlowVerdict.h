/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/FlowVerdictValue.h>
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
namespace Continuum {
namespace Model {

/**
 * <p>Validation's verdict for one attack flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/FlowVerdict">AWS
 * API Reference</a></p>
 */
class FlowVerdict {
 public:
  AWS_CONTINUUM_API FlowVerdict() = default;
  AWS_CONTINUUM_API FlowVerdict(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API FlowVerdict& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Identifier of the attack flow assessed.</p>
   */
  inline const Aws::String& GetFlowId() const { return m_flowId; }
  inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }
  template <typename FlowIdT = Aws::String>
  void SetFlowId(FlowIdT&& value) {
    m_flowIdHasBeenSet = true;
    m_flowId = std::forward<FlowIdT>(value);
  }
  template <typename FlowIdT = Aws::String>
  FlowVerdict& WithFlowId(FlowIdT&& value) {
    SetFlowId(std::forward<FlowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Outcome for this flow.</p>
   */
  inline FlowVerdictValue GetVerdict() const { return m_verdict; }
  inline bool VerdictHasBeenSet() const { return m_verdictHasBeenSet; }
  inline void SetVerdict(FlowVerdictValue value) {
    m_verdictHasBeenSet = true;
    m_verdict = value;
  }
  inline FlowVerdict& WithVerdict(FlowVerdictValue value) {
    SetVerdict(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Confidence in this flow's verdict. Absent when out of range.</p>
   */
  inline double GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(double value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline FlowVerdict& WithConfidence(double value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Citations supporting the verdict.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEvidence() const { return m_evidence; }
  inline bool EvidenceHasBeenSet() const { return m_evidenceHasBeenSet; }
  template <typename EvidenceT = Aws::Vector<Aws::String>>
  void SetEvidence(EvidenceT&& value) {
    m_evidenceHasBeenSet = true;
    m_evidence = std::forward<EvidenceT>(value);
  }
  template <typename EvidenceT = Aws::Vector<Aws::String>>
  FlowVerdict& WithEvidence(EvidenceT&& value) {
    SetEvidence(std::forward<EvidenceT>(value));
    return *this;
  }
  template <typename EvidenceT = Aws::String>
  FlowVerdict& AddEvidence(EvidenceT&& value) {
    m_evidenceHasBeenSet = true;
    m_evidence.emplace_back(std::forward<EvidenceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_flowId;

  FlowVerdictValue m_verdict{FlowVerdictValue::NOT_SET};

  double m_confidence{0.0};

  Aws::Vector<Aws::String> m_evidence;
  bool m_flowIdHasBeenSet = false;
  bool m_verdictHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_evidenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
