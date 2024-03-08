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
  enum class UsageFeature
  {
    NOT_SET,
    FLOW_LOGS,
    CLOUD_TRAIL,
    DNS_LOGS,
    S3_DATA_EVENTS,
    EKS_AUDIT_LOGS,
    EBS_MALWARE_PROTECTION,
    RDS_LOGIN_EVENTS,
    LAMBDA_NETWORK_LOGS,
    EKS_RUNTIME_MONITORING,
    FARGATE_RUNTIME_MONITORING,
    EC2_RUNTIME_MONITORING,
    RDS_DBI_PROTECTION_PROVISIONED,
    RDS_DBI_PROTECTION_SERVERLESS
  };

namespace UsageFeatureMapper
{
AWS_GUARDDUTY_API UsageFeature GetUsageFeatureForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForUsageFeature(UsageFeature value);
} // namespace UsageFeatureMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
