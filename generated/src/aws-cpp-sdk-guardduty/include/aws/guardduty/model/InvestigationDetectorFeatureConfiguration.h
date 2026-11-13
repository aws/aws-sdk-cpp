/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FeatureStatus.h>
#include <aws/guardduty/model/InvestigationDetectorFeature.h>

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
 * <p>Contains information about the configuration of a detector feature. Each
 * member is optional.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationDetectorFeatureConfiguration">AWS
 * API Reference</a></p>
 */
class InvestigationDetectorFeatureConfiguration {
 public:
  AWS_GUARDDUTY_API InvestigationDetectorFeatureConfiguration() = default;
  AWS_GUARDDUTY_API InvestigationDetectorFeatureConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationDetectorFeatureConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the feature. Possible values are <code>CLOUD_TRAIL</code>,
   * <code>DNS_LOGS</code>, <code>FLOW_LOGS</code>, <code>S3_DATA_EVENTS</code>,
   * <code>EKS_AUDIT_LOGS</code>, <code>EBS_MALWARE_PROTECTION</code>,
   * <code>RDS_LOGIN_EVENTS</code>, <code>EKS_RUNTIME_MONITORING</code>,
   * <code>EKS_ADDON_MANAGEMENT</code>, <code>LAMBDA_NETWORK_LOGS</code>,
   * <code>RUNTIME_MONITORING</code>, <code>ECS_FARGATE_AGENT_MANAGEMENT</code>, and
   * <code>EC2_AGENT_MANAGEMENT</code>.</p>
   */
  inline InvestigationDetectorFeature GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(InvestigationDetectorFeature value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline InvestigationDetectorFeatureConfiguration& WithName(InvestigationDetectorFeature value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the feature. Possible values are <code>ENABLED</code> and
   * <code>DISABLED</code>.</p>
   */
  inline FeatureStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FeatureStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline InvestigationDetectorFeatureConfiguration& WithStatus(FeatureStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the feature configuration was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  InvestigationDetectorFeatureConfiguration& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  InvestigationDetectorFeature m_name{InvestigationDetectorFeature::NOT_SET};

  FeatureStatus m_status{FeatureStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
