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
enum class ObservationType {
  NOT_SET,
  FINDING_DETAIL,
  RESOURCE,
  NETWORK_ACTIVITY,
  RDS_LOGIN_ACTIVITY,
  S3_ACTIVITY,
  KUBERNETES_ACTIVITY,
  MALWARE_SCAN,
  RELATED_FINDINGS,
  DETECTION_COVERAGE,
  ACCOUNT_OVERVIEW,
  RECOMMENDATION,
  RUNTIME_SIGNALS,
  DISTRIBUTION,
  REPRESENTATIVE_RESOURCE
};

namespace ObservationTypeMapper {
AWS_GUARDDUTY_API ObservationType GetObservationTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForObservationType(ObservationType value);
}  // namespace ObservationTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
