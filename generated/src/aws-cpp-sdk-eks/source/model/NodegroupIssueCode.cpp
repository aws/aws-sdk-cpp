/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/NodegroupIssueCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace NodegroupIssueCodeMapper
      {

        static constexpr uint32_t AutoScalingGroupNotFound_HASH = ConstExprHashingUtils::HashString("AutoScalingGroupNotFound");
        static constexpr uint32_t AutoScalingGroupInvalidConfiguration_HASH = ConstExprHashingUtils::HashString("AutoScalingGroupInvalidConfiguration");
        static constexpr uint32_t Ec2SecurityGroupNotFound_HASH = ConstExprHashingUtils::HashString("Ec2SecurityGroupNotFound");
        static constexpr uint32_t Ec2SecurityGroupDeletionFailure_HASH = ConstExprHashingUtils::HashString("Ec2SecurityGroupDeletionFailure");
        static constexpr uint32_t Ec2LaunchTemplateNotFound_HASH = ConstExprHashingUtils::HashString("Ec2LaunchTemplateNotFound");
        static constexpr uint32_t Ec2LaunchTemplateVersionMismatch_HASH = ConstExprHashingUtils::HashString("Ec2LaunchTemplateVersionMismatch");
        static constexpr uint32_t Ec2SubnetNotFound_HASH = ConstExprHashingUtils::HashString("Ec2SubnetNotFound");
        static constexpr uint32_t Ec2SubnetInvalidConfiguration_HASH = ConstExprHashingUtils::HashString("Ec2SubnetInvalidConfiguration");
        static constexpr uint32_t IamInstanceProfileNotFound_HASH = ConstExprHashingUtils::HashString("IamInstanceProfileNotFound");
        static constexpr uint32_t Ec2SubnetMissingIpv6Assignment_HASH = ConstExprHashingUtils::HashString("Ec2SubnetMissingIpv6Assignment");
        static constexpr uint32_t IamLimitExceeded_HASH = ConstExprHashingUtils::HashString("IamLimitExceeded");
        static constexpr uint32_t IamNodeRoleNotFound_HASH = ConstExprHashingUtils::HashString("IamNodeRoleNotFound");
        static constexpr uint32_t NodeCreationFailure_HASH = ConstExprHashingUtils::HashString("NodeCreationFailure");
        static constexpr uint32_t AsgInstanceLaunchFailures_HASH = ConstExprHashingUtils::HashString("AsgInstanceLaunchFailures");
        static constexpr uint32_t InstanceLimitExceeded_HASH = ConstExprHashingUtils::HashString("InstanceLimitExceeded");
        static constexpr uint32_t InsufficientFreeAddresses_HASH = ConstExprHashingUtils::HashString("InsufficientFreeAddresses");
        static constexpr uint32_t AccessDenied_HASH = ConstExprHashingUtils::HashString("AccessDenied");
        static constexpr uint32_t InternalFailure_HASH = ConstExprHashingUtils::HashString("InternalFailure");
        static constexpr uint32_t ClusterUnreachable_HASH = ConstExprHashingUtils::HashString("ClusterUnreachable");
        static constexpr uint32_t AmiIdNotFound_HASH = ConstExprHashingUtils::HashString("AmiIdNotFound");
        static constexpr uint32_t AutoScalingGroupOptInRequired_HASH = ConstExprHashingUtils::HashString("AutoScalingGroupOptInRequired");
        static constexpr uint32_t AutoScalingGroupRateLimitExceeded_HASH = ConstExprHashingUtils::HashString("AutoScalingGroupRateLimitExceeded");
        static constexpr uint32_t Ec2LaunchTemplateDeletionFailure_HASH = ConstExprHashingUtils::HashString("Ec2LaunchTemplateDeletionFailure");
        static constexpr uint32_t Ec2LaunchTemplateInvalidConfiguration_HASH = ConstExprHashingUtils::HashString("Ec2LaunchTemplateInvalidConfiguration");
        static constexpr uint32_t Ec2LaunchTemplateMaxLimitExceeded_HASH = ConstExprHashingUtils::HashString("Ec2LaunchTemplateMaxLimitExceeded");
        static constexpr uint32_t Ec2SubnetListTooLong_HASH = ConstExprHashingUtils::HashString("Ec2SubnetListTooLong");
        static constexpr uint32_t IamThrottling_HASH = ConstExprHashingUtils::HashString("IamThrottling");
        static constexpr uint32_t NodeTerminationFailure_HASH = ConstExprHashingUtils::HashString("NodeTerminationFailure");
        static constexpr uint32_t PodEvictionFailure_HASH = ConstExprHashingUtils::HashString("PodEvictionFailure");
        static constexpr uint32_t SourceEc2LaunchTemplateNotFound_HASH = ConstExprHashingUtils::HashString("SourceEc2LaunchTemplateNotFound");
        static constexpr uint32_t LimitExceeded_HASH = ConstExprHashingUtils::HashString("LimitExceeded");
        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");
        static constexpr uint32_t AutoScalingGroupInstanceRefreshActive_HASH = ConstExprHashingUtils::HashString("AutoScalingGroupInstanceRefreshActive");


        NodegroupIssueCode GetNodegroupIssueCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AutoScalingGroupNotFound_HASH)
          {
            return NodegroupIssueCode::AutoScalingGroupNotFound;
          }
          else if (hashCode == AutoScalingGroupInvalidConfiguration_HASH)
          {
            return NodegroupIssueCode::AutoScalingGroupInvalidConfiguration;
          }
          else if (hashCode == Ec2SecurityGroupNotFound_HASH)
          {
            return NodegroupIssueCode::Ec2SecurityGroupNotFound;
          }
          else if (hashCode == Ec2SecurityGroupDeletionFailure_HASH)
          {
            return NodegroupIssueCode::Ec2SecurityGroupDeletionFailure;
          }
          else if (hashCode == Ec2LaunchTemplateNotFound_HASH)
          {
            return NodegroupIssueCode::Ec2LaunchTemplateNotFound;
          }
          else if (hashCode == Ec2LaunchTemplateVersionMismatch_HASH)
          {
            return NodegroupIssueCode::Ec2LaunchTemplateVersionMismatch;
          }
          else if (hashCode == Ec2SubnetNotFound_HASH)
          {
            return NodegroupIssueCode::Ec2SubnetNotFound;
          }
          else if (hashCode == Ec2SubnetInvalidConfiguration_HASH)
          {
            return NodegroupIssueCode::Ec2SubnetInvalidConfiguration;
          }
          else if (hashCode == IamInstanceProfileNotFound_HASH)
          {
            return NodegroupIssueCode::IamInstanceProfileNotFound;
          }
          else if (hashCode == Ec2SubnetMissingIpv6Assignment_HASH)
          {
            return NodegroupIssueCode::Ec2SubnetMissingIpv6Assignment;
          }
          else if (hashCode == IamLimitExceeded_HASH)
          {
            return NodegroupIssueCode::IamLimitExceeded;
          }
          else if (hashCode == IamNodeRoleNotFound_HASH)
          {
            return NodegroupIssueCode::IamNodeRoleNotFound;
          }
          else if (hashCode == NodeCreationFailure_HASH)
          {
            return NodegroupIssueCode::NodeCreationFailure;
          }
          else if (hashCode == AsgInstanceLaunchFailures_HASH)
          {
            return NodegroupIssueCode::AsgInstanceLaunchFailures;
          }
          else if (hashCode == InstanceLimitExceeded_HASH)
          {
            return NodegroupIssueCode::InstanceLimitExceeded;
          }
          else if (hashCode == InsufficientFreeAddresses_HASH)
          {
            return NodegroupIssueCode::InsufficientFreeAddresses;
          }
          else if (hashCode == AccessDenied_HASH)
          {
            return NodegroupIssueCode::AccessDenied;
          }
          else if (hashCode == InternalFailure_HASH)
          {
            return NodegroupIssueCode::InternalFailure;
          }
          else if (hashCode == ClusterUnreachable_HASH)
          {
            return NodegroupIssueCode::ClusterUnreachable;
          }
          else if (hashCode == AmiIdNotFound_HASH)
          {
            return NodegroupIssueCode::AmiIdNotFound;
          }
          else if (hashCode == AutoScalingGroupOptInRequired_HASH)
          {
            return NodegroupIssueCode::AutoScalingGroupOptInRequired;
          }
          else if (hashCode == AutoScalingGroupRateLimitExceeded_HASH)
          {
            return NodegroupIssueCode::AutoScalingGroupRateLimitExceeded;
          }
          else if (hashCode == Ec2LaunchTemplateDeletionFailure_HASH)
          {
            return NodegroupIssueCode::Ec2LaunchTemplateDeletionFailure;
          }
          else if (hashCode == Ec2LaunchTemplateInvalidConfiguration_HASH)
          {
            return NodegroupIssueCode::Ec2LaunchTemplateInvalidConfiguration;
          }
          else if (hashCode == Ec2LaunchTemplateMaxLimitExceeded_HASH)
          {
            return NodegroupIssueCode::Ec2LaunchTemplateMaxLimitExceeded;
          }
          else if (hashCode == Ec2SubnetListTooLong_HASH)
          {
            return NodegroupIssueCode::Ec2SubnetListTooLong;
          }
          else if (hashCode == IamThrottling_HASH)
          {
            return NodegroupIssueCode::IamThrottling;
          }
          else if (hashCode == NodeTerminationFailure_HASH)
          {
            return NodegroupIssueCode::NodeTerminationFailure;
          }
          else if (hashCode == PodEvictionFailure_HASH)
          {
            return NodegroupIssueCode::PodEvictionFailure;
          }
          else if (hashCode == SourceEc2LaunchTemplateNotFound_HASH)
          {
            return NodegroupIssueCode::SourceEc2LaunchTemplateNotFound;
          }
          else if (hashCode == LimitExceeded_HASH)
          {
            return NodegroupIssueCode::LimitExceeded;
          }
          else if (hashCode == Unknown_HASH)
          {
            return NodegroupIssueCode::Unknown;
          }
          else if (hashCode == AutoScalingGroupInstanceRefreshActive_HASH)
          {
            return NodegroupIssueCode::AutoScalingGroupInstanceRefreshActive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodegroupIssueCode>(hashCode);
          }

          return NodegroupIssueCode::NOT_SET;
        }

        Aws::String GetNameForNodegroupIssueCode(NodegroupIssueCode enumValue)
        {
          switch(enumValue)
          {
          case NodegroupIssueCode::NOT_SET:
            return {};
          case NodegroupIssueCode::AutoScalingGroupNotFound:
            return "AutoScalingGroupNotFound";
          case NodegroupIssueCode::AutoScalingGroupInvalidConfiguration:
            return "AutoScalingGroupInvalidConfiguration";
          case NodegroupIssueCode::Ec2SecurityGroupNotFound:
            return "Ec2SecurityGroupNotFound";
          case NodegroupIssueCode::Ec2SecurityGroupDeletionFailure:
            return "Ec2SecurityGroupDeletionFailure";
          case NodegroupIssueCode::Ec2LaunchTemplateNotFound:
            return "Ec2LaunchTemplateNotFound";
          case NodegroupIssueCode::Ec2LaunchTemplateVersionMismatch:
            return "Ec2LaunchTemplateVersionMismatch";
          case NodegroupIssueCode::Ec2SubnetNotFound:
            return "Ec2SubnetNotFound";
          case NodegroupIssueCode::Ec2SubnetInvalidConfiguration:
            return "Ec2SubnetInvalidConfiguration";
          case NodegroupIssueCode::IamInstanceProfileNotFound:
            return "IamInstanceProfileNotFound";
          case NodegroupIssueCode::Ec2SubnetMissingIpv6Assignment:
            return "Ec2SubnetMissingIpv6Assignment";
          case NodegroupIssueCode::IamLimitExceeded:
            return "IamLimitExceeded";
          case NodegroupIssueCode::IamNodeRoleNotFound:
            return "IamNodeRoleNotFound";
          case NodegroupIssueCode::NodeCreationFailure:
            return "NodeCreationFailure";
          case NodegroupIssueCode::AsgInstanceLaunchFailures:
            return "AsgInstanceLaunchFailures";
          case NodegroupIssueCode::InstanceLimitExceeded:
            return "InstanceLimitExceeded";
          case NodegroupIssueCode::InsufficientFreeAddresses:
            return "InsufficientFreeAddresses";
          case NodegroupIssueCode::AccessDenied:
            return "AccessDenied";
          case NodegroupIssueCode::InternalFailure:
            return "InternalFailure";
          case NodegroupIssueCode::ClusterUnreachable:
            return "ClusterUnreachable";
          case NodegroupIssueCode::AmiIdNotFound:
            return "AmiIdNotFound";
          case NodegroupIssueCode::AutoScalingGroupOptInRequired:
            return "AutoScalingGroupOptInRequired";
          case NodegroupIssueCode::AutoScalingGroupRateLimitExceeded:
            return "AutoScalingGroupRateLimitExceeded";
          case NodegroupIssueCode::Ec2LaunchTemplateDeletionFailure:
            return "Ec2LaunchTemplateDeletionFailure";
          case NodegroupIssueCode::Ec2LaunchTemplateInvalidConfiguration:
            return "Ec2LaunchTemplateInvalidConfiguration";
          case NodegroupIssueCode::Ec2LaunchTemplateMaxLimitExceeded:
            return "Ec2LaunchTemplateMaxLimitExceeded";
          case NodegroupIssueCode::Ec2SubnetListTooLong:
            return "Ec2SubnetListTooLong";
          case NodegroupIssueCode::IamThrottling:
            return "IamThrottling";
          case NodegroupIssueCode::NodeTerminationFailure:
            return "NodeTerminationFailure";
          case NodegroupIssueCode::PodEvictionFailure:
            return "PodEvictionFailure";
          case NodegroupIssueCode::SourceEc2LaunchTemplateNotFound:
            return "SourceEc2LaunchTemplateNotFound";
          case NodegroupIssueCode::LimitExceeded:
            return "LimitExceeded";
          case NodegroupIssueCode::Unknown:
            return "Unknown";
          case NodegroupIssueCode::AutoScalingGroupInstanceRefreshActive:
            return "AutoScalingGroupInstanceRefreshActive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodegroupIssueCodeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
