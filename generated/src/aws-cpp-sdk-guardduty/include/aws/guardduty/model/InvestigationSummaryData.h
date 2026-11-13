/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AccountAnalysis.h>
#include <aws/guardduty/model/Countermeasure.h>
#include <aws/guardduty/model/KeyObservations.h>
#include <aws/guardduty/model/OrganizationAnalysis.h>
#include <aws/guardduty/model/Recommendation.h>
#include <aws/guardduty/model/ThreatAssessment.h>

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
 * <p>Contains the structured summary of a GuardDuty investigation. The fields that
 * are present depend on the investigation type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationSummaryData">AWS
 * API Reference</a></p>
 */
class InvestigationSummaryData {
 public:
  AWS_GUARDDUTY_API InvestigationSummaryData() = default;
  AWS_GUARDDUTY_API InvestigationSummaryData(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationSummaryData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>For a <code>FINDING</code> investigation, the type of the finding that the
   * investigation analyzed.</p>
   */
  inline const Aws::String& GetFindingType() const { return m_findingType; }
  inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
  template <typename FindingTypeT = Aws::String>
  void SetFindingType(FindingTypeT&& value) {
    m_findingTypeHasBeenSet = true;
    m_findingType = std::forward<FindingTypeT>(value);
  }
  template <typename FindingTypeT = Aws::String>
  InvestigationSummaryData& WithFindingType(FindingTypeT&& value) {
    SetFindingType(std::forward<FindingTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For a <code>FINDING</code> investigation, an assessment of the threat,
   * including how the attack progressed.</p>
   */
  inline const ThreatAssessment& GetThreatAssessment() const { return m_threatAssessment; }
  inline bool ThreatAssessmentHasBeenSet() const { return m_threatAssessmentHasBeenSet; }
  template <typename ThreatAssessmentT = ThreatAssessment>
  void SetThreatAssessment(ThreatAssessmentT&& value) {
    m_threatAssessmentHasBeenSet = true;
    m_threatAssessment = std::forward<ThreatAssessmentT>(value);
  }
  template <typename ThreatAssessmentT = ThreatAssessment>
  InvestigationSummaryData& WithThreatAssessment(ThreatAssessmentT&& value) {
    SetThreatAssessment(std::forward<ThreatAssessmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For a <code>FINDING</code> investigation, actions that you can take to
   * respond to the threat, grouped by defensive tactic.</p>
   */
  inline const Aws::Vector<Countermeasure>& GetCountermeasures() const { return m_countermeasures; }
  inline bool CountermeasuresHasBeenSet() const { return m_countermeasuresHasBeenSet; }
  template <typename CountermeasuresT = Aws::Vector<Countermeasure>>
  void SetCountermeasures(CountermeasuresT&& value) {
    m_countermeasuresHasBeenSet = true;
    m_countermeasures = std::forward<CountermeasuresT>(value);
  }
  template <typename CountermeasuresT = Aws::Vector<Countermeasure>>
  InvestigationSummaryData& WithCountermeasures(CountermeasuresT&& value) {
    SetCountermeasures(std::forward<CountermeasuresT>(value));
    return *this;
  }
  template <typename CountermeasuresT = Countermeasure>
  InvestigationSummaryData& AddCountermeasures(CountermeasuresT&& value) {
    m_countermeasuresHasBeenSet = true;
    m_countermeasures.emplace_back(std::forward<CountermeasuresT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For an <code>ACCOUNT</code> investigation, an analysis of the findings in the
   * investigated account.</p>
   */
  inline const AccountAnalysis& GetAccountAnalysis() const { return m_accountAnalysis; }
  inline bool AccountAnalysisHasBeenSet() const { return m_accountAnalysisHasBeenSet; }
  template <typename AccountAnalysisT = AccountAnalysis>
  void SetAccountAnalysis(AccountAnalysisT&& value) {
    m_accountAnalysisHasBeenSet = true;
    m_accountAnalysis = std::forward<AccountAnalysisT>(value);
  }
  template <typename AccountAnalysisT = AccountAnalysis>
  InvestigationSummaryData& WithAccountAnalysis(AccountAnalysisT&& value) {
    SetAccountAnalysis(std::forward<AccountAnalysisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For an <code>ORGANIZATION</code> investigation, an analysis of the findings
   * across the organization.</p>
   */
  inline const OrganizationAnalysis& GetOrganizationAnalysis() const { return m_organizationAnalysis; }
  inline bool OrganizationAnalysisHasBeenSet() const { return m_organizationAnalysisHasBeenSet; }
  template <typename OrganizationAnalysisT = OrganizationAnalysis>
  void SetOrganizationAnalysis(OrganizationAnalysisT&& value) {
    m_organizationAnalysisHasBeenSet = true;
    m_organizationAnalysis = std::forward<OrganizationAnalysisT>(value);
  }
  template <typename OrganizationAnalysisT = OrganizationAnalysis>
  InvestigationSummaryData& WithOrganizationAnalysis(OrganizationAnalysisT&& value) {
    SetOrganizationAnalysis(std::forward<OrganizationAnalysisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key observations of the investigation.</p>
   */
  inline const KeyObservations& GetKeyObservations() const { return m_keyObservations; }
  inline bool KeyObservationsHasBeenSet() const { return m_keyObservationsHasBeenSet; }
  template <typename KeyObservationsT = KeyObservations>
  void SetKeyObservations(KeyObservationsT&& value) {
    m_keyObservationsHasBeenSet = true;
    m_keyObservations = std::forward<KeyObservationsT>(value);
  }
  template <typename KeyObservationsT = KeyObservations>
  InvestigationSummaryData& WithKeyObservations(KeyObservationsT&& value) {
    SetKeyObservations(std::forward<KeyObservationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For an <code>ACCOUNT</code> or <code>ORGANIZATION</code> investigation, the
   * recommended actions.</p>
   */
  inline const Aws::Vector<Recommendation>& GetRecommendations() const { return m_recommendations; }
  inline bool RecommendationsHasBeenSet() const { return m_recommendationsHasBeenSet; }
  template <typename RecommendationsT = Aws::Vector<Recommendation>>
  void SetRecommendations(RecommendationsT&& value) {
    m_recommendationsHasBeenSet = true;
    m_recommendations = std::forward<RecommendationsT>(value);
  }
  template <typename RecommendationsT = Aws::Vector<Recommendation>>
  InvestigationSummaryData& WithRecommendations(RecommendationsT&& value) {
    SetRecommendations(std::forward<RecommendationsT>(value));
    return *this;
  }
  template <typename RecommendationsT = Recommendation>
  InvestigationSummaryData& AddRecommendations(RecommendationsT&& value) {
    m_recommendationsHasBeenSet = true;
    m_recommendations.emplace_back(std::forward<RecommendationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingType;

  ThreatAssessment m_threatAssessment;

  Aws::Vector<Countermeasure> m_countermeasures;

  AccountAnalysis m_accountAnalysis;

  OrganizationAnalysis m_organizationAnalysis;

  KeyObservations m_keyObservations;

  Aws::Vector<Recommendation> m_recommendations;
  bool m_findingTypeHasBeenSet = false;
  bool m_threatAssessmentHasBeenSet = false;
  bool m_countermeasuresHasBeenSet = false;
  bool m_accountAnalysisHasBeenSet = false;
  bool m_organizationAnalysisHasBeenSet = false;
  bool m_keyObservationsHasBeenSet = false;
  bool m_recommendationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
