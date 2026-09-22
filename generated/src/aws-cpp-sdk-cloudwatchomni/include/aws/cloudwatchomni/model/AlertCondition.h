/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/Comparator.h>
#include <aws/cloudwatchomni/model/ThresholdMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>The condition that determines when the alert fires.</p> <p>On UpdateAlert a
 * supplied condition is replaced whole, not merged: an omitted {@code
 * warningThreshold} or {@code criticalThreshold} removes that tier, and an omitted
 * {@code thresholdField} clears it. A condition must keep at least one tier.
 * {@code thresholdMode} and {@code comparator} are optional at the Smithy level
 * (so a single-tier condition is expressible) but are required whenever a
 * threshold is present; enforced by the service-side validator.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/AlertCondition">AWS
 * API Reference</a></p>
 */
class AlertCondition {
 public:
  AWS_CLOUDWATCHOMNI_API AlertCondition() = default;
  AWS_CLOUDWATCHOMNI_API AlertCondition(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API AlertCondition& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>How the threshold is applied to query results.</p>
   */
  inline ThresholdMode GetThresholdMode() const { return m_thresholdMode; }
  inline bool ThresholdModeHasBeenSet() const { return m_thresholdModeHasBeenSet; }
  inline void SetThresholdMode(ThresholdMode value) {
    m_thresholdModeHasBeenSet = true;
    m_thresholdMode = value;
  }
  inline AlertCondition& WithThresholdMode(ThresholdMode value) {
    SetThresholdMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field the threshold is evaluated against.</p>
   */
  inline const Aws::String& GetThresholdField() const { return m_thresholdField; }
  inline bool ThresholdFieldHasBeenSet() const { return m_thresholdFieldHasBeenSet; }
  template <typename ThresholdFieldT = Aws::String>
  void SetThresholdField(ThresholdFieldT&& value) {
    m_thresholdFieldHasBeenSet = true;
    m_thresholdField = std::forward<ThresholdFieldT>(value);
  }
  template <typename ThresholdFieldT = Aws::String>
  AlertCondition& WithThresholdField(ThresholdFieldT&& value) {
    SetThresholdField(std::forward<ThresholdFieldT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comparison operator applied to the threshold.</p>
   */
  inline Comparator GetComparator() const { return m_comparator; }
  inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
  inline void SetComparator(Comparator value) {
    m_comparatorHasBeenSet = true;
    m_comparator = value;
  }
  inline AlertCondition& WithComparator(Comparator value) {
    SetComparator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value at which the alert enters the WARNING state.</p>
   */
  inline double GetWarningThreshold() const { return m_warningThreshold; }
  inline bool WarningThresholdHasBeenSet() const { return m_warningThresholdHasBeenSet; }
  inline void SetWarningThreshold(double value) {
    m_warningThresholdHasBeenSet = true;
    m_warningThreshold = value;
  }
  inline AlertCondition& WithWarningThreshold(double value) {
    SetWarningThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value at which the alert enters the CRITICAL state.</p>
   */
  inline double GetCriticalThreshold() const { return m_criticalThreshold; }
  inline bool CriticalThresholdHasBeenSet() const { return m_criticalThresholdHasBeenSet; }
  inline void SetCriticalThreshold(double value) {
    m_criticalThresholdHasBeenSet = true;
    m_criticalThreshold = value;
  }
  inline AlertCondition& WithCriticalThreshold(double value) {
    SetCriticalThreshold(value);
    return *this;
  }
  ///@}
 private:
  ThresholdMode m_thresholdMode{ThresholdMode::NOT_SET};

  Aws::String m_thresholdField;

  Comparator m_comparator{Comparator::NOT_SET};

  double m_warningThreshold{0.0};

  double m_criticalThreshold{0.0};
  bool m_thresholdModeHasBeenSet = false;
  bool m_thresholdFieldHasBeenSet = false;
  bool m_comparatorHasBeenSet = false;
  bool m_warningThresholdHasBeenSet = false;
  bool m_criticalThresholdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
