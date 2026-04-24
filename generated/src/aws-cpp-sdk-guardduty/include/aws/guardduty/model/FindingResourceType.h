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
enum class FindingResourceType {
  NOT_SET,
  EC2_INSTANCE,
  EC2_NETWORK_INTERFACE,
  S3_BUCKET,
  S3_OBJECT,
  ACCESS_KEY,
  EKS_CLUSTER,
  KUBERNETES_WORKLOAD,
  CONTAINER,
  ECS_CLUSTER,
  ECS_TASK,
  AUTOSCALING_AUTO_SCALING_GROUP,
  IAM_INSTANCE_PROFILE,
  CLOUDFORMATION_STACK,
  EC2_LAUNCH_TEMPLATE,
  EC2_VPC,
  EC2_IMAGE
};

namespace FindingResourceTypeMapper {
AWS_GUARDDUTY_API FindingResourceType GetFindingResourceTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFindingResourceType(FindingResourceType value);
}  // namespace FindingResourceTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
