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

        static constexpr uint32_t VersionUpdate_HASH = ConstExprHashingUtils::HashString("VersionUpdate");
        static constexpr uint32_t EndpointAccessUpdate_HASH = ConstExprHashingUtils::HashString("EndpointAccessUpdate");
        static constexpr uint32_t LoggingUpdate_HASH = ConstExprHashingUtils::HashString("LoggingUpdate");
        static constexpr uint32_t ConfigUpdate_HASH = ConstExprHashingUtils::HashString("ConfigUpdate");
        static constexpr uint32_t AssociateIdentityProviderConfig_HASH = ConstExprHashingUtils::HashString("AssociateIdentityProviderConfig");
        static constexpr uint32_t DisassociateIdentityProviderConfig_HASH = ConstExprHashingUtils::HashString("DisassociateIdentityProviderConfig");
        static constexpr uint32_t AssociateEncryptionConfig_HASH = ConstExprHashingUtils::HashString("AssociateEncryptionConfig");
        static constexpr uint32_t AddonUpdate_HASH = ConstExprHashingUtils::HashString("AddonUpdate");


        UpdateType GetUpdateTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
