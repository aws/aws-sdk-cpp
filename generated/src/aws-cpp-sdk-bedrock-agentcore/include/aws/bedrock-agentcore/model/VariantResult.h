/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ConfidenceInterval.h>
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
 * <p>Statistical results for a treatment variant compared against the
 * control.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/VariantResult">AWS
 * API Reference</a></p>
 */
class VariantResult {
 public:
  AWS_BEDROCKAGENTCORE_API VariantResult() = default;
  AWS_BEDROCKAGENTCORE_API VariantResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API VariantResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the treatment variant.</p>
   */
  inline const Aws::String& GetVariantName() const { return m_variantName; }
  inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }
  template <typename VariantNameT = Aws::String>
  void SetVariantName(VariantNameT&& value) {
    m_variantNameHasBeenSet = true;
    m_variantName = std::forward<VariantNameT>(value);
  }
  template <typename VariantNameT = Aws::String>
  VariantResult& WithVariantName(VariantNameT&& value) {
    SetVariantName(std::forward<VariantNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions evaluated for this variant.</p>
   */
  inline int GetSampleSize() const { return m_sampleSize; }
  inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
  inline void SetSampleSize(int value) {
    m_sampleSizeHasBeenSet = true;
    m_sampleSize = value;
  }
  inline VariantResult& WithSampleSize(int value) {
    SetSampleSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mean evaluation score for this variant.</p>
   */
  inline double GetMean() const { return m_mean; }
  inline bool MeanHasBeenSet() const { return m_meanHasBeenSet; }
  inline void SetMean(double value) {
    m_meanHasBeenSet = true;
    m_mean = value;
  }
  inline VariantResult& WithMean(double value) {
    SetMean(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The absolute change in mean score compared to the control variant.</p>
   */
  inline double GetAbsoluteChange() const { return m_absoluteChange; }
  inline bool AbsoluteChangeHasBeenSet() const { return m_absoluteChangeHasBeenSet; }
  inline void SetAbsoluteChange(double value) {
    m_absoluteChangeHasBeenSet = true;
    m_absoluteChange = value;
  }
  inline VariantResult& WithAbsoluteChange(double value) {
    SetAbsoluteChange(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage change in mean score compared to the control variant.</p>
   */
  inline double GetPercentChange() const { return m_percentChange; }
  inline bool PercentChangeHasBeenSet() const { return m_percentChangeHasBeenSet; }
  inline void SetPercentChange(double value) {
    m_percentChangeHasBeenSet = true;
    m_percentChange = value;
  }
  inline VariantResult& WithPercentChange(double value) {
    SetPercentChange(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The p-value indicating the statistical significance of the observed
   * difference.</p>
   */
  inline double GetPValue() const { return m_pValue; }
  inline bool PValueHasBeenSet() const { return m_pValueHasBeenSet; }
  inline void SetPValue(double value) {
    m_pValueHasBeenSet = true;
    m_pValue = value;
  }
  inline VariantResult& WithPValue(double value) {
    SetPValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence interval for the observed difference.</p>
   */
  inline const ConfidenceInterval& GetConfidenceInterval() const { return m_confidenceInterval; }
  inline bool ConfidenceIntervalHasBeenSet() const { return m_confidenceIntervalHasBeenSet; }
  template <typename ConfidenceIntervalT = ConfidenceInterval>
  void SetConfidenceInterval(ConfidenceIntervalT&& value) {
    m_confidenceIntervalHasBeenSet = true;
    m_confidenceInterval = std::forward<ConfidenceIntervalT>(value);
  }
  template <typename ConfidenceIntervalT = ConfidenceInterval>
  VariantResult& WithConfidenceInterval(ConfidenceIntervalT&& value) {
    SetConfidenceInterval(std::forward<ConfidenceIntervalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the observed difference is statistically significant.</p>
   */
  inline bool GetIsSignificant() const { return m_isSignificant; }
  inline bool IsSignificantHasBeenSet() const { return m_isSignificantHasBeenSet; }
  inline void SetIsSignificant(bool value) {
    m_isSignificantHasBeenSet = true;
    m_isSignificant = value;
  }
  inline VariantResult& WithIsSignificant(bool value) {
    SetIsSignificant(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_variantName;

  int m_sampleSize{0};

  double m_mean{0.0};

  double m_absoluteChange{0.0};

  double m_percentChange{0.0};

  double m_pValue{0.0};

  ConfidenceInterval m_confidenceInterval;

  bool m_isSignificant{false};
  bool m_variantNameHasBeenSet = false;
  bool m_sampleSizeHasBeenSet = false;
  bool m_meanHasBeenSet = false;
  bool m_absoluteChangeHasBeenSet = false;
  bool m_percentChangeHasBeenSet = false;
  bool m_pValueHasBeenSet = false;
  bool m_confidenceIntervalHasBeenSet = false;
  bool m_isSignificantHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
