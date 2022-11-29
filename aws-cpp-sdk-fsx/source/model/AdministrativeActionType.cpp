/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/AdministrativeActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace AdministrativeActionTypeMapper
      {

        static const int FILE_SYSTEM_UPDATE_HASH = HashingUtils::HashString("FILE_SYSTEM_UPDATE");
        static const int STORAGE_OPTIMIZATION_HASH = HashingUtils::HashString("STORAGE_OPTIMIZATION");
        static const int FILE_SYSTEM_ALIAS_ASSOCIATION_HASH = HashingUtils::HashString("FILE_SYSTEM_ALIAS_ASSOCIATION");
        static const int FILE_SYSTEM_ALIAS_DISASSOCIATION_HASH = HashingUtils::HashString("FILE_SYSTEM_ALIAS_DISASSOCIATION");
        static const int VOLUME_UPDATE_HASH = HashingUtils::HashString("VOLUME_UPDATE");
        static const int SNAPSHOT_UPDATE_HASH = HashingUtils::HashString("SNAPSHOT_UPDATE");
        static const int RELEASE_NFS_V3_LOCKS_HASH = HashingUtils::HashString("RELEASE_NFS_V3_LOCKS");
        static const int VOLUME_RESTORE_HASH = HashingUtils::HashString("VOLUME_RESTORE");


        AdministrativeActionType GetAdministrativeActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILE_SYSTEM_UPDATE_HASH)
          {
            return AdministrativeActionType::FILE_SYSTEM_UPDATE;
          }
          else if (hashCode == STORAGE_OPTIMIZATION_HASH)
          {
            return AdministrativeActionType::STORAGE_OPTIMIZATION;
          }
          else if (hashCode == FILE_SYSTEM_ALIAS_ASSOCIATION_HASH)
          {
            return AdministrativeActionType::FILE_SYSTEM_ALIAS_ASSOCIATION;
          }
          else if (hashCode == FILE_SYSTEM_ALIAS_DISASSOCIATION_HASH)
          {
            return AdministrativeActionType::FILE_SYSTEM_ALIAS_DISASSOCIATION;
          }
          else if (hashCode == VOLUME_UPDATE_HASH)
          {
            return AdministrativeActionType::VOLUME_UPDATE;
          }
          else if (hashCode == SNAPSHOT_UPDATE_HASH)
          {
            return AdministrativeActionType::SNAPSHOT_UPDATE;
          }
          else if (hashCode == RELEASE_NFS_V3_LOCKS_HASH)
          {
            return AdministrativeActionType::RELEASE_NFS_V3_LOCKS;
          }
          else if (hashCode == VOLUME_RESTORE_HASH)
          {
            return AdministrativeActionType::VOLUME_RESTORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdministrativeActionType>(hashCode);
          }

          return AdministrativeActionType::NOT_SET;
        }

        Aws::String GetNameForAdministrativeActionType(AdministrativeActionType enumValue)
        {
          switch(enumValue)
          {
          case AdministrativeActionType::FILE_SYSTEM_UPDATE:
            return "FILE_SYSTEM_UPDATE";
          case AdministrativeActionType::STORAGE_OPTIMIZATION:
            return "STORAGE_OPTIMIZATION";
          case AdministrativeActionType::FILE_SYSTEM_ALIAS_ASSOCIATION:
            return "FILE_SYSTEM_ALIAS_ASSOCIATION";
          case AdministrativeActionType::FILE_SYSTEM_ALIAS_DISASSOCIATION:
            return "FILE_SYSTEM_ALIAS_DISASSOCIATION";
          case AdministrativeActionType::VOLUME_UPDATE:
            return "VOLUME_UPDATE";
          case AdministrativeActionType::SNAPSHOT_UPDATE:
            return "SNAPSHOT_UPDATE";
          case AdministrativeActionType::RELEASE_NFS_V3_LOCKS:
            return "RELEASE_NFS_V3_LOCKS";
          case AdministrativeActionType::VOLUME_RESTORE:
            return "VOLUME_RESTORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdministrativeActionTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
