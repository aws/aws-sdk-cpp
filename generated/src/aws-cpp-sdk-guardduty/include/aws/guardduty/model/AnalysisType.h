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
enum class AnalysisType {
  NOT_SET,
  REPUTATION,
  THREAT_ASSESSMENT,
  RDS_THREAT_ASSESSMENT,
  KUBERNETES_POLICY_VIOLATION,
  S3_EXPOSURE,
  S3_ACTOR_CONTEXT,
  S3_PEN_TEST,
  PROCESS_LINEAGE,
  TREND,
  BASELINE
};

namespace AnalysisTypeMapper {
AWS_GUARDDUTY_API AnalysisType GetAnalysisTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForAnalysisType(AnalysisType value);
}  // namespace AnalysisTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
