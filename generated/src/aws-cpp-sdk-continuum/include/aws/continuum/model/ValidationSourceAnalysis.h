/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/ExploitEffect.h>
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
 * <p>Proof of exploitability the validation agent produced by reading the
 * repository's source, with nothing built or run. Further members, such as diagram
 * and references, can be added later as optional details.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ValidationSourceAnalysis">AWS
 * API Reference</a></p>
 */
class ValidationSourceAnalysis {
 public:
  AWS_CONTINUUM_API ValidationSourceAnalysis() = default;
  AWS_CONTINUUM_API ValidationSourceAnalysis(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API ValidationSourceAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The non-blank analysis as Markdown: the annotated entry-to-sink walk, its
   * citations, and why the checked guards are absent or bypassed.</p>
   */
  inline const Aws::String& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = Aws::String>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = Aws::String>
  ValidationSourceAnalysis& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Effect the agent concluded WOULD occur. Deliberately not <code>effect</code>:
   * nothing was executed, so this is reasoned from the source and must not be read
   * as an observation. See <code>ValidationExecutedProof.observedEffect</code>.</p>
   */
  inline ExploitEffect GetInferredEffect() const { return m_inferredEffect; }
  inline bool InferredEffectHasBeenSet() const { return m_inferredEffectHasBeenSet; }
  inline void SetInferredEffect(ExploitEffect value) {
    m_inferredEffectHasBeenSet = true;
    m_inferredEffect = value;
  }
  inline ValidationSourceAnalysis& WithInferredEffect(ExploitEffect value) {
    SetInferredEffect(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_summary;

  ExploitEffect m_inferredEffect{ExploitEffect::NOT_SET};
  bool m_summaryHasBeenSet = false;
  bool m_inferredEffectHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
