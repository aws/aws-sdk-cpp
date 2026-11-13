/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Enrichment.h>
#include <aws/guardduty/model/InvestigationKubernetesWorkload.h>
#include <aws/guardduty/model/KubernetesAnomaly.h>
#include <aws/guardduty/model/KubernetesApiCall.h>

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
 * <p>Contains details about Kubernetes activity. A record contains either
 * <code>ApiCall</code> and <code>Enrichment</code>, or <code>Anomaly</code> and
 * <code>Workload</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesActivity">AWS
 * API Reference</a></p>
 */
class KubernetesActivity {
 public:
  AWS_GUARDDUTY_API KubernetesActivity() = default;
  AWS_GUARDDUTY_API KubernetesActivity(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API KubernetesActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details about a Kubernetes API call.</p>
   */
  inline const KubernetesApiCall& GetApiCall() const { return m_apiCall; }
  inline bool ApiCallHasBeenSet() const { return m_apiCallHasBeenSet; }
  template <typename ApiCallT = KubernetesApiCall>
  void SetApiCall(ApiCallT&& value) {
    m_apiCallHasBeenSet = true;
    m_apiCall = std::forward<ApiCallT>(value);
  }
  template <typename ApiCallT = KubernetesApiCall>
  KubernetesActivity& WithApiCall(ApiCallT&& value) {
    SetApiCall(std::forward<ApiCallT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about anomalous Kubernetes behavior.</p>
   */
  inline const KubernetesAnomaly& GetAnomaly() const { return m_anomaly; }
  inline bool AnomalyHasBeenSet() const { return m_anomalyHasBeenSet; }
  template <typename AnomalyT = KubernetesAnomaly>
  void SetAnomaly(AnomalyT&& value) {
    m_anomalyHasBeenSet = true;
    m_anomaly = std::forward<AnomalyT>(value);
  }
  template <typename AnomalyT = KubernetesAnomaly>
  KubernetesActivity& WithAnomaly(AnomalyT&& value) {
    SetAnomaly(std::forward<AnomalyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kubernetes workload that is associated with the anomaly.</p>
   */
  inline const InvestigationKubernetesWorkload& GetWorkload() const { return m_workload; }
  inline bool WorkloadHasBeenSet() const { return m_workloadHasBeenSet; }
  template <typename WorkloadT = InvestigationKubernetesWorkload>
  void SetWorkload(WorkloadT&& value) {
    m_workloadHasBeenSet = true;
    m_workload = std::forward<WorkloadT>(value);
  }
  template <typename WorkloadT = InvestigationKubernetesWorkload>
  KubernetesActivity& WithWorkload(WorkloadT&& value) {
    SetWorkload(std::forward<WorkloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional context about the API call, such as geolocation information.</p>
   */
  inline const Enrichment& GetEnrichment() const { return m_enrichment; }
  inline bool EnrichmentHasBeenSet() const { return m_enrichmentHasBeenSet; }
  template <typename EnrichmentT = Enrichment>
  void SetEnrichment(EnrichmentT&& value) {
    m_enrichmentHasBeenSet = true;
    m_enrichment = std::forward<EnrichmentT>(value);
  }
  template <typename EnrichmentT = Enrichment>
  KubernetesActivity& WithEnrichment(EnrichmentT&& value) {
    SetEnrichment(std::forward<EnrichmentT>(value));
    return *this;
  }
  ///@}
 private:
  KubernetesApiCall m_apiCall;

  KubernetesAnomaly m_anomaly;

  InvestigationKubernetesWorkload m_workload;

  Enrichment m_enrichment;
  bool m_apiCallHasBeenSet = false;
  bool m_anomalyHasBeenSet = false;
  bool m_workloadHasBeenSet = false;
  bool m_enrichmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
