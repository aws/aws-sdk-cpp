/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CorrelatedFinding.h>
#include <aws/guardduty/model/ObservedFindingType.h>

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
 * <p>Contains information about findings that are related to the investigated
 * activity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RelatedFindings">AWS
 * API Reference</a></p>
 */
class RelatedFindings {
 public:
  AWS_GUARDDUTY_API RelatedFindings() = default;
  AWS_GUARDDUTY_API RelatedFindings(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API RelatedFindings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The findings that GuardDuty correlated with the investigated activity,
   * grouped by finding type.</p>
   */
  inline const Aws::Vector<CorrelatedFinding>& GetCorrelated() const { return m_correlated; }
  inline bool CorrelatedHasBeenSet() const { return m_correlatedHasBeenSet; }
  template <typename CorrelatedT = Aws::Vector<CorrelatedFinding>>
  void SetCorrelated(CorrelatedT&& value) {
    m_correlatedHasBeenSet = true;
    m_correlated = std::forward<CorrelatedT>(value);
  }
  template <typename CorrelatedT = Aws::Vector<CorrelatedFinding>>
  RelatedFindings& WithCorrelated(CorrelatedT&& value) {
    SetCorrelated(std::forward<CorrelatedT>(value));
    return *this;
  }
  template <typename CorrelatedT = CorrelatedFinding>
  RelatedFindings& AddCorrelated(CorrelatedT&& value) {
    m_correlatedHasBeenSet = true;
    m_correlated.emplace_back(std::forward<CorrelatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Other finding types that GuardDuty observed, with counts. These entries don't
   * include finding IDs.</p>
   */
  inline const Aws::Vector<ObservedFindingType>& GetObserved() const { return m_observed; }
  inline bool ObservedHasBeenSet() const { return m_observedHasBeenSet; }
  template <typename ObservedT = Aws::Vector<ObservedFindingType>>
  void SetObserved(ObservedT&& value) {
    m_observedHasBeenSet = true;
    m_observed = std::forward<ObservedT>(value);
  }
  template <typename ObservedT = Aws::Vector<ObservedFindingType>>
  RelatedFindings& WithObserved(ObservedT&& value) {
    SetObserved(std::forward<ObservedT>(value));
    return *this;
  }
  template <typename ObservedT = ObservedFindingType>
  RelatedFindings& AddObserved(ObservedT&& value) {
    m_observedHasBeenSet = true;
    m_observed.emplace_back(std::forward<ObservedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CorrelatedFinding> m_correlated;

  Aws::Vector<ObservedFindingType> m_observed;
  bool m_correlatedHasBeenSet = false;
  bool m_observedHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
