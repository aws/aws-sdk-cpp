/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/InvestigationResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace InvestigationResourceTypeMapper {

static const int EC2_INSTANCE_HASH = HashingUtils::HashString("EC2_INSTANCE");
static const int EBS_VOLUME_HASH = HashingUtils::HashString("EBS_VOLUME");
static const int S3_BUCKET_HASH = HashingUtils::HashString("S3_BUCKET");
static const int IAM_ROLE_HASH = HashingUtils::HashString("IAM_ROLE");
static const int IAM_USER_HASH = HashingUtils::HashString("IAM_USER");
static const int IAM_ACCESS_KEY_HASH = HashingUtils::HashString("IAM_ACCESS_KEY");
static const int LAMBDA_FUNCTION_HASH = HashingUtils::HashString("LAMBDA_FUNCTION");
static const int EKS_CLUSTER_HASH = HashingUtils::HashString("EKS_CLUSTER");
static const int ECS_CLUSTER_HASH = HashingUtils::HashString("ECS_CLUSTER");
static const int KUBERNETES_WORKLOAD_HASH = HashingUtils::HashString("KUBERNETES_WORKLOAD");
static const int RDS_INSTANCE_HASH = HashingUtils::HashString("RDS_INSTANCE");
static const int RDS_DB_USER_HASH = HashingUtils::HashString("RDS_DB_USER");
static const int EC2_SECURITY_GROUP_HASH = HashingUtils::HashString("EC2_SECURITY_GROUP");

InvestigationResourceType GetInvestigationResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EC2_INSTANCE_HASH) {
    return InvestigationResourceType::EC2_INSTANCE;
  } else if (hashCode == EBS_VOLUME_HASH) {
    return InvestigationResourceType::EBS_VOLUME;
  } else if (hashCode == S3_BUCKET_HASH) {
    return InvestigationResourceType::S3_BUCKET;
  } else if (hashCode == IAM_ROLE_HASH) {
    return InvestigationResourceType::IAM_ROLE;
  } else if (hashCode == IAM_USER_HASH) {
    return InvestigationResourceType::IAM_USER;
  } else if (hashCode == IAM_ACCESS_KEY_HASH) {
    return InvestigationResourceType::IAM_ACCESS_KEY;
  } else if (hashCode == LAMBDA_FUNCTION_HASH) {
    return InvestigationResourceType::LAMBDA_FUNCTION;
  } else if (hashCode == EKS_CLUSTER_HASH) {
    return InvestigationResourceType::EKS_CLUSTER;
  } else if (hashCode == ECS_CLUSTER_HASH) {
    return InvestigationResourceType::ECS_CLUSTER;
  } else if (hashCode == KUBERNETES_WORKLOAD_HASH) {
    return InvestigationResourceType::KUBERNETES_WORKLOAD;
  } else if (hashCode == RDS_INSTANCE_HASH) {
    return InvestigationResourceType::RDS_INSTANCE;
  } else if (hashCode == RDS_DB_USER_HASH) {
    return InvestigationResourceType::RDS_DB_USER;
  } else if (hashCode == EC2_SECURITY_GROUP_HASH) {
    return InvestigationResourceType::EC2_SECURITY_GROUP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InvestigationResourceType>(hashCode);
  }

  return InvestigationResourceType::NOT_SET;
}

Aws::String GetNameForInvestigationResourceType(InvestigationResourceType enumValue) {
  switch (enumValue) {
    case InvestigationResourceType::NOT_SET:
      return {};
    case InvestigationResourceType::EC2_INSTANCE:
      return "EC2_INSTANCE";
    case InvestigationResourceType::EBS_VOLUME:
      return "EBS_VOLUME";
    case InvestigationResourceType::S3_BUCKET:
      return "S3_BUCKET";
    case InvestigationResourceType::IAM_ROLE:
      return "IAM_ROLE";
    case InvestigationResourceType::IAM_USER:
      return "IAM_USER";
    case InvestigationResourceType::IAM_ACCESS_KEY:
      return "IAM_ACCESS_KEY";
    case InvestigationResourceType::LAMBDA_FUNCTION:
      return "LAMBDA_FUNCTION";
    case InvestigationResourceType::EKS_CLUSTER:
      return "EKS_CLUSTER";
    case InvestigationResourceType::ECS_CLUSTER:
      return "ECS_CLUSTER";
    case InvestigationResourceType::KUBERNETES_WORKLOAD:
      return "KUBERNETES_WORKLOAD";
    case InvestigationResourceType::RDS_INSTANCE:
      return "RDS_INSTANCE";
    case InvestigationResourceType::RDS_DB_USER:
      return "RDS_DB_USER";
    case InvestigationResourceType::EC2_SECURITY_GROUP:
      return "EC2_SECURITY_GROUP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InvestigationResourceTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
