/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int AutoScalingGroupNotFound_HASH = HashingUtils::HashString("AutoScalingGroupNotFound");
        static const int AutoScalingGroupInvalidConfiguration_HASH = HashingUtils::HashString("AutoScalingGroupInvalidConfiguration");
        static const int Ec2SecurityGroupNotFound_HASH = HashingUtils::HashString("Ec2SecurityGroupNotFound");
        static const int Ec2SecurityGroupDeletionFailure_HASH = HashingUtils::HashString("Ec2SecurityGroupDeletionFailure");
        static const int Ec2LaunchTemplateNotFound_HASH = HashingUtils::HashString("Ec2LaunchTemplateNotFound");
        static const int Ec2LaunchTemplateVersionMismatch_HASH = HashingUtils::HashString("Ec2LaunchTemplateVersionMismatch");
        static const int Ec2SubnetNotFound_HASH = HashingUtils::HashString("Ec2SubnetNotFound");
        static const int IamInstanceProfileNotFound_HASH = HashingUtils::HashString("IamInstanceProfileNotFound");
        static const int IamLimitExceeded_HASH = HashingUtils::HashString("IamLimitExceeded");
        static const int IamNodeRoleNotFound_HASH = HashingUtils::HashString("IamNodeRoleNotFound");
        static const int AsgInstanceLaunchFailures_HASH = HashingUtils::HashString("AsgInstanceLaunchFailures");
        static const int InstanceLimitExceeded_HASH = HashingUtils::HashString("InstanceLimitExceeded");
        static const int InsufficientFreeAddresses_HASH = HashingUtils::HashString("InsufficientFreeAddresses");
        static const int AccessDenied_HASH = HashingUtils::HashString("AccessDenied");
        static const int InternalFailure_HASH = HashingUtils::HashString("InternalFailure");


        NodegroupIssueCode GetNodegroupIssueCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == IamInstanceProfileNotFound_HASH)
          {
            return NodegroupIssueCode::IamInstanceProfileNotFound;
          }
          else if (hashCode == IamLimitExceeded_HASH)
          {
            return NodegroupIssueCode::IamLimitExceeded;
          }
          else if (hashCode == IamNodeRoleNotFound_HASH)
          {
            return NodegroupIssueCode::IamNodeRoleNotFound;
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
          case NodegroupIssueCode::IamInstanceProfileNotFound:
            return "IamInstanceProfileNotFound";
          case NodegroupIssueCode::IamLimitExceeded:
            return "IamLimitExceeded";
          case NodegroupIssueCode::IamNodeRoleNotFound:
            return "IamNodeRoleNotFound";
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
