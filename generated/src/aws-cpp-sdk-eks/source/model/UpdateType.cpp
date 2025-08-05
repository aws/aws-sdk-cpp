/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpdateType.h>
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
      namespace UpdateTypeMapper
      {

        static const int VersionUpdate_HASH = HashingUtils::HashString("VersionUpdate");
        static const int EndpointAccessUpdate_HASH = HashingUtils::HashString("EndpointAccessUpdate");
        static const int LoggingUpdate_HASH = HashingUtils::HashString("LoggingUpdate");
        static const int ConfigUpdate_HASH = HashingUtils::HashString("ConfigUpdate");
        static const int AssociateIdentityProviderConfig_HASH = HashingUtils::HashString("AssociateIdentityProviderConfig");
        static const int DisassociateIdentityProviderConfig_HASH = HashingUtils::HashString("DisassociateIdentityProviderConfig");
        static const int AssociateEncryptionConfig_HASH = HashingUtils::HashString("AssociateEncryptionConfig");
        static const int AddonUpdate_HASH = HashingUtils::HashString("AddonUpdate");
        static const int VpcConfigUpdate_HASH = HashingUtils::HashString("VpcConfigUpdate");
        static const int AccessConfigUpdate_HASH = HashingUtils::HashString("AccessConfigUpdate");
        static const int UpgradePolicyUpdate_HASH = HashingUtils::HashString("UpgradePolicyUpdate");
        static const int ZonalShiftConfigUpdate_HASH = HashingUtils::HashString("ZonalShiftConfigUpdate");
        static const int AutoModeUpdate_HASH = HashingUtils::HashString("AutoModeUpdate");
        static const int RemoteNetworkConfigUpdate_HASH = HashingUtils::HashString("RemoteNetworkConfigUpdate");
        static const int DeletionProtectionUpdate_HASH = HashingUtils::HashString("DeletionProtectionUpdate");


        UpdateType GetUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VersionUpdate_HASH)
          {
            return UpdateType::VersionUpdate;
          }
          else if (hashCode == EndpointAccessUpdate_HASH)
          {
            return UpdateType::EndpointAccessUpdate;
          }
          else if (hashCode == LoggingUpdate_HASH)
          {
            return UpdateType::LoggingUpdate;
          }
          else if (hashCode == ConfigUpdate_HASH)
          {
            return UpdateType::ConfigUpdate;
          }
          else if (hashCode == AssociateIdentityProviderConfig_HASH)
          {
            return UpdateType::AssociateIdentityProviderConfig;
          }
          else if (hashCode == DisassociateIdentityProviderConfig_HASH)
          {
            return UpdateType::DisassociateIdentityProviderConfig;
          }
          else if (hashCode == AssociateEncryptionConfig_HASH)
          {
            return UpdateType::AssociateEncryptionConfig;
          }
          else if (hashCode == AddonUpdate_HASH)
          {
            return UpdateType::AddonUpdate;
          }
          else if (hashCode == VpcConfigUpdate_HASH)
          {
            return UpdateType::VpcConfigUpdate;
          }
          else if (hashCode == AccessConfigUpdate_HASH)
          {
            return UpdateType::AccessConfigUpdate;
          }
          else if (hashCode == UpgradePolicyUpdate_HASH)
          {
            return UpdateType::UpgradePolicyUpdate;
          }
          else if (hashCode == ZonalShiftConfigUpdate_HASH)
          {
            return UpdateType::ZonalShiftConfigUpdate;
          }
          else if (hashCode == AutoModeUpdate_HASH)
          {
            return UpdateType::AutoModeUpdate;
          }
          else if (hashCode == RemoteNetworkConfigUpdate_HASH)
          {
            return UpdateType::RemoteNetworkConfigUpdate;
          }
          else if (hashCode == DeletionProtectionUpdate_HASH)
          {
            return UpdateType::DeletionProtectionUpdate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateType>(hashCode);
          }

          return UpdateType::NOT_SET;
        }

        Aws::String GetNameForUpdateType(UpdateType enumValue)
        {
          switch(enumValue)
          {
          case UpdateType::NOT_SET:
            return {};
          case UpdateType::VersionUpdate:
            return "VersionUpdate";
          case UpdateType::EndpointAccessUpdate:
            return "EndpointAccessUpdate";
          case UpdateType::LoggingUpdate:
            return "LoggingUpdate";
          case UpdateType::ConfigUpdate:
            return "ConfigUpdate";
          case UpdateType::AssociateIdentityProviderConfig:
            return "AssociateIdentityProviderConfig";
          case UpdateType::DisassociateIdentityProviderConfig:
            return "DisassociateIdentityProviderConfig";
          case UpdateType::AssociateEncryptionConfig:
            return "AssociateEncryptionConfig";
          case UpdateType::AddonUpdate:
            return "AddonUpdate";
          case UpdateType::VpcConfigUpdate:
            return "VpcConfigUpdate";
          case UpdateType::AccessConfigUpdate:
            return "AccessConfigUpdate";
          case UpdateType::UpgradePolicyUpdate:
            return "UpgradePolicyUpdate";
          case UpdateType::ZonalShiftConfigUpdate:
            return "ZonalShiftConfigUpdate";
          case UpdateType::AutoModeUpdate:
            return "AutoModeUpdate";
          case UpdateType::RemoteNetworkConfigUpdate:
            return "RemoteNetworkConfigUpdate";
          case UpdateType::DeletionProtectionUpdate:
            return "DeletionProtectionUpdate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateTypeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
