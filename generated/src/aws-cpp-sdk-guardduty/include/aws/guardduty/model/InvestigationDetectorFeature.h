/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class InvestigationDetectorFeature {
  NOT_SET,
  CLOUD_TRAIL,
  DNS_LOGS,
  FLOW_LOGS,
  S3_DATA_EVENTS,
  EKS_AUDIT_LOGS,
  EBS_MALWARE_PROTECTION,
  RDS_LOGIN_EVENTS,
  EKS_RUNTIME_MONITORING,
  EKS_ADDON_MANAGEMENT,
  LAMBDA_NETWORK_LOGS,
  RUNTIME_MONITORING,
  ECS_FARGATE_AGENT_MANAGEMENT,
  EC2_AGENT_MANAGEMENT
};

namespace InvestigationDetectorFeatureMapper {
AWS_GUARDDUTY_API InvestigationDetectorFeature GetInvestigationDetectorFeatureForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForInvestigationDetectorFeature(InvestigationDetectorFeature value);
}  // namespace InvestigationDetectorFeatureMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
