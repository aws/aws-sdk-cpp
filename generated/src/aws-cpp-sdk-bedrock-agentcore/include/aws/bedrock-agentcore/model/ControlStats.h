/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
 * <p>Statistics for the control variant in an A/B test.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ControlStats">AWS
 * API Reference</a></p>
 */
class ControlStats {
 public:
  AWS_BEDROCKAGENTCORE_API ControlStats() = default;
  AWS_BEDROCKAGENTCORE_API ControlStats(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ControlStats& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the control variant.</p>
   */
  inline const Aws::String& GetVariantName() const { return m_variantName; }
  inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }
  template <typename VariantNameT = Aws::String>
  void SetVariantName(VariantNameT&& value) {
    m_variantNameHasBeenSet = true;
    m_variantName = std::forward<VariantNameT>(value);
  }
  template <typename VariantNameT = Aws::String>
  ControlStats& WithVariantName(VariantNameT&& value) {
    SetVariantName(std::forward<VariantNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions evaluated for the control variant.</p>
   */
  inline int GetSampleSize() const { return m_sampleSize; }
  inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
  inline void SetSampleSize(int value) {
    m_sampleSizeHasBeenSet = true;
    m_sampleSize = value;
  }
  inline ControlStats& WithSampleSize(int value) {
    SetSampleSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mean evaluation score for the control variant.</p>
   */
  inline double GetMean() const { return m_mean; }
  inline bool MeanHasBeenSet() const { return m_meanHasBeenSet; }
  inline void SetMean(double value) {
    m_meanHasBeenSet = true;
    m_mean = value;
  }
  inline ControlStats& WithMean(double value) {
    SetMean(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_variantName;

  int m_sampleSize{0};

  double m_mean{0.0};
  bool m_variantNameHasBeenSet = false;
  bool m_sampleSizeHasBeenSet = false;
  bool m_meanHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
