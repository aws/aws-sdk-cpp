/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/GatewayType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BackupGateway
  {
    namespace Model
    {
      namespace GatewayTypeMapper
      {

        static const int BACKUP_VM_HASH = HashingUtils::HashString("BACKUP_VM");


        GatewayType GetGatewayTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BACKUP_VM_HASH)
          {
            return GatewayType::BACKUP_VM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GatewayType>(hashCode);
          }

          return GatewayType::NOT_SET;
        }

        Aws::String GetNameForGatewayType(GatewayType enumValue)
        {
          switch(enumValue)
          {
          case GatewayType::NOT_SET:
            return {};
          case GatewayType::BACKUP_VM:
            return "BACKUP_VM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GatewayTypeMapper
    } // namespace Model
  } // namespace BackupGateway
} // namespace Aws
