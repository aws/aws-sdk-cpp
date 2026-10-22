/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/SignalComputation.h>
#include <aws/continuum/model/SignalConfidenceReasoning.h>
#include <aws/continuum/model/SignalDimension.h>
#include <aws/continuum/model/SignalExploitability.h>
#include <aws/continuum/model/SignalImpactDimensions.h>
#include <aws/continuum/model/SignalPreconditions.h>
#include <aws/continuum/model/SignalStrength.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>One producer's conclusion about one subject on one scoring
 * dimension.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/PrevalidationSignal">AWS
 * API Reference</a></p>
 */
class PrevalidationSignal {
 public:
  AWS_CONTINUUM_API PrevalidationSignal() = default;
  AWS_CONTINUUM_API PrevalidationSignal(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API PrevalidationSignal& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>What this signal is about, such as a finding or issue reference.</p>
   */
  inline const Aws::String& GetSubjectRef() const { return m_subjectRef; }
  inline bool SubjectRefHasBeenSet() const { return m_subjectRefHasBeenSet; }
  template <typename SubjectRefT = Aws::String>
  void SetSubjectRef(SubjectRefT&& value) {
    m_subjectRefHasBeenSet = true;
    m_subjectRef = std::forward<SubjectRefT>(value);
  }
  template <typename SubjectRefT = Aws::String>
  PrevalidationSignal& WithSubjectRef(SubjectRefT&& value) {
    SetSubjectRef(std::forward<SubjectRefT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The axis this signal speaks to. Absent when the producer reported a dimension
   * with no mapping yet.</p>
   */
  inline SignalDimension GetDimension() const { return m_dimension; }
  inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
  inline void SetDimension(SignalDimension value) {
    m_dimensionHasBeenSet = true;
    m_dimension = value;
  }
  inline PrevalidationSignal& WithDimension(SignalDimension value) {
    SetDimension(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The signal's own rating. This is an input to scoring and is NOT the finding's
   * severity.</p>
   */
  inline SignalStrength GetSignalStrength() const { return m_signalStrength; }
  inline bool SignalStrengthHasBeenSet() const { return m_signalStrengthHasBeenSet; }
  inline void SetSignalStrength(SignalStrength value) {
    m_signalStrengthHasBeenSet = true;
    m_signalStrength = value;
  }
  inline PrevalidationSignal& WithSignalStrength(SignalStrength value) {
    SetSignalStrength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's conclusion.</p>
   */
  inline const Aws::String& GetConclusion() const { return m_conclusion; }
  inline bool ConclusionHasBeenSet() const { return m_conclusionHasBeenSet; }
  template <typename ConclusionT = Aws::String>
  void SetConclusion(ConclusionT&& value) {
    m_conclusionHasBeenSet = true;
    m_conclusion = std::forward<ConclusionT>(value);
  }
  template <typename ConclusionT = Aws::String>
  PrevalidationSignal& WithConclusion(ConclusionT&& value) {
    SetConclusion(std::forward<ConclusionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Stable name of the producer that emitted this signal.</p>
   */
  inline const Aws::String& GetProducerId() const { return m_producerId; }
  inline bool ProducerIdHasBeenSet() const { return m_producerIdHasBeenSet; }
  template <typename ProducerIdT = Aws::String>
  void SetProducerId(ProducerIdT&& value) {
    m_producerIdHasBeenSet = true;
    m_producerId = std::forward<ProducerIdT>(value);
  }
  template <typename ProducerIdT = Aws::String>
  PrevalidationSignal& WithProducerId(ProducerIdT&& value) {
    SetProducerId(std::forward<ProducerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Version of that producer.</p>
   */
  inline const Aws::String& GetProducerVersion() const { return m_producerVersion; }
  inline bool ProducerVersionHasBeenSet() const { return m_producerVersionHasBeenSet; }
  template <typename ProducerVersionT = Aws::String>
  void SetProducerVersion(ProducerVersionT&& value) {
    m_producerVersionHasBeenSet = true;
    m_producerVersion = std::forward<ProducerVersionT>(value);
  }
  template <typename ProducerVersionT = Aws::String>
  PrevalidationSignal& WithProducerVersion(ProducerVersionT&& value) {
    SetProducerVersion(std::forward<ProducerVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's confidence in this conclusion, on its native 0-1 scale. Absent
   * when the stored value falls outside 0-1.</p>
   */
  inline double GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(double value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline PrevalidationSignal& WithConfidence(double value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why the producer is or is not sure, kept structured rather than prose.</p>
   */
  inline const SignalConfidenceReasoning& GetConfidenceReasoning() const { return m_confidenceReasoning; }
  inline bool ConfidenceReasoningHasBeenSet() const { return m_confidenceReasoningHasBeenSet; }
  template <typename ConfidenceReasoningT = SignalConfidenceReasoning>
  void SetConfidenceReasoning(ConfidenceReasoningT&& value) {
    m_confidenceReasoningHasBeenSet = true;
    m_confidenceReasoning = std::forward<ConfidenceReasoningT>(value);
  }
  template <typename ConfidenceReasoningT = SignalConfidenceReasoning>
  PrevalidationSignal& WithConfidenceReasoning(ConfidenceReasoningT&& value) {
    SetConfidenceReasoning(std::forward<ConfidenceReasoningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deterministic values the producer computed from its assessment.</p>
   */
  inline const SignalComputation& GetComputed() const { return m_computed; }
  inline bool ComputedHasBeenSet() const { return m_computedHasBeenSet; }
  template <typename ComputedT = SignalComputation>
  void SetComputed(ComputedT&& value) {
    m_computedHasBeenSet = true;
    m_computed = std::forward<ComputedT>(value);
  }
  template <typename ComputedT = SignalComputation>
  PrevalidationSignal& WithComputed(ComputedT&& value) {
    SetComputed(std::forward<ComputedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The four exploit preconditions a likelihood signal assessed, each with the
   * basis the producer had for it.</p>
   */
  inline const SignalPreconditions& GetPreconditions() const { return m_preconditions; }
  inline bool PreconditionsHasBeenSet() const { return m_preconditionsHasBeenSet; }
  template <typename PreconditionsT = SignalPreconditions>
  void SetPreconditions(PreconditionsT&& value) {
    m_preconditionsHasBeenSet = true;
    m_preconditions = std::forward<PreconditionsT>(value);
  }
  template <typename PreconditionsT = SignalPreconditions>
  PrevalidationSignal& WithPreconditions(PreconditionsT&& value) {
    SetPreconditions(std::forward<PreconditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The three impact dimensions an impact signal assessed, each with the basis
   * the producer had for it. These are what the computed impact band is derived
   * from.</p>
   */
  inline const SignalImpactDimensions& GetImpactDimensions() const { return m_impactDimensions; }
  inline bool ImpactDimensionsHasBeenSet() const { return m_impactDimensionsHasBeenSet; }
  template <typename ImpactDimensionsT = SignalImpactDimensions>
  void SetImpactDimensions(ImpactDimensionsT&& value) {
    m_impactDimensionsHasBeenSet = true;
    m_impactDimensions = std::forward<ImpactDimensionsT>(value);
  }
  template <typename ImpactDimensionsT = SignalImpactDimensions>
  PrevalidationSignal& WithImpactDimensions(ImpactDimensionsT&& value) {
    SetImpactDimensions(std::forward<ImpactDimensionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What validation established about exploitability, on an exploitability
   * signal. This summarizes the verdict the signal was derived from; the proof
   * itself is the VALIDATION_EVIDENCE artifact it cites.</p>
   */
  inline const SignalExploitability& GetExploitability() const { return m_exploitability; }
  inline bool ExploitabilityHasBeenSet() const { return m_exploitabilityHasBeenSet; }
  template <typename ExploitabilityT = SignalExploitability>
  void SetExploitability(ExploitabilityT&& value) {
    m_exploitabilityHasBeenSet = true;
    m_exploitability = std::forward<ExploitabilityT>(value);
  }
  template <typename ExploitabilityT = SignalExploitability>
  PrevalidationSignal& WithExploitability(ExploitabilityT&& value) {
    SetExploitability(std::forward<ExploitabilityT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subjectRef;

  SignalDimension m_dimension{SignalDimension::NOT_SET};

  SignalStrength m_signalStrength{SignalStrength::NOT_SET};

  Aws::String m_conclusion;

  Aws::String m_producerId;

  Aws::String m_producerVersion;

  double m_confidence{0.0};

  SignalConfidenceReasoning m_confidenceReasoning;

  SignalComputation m_computed;

  SignalPreconditions m_preconditions;

  SignalImpactDimensions m_impactDimensions;

  SignalExploitability m_exploitability;
  bool m_subjectRefHasBeenSet = false;
  bool m_dimensionHasBeenSet = false;
  bool m_signalStrengthHasBeenSet = false;
  bool m_conclusionHasBeenSet = false;
  bool m_producerIdHasBeenSet = false;
  bool m_producerVersionHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_confidenceReasoningHasBeenSet = false;
  bool m_computedHasBeenSet = false;
  bool m_preconditionsHasBeenSet = false;
  bool m_impactDimensionsHasBeenSet = false;
  bool m_exploitabilityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
