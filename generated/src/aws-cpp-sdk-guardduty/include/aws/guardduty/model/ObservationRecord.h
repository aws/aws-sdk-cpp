/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AccountOverview.h>
#include <aws/guardduty/model/DetectionCoverage.h>
#include <aws/guardduty/model/Distribution.h>
#include <aws/guardduty/model/FindingDetail.h>
#include <aws/guardduty/model/InvestigationIndicator.h>
#include <aws/guardduty/model/InvestigationMalwareScan.h>
#include <aws/guardduty/model/InvestigationResource.h>
#include <aws/guardduty/model/KubernetesActivity.h>
#include <aws/guardduty/model/NetworkActivity.h>
#include <aws/guardduty/model/ObservationType.h>
#include <aws/guardduty/model/RdsLoginActivity.h>
#include <aws/guardduty/model/Recommendation.h>
#include <aws/guardduty/model/RelatedFindings.h>
#include <aws/guardduty/model/RepresentativeFinding.h>
#include <aws/guardduty/model/RuntimeSignals.h>
#include <aws/guardduty/model/S3Activity.h>

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
 * <p>Contains a fact that GuardDuty noted about your environment during an
 * investigation, such as the affected resource, the activity on that resource, or
 * your detection coverage. The record contains at most one of the payload members,
 * the one that matches <code>ObservationType</code>. <code>Indicators</code> can
 * accompany any observation type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ObservationRecord">AWS
 * API Reference</a></p>
 */
