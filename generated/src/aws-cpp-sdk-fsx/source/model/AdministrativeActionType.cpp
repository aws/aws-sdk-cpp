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
        static const int THROUGHPUT_OPTIMIZATION_HASH = HashingUtils::HashString("THROUGHPUT_OPTIMIZATION");
        static const int IOPS_OPTIMIZATION_HASH = HashingUtils::HashString("IOPS_OPTIMIZATION");
        static const int STORAGE_TYPE_OPTIMIZATION_HASH = HashingUtils::HashString("STORAGE_TYPE_OPTIMIZATION");
        static const int MISCONFIGURED_STATE_RECOVERY_HASH = HashingUtils::HashString("MISCONFIGURED_STATE_RECOVERY");
        static const int VOLUME_UPDATE_WITH_SNAPSHOT_HASH = HashingUtils::HashString("VOLUME_UPDATE_WITH_SNAPSHOT");
        static const int VOLUME_INITIALIZE_WITH_SNAPSHOT_HASH = HashingUtils::HashString("VOLUME_INITIALIZE_WITH_SNAPSHOT");


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
          else if (hashCode == THROUGHPUT_OPTIMIZATION_HASH)
          {
            return AdministrativeActionType::THROUGHPUT_OPTIMIZATION;
          }
          else if (hashCode == IOPS_OPTIMIZATION_HASH)
          {
            return AdministrativeActionType::IOPS_OPTIMIZATION;
          }
          else if (hashCode == STORAGE_TYPE_OPTIMIZATION_HASH)
          {
            return AdministrativeActionType::STORAGE_TYPE_OPTIMIZATION;
          }
          else if (hashCode == MISCONFIGURED_STATE_RECOVERY_HASH)
          {
            return AdministrativeActionType::MISCONFIGURED_STATE_RECOVERY;
          }
          else if (hashCode == VOLUME_UPDATE_WITH_SNAPSHOT_HASH)
          {
            return AdministrativeActionType::VOLUME_UPDATE_WITH_SNAPSHOT;
          }
          else if (hashCode == VOLUME_INITIALIZE_WITH_SNAPSHOT_HASH)
          {
            return AdministrativeActionType::VOLUME_INITIALIZE_WITH_SNAPSHOT;
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
          case AdministrativeActionType::NOT_SET:
            return {};
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
          case AdministrativeActionType::THROUGHPUT_OPTIMIZATION:
            return "THROUGHPUT_OPTIMIZATION";
          case AdministrativeActionType::IOPS_OPTIMIZATION:
            return "IOPS_OPTIMIZATION";
          case AdministrativeActionType::STORAGE_TYPE_OPTIMIZATION:
            return "STORAGE_TYPE_OPTIMIZATION";
          case AdministrativeActionType::MISCONFIGURED_STATE_RECOVERY:
            return "MISCONFIGURED_STATE_RECOVERY";
          case AdministrativeActionType::VOLUME_UPDATE_WITH_SNAPSHOT:
            return "VOLUME_UPDATE_WITH_SNAPSHOT";
          case AdministrativeActionType::VOLUME_INITIALIZE_WITH_SNAPSHOT:
            return "VOLUME_INITIALIZE_WITH_SNAPSHOT";
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
