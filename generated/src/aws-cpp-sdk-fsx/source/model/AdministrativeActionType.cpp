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

        static constexpr uint32_t FILE_SYSTEM_UPDATE_HASH = ConstExprHashingUtils::HashString("FILE_SYSTEM_UPDATE");
        static constexpr uint32_t STORAGE_OPTIMIZATION_HASH = ConstExprHashingUtils::HashString("STORAGE_OPTIMIZATION");
        static constexpr uint32_t FILE_SYSTEM_ALIAS_ASSOCIATION_HASH = ConstExprHashingUtils::HashString("FILE_SYSTEM_ALIAS_ASSOCIATION");
        static constexpr uint32_t FILE_SYSTEM_ALIAS_DISASSOCIATION_HASH = ConstExprHashingUtils::HashString("FILE_SYSTEM_ALIAS_DISASSOCIATION");
        static constexpr uint32_t VOLUME_UPDATE_HASH = ConstExprHashingUtils::HashString("VOLUME_UPDATE");
        static constexpr uint32_t SNAPSHOT_UPDATE_HASH = ConstExprHashingUtils::HashString("SNAPSHOT_UPDATE");
        static constexpr uint32_t RELEASE_NFS_V3_LOCKS_HASH = ConstExprHashingUtils::HashString("RELEASE_NFS_V3_LOCKS");
        static constexpr uint32_t VOLUME_RESTORE_HASH = ConstExprHashingUtils::HashString("VOLUME_RESTORE");
        static constexpr uint32_t THROUGHPUT_OPTIMIZATION_HASH = ConstExprHashingUtils::HashString("THROUGHPUT_OPTIMIZATION");
        static constexpr uint32_t IOPS_OPTIMIZATION_HASH = ConstExprHashingUtils::HashString("IOPS_OPTIMIZATION");
        static constexpr uint32_t STORAGE_TYPE_OPTIMIZATION_HASH = ConstExprHashingUtils::HashString("STORAGE_TYPE_OPTIMIZATION");
        static constexpr uint32_t MISCONFIGURED_STATE_RECOVERY_HASH = ConstExprHashingUtils::HashString("MISCONFIGURED_STATE_RECOVERY");


        AdministrativeActionType GetAdministrativeActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
