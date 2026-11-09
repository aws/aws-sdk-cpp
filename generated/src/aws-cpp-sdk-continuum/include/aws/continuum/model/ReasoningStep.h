/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
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
 * <p>One step in the validation agent's reasoning chain.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ReasoningStep">AWS
 * API Reference</a></p>
 */
class ReasoningStep {
 public:
  AWS_CONTINUUM_API ReasoningStep() = default;
  AWS_CONTINUUM_API ReasoningStep(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API ReasoningStep& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Position of this step in the chain.</p>
   */
  inline int GetStep() const { return m_step; }
  inline bool StepHasBeenSet() const { return m_stepHasBeenSet; }
  inline void SetStep(int value) {
    m_stepHasBeenSet = true;
    m_step = value;
  }
  inline ReasoningStep& WithStep(int value) {
    SetStep(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The claim or conclusion reached at this step.</p>
   */
  inline const Aws::String& GetClaim() const { return m_claim; }
  inline bool ClaimHasBeenSet() const { return m_claimHasBeenSet; }
  template <typename ClaimT = Aws::String>
  void SetClaim(ClaimT&& value) {
    m_claimHasBeenSet = true;
    m_claim = std::forward<ClaimT>(value);
  }
  template <typename ClaimT = Aws::String>
  ReasoningStep& WithClaim(ClaimT&& value) {
    SetClaim(std::forward<ClaimT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Citation supporting the claim.</p>
   */
  inline const Aws::String& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = Aws::String>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = Aws::String>
  ReasoningStep& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Confidence in this individual claim, on the producer's native 0-1 scale.</p>
   */
  inline double GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(double value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline ReasoningStep& WithConfidence(double value) {
    SetConfidence(value);
    return *this;
  }
  ///@}
 private:
  int m_step{0};

  Aws::String m_claim;

  Aws::String m_source;

  double m_confidence{0.0};
  bool m_stepHasBeenSet = false;
  bool m_claimHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
