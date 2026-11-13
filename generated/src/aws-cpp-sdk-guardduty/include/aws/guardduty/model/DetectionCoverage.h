/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/InvestigationDetectorFeature.h>
#include <aws/guardduty/model/ProtectionPlan.h>

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
 * <p>Contains information about your detection coverage, such as the status of
 * protection plans and foundational data sources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DetectionCoverage">AWS
 * API Reference</a></p>
 */
class DetectionCoverage {
 public:
  AWS_GUARDDUTY_API DetectionCoverage() = default;
  AWS_GUARDDUTY_API DetectionCoverage(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API DetectionCoverage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The protection plans and their status.</p>
   */
  inline const Aws::Vector<ProtectionPlan>& GetProtectionPlans() const { return m_protectionPlans; }
  inline bool ProtectionPlansHasBeenSet() const { return m_protectionPlansHasBeenSet; }
  template <typename ProtectionPlansT = Aws::Vector<ProtectionPlan>>
  void SetProtectionPlans(ProtectionPlansT&& value) {
    m_protectionPlansHasBeenSet = true;
    m_protectionPlans = std::forward<ProtectionPlansT>(value);
  }
  template <typename ProtectionPlansT = Aws::Vector<ProtectionPlan>>
  DetectionCoverage& WithProtectionPlans(ProtectionPlansT&& value) {
    SetProtectionPlans(std::forward<ProtectionPlansT>(value));
    return *this;
  }
  template <typename ProtectionPlansT = ProtectionPlan>
  DetectionCoverage& AddProtectionPlans(ProtectionPlansT&& value) {
    m_protectionPlansHasBeenSet = true;
    m_protectionPlans.emplace_back(std::forward<ProtectionPlansT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The foundational data sources, such as <code>CLOUD_TRAIL</code>,
   * <code>DNS_LOGS</code>, and <code>FLOW_LOGS</code>.</p>
   */
  inline const Aws::Vector<InvestigationDetectorFeature>& GetFoundationalDataSources() const { return m_foundationalDataSources; }
  inline bool FoundationalDataSourcesHasBeenSet() const { return m_foundationalDataSourcesHasBeenSet; }
  template <typename FoundationalDataSourcesT = Aws::Vector<InvestigationDetectorFeature>>
  void SetFoundationalDataSources(FoundationalDataSourcesT&& value) {
    m_foundationalDataSourcesHasBeenSet = true;
    m_foundationalDataSources = std::forward<FoundationalDataSourcesT>(value);
  }
  template <typename FoundationalDataSourcesT = Aws::Vector<InvestigationDetectorFeature>>
  DetectionCoverage& WithFoundationalDataSources(FoundationalDataSourcesT&& value) {
    SetFoundationalDataSources(std::forward<FoundationalDataSourcesT>(value));
    return *this;
  }
  inline DetectionCoverage& AddFoundationalDataSources(InvestigationDetectorFeature value) {
    m_foundationalDataSourcesHasBeenSet = true;
    m_foundationalDataSources.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the gaps in detection coverage. A record doesn't include
   * both <code>CoverageGaps</code> and <code>KeyObservation</code>.</p>
   */
  inline const Aws::String& GetCoverageGaps() const { return m_coverageGaps; }
  inline bool CoverageGapsHasBeenSet() const { return m_coverageGapsHasBeenSet; }
  template <typename CoverageGapsT = Aws::String>
  void SetCoverageGaps(CoverageGapsT&& value) {
    m_coverageGapsHasBeenSet = true;
    m_coverageGaps = std::forward<CoverageGapsT>(value);
  }
  template <typename CoverageGapsT = Aws::String>
  DetectionCoverage& WithCoverageGaps(CoverageGapsT&& value) {
    SetCoverageGaps(std::forward<CoverageGapsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A key observation about detection coverage.</p>
   */
  inline const Aws::String& GetKeyObservation() const { return m_keyObservation; }
  inline bool KeyObservationHasBeenSet() const { return m_keyObservationHasBeenSet; }
  template <typename KeyObservationT = Aws::String>
  void SetKeyObservation(KeyObservationT&& value) {
    m_keyObservationHasBeenSet = true;
    m_keyObservation = std::forward<KeyObservationT>(value);
  }
  template <typename KeyObservationT = Aws::String>
  DetectionCoverage& WithKeyObservation(KeyObservationT&& value) {
    SetKeyObservation(std::forward<KeyObservationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ProtectionPlan> m_protectionPlans;

  Aws::Vector<InvestigationDetectorFeature> m_foundationalDataSources;

  Aws::String m_coverageGaps;

  Aws::String m_keyObservation;
  bool m_protectionPlansHasBeenSet = false;
  bool m_foundationalDataSourcesHasBeenSet = false;
  bool m_coverageGapsHasBeenSet = false;
  bool m_keyObservationHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
