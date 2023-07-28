/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EKS
{
namespace Model
{
  enum class NodegroupIssueCode
  {
    NOT_SET,
    AutoScalingGroupNotFound,
    AutoScalingGroupInvalidConfiguration,
    Ec2SecurityGroupNotFound,
    Ec2SecurityGroupDeletionFailure,
    Ec2LaunchTemplateNotFound,
    Ec2LaunchTemplateVersionMismatch,
    Ec2SubnetNotFound,
    Ec2SubnetInvalidConfiguration,
    IamInstanceProfileNotFound,
    Ec2SubnetMissingIpv6Assignment,
    IamLimitExceeded,
    IamNodeRoleNotFound,
    NodeCreationFailure,
    AsgInstanceLaunchFailures,
    InstanceLimitExceeded,
    InsufficientFreeAddresses,
    AccessDenied,
    InternalFailure,
    ClusterUnreachable,
    AmiIdNotFound,
    AutoScalingGroupOptInRequired,
    AutoScalingGroupRateLimitExceeded,
    Ec2LaunchTemplateDeletionFailure,
    Ec2LaunchTemplateInvalidConfiguration,
    Ec2LaunchTemplateMaxLimitExceeded,
    Ec2SubnetListTooLong,
    IamThrottling,
    NodeTerminationFailure,
    PodEvictionFailure,
    SourceEc2LaunchTemplateNotFound,
    LimitExceeded,
    Unknown,
    AutoScalingGroupInstanceRefreshActive
  };

namespace NodegroupIssueCodeMapper
{
AWS_EKS_API NodegroupIssueCode GetNodegroupIssueCodeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForNodegroupIssueCode(NodegroupIssueCode value);
} // namespace NodegroupIssueCodeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
