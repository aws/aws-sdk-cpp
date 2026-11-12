/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Contains information about the status of a protection plan.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ProtectionPlan">AWS
 * API Reference</a></p>
 */
class ProtectionPlan {
 public:
  AWS_GUARDDUTY_API ProtectionPlan() = default;
  AWS_GUARDDUTY_API ProtectionPlan(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ProtectionPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the protection plan. Possible values are
   * <code>CLOUD_TRAIL</code>, <code>DNS_LOGS</code>, <code>FLOW_LOGS</code>,
   * <code>S3_DATA_EVENTS</code>, <code>EKS_AUDIT_LOGS</code>,
   * <code>EBS_MALWARE_PROTECTION</code>, <code>RDS_LOGIN_EVENTS</code>,
   * <code>EKS_RUNTIME_MONITORING</code>, <code>EKS_ADDON_MANAGEMENT</code>,
   * <code>LAMBDA_NETWORK_LOGS</code>, <code>RUNTIME_MONITORING</code>,
   * <code>ECS_FARGATE_AGENT_MANAGEMENT</code>, and
   * <code>EC2_AGENT_MANAGEMENT</code>.</p>
   */
  inline InvestigationDetectorFeature GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(InvestigationDetectorFeature value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline ProtectionPlan& WithName(InvestigationDetectorFeature value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the protection plan. Possible values are <code>ENABLED</code>
   * and <code>DISABLED</code>.</p>
   */
  inline FeatureStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FeatureStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ProtectionPlan& WithStatus(FeatureStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  InvestigationDetectorFeature m_name{InvestigationDetectorFeature::NOT_SET};

  FeatureStatus m_status{FeatureStatus::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
