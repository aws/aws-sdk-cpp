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

        static constexpr uint32_t Version_HASH = ConstExprHashingUtils::HashString("Version");
        static constexpr uint32_t PlatformVersion_HASH = ConstExprHashingUtils::HashString("PlatformVersion");
        static constexpr uint32_t EndpointPrivateAccess_HASH = ConstExprHashingUtils::HashString("EndpointPrivateAccess");
        static constexpr uint32_t EndpointPublicAccess_HASH = ConstExprHashingUtils::HashString("EndpointPublicAccess");
        static constexpr uint32_t ClusterLogging_HASH = ConstExprHashingUtils::HashString("ClusterLogging");
        static constexpr uint32_t DesiredSize_HASH = ConstExprHashingUtils::HashString("DesiredSize");
        static constexpr uint32_t LabelsToAdd_HASH = ConstExprHashingUtils::HashString("LabelsToAdd");
        static constexpr uint32_t LabelsToRemove_HASH = ConstExprHashingUtils::HashString("LabelsToRemove");
        static constexpr uint32_t TaintsToAdd_HASH = ConstExprHashingUtils::HashString("TaintsToAdd");
        static constexpr uint32_t TaintsToRemove_HASH = ConstExprHashingUtils::HashString("TaintsToRemove");
        static constexpr uint32_t MaxSize_HASH = ConstExprHashingUtils::HashString("MaxSize");
        static constexpr uint32_t MinSize_HASH = ConstExprHashingUtils::HashString("MinSize");
        static constexpr uint32_t ReleaseVersion_HASH = ConstExprHashingUtils::HashString("ReleaseVersion");
        static constexpr uint32_t PublicAccessCidrs_HASH = ConstExprHashingUtils::HashString("PublicAccessCidrs");
        static constexpr uint32_t LaunchTemplateName_HASH = ConstExprHashingUtils::HashString("LaunchTemplateName");
        static constexpr uint32_t LaunchTemplateVersion_HASH = ConstExprHashingUtils::HashString("LaunchTemplateVersion");
        static constexpr uint32_t IdentityProviderConfig_HASH = ConstExprHashingUtils::HashString("IdentityProviderConfig");
        static constexpr uint32_t EncryptionConfig_HASH = ConstExprHashingUtils::HashString("EncryptionConfig");
        static constexpr uint32_t AddonVersion_HASH = ConstExprHashingUtils::HashString("AddonVersion");
        static constexpr uint32_t ServiceAccountRoleArn_HASH = ConstExprHashingUtils::HashString("ServiceAccountRoleArn");
        static constexpr uint32_t ResolveConflicts_HASH = ConstExprHashingUtils::HashString("ResolveConflicts");
        static constexpr uint32_t MaxUnavailable_HASH = ConstExprHashingUtils::HashString("MaxUnavailable");
        static constexpr uint32_t MaxUnavailablePercentage_HASH = ConstExprHashingUtils::HashString("MaxUnavailablePercentage");


        UpdateParamType GetUpdateParamTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
