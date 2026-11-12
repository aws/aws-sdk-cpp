/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FindingTypeClassification.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains a comparison of findings against the normal behavior of an
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Baseline">AWS
 * API Reference</a></p>
 */
class Baseline {
 public:
  AWS_GUARDDUTY_API Baseline() = default;
  AWS_GUARDDUTY_API Baseline(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Baseline& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of findings.</p>
   */
  inline long long GetTotalFindings() const { return m_totalFindings; }
  inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
  inline void SetTotalFindings(long long value) {
    m_totalFindingsHasBeenSet = true;
    m_totalFindings = value;
  }
  inline Baseline& WithTotalFindings(long long value) {
    SetTotalFindings(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The finding types that are consistent with normal behavior.</p>
   */
  inline const Aws::Vector<FindingTypeClassification>& GetBaselineFindings() const { return m_baselineFindings; }
  inline bool BaselineFindingsHasBeenSet() const { return m_baselineFindingsHasBeenSet; }
  template <typename BaselineFindingsT = Aws::Vector<FindingTypeClassification>>
  void SetBaselineFindings(BaselineFindingsT&& value) {
    m_baselineFindingsHasBeenSet = true;
    m_baselineFindings = std::forward<BaselineFindingsT>(value);
  }
  template <typename BaselineFindingsT = Aws::Vector<FindingTypeClassification>>
  Baseline& WithBaselineFindings(BaselineFindingsT&& value) {
    SetBaselineFindings(std::forward<BaselineFindingsT>(value));
    return *this;
  }
  template <typename BaselineFindingsT = FindingTypeClassification>
  Baseline& AddBaselineFindings(BaselineFindingsT&& value) {
    m_baselineFindingsHasBeenSet = true;
    m_baselineFindings.emplace_back(std::forward<BaselineFindingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The finding types that deviate from normal behavior.</p>
   */
  inline const Aws::Vector<FindingTypeClassification>& GetAnomalousFindings() const { return m_anomalousFindings; }
  inline bool AnomalousFindingsHasBeenSet() const { return m_anomalousFindingsHasBeenSet; }
  template <typename AnomalousFindingsT = Aws::Vector<FindingTypeClassification>>
  void SetAnomalousFindings(AnomalousFindingsT&& value) {
    m_anomalousFindingsHasBeenSet = true;
    m_anomalousFindings = std::forward<AnomalousFindingsT>(value);
  }
  template <typename AnomalousFindingsT = Aws::Vector<FindingTypeClassification>>
  Baseline& WithAnomalousFindings(AnomalousFindingsT&& value) {
    SetAnomalousFindings(std::forward<AnomalousFindingsT>(value));
    return *this;
  }
  template <typename AnomalousFindingsT = FindingTypeClassification>
  Baseline& AddAnomalousFindings(AnomalousFindingsT&& value) {
    m_anomalousFindingsHasBeenSet = true;
    m_anomalousFindings.emplace_back(std::forward<AnomalousFindingsT>(value));
    return *this;
  }
  ///@}
 private:
  long long m_totalFindings{0};

  Aws::Vector<FindingTypeClassification> m_baselineFindings;

  Aws::Vector<FindingTypeClassification> m_anomalousFindings;
  bool m_totalFindingsHasBeenSet = false;
  bool m_baselineFindingsHasBeenSet = false;
  bool m_anomalousFindingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
