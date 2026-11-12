/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AccountAffectedResource.h>
#include <aws/guardduty/model/FindingsSummary.h>
#include <aws/guardduty/model/TacticCoverage.h>

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
 * <p>Contains an analysis of the findings in an Amazon Web Services
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccountAnalysis">AWS
 * API Reference</a></p>
 */
class AccountAnalysis {
 public:
  AWS_GUARDDUTY_API AccountAnalysis() = default;
  AWS_GUARDDUTY_API AccountAnalysis(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API AccountAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A summary of the findings in the account.</p>
   */
  inline const FindingsSummary& GetFindingsSummary() const { return m_findingsSummary; }
  inline bool FindingsSummaryHasBeenSet() const { return m_findingsSummaryHasBeenSet; }
  template <typename FindingsSummaryT = FindingsSummary>
  void SetFindingsSummary(FindingsSummaryT&& value) {
    m_findingsSummaryHasBeenSet = true;
    m_findingsSummary = std::forward<FindingsSummaryT>(value);
  }
  template <typename FindingsSummaryT = FindingsSummary>
  AccountAnalysis& WithFindingsSummary(FindingsSummaryT&& value) {
    SetFindingsSummary(std::forward<FindingsSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The findings in the account, mapped to MITRE ATT&amp;CK tactics and
   * techniques.</p>
   */
  inline const Aws::Vector<TacticCoverage>& GetTacticCoverage() const { return m_tacticCoverage; }
  inline bool TacticCoverageHasBeenSet() const { return m_tacticCoverageHasBeenSet; }
  template <typename TacticCoverageT = Aws::Vector<TacticCoverage>>
  void SetTacticCoverage(TacticCoverageT&& value) {
    m_tacticCoverageHasBeenSet = true;
    m_tacticCoverage = std::forward<TacticCoverageT>(value);
  }
  template <typename TacticCoverageT = Aws::Vector<TacticCoverage>>
  AccountAnalysis& WithTacticCoverage(TacticCoverageT&& value) {
    SetTacticCoverage(std::forward<TacticCoverageT>(value));
    return *this;
  }
  template <typename TacticCoverageT = TacticCoverage>
  AccountAnalysis& AddTacticCoverage(TacticCoverageT&& value) {
    m_tacticCoverageHasBeenSet = true;
    m_tacticCoverage.emplace_back(std::forward<TacticCoverageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources in the account that are associated with findings.</p>
   */
  inline const Aws::Vector<AccountAffectedResource>& GetAffectedResources() const { return m_affectedResources; }
  inline bool AffectedResourcesHasBeenSet() const { return m_affectedResourcesHasBeenSet; }
  template <typename AffectedResourcesT = Aws::Vector<AccountAffectedResource>>
  void SetAffectedResources(AffectedResourcesT&& value) {
    m_affectedResourcesHasBeenSet = true;
    m_affectedResources = std::forward<AffectedResourcesT>(value);
  }
  template <typename AffectedResourcesT = Aws::Vector<AccountAffectedResource>>
  AccountAnalysis& WithAffectedResources(AffectedResourcesT&& value) {
    SetAffectedResources(std::forward<AffectedResourcesT>(value));
    return *this;
  }
  template <typename AffectedResourcesT = AccountAffectedResource>
  AccountAnalysis& AddAffectedResources(AffectedResourcesT&& value) {
    m_affectedResourcesHasBeenSet = true;
    m_affectedResources.emplace_back(std::forward<AffectedResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  FindingsSummary m_findingsSummary;

  Aws::Vector<TacticCoverage> m_tacticCoverage;

  Aws::Vector<AccountAffectedResource> m_affectedResources;
  bool m_findingsSummaryHasBeenSet = false;
  bool m_tacticCoverageHasBeenSet = false;
  bool m_affectedResourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
