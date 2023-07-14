/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstanceInformationFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace InstanceInformationFilterKeyMapper
      {

        static const int InstanceIds_HASH = HashingUtils::HashString("InstanceIds");
        static const int AgentVersion_HASH = HashingUtils::HashString("AgentVersion");
        static const int PingStatus_HASH = HashingUtils::HashString("PingStatus");
        static const int PlatformTypes_HASH = HashingUtils::HashString("PlatformTypes");
        static const int ActivationIds_HASH = HashingUtils::HashString("ActivationIds");
        static const int IamRole_HASH = HashingUtils::HashString("IamRole");
        static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");
        static const int AssociationStatus_HASH = HashingUtils::HashString("AssociationStatus");


        InstanceInformationFilterKey GetInstanceInformationFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InstanceIds_HASH)
          {
            return InstanceInformationFilterKey::InstanceIds;
          }
          else if (hashCode == AgentVersion_HASH)
          {
            return InstanceInformationFilterKey::AgentVersion;
          }
          else if (hashCode == PingStatus_HASH)
          {
            return InstanceInformationFilterKey::PingStatus;
          }
          else if (hashCode == PlatformTypes_HASH)
          {
            return InstanceInformationFilterKey::PlatformTypes;
          }
          else if (hashCode == ActivationIds_HASH)
          {
            return InstanceInformationFilterKey::ActivationIds;
          }
          else if (hashCode == IamRole_HASH)
          {
            return InstanceInformationFilterKey::IamRole;
          }
          else if (hashCode == ResourceType_HASH)
          {
            return InstanceInformationFilterKey::ResourceType;
          }
          else if (hashCode == AssociationStatus_HASH)
          {
            return InstanceInformationFilterKey::AssociationStatus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceInformationFilterKey>(hashCode);
          }

          return InstanceInformationFilterKey::NOT_SET;
        }

        Aws::String GetNameForInstanceInformationFilterKey(InstanceInformationFilterKey enumValue)
        {
          switch(enumValue)
          {
          case InstanceInformationFilterKey::InstanceIds:
            return "InstanceIds";
          case InstanceInformationFilterKey::AgentVersion:
            return "AgentVersion";
          case InstanceInformationFilterKey::PingStatus:
            return "PingStatus";
          case InstanceInformationFilterKey::PlatformTypes:
            return "PlatformTypes";
          case InstanceInformationFilterKey::ActivationIds:
            return "ActivationIds";
          case InstanceInformationFilterKey::IamRole:
            return "IamRole";
          case InstanceInformationFilterKey::ResourceType:
            return "ResourceType";
          case InstanceInformationFilterKey::AssociationStatus:
            return "AssociationStatus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceInformationFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