class ObservationRecord {
 public:
  AWS_GUARDDUTY_API ObservationRecord() = default;
  AWS_GUARDDUTY_API ObservationRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ObservationRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The kind of observation. The value identifies the payload member that can be
   * set: <code>FINDING_DETAIL</code> (<code>FindingDetail</code>),
   * <code>RESOURCE</code> (<code>Resource</code>), <code>NETWORK_ACTIVITY</code>
   * (<code>NetworkActivity</code>), <code>RDS_LOGIN_ACTIVITY</code>
   * (<code>RdsLoginActivity</code>), <code>S3_ACTIVITY</code>
   * (<code>S3Activity</code>), <code>KUBERNETES_ACTIVITY</code>
   * (<code>KubernetesActivity</code>), <code>MALWARE_SCAN</code>
   * (<code>MalwareScan</code>), <code>RELATED_FINDINGS</code>
   * (<code>RelatedFindings</code>), <code>DETECTION_COVERAGE</code>
   * (<code>DetectionCoverage</code>), <code>ACCOUNT_OVERVIEW</code>
   * (<code>AccountOverview</code>), <code>RECOMMENDATION</code>
   * (<code>Recommendations</code>), <code>RUNTIME_SIGNALS</code>
   * (<code>RuntimeSignals</code>), <code>DISTRIBUTION</code>
   * (<code>Distribution</code>), and <code>REPRESENTATIVE_RESOURCE</code>
   * (<code>RepresentativeResources</code>).</p>
   */
  inline ObservationType GetObservationType() const { return m_observationType; }
  inline bool ObservationTypeHasBeenSet() const { return m_observationTypeHasBeenSet; }
  inline void SetObservationType(ObservationType value) {
    m_observationTypeHasBeenSet = true;
    m_observationType = value;
  }
  inline ObservationRecord& WithObservationType(ObservationType value) {
    SetObservationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a GuardDuty finding. Set when <code>ObservationType</code> is
   * <code>FINDING_DETAIL</code>.</p>
   */
  inline const FindingDetail& GetFindingDetail() const { return m_findingDetail; }
  inline bool FindingDetailHasBeenSet() const { return m_findingDetailHasBeenSet; }
  template <typename FindingDetailT = FindingDetail>
  void SetFindingDetail(FindingDetailT&& value) {
    m_findingDetailHasBeenSet = true;
    m_findingDetail = std::forward<FindingDetailT>(value);
  }
  template <typename FindingDetailT = FindingDetail>
  ObservationRecord& WithFindingDetail(FindingDetailT&& value) {
    SetFindingDetail(std::forward<FindingDetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about an affected resource. Set when <code>ObservationType</code> is
   * <code>RESOURCE</code>.</p>
   */
  inline const InvestigationResource& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = InvestigationResource>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = InvestigationResource>
  ObservationRecord& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about network activity. Set when <code>ObservationType</code> is
   * <code>NETWORK_ACTIVITY</code>.</p>
   */
  inline const NetworkActivity& GetNetworkActivity() const { return m_networkActivity; }
  inline bool NetworkActivityHasBeenSet() const { return m_networkActivityHasBeenSet; }
  template <typename NetworkActivityT = NetworkActivity>
  void SetNetworkActivity(NetworkActivityT&& value) {
    m_networkActivityHasBeenSet = true;
    m_networkActivity = std::forward<NetworkActivityT>(value);
  }
  template <typename NetworkActivityT = NetworkActivity>
  ObservationRecord& WithNetworkActivity(NetworkActivityT&& value) {
    SetNetworkActivity(std::forward<NetworkActivityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about login activity on an Amazon RDS database. Set when
   * <code>ObservationType</code> is <code>RDS_LOGIN_ACTIVITY</code>.</p>
   */
  inline const RdsLoginActivity& GetRdsLoginActivity() const { return m_rdsLoginActivity; }
  inline bool RdsLoginActivityHasBeenSet() const { return m_rdsLoginActivityHasBeenSet; }
  template <typename RdsLoginActivityT = RdsLoginActivity>
  void SetRdsLoginActivity(RdsLoginActivityT&& value) {
    m_rdsLoginActivityHasBeenSet = true;
    m_rdsLoginActivity = std::forward<RdsLoginActivityT>(value);
  }
  template <typename RdsLoginActivityT = RdsLoginActivity>
  ObservationRecord& WithRdsLoginActivity(RdsLoginActivityT&& value) {
    SetRdsLoginActivity(std::forward<RdsLoginActivityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about Amazon S3 activity. Set when <code>ObservationType</code> is
   * <code>S3_ACTIVITY</code>.</p>
   */
  inline const S3Activity& GetS3Activity() const { return m_s3Activity; }
  inline bool S3ActivityHasBeenSet() const { return m_s3ActivityHasBeenSet; }
  template <typename S3ActivityT = S3Activity>
  void SetS3Activity(S3ActivityT&& value) {
    m_s3ActivityHasBeenSet = true;
    m_s3Activity = std::forward<S3ActivityT>(value);
  }
  template <typename S3ActivityT = S3Activity>
  ObservationRecord& WithS3Activity(S3ActivityT&& value) {
    SetS3Activity(std::forward<S3ActivityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about Kubernetes activity. Set when <code>ObservationType</code> is
   * <code>KUBERNETES_ACTIVITY</code>.</p>
   */
  inline const KubernetesActivity& GetKubernetesActivity() const { return m_kubernetesActivity; }
  inline bool KubernetesActivityHasBeenSet() const { return m_kubernetesActivityHasBeenSet; }
  template <typename KubernetesActivityT = KubernetesActivity>
  void SetKubernetesActivity(KubernetesActivityT&& value) {
    m_kubernetesActivityHasBeenSet = true;
    m_kubernetesActivity = std::forward<KubernetesActivityT>(value);
  }
  template <typename KubernetesActivityT = KubernetesActivity>
  ObservationRecord& WithKubernetesActivity(KubernetesActivityT&& value) {
    SetKubernetesActivity(std::forward<KubernetesActivityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a malware scan. Set when <code>ObservationType</code> is
   * <code>MALWARE_SCAN</code>.</p>
   */
  inline const InvestigationMalwareScan& GetMalwareScan() const { return m_malwareScan; }
  inline bool MalwareScanHasBeenSet() const { return m_malwareScanHasBeenSet; }
  template <typename MalwareScanT = InvestigationMalwareScan>
  void SetMalwareScan(MalwareScanT&& value) {
    m_malwareScanHasBeenSet = true;
    m_malwareScan = std::forward<MalwareScanT>(value);
  }
  template <typename MalwareScanT = InvestigationMalwareScan>
  ObservationRecord& WithMalwareScan(MalwareScanT&& value) {
    SetMalwareScan(std::forward<MalwareScanT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about findings that are related to the investigated activity. Set
   * when <code>ObservationType</code> is <code>RELATED_FINDINGS</code>.</p>
   */
  inline const RelatedFindings& GetRelatedFindings() const { return m_relatedFindings; }
  inline bool RelatedFindingsHasBeenSet() const { return m_relatedFindingsHasBeenSet; }
  template <typename RelatedFindingsT = RelatedFindings>
  void SetRelatedFindings(RelatedFindingsT&& value) {
    m_relatedFindingsHasBeenSet = true;
    m_relatedFindings = std::forward<RelatedFindingsT>(value);
  }
  template <typename RelatedFindingsT = RelatedFindings>
  ObservationRecord& WithRelatedFindings(RelatedFindingsT&& value) {
    SetRelatedFindings(std::forward<RelatedFindingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about your detection coverage. Set when <code>ObservationType</code>
   * is <code>DETECTION_COVERAGE</code>.</p>
   */
  inline const DetectionCoverage& GetDetectionCoverage() const { return m_detectionCoverage; }
  inline bool DetectionCoverageHasBeenSet() const { return m_detectionCoverageHasBeenSet; }
  template <typename DetectionCoverageT = DetectionCoverage>
  void SetDetectionCoverage(DetectionCoverageT&& value) {
    m_detectionCoverageHasBeenSet = true;
    m_detectionCoverage = std::forward<DetectionCoverageT>(value);
  }
  template <typename DetectionCoverageT = DetectionCoverage>
  ObservationRecord& WithDetectionCoverage(DetectionCoverageT&& value) {
    SetDetectionCoverage(std::forward<DetectionCoverageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Overview information about an account. Set when <code>ObservationType</code>
   * is <code>ACCOUNT_OVERVIEW</code>.</p>
   */
  inline const AccountOverview& GetAccountOverview() const { return m_accountOverview; }
  inline bool AccountOverviewHasBeenSet() const { return m_accountOverviewHasBeenSet; }
  template <typename AccountOverviewT = AccountOverview>
  void SetAccountOverview(AccountOverviewT&& value) {
    m_accountOverviewHasBeenSet = true;
    m_accountOverview = std::forward<AccountOverviewT>(value);
  }
  template <typename AccountOverviewT = AccountOverview>
  ObservationRecord& WithAccountOverview(AccountOverviewT&& value) {
    SetAccountOverview(std::forward<AccountOverviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Recommended actions. Set when <code>ObservationType</code> is
   * <code>RECOMMENDATION</code>.</p>
   */
  inline const Aws::Vector<Recommendation>& GetRecommendations() const { return m_recommendations; }
  inline bool RecommendationsHasBeenSet() const { return m_recommendationsHasBeenSet; }
  template <typename RecommendationsT = Aws::Vector<Recommendation>>
  void SetRecommendations(RecommendationsT&& value) {
    m_recommendationsHasBeenSet = true;
    m_recommendations = std::forward<RecommendationsT>(value);
  }
  template <typename RecommendationsT = Aws::Vector<Recommendation>>
  ObservationRecord& WithRecommendations(RecommendationsT&& value) {
    SetRecommendations(std::forward<RecommendationsT>(value));
    return *this;
  }
  template <typename RecommendationsT = Recommendation>
  ObservationRecord& AddRecommendations(RecommendationsT&& value) {
    m_recommendationsHasBeenSet = true;
    m_recommendations.emplace_back(std::forward<RecommendationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of runtime signals. Set when <code>ObservationType</code> is
   * <code>RUNTIME_SIGNALS</code>.</p>
   */
  inline const RuntimeSignals& GetRuntimeSignals() const { return m_runtimeSignals; }
  inline bool RuntimeSignalsHasBeenSet() const { return m_runtimeSignalsHasBeenSet; }
  template <typename RuntimeSignalsT = RuntimeSignals>
  void SetRuntimeSignals(RuntimeSignalsT&& value) {
    m_runtimeSignalsHasBeenSet = true;
    m_runtimeSignals = std::forward<RuntimeSignalsT>(value);
  }
  template <typename RuntimeSignalsT = RuntimeSignals>
  ObservationRecord& WithRuntimeSignals(RuntimeSignalsT&& value) {
    SetRuntimeSignals(std::forward<RuntimeSignalsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A breakdown of findings along one dimension. Set when
   * <code>ObservationType</code> is <code>DISTRIBUTION</code>.</p>
   */
  inline const Distribution& GetDistribution() const { return m_distribution; }
  inline bool DistributionHasBeenSet() const { return m_distributionHasBeenSet; }
  template <typename DistributionT = Distribution>
  void SetDistribution(DistributionT&& value) {
    m_distributionHasBeenSet = true;
    m_distribution = std::forward<DistributionT>(value);
  }
  template <typename DistributionT = Distribution>
  ObservationRecord& WithDistribution(DistributionT&& value) {
    SetDistribution(std::forward<DistributionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Representative findings for the affected resources, one finding for each
   * resource. Set when <code>ObservationType</code> is
   * <code>REPRESENTATIVE_RESOURCE</code>.</p>
   */
  inline const Aws::Vector<RepresentativeFinding>& GetRepresentativeResources() const { return m_representativeResources; }
  inline bool RepresentativeResourcesHasBeenSet() const { return m_representativeResourcesHasBeenSet; }
  template <typename RepresentativeResourcesT = Aws::Vector<RepresentativeFinding>>
  void SetRepresentativeResources(RepresentativeResourcesT&& value) {
    m_representativeResourcesHasBeenSet = true;
    m_representativeResources = std::forward<RepresentativeResourcesT>(value);
  }
  template <typename RepresentativeResourcesT = Aws::Vector<RepresentativeFinding>>
  ObservationRecord& WithRepresentativeResources(RepresentativeResourcesT&& value) {
    SetRepresentativeResources(std::forward<RepresentativeResourcesT>(value));
    return *this;
  }
  template <typename RepresentativeResourcesT = RepresentativeFinding>
  ObservationRecord& AddRepresentativeResources(RepresentativeResourcesT&& value) {
    m_representativeResourcesHasBeenSet = true;
    m_representativeResources.emplace_back(std::forward<RepresentativeResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The threat indicators associated with the observation, such as an IP address,
   * a domain, or a file hash.</p>
   */
  inline const Aws::Vector<InvestigationIndicator>& GetIndicators() const { return m_indicators; }
  inline bool IndicatorsHasBeenSet() const { return m_indicatorsHasBeenSet; }
  template <typename IndicatorsT = Aws::Vector<InvestigationIndicator>>
  void SetIndicators(IndicatorsT&& value) {
    m_indicatorsHasBeenSet = true;
    m_indicators = std::forward<IndicatorsT>(value);
  }
  template <typename IndicatorsT = Aws::Vector<InvestigationIndicator>>
  ObservationRecord& WithIndicators(IndicatorsT&& value) {
    SetIndicators(std::forward<IndicatorsT>(value));
    return *this;
  }
  template <typename IndicatorsT = InvestigationIndicator>
  ObservationRecord& AddIndicators(IndicatorsT&& value) {
    m_indicatorsHasBeenSet = true;
    m_indicators.emplace_back(std::forward<IndicatorsT>(value));
    return *this;
  }
  ///@}
 private:
  ObservationType m_observationType{ObservationType::NOT_SET};

  FindingDetail m_findingDetail;

  InvestigationResource m_resource;

  NetworkActivity m_networkActivity;

  RdsLoginActivity m_rdsLoginActivity;

  S3Activity m_s3Activity;

  KubernetesActivity m_kubernetesActivity;

  InvestigationMalwareScan m_malwareScan;

  RelatedFindings m_relatedFindings;

  DetectionCoverage m_detectionCoverage;

  AccountOverview m_accountOverview;

  Aws::Vector<Recommendation> m_recommendations;

  RuntimeSignals m_runtimeSignals;

  Distribution m_distribution;

  Aws::Vector<RepresentativeFinding> m_representativeResources;

  Aws::Vector<InvestigationIndicator> m_indicators;
  bool m_observationTypeHasBeenSet = false;
  bool m_findingDetailHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_networkActivityHasBeenSet = false;
  bool m_rdsLoginActivityHasBeenSet = false;
  bool m_s3ActivityHasBeenSet = false;
  bool m_kubernetesActivityHasBeenSet = false;
  bool m_malwareScanHasBeenSet = false;
  bool m_relatedFindingsHasBeenSet = false;
  bool m_detectionCoverageHasBeenSet = false;
  bool m_accountOverviewHasBeenSet = false;
  bool m_recommendationsHasBeenSet = false;
  bool m_runtimeSignalsHasBeenSet = false;
  bool m_distributionHasBeenSet = false;
  bool m_representativeResourcesHasBeenSet = false;
  bool m_indicatorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
