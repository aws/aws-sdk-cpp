/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/ObservationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace ObservationTypeMapper {

static const int FINDING_DETAIL_HASH = HashingUtils::HashString("FINDING_DETAIL");
static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
static const int NETWORK_ACTIVITY_HASH = HashingUtils::HashString("NETWORK_ACTIVITY");
static const int RDS_LOGIN_ACTIVITY_HASH = HashingUtils::HashString("RDS_LOGIN_ACTIVITY");
static const int S3_ACTIVITY_HASH = HashingUtils::HashString("S3_ACTIVITY");
static const int KUBERNETES_ACTIVITY_HASH = HashingUtils::HashString("KUBERNETES_ACTIVITY");
static const int MALWARE_SCAN_HASH = HashingUtils::HashString("MALWARE_SCAN");
static const int RELATED_FINDINGS_HASH = HashingUtils::HashString("RELATED_FINDINGS");
static const int DETECTION_COVERAGE_HASH = HashingUtils::HashString("DETECTION_COVERAGE");
static const int ACCOUNT_OVERVIEW_HASH = HashingUtils::HashString("ACCOUNT_OVERVIEW");
static const int RECOMMENDATION_HASH = HashingUtils::HashString("RECOMMENDATION");
static const int RUNTIME_SIGNALS_HASH = HashingUtils::HashString("RUNTIME_SIGNALS");
static const int DISTRIBUTION_HASH = HashingUtils::HashString("DISTRIBUTION");
static const int REPRESENTATIVE_RESOURCE_HASH = HashingUtils::HashString("REPRESENTATIVE_RESOURCE");

ObservationType GetObservationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FINDING_DETAIL_HASH) {
    return ObservationType::FINDING_DETAIL;
  } else if (hashCode == RESOURCE_HASH) {
    return ObservationType::RESOURCE;
  } else if (hashCode == NETWORK_ACTIVITY_HASH) {
    return ObservationType::NETWORK_ACTIVITY;
  } else if (hashCode == RDS_LOGIN_ACTIVITY_HASH) {
    return ObservationType::RDS_LOGIN_ACTIVITY;
  } else if (hashCode == S3_ACTIVITY_HASH) {
    return ObservationType::S3_ACTIVITY;
  } else if (hashCode == KUBERNETES_ACTIVITY_HASH) {
    return ObservationType::KUBERNETES_ACTIVITY;
  } else if (hashCode == MALWARE_SCAN_HASH) {
    return ObservationType::MALWARE_SCAN;
  } else if (hashCode == RELATED_FINDINGS_HASH) {
    return ObservationType::RELATED_FINDINGS;
  } else if (hashCode == DETECTION_COVERAGE_HASH) {
    return ObservationType::DETECTION_COVERAGE;
  } else if (hashCode == ACCOUNT_OVERVIEW_HASH) {
    return ObservationType::ACCOUNT_OVERVIEW;
  } else if (hashCode == RECOMMENDATION_HASH) {
    return ObservationType::RECOMMENDATION;
  } else if (hashCode == RUNTIME_SIGNALS_HASH) {
    return ObservationType::RUNTIME_SIGNALS;
  } else if (hashCode == DISTRIBUTION_HASH) {
    return ObservationType::DISTRIBUTION;
  } else if (hashCode == REPRESENTATIVE_RESOURCE_HASH) {
    return ObservationType::REPRESENTATIVE_RESOURCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ObservationType>(hashCode);
  }

  return ObservationType::NOT_SET;
}

Aws::String GetNameForObservationType(ObservationType enumValue) {
  switch (enumValue) {
    case ObservationType::NOT_SET:
      return {};
    case ObservationType::FINDING_DETAIL:
      return "FINDING_DETAIL";
    case ObservationType::RESOURCE:
      return "RESOURCE";
    case ObservationType::NETWORK_ACTIVITY:
      return "NETWORK_ACTIVITY";
    case ObservationType::RDS_LOGIN_ACTIVITY:
      return "RDS_LOGIN_ACTIVITY";
    case ObservationType::S3_ACTIVITY:
      return "S3_ACTIVITY";
    case ObservationType::KUBERNETES_ACTIVITY:
      return "KUBERNETES_ACTIVITY";
    case ObservationType::MALWARE_SCAN:
      return "MALWARE_SCAN";
    case ObservationType::RELATED_FINDINGS:
      return "RELATED_FINDINGS";
    case ObservationType::DETECTION_COVERAGE:
      return "DETECTION_COVERAGE";
    case ObservationType::ACCOUNT_OVERVIEW:
      return "ACCOUNT_OVERVIEW";
    case ObservationType::RECOMMENDATION:
      return "RECOMMENDATION";
    case ObservationType::RUNTIME_SIGNALS:
      return "RUNTIME_SIGNALS";
    case ObservationType::DISTRIBUTION:
      return "DISTRIBUTION";
    case ObservationType::REPRESENTATIVE_RESOURCE:
      return "REPRESENTATIVE_RESOURCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ObservationTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
