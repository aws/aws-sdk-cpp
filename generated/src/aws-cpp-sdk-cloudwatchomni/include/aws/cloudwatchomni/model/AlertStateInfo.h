/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AlertState.h>
#include <aws/cloudwatchomni/model/AlertStateData.h>
#include <aws/cloudwatchomni/model/ContributorSummary.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>Live evaluation state for an alert. Read-only, system-managed.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/AlertStateInfo">AWS
 * API Reference</a></p>
 */
class AlertStateInfo {
 public:
  AWS_CLOUDWATCHOMNI_API AlertStateInfo() = default;
  AWS_CLOUDWATCHOMNI_API AlertStateInfo(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API AlertStateInfo& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Current flat state.</p>
   */
  inline AlertState GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(AlertState value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline AlertStateInfo& WithValue(AlertState value) {
    SetValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the alert transitioned to its current state.</p>
   */
  inline const Aws::Utils::DateTime& GetTransitionedAt() const { return m_transitionedAt; }
  inline bool TransitionedAtHasBeenSet() const { return m_transitionedAtHasBeenSet; }
  template <typename TransitionedAtT = Aws::Utils::DateTime>
  void SetTransitionedAt(TransitionedAtT&& value) {
    m_transitionedAtHasBeenSet = true;
    m_transitionedAt = std::forward<TransitionedAtT>(value);
  }
  template <typename TransitionedAtT = Aws::Utils::DateTime>
  AlertStateInfo& WithTransitionedAt(TransitionedAtT&& value) {
    SetTransitionedAt(std::forward<TransitionedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Counts of contributors currently breaching each severity threshold. Present
   * only when contributor-level tracking is active; absent until the first
   * contributor breaches a {@code WARNING} or {@code CRITICAL} threshold.</p>
   */
  inline const ContributorSummary& GetContributorSummary() const { return m_contributorSummary; }
  inline bool ContributorSummaryHasBeenSet() const { return m_contributorSummaryHasBeenSet; }
  template <typename ContributorSummaryT = ContributorSummary>
  void SetContributorSummary(ContributorSummaryT&& value) {
    m_contributorSummaryHasBeenSet = true;
    m_contributorSummary = std::forward<ContributorSummaryT>(value);
  }
  template <typename ContributorSummaryT = ContributorSummary>
  AlertStateInfo& WithContributorSummary(ContributorSummaryT&& value) {
    SetContributorSummary(std::forward<ContributorSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Structured detail about why the alert is in its current state.</p>
   */
  inline const AlertStateData& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = AlertStateData>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = AlertStateData>
  AlertStateInfo& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}
 private:
  AlertState m_value{AlertState::NOT_SET};

  Aws::Utils::DateTime m_transitionedAt{};

  ContributorSummary m_contributorSummary;

  AlertStateData m_data;
  bool m_valueHasBeenSet = false;
  bool m_transitionedAtHasBeenSet = false;
  bool m_contributorSummaryHasBeenSet = false;
  bool m_dataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
