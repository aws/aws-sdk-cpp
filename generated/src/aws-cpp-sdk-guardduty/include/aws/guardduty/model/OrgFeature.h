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
  enum class OrgFeature
  {
    NOT_SET,
    S3_DATA_EVENTS,
    EKS_AUDIT_LOGS,
    EBS_MALWARE_PROTECTION,
    RDS_LOGIN_EVENTS,
    EKS_RUNTIME_MONITORING,
    LAMBDA_NETWORK_LOGS,
    RUNTIME_MONITORING
  };

namespace OrgFeatureMapper
{
AWS_GUARDDUTY_API OrgFeature GetOrgFeatureForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForOrgFeature(OrgFeature value);
} // namespace OrgFeatureMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
