/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpdateParamType.h>
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
      namespace UpdateParamTypeMapper
      {

        static const int Version_HASH = HashingUtils::HashString("Version");
        static const int PlatformVersion_HASH = HashingUtils::HashString("PlatformVersion");
        static const int EndpointPrivateAccess_HASH = HashingUtils::HashString("EndpointPrivateAccess");
        static const int EndpointPublicAccess_HASH = HashingUtils::HashString("EndpointPublicAccess");
        static const int ClusterLogging_HASH = HashingUtils::HashString("ClusterLogging");
        static const int DesiredSize_HASH = HashingUtils::HashString("DesiredSize");
        static const int LabelsToAdd_HASH = HashingUtils::HashString("LabelsToAdd");
        static const int LabelsToRemove_HASH = HashingUtils::HashString("LabelsToRemove");
        static const int TaintsToAdd_HASH = HashingUtils::HashString("TaintsToAdd");
        static const int TaintsToRemove_HASH = HashingUtils::HashString("TaintsToRemove");
        static const int MaxSize_HASH = HashingUtils::HashString("MaxSize");
        static const int MinSize_HASH = HashingUtils::HashString("MinSize");
        static const int ReleaseVersion_HASH = HashingUtils::HashString("ReleaseVersion");
        static const int PublicAccessCidrs_HASH = HashingUtils::HashString("PublicAccessCidrs");
        static const int LaunchTemplateName_HASH = HashingUtils::HashString("LaunchTemplateName");
        static const int LaunchTemplateVersion_HASH = HashingUtils::HashString("LaunchTemplateVersion");
        static const int IdentityProviderConfig_HASH = HashingUtils::HashString("IdentityProviderConfig");
        static const int EncryptionConfig_HASH = HashingUtils::HashString("EncryptionConfig");
        static const int AddonVersion_HASH = HashingUtils::HashString("AddonVersion");
        static const int ServiceAccountRoleArn_HASH = HashingUtils::HashString("ServiceAccountRoleArn");
        static const int ResolveConflicts_HASH = HashingUtils::HashString("ResolveConflicts");
        static const int MaxUnavailable_HASH = HashingUtils::HashString("MaxUnavailable");
        static const int MaxUnavailablePercentage_HASH = HashingUtils::HashString("MaxUnavailablePercentage");
        static const int ConfigurationValues_HASH = HashingUtils::HashString("ConfigurationValues");
        static const int SecurityGroups_HASH = HashingUtils::HashString("SecurityGroups");
        static const int Subnets_HASH = HashingUtils::HashString("Subnets");
        static const int AuthenticationMode_HASH = HashingUtils::HashString("AuthenticationMode");


        UpdateParamType GetUpdateParamTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Version_HASH)
          {
            return UpdateParamType::Version;
          }
          else if (hashCode == PlatformVersion_HASH)
          {
            return UpdateParamType::PlatformVersion;
          }
          else if (hashCode == EndpointPrivateAccess_HASH)
          {
            return UpdateParamType::EndpointPrivateAccess;
          }
          else if (hashCode == EndpointPublicAccess_HASH)
          {
            return UpdateParamType::EndpointPublicAccess;
          }
          else if (hashCode == ClusterLogging_HASH)
          {
            return UpdateParamType::ClusterLogging;
          }
          else if (hashCode == DesiredSize_HASH)
          {
            return UpdateParamType::DesiredSize;
          }
          else if (hashCode == LabelsToAdd_HASH)
          {
            return UpdateParamType::LabelsToAdd;
          }
          else if (hashCode == LabelsToRemove_HASH)
          {
            return UpdateParamType::LabelsToRemove;
          }
          else if (hashCode == TaintsToAdd_HASH)
          {
            return UpdateParamType::TaintsToAdd;
          }
          else if (hashCode == TaintsToRemove_HASH)
          {
            return UpdateParamType::TaintsToRemove;
          }
          else if (hashCode == MaxSize_HASH)
          {
            return UpdateParamType::MaxSize;
          }
          else if (hashCode == MinSize_HASH)
          {
            return UpdateParamType::MinSize;
          }
          else if (hashCode == ReleaseVersion_HASH)
          {
            return UpdateParamType::ReleaseVersion;
          }
          else if (hashCode == PublicAccessCidrs_HASH)
          {
            return UpdateParamType::PublicAccessCidrs;
          }
          else if (hashCode == LaunchTemplateName_HASH)
          {
            return UpdateParamType::LaunchTemplateName;
          }
          else if (hashCode == LaunchTemplateVersion_HASH)
          {
            return UpdateParamType::LaunchTemplateVersion;
          }
          else if (hashCode == IdentityProviderConfig_HASH)
          {
            return UpdateParamType::IdentityProviderConfig;
          }
          else if (hashCode == EncryptionConfig_HASH)
          {
            return UpdateParamType::EncryptionConfig;
          }
          else if (hashCode == AddonVersion_HASH)
          {
            return UpdateParamType::AddonVersion;
          }
          else if (hashCode == ServiceAccountRoleArn_HASH)
          {
            return UpdateParamType::ServiceAccountRoleArn;
          }
          else if (hashCode == ResolveConflicts_HASH)
          {
            return UpdateParamType::ResolveConflicts;
          }
          else if (hashCode == MaxUnavailable_HASH)
          {
            return UpdateParamType::MaxUnavailable;
          }
          else if (hashCode == MaxUnavailablePercentage_HASH)
          {
            return UpdateParamType::MaxUnavailablePercentage;
          }
          else if (hashCode == ConfigurationValues_HASH)
          {
            return UpdateParamType::ConfigurationValues;
          }
          else if (hashCode == SecurityGroups_HASH)
          {
            return UpdateParamType::SecurityGroups;
          }
          else if (hashCode == Subnets_HASH)
          {
            return UpdateParamType::Subnets;
          }
          else if (hashCode == AuthenticationMode_HASH)
          {
            return UpdateParamType::AuthenticationMode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateParamType>(hashCode);
          }

          return UpdateParamType::NOT_SET;
        }

        Aws::String GetNameForUpdateParamType(UpdateParamType enumValue)
        {
          switch(enumValue)
          {
          case UpdateParamType::NOT_SET:
            return {};
          case UpdateParamType::Version:
            return "Version";
          case UpdateParamType::PlatformVersion:
            return "PlatformVersion";
          case UpdateParamType::EndpointPrivateAccess:
            return "EndpointPrivateAccess";
          case UpdateParamType::EndpointPublicAccess:
            return "EndpointPublicAccess";
          case UpdateParamType::ClusterLogging:
            return "ClusterLogging";
          case UpdateParamType::DesiredSize:
            return "DesiredSize";
          case UpdateParamType::LabelsToAdd:
            return "LabelsToAdd";
          case UpdateParamType::LabelsToRemove:
            return "LabelsToRemove";
          case UpdateParamType::TaintsToAdd:
            return "TaintsToAdd";
          case UpdateParamType::TaintsToRemove:
            return "TaintsToRemove";
          case UpdateParamType::MaxSize:
            return "MaxSize";
          case UpdateParamType::MinSize:
            return "MinSize";
          case UpdateParamType::ReleaseVersion:
            return "ReleaseVersion";
          case UpdateParamType::PublicAccessCidrs:
            return "PublicAccessCidrs";
          case UpdateParamType::LaunchTemplateName:
            return "LaunchTemplateName";
          case UpdateParamType::LaunchTemplateVersion:
            return "LaunchTemplateVersion";
          case UpdateParamType::IdentityProviderConfig:
            return "IdentityProviderConfig";
          case UpdateParamType::EncryptionConfig:
            return "EncryptionConfig";
          case UpdateParamType::AddonVersion:
            return "AddonVersion";
          case UpdateParamType::ServiceAccountRoleArn:
            return "ServiceAccountRoleArn";
          case UpdateParamType::ResolveConflicts:
            return "ResolveConflicts";
          case UpdateParamType::MaxUnavailable:
            return "MaxUnavailable";
          case UpdateParamType::MaxUnavailablePercentage:
            return "MaxUnavailablePercentage";
          case UpdateParamType::ConfigurationValues:
            return "ConfigurationValues";
          case UpdateParamType::SecurityGroups:
            return "SecurityGroups";
          case UpdateParamType::Subnets:
            return "Subnets";
          case UpdateParamType::AuthenticationMode:
            return "AuthenticationMode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateParamTypeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
