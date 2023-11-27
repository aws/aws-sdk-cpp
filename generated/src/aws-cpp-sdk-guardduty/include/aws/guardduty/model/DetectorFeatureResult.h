/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class DetectorFeatureResult
  {
    NOT_SET,
    FLOW_LOGS,
    CLOUD_TRAIL,
    DNS_LOGS,
    S3_DATA_EVENTS,
    EKS_AUDIT_LOGS,
    EBS_MALWARE_PROTECTION,
    RDS_LOGIN_EVENTS,
    EKS_RUNTIME_MONITORING,
    LAMBDA_NETWORK_LOGS,
    RUNTIME_MONITORING
  };

namespace DetectorFeatureResultMapper
{
AWS_GUARDDUTY_API DetectorFeatureResult GetDetectorFeatureResultForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForDetectorFeatureResult(DetectorFeatureResult value);
} // namespace DetectorFeatureResultMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
