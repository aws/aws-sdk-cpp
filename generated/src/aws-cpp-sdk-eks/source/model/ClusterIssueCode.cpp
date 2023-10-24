/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ClusterIssueCode.h>
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
      namespace ClusterIssueCodeMapper
      {

        static const int AccessDenied_HASH = HashingUtils::HashString("AccessDenied");
        static const int ClusterUnreachable_HASH = HashingUtils::HashString("ClusterUnreachable");
        static const int ConfigurationConflict_HASH = HashingUtils::HashString("ConfigurationConflict");
        static const int InternalFailure_HASH = HashingUtils::HashString("InternalFailure");
        static const int ResourceLimitExceeded_HASH = HashingUtils::HashString("ResourceLimitExceeded");
        static const int ResourceNotFound_HASH = HashingUtils::HashString("ResourceNotFound");
        static const int IamRoleNotFound_HASH = HashingUtils::HashString("IamRoleNotFound");
        static const int VpcNotFound_HASH = HashingUtils::HashString("VpcNotFound");
        static const int InsufficientFreeAddresses_HASH = HashingUtils::HashString("InsufficientFreeAddresses");
        static const int Ec2ServiceNotSubscribed_HASH = HashingUtils::HashString("Ec2ServiceNotSubscribed");
        static const int Ec2SubnetNotFound_HASH = HashingUtils::HashString("Ec2SubnetNotFound");
        static const int Ec2SecurityGroupNotFound_HASH = HashingUtils::HashString("Ec2SecurityGroupNotFound");
        static const int KmsGrantRevoked_HASH = HashingUtils::HashString("KmsGrantRevoked");
        static const int KmsKeyNotFound_HASH = HashingUtils::HashString("KmsKeyNotFound");
        static const int KmsKeyMarkedForDeletion_HASH = HashingUtils::HashString("KmsKeyMarkedForDeletion");
        static const int KmsKeyDisabled_HASH = HashingUtils::HashString("KmsKeyDisabled");
        static const int StsRegionalEndpointDisabled_HASH = HashingUtils::HashString("StsRegionalEndpointDisabled");
        static const int UnsupportedVersion_HASH = HashingUtils::HashString("UnsupportedVersion");
        static const int Other_HASH = HashingUtils::HashString("Other");


        ClusterIssueCode GetClusterIssueCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccessDenied_HASH)
          {
            return ClusterIssueCode::AccessDenied;
          }
          else if (hashCode == ClusterUnreachable_HASH)
          {
            return ClusterIssueCode::ClusterUnreachable;
          }
          else if (hashCode == ConfigurationConflict_HASH)
          {
            return ClusterIssueCode::ConfigurationConflict;
          }
          else if (hashCode == InternalFailure_HASH)
          {
            return ClusterIssueCode::InternalFailure;
          }
          else if (hashCode == ResourceLimitExceeded_HASH)
          {
            return ClusterIssueCode::ResourceLimitExceeded;
          }
          else if (hashCode == ResourceNotFound_HASH)
          {
            return ClusterIssueCode::ResourceNotFound;
          }
          else if (hashCode == IamRoleNotFound_HASH)
          {
            return ClusterIssueCode::IamRoleNotFound;
          }
          else if (hashCode == VpcNotFound_HASH)
          {
            return ClusterIssueCode::VpcNotFound;
          }
          else if (hashCode == InsufficientFreeAddresses_HASH)
          {
            return ClusterIssueCode::InsufficientFreeAddresses;
          }
          else if (hashCode == Ec2ServiceNotSubscribed_HASH)
          {
            return ClusterIssueCode::Ec2ServiceNotSubscribed;
          }
          else if (hashCode == Ec2SubnetNotFound_HASH)
          {
            return ClusterIssueCode::Ec2SubnetNotFound;
          }
          else if (hashCode == Ec2SecurityGroupNotFound_HASH)
          {
            return ClusterIssueCode::Ec2SecurityGroupNotFound;
          }
          else if (hashCode == KmsGrantRevoked_HASH)
          {
            return ClusterIssueCode::KmsGrantRevoked;
          }
          else if (hashCode == KmsKeyNotFound_HASH)
          {
            return ClusterIssueCode::KmsKeyNotFound;
          }
          else if (hashCode == KmsKeyMarkedForDeletion_HASH)
          {
            return ClusterIssueCode::KmsKeyMarkedForDeletion;
          }
          else if (hashCode == KmsKeyDisabled_HASH)
          {
            return ClusterIssueCode::KmsKeyDisabled;
          }
          else if (hashCode == StsRegionalEndpointDisabled_HASH)
          {
            return ClusterIssueCode::StsRegionalEndpointDisabled;
          }
          else if (hashCode == UnsupportedVersion_HASH)
          {
            return ClusterIssueCode::UnsupportedVersion;
          }
          else if (hashCode == Other_HASH)
          {
            return ClusterIssueCode::Other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterIssueCode>(hashCode);
          }

          return ClusterIssueCode::NOT_SET;
        }

        Aws::String GetNameForClusterIssueCode(ClusterIssueCode enumValue)
        {
          switch(enumValue)
          {
          case ClusterIssueCode::NOT_SET:
            return {};
          case ClusterIssueCode::AccessDenied:
            return "AccessDenied";
          case ClusterIssueCode::ClusterUnreachable:
            return "ClusterUnreachable";
          case ClusterIssueCode::ConfigurationConflict:
            return "ConfigurationConflict";
          case ClusterIssueCode::InternalFailure:
            return "InternalFailure";
          case ClusterIssueCode::ResourceLimitExceeded:
            return "ResourceLimitExceeded";
          case ClusterIssueCode::ResourceNotFound:
            return "ResourceNotFound";
          case ClusterIssueCode::IamRoleNotFound:
            return "IamRoleNotFound";
          case ClusterIssueCode::VpcNotFound:
            return "VpcNotFound";
          case ClusterIssueCode::InsufficientFreeAddresses:
            return "InsufficientFreeAddresses";
          case ClusterIssueCode::Ec2ServiceNotSubscribed:
            return "Ec2ServiceNotSubscribed";
          case ClusterIssueCode::Ec2SubnetNotFound:
            return "Ec2SubnetNotFound";
          case ClusterIssueCode::Ec2SecurityGroupNotFound:
            return "Ec2SecurityGroupNotFound";
          case ClusterIssueCode::KmsGrantRevoked:
            return "KmsGrantRevoked";
          case ClusterIssueCode::KmsKeyNotFound:
            return "KmsKeyNotFound";
          case ClusterIssueCode::KmsKeyMarkedForDeletion:
            return "KmsKeyMarkedForDeletion";
          case ClusterIssueCode::KmsKeyDisabled:
            return "KmsKeyDisabled";
          case ClusterIssueCode::StsRegionalEndpointDisabled:
            return "StsRegionalEndpointDisabled";
          case ClusterIssueCode::UnsupportedVersion:
            return "UnsupportedVersion";
          case ClusterIssueCode::Other:
            return "Other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterIssueCodeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
