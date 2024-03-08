/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/VaultType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace VaultTypeMapper
      {

        static const int BACKUP_VAULT_HASH = HashingUtils::HashString("BACKUP_VAULT");
        static const int LOGICALLY_AIR_GAPPED_BACKUP_VAULT_HASH = HashingUtils::HashString("LOGICALLY_AIR_GAPPED_BACKUP_VAULT");


        VaultType GetVaultTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BACKUP_VAULT_HASH)
          {
            return VaultType::BACKUP_VAULT;
          }
          else if (hashCode == LOGICALLY_AIR_GAPPED_BACKUP_VAULT_HASH)
          {
            return VaultType::LOGICALLY_AIR_GAPPED_BACKUP_VAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VaultType>(hashCode);
          }

          return VaultType::NOT_SET;
        }

        Aws::String GetNameForVaultType(VaultType enumValue)
        {
          switch(enumValue)
          {
          case VaultType::NOT_SET:
            return {};
          case VaultType::BACKUP_VAULT:
            return "BACKUP_VAULT";
          case VaultType::LOGICALLY_AIR_GAPPED_BACKUP_VAULT:
            return "LOGICALLY_AIR_GAPPED_BACKUP_VAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VaultTypeMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
