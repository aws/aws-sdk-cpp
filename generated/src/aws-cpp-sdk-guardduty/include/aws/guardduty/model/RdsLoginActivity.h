/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ActivityWindow.h>
#include <aws/guardduty/model/Enrichment.h>

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
 * <p>Contains details about login activity on an Amazon RDS
 * database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RdsLoginActivity">AWS
 * API Reference</a></p>
 */
class RdsLoginActivity {
 public:
  AWS_GUARDDUTY_API RdsLoginActivity() = default;
  AWS_GUARDDUTY_API RdsLoginActivity(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API RdsLoginActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The outcome of the login attempts.</p>
   */
  inline const Aws::String& GetOutcome() const { return m_outcome; }
  inline bool OutcomeHasBeenSet() const { return m_outcomeHasBeenSet; }
  template <typename OutcomeT = Aws::String>
  void SetOutcome(OutcomeT&& value) {
    m_outcomeHasBeenSet = true;
    m_outcome = std::forward<OutcomeT>(value);
  }
  template <typename OutcomeT = Aws::String>
  RdsLoginActivity& WithOutcome(OutcomeT&& value) {
    SetOutcome(std::forward<OutcomeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rate of the login attempts.</p>
   */
  inline const Aws::String& GetRate() const { return m_rate; }
  inline bool RateHasBeenSet() const { return m_rateHasBeenSet; }
  template <typename RateT = Aws::String>
  void SetRate(RateT&& value) {
    m_rateHasBeenSet = true;
    m_rate = std::forward<RateT>(value);
  }
  template <typename RateT = Aws::String>
  RdsLoginActivity& WithRate(RateT&& value) {
    SetRate(std::forward<RateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An explanation of how the login activity deviates from normal behavior.</p>
   */
  inline const Aws::String& GetAnomalyContext() const { return m_anomalyContext; }
  inline bool AnomalyContextHasBeenSet() const { return m_anomalyContextHasBeenSet; }
  template <typename AnomalyContextT = Aws::String>
  void SetAnomalyContext(AnomalyContextT&& value) {
    m_anomalyContextHasBeenSet = true;
    m_anomalyContext = std::forward<AnomalyContextT>(value);
  }
  template <typename AnomalyContextT = Aws::String>
  RdsLoginActivity& WithAnomalyContext(AnomalyContextT&& value) {
    SetAnomalyContext(std::forward<AnomalyContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of login attempts.</p>
   */
  inline long long GetLoginCount() const { return m_loginCount; }
  inline bool LoginCountHasBeenSet() const { return m_loginCountHasBeenSet; }
  inline void SetLoginCount(long long value) {
    m_loginCountHasBeenSet = true;
    m_loginCount = value;
  }
  inline RdsLoginActivity& WithLoginCount(long long value) {
    SetLoginCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time range of the login activity.</p>
   */
  inline const ActivityWindow& GetActivityWindow() const { return m_activityWindow; }
  inline bool ActivityWindowHasBeenSet() const { return m_activityWindowHasBeenSet; }
  template <typename ActivityWindowT = ActivityWindow>
  void SetActivityWindow(ActivityWindowT&& value) {
    m_activityWindowHasBeenSet = true;
    m_activityWindow = std::forward<ActivityWindowT>(value);
  }
  template <typename ActivityWindowT = ActivityWindow>
  RdsLoginActivity& WithActivityWindow(ActivityWindowT&& value) {
    SetActivityWindow(std::forward<ActivityWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional context about the login activity, such as geolocation
   * information.</p>
   */
  inline const Enrichment& GetEnrichment() const { return m_enrichment; }
  inline bool EnrichmentHasBeenSet() const { return m_enrichmentHasBeenSet; }
  template <typename EnrichmentT = Enrichment>
  void SetEnrichment(EnrichmentT&& value) {
    m_enrichmentHasBeenSet = true;
    m_enrichment = std::forward<EnrichmentT>(value);
  }
  template <typename EnrichmentT = Enrichment>
  RdsLoginActivity& WithEnrichment(EnrichmentT&& value) {
    SetEnrichment(std::forward<EnrichmentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_outcome;

  Aws::String m_rate;

  Aws::String m_anomalyContext;

  long long m_loginCount{0};

  ActivityWindow m_activityWindow;

  Enrichment m_enrichment;
  bool m_outcomeHasBeenSet = false;
  bool m_rateHasBeenSet = false;
  bool m_anomalyContextHasBeenSet = false;
  bool m_loginCountHasBeenSet = false;
  bool m_activityWindowHasBeenSet = false;
  bool m_enrichmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
