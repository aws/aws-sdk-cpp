/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/InvestigationDetectorFeature.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace InvestigationDetectorFeatureMapper {

static const int CLOUD_TRAIL_HASH = HashingUtils::HashString("CLOUD_TRAIL");
static const int DNS_LOGS_HASH = HashingUtils::HashString("DNS_LOGS");
static const int FLOW_LOGS_HASH = HashingUtils::HashString("FLOW_LOGS");
static const int S3_DATA_EVENTS_HASH = HashingUtils::HashString("S3_DATA_EVENTS");
static const int EKS_AUDIT_LOGS_HASH = HashingUtils::HashString("EKS_AUDIT_LOGS");
static const int EBS_MALWARE_PROTECTION_HASH = HashingUtils::HashString("EBS_MALWARE_PROTECTION");
static const int RDS_LOGIN_EVENTS_HASH = HashingUtils::HashString("RDS_LOGIN_EVENTS");
static const int EKS_RUNTIME_MONITORING_HASH = HashingUtils::HashString("EKS_RUNTIME_MONITORING");
static const int EKS_ADDON_MANAGEMENT_HASH = HashingUtils::HashString("EKS_ADDON_MANAGEMENT");
static const int LAMBDA_NETWORK_LOGS_HASH = HashingUtils::HashString("LAMBDA_NETWORK_LOGS");
static const int RUNTIME_MONITORING_HASH = HashingUtils::HashString("RUNTIME_MONITORING");
static const int ECS_FARGATE_AGENT_MANAGEMENT_HASH = HashingUtils::HashString("ECS_FARGATE_AGENT_MANAGEMENT");
static const int EC2_AGENT_MANAGEMENT_HASH = HashingUtils::HashString("EC2_AGENT_MANAGEMENT");

InvestigationDetectorFeature GetInvestigationDetectorFeatureForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLOUD_TRAIL_HASH) {
    return InvestigationDetectorFeature::CLOUD_TRAIL;
  } else if (hashCode == DNS_LOGS_HASH) {
    return InvestigationDetectorFeature::DNS_LOGS;
  } else if (hashCode == FLOW_LOGS_HASH) {
    return InvestigationDetectorFeature::FLOW_LOGS;
  } else if (hashCode == S3_DATA_EVENTS_HASH) {
    return InvestigationDetectorFeature::S3_DATA_EVENTS;
  } else if (hashCode == EKS_AUDIT_LOGS_HASH) {
    return InvestigationDetectorFeature::EKS_AUDIT_LOGS;
  } else if (hashCode == EBS_MALWARE_PROTECTION_HASH) {
    return InvestigationDetectorFeature::EBS_MALWARE_PROTECTION;
  } else if (hashCode == RDS_LOGIN_EVENTS_HASH) {
    return InvestigationDetectorFeature::RDS_LOGIN_EVENTS;
  } else if (hashCode == EKS_RUNTIME_MONITORING_HASH) {
    return InvestigationDetectorFeature::EKS_RUNTIME_MONITORING;
  } else if (hashCode == EKS_ADDON_MANAGEMENT_HASH) {
    return InvestigationDetectorFeature::EKS_ADDON_MANAGEMENT;
  } else if (hashCode == LAMBDA_NETWORK_LOGS_HASH) {
    return InvestigationDetectorFeature::LAMBDA_NETWORK_LOGS;
  } else if (hashCode == RUNTIME_MONITORING_HASH) {
    return InvestigationDetectorFeature::RUNTIME_MONITORING;
  } else if (hashCode == ECS_FARGATE_AGENT_MANAGEMENT_HASH) {
    return InvestigationDetectorFeature::ECS_FARGATE_AGENT_MANAGEMENT;
  } else if (hashCode == EC2_AGENT_MANAGEMENT_HASH) {
    return InvestigationDetectorFeature::EC2_AGENT_MANAGEMENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InvestigationDetectorFeature>(hashCode);
  }

  return InvestigationDetectorFeature::NOT_SET;
}

Aws::String GetNameForInvestigationDetectorFeature(InvestigationDetectorFeature enumValue) {
  switch (enumValue) {
    case InvestigationDetectorFeature::NOT_SET:
      return {};
    case InvestigationDetectorFeature::CLOUD_TRAIL:
      return "CLOUD_TRAIL";
    case InvestigationDetectorFeature::DNS_LOGS:
      return "DNS_LOGS";
    case InvestigationDetectorFeature::FLOW_LOGS:
      return "FLOW_LOGS";
    case InvestigationDetectorFeature::S3_DATA_EVENTS:
      return "S3_DATA_EVENTS";
    case InvestigationDetectorFeature::EKS_AUDIT_LOGS:
      return "EKS_AUDIT_LOGS";
    case InvestigationDetectorFeature::EBS_MALWARE_PROTECTION:
      return "EBS_MALWARE_PROTECTION";
    case InvestigationDetectorFeature::RDS_LOGIN_EVENTS:
      return "RDS_LOGIN_EVENTS";
    case InvestigationDetectorFeature::EKS_RUNTIME_MONITORING:
      return "EKS_RUNTIME_MONITORING";
    case InvestigationDetectorFeature::EKS_ADDON_MANAGEMENT:
      return "EKS_ADDON_MANAGEMENT";
    case InvestigationDetectorFeature::LAMBDA_NETWORK_LOGS:
      return "LAMBDA_NETWORK_LOGS";
    case InvestigationDetectorFeature::RUNTIME_MONITORING:
      return "RUNTIME_MONITORING";
    case InvestigationDetectorFeature::ECS_FARGATE_AGENT_MANAGEMENT:
      return "ECS_FARGATE_AGENT_MANAGEMENT";
    case InvestigationDetectorFeature::EC2_AGENT_MANAGEMENT:
      return "EC2_AGENT_MANAGEMENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InvestigationDetectorFeatureMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
