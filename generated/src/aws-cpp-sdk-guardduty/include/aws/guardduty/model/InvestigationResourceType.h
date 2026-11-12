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
enum class InvestigationResourceType {
  NOT_SET,
  EC2_INSTANCE,
  EBS_VOLUME,
  S3_BUCKET,
  IAM_ROLE,
  IAM_USER,
  IAM_ACCESS_KEY,
  LAMBDA_FUNCTION,
  EKS_CLUSTER,
  ECS_CLUSTER,
  KUBERNETES_WORKLOAD,
  RDS_INSTANCE,
  RDS_DB_USER,
  EC2_SECURITY_GROUP
};

namespace InvestigationResourceTypeMapper {
AWS_GUARDDUTY_API InvestigationResourceType GetInvestigationResourceTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForInvestigationResourceType(InvestigationResourceType value);
}  // namespace InvestigationResourceTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
