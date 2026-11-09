/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
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
 * <p>A producer's structured rationale for a signal's confidence.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/SignalConfidenceReasoning">AWS
 * API Reference</a></p>
 */
class SignalConfidenceReasoning {
 public:
  AWS_CONTINUUM_API SignalConfidenceReasoning() = default;
  AWS_CONTINUUM_API SignalConfidenceReasoning(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API SignalConfidenceReasoning& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>One-line rationale.</p>
   */
  inline const Aws::String& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = Aws::String>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = Aws::String>
  SignalConfidenceReasoning& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The individual factors behind it.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFactors() const { return m_factors; }
  inline bool FactorsHasBeenSet() const { return m_factorsHasBeenSet; }
  template <typename FactorsT = Aws::Vector<Aws::String>>
  void SetFactors(FactorsT&& value) {
    m_factorsHasBeenSet = true;
    m_factors = std::forward<FactorsT>(value);
  }
  template <typename FactorsT = Aws::Vector<Aws::String>>
  SignalConfidenceReasoning& WithFactors(FactorsT&& value) {
    SetFactors(std::forward<FactorsT>(value));
    return *this;
  }
  template <typename FactorsT = Aws::String>
  SignalConfidenceReasoning& AddFactors(FactorsT&& value) {
    m_factorsHasBeenSet = true;
    m_factors.emplace_back(std::forward<FactorsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_summary;

  Aws::Vector<Aws::String> m_factors;
  bool m_summaryHasBeenSet = false;
  bool m_factorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
