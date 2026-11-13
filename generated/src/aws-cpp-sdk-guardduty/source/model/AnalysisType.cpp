/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/AnalysisType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace AnalysisTypeMapper {

static const int REPUTATION_HASH = HashingUtils::HashString("REPUTATION");
static const int THREAT_ASSESSMENT_HASH = HashingUtils::HashString("THREAT_ASSESSMENT");
static const int RDS_THREAT_ASSESSMENT_HASH = HashingUtils::HashString("RDS_THREAT_ASSESSMENT");
static const int KUBERNETES_POLICY_VIOLATION_HASH = HashingUtils::HashString("KUBERNETES_POLICY_VIOLATION");
static const int S3_EXPOSURE_HASH = HashingUtils::HashString("S3_EXPOSURE");
static const int S3_ACTOR_CONTEXT_HASH = HashingUtils::HashString("S3_ACTOR_CONTEXT");
static const int S3_PEN_TEST_HASH = HashingUtils::HashString("S3_PEN_TEST");
static const int PROCESS_LINEAGE_HASH = HashingUtils::HashString("PROCESS_LINEAGE");
static const int TREND_HASH = HashingUtils::HashString("TREND");
static const int BASELINE_HASH = HashingUtils::HashString("BASELINE");

AnalysisType GetAnalysisTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REPUTATION_HASH) {
    return AnalysisType::REPUTATION;
  } else if (hashCode == THREAT_ASSESSMENT_HASH) {
    return AnalysisType::THREAT_ASSESSMENT;
  } else if (hashCode == RDS_THREAT_ASSESSMENT_HASH) {
    return AnalysisType::RDS_THREAT_ASSESSMENT;
  } else if (hashCode == KUBERNETES_POLICY_VIOLATION_HASH) {
    return AnalysisType::KUBERNETES_POLICY_VIOLATION;
  } else if (hashCode == S3_EXPOSURE_HASH) {
    return AnalysisType::S3_EXPOSURE;
  } else if (hashCode == S3_ACTOR_CONTEXT_HASH) {
    return AnalysisType::S3_ACTOR_CONTEXT;
  } else if (hashCode == S3_PEN_TEST_HASH) {
    return AnalysisType::S3_PEN_TEST;
  } else if (hashCode == PROCESS_LINEAGE_HASH) {
    return AnalysisType::PROCESS_LINEAGE;
  } else if (hashCode == TREND_HASH) {
    return AnalysisType::TREND;
  } else if (hashCode == BASELINE_HASH) {
    return AnalysisType::BASELINE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnalysisType>(hashCode);
  }

  return AnalysisType::NOT_SET;
}

Aws::String GetNameForAnalysisType(AnalysisType enumValue) {
  switch (enumValue) {
    case AnalysisType::NOT_SET:
      return {};
    case AnalysisType::REPUTATION:
      return "REPUTATION";
    case AnalysisType::THREAT_ASSESSMENT:
      return "THREAT_ASSESSMENT";
    case AnalysisType::RDS_THREAT_ASSESSMENT:
      return "RDS_THREAT_ASSESSMENT";
    case AnalysisType::KUBERNETES_POLICY_VIOLATION:
      return "KUBERNETES_POLICY_VIOLATION";
    case AnalysisType::S3_EXPOSURE:
      return "S3_EXPOSURE";
    case AnalysisType::S3_ACTOR_CONTEXT:
      return "S3_ACTOR_CONTEXT";
    case AnalysisType::S3_PEN_TEST:
      return "S3_PEN_TEST";
    case AnalysisType::PROCESS_LINEAGE:
      return "PROCESS_LINEAGE";
    case AnalysisType::TREND:
      return "TREND";
    case AnalysisType::BASELINE:
      return "BASELINE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnalysisTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
