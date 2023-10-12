/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/ServiceLimit.h>
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
      namespace ServiceLimitMapper
      {

        static constexpr uint32_t FILE_SYSTEM_COUNT_HASH = ConstExprHashingUtils::HashString("FILE_SYSTEM_COUNT");
        static constexpr uint32_t TOTAL_THROUGHPUT_CAPACITY_HASH = ConstExprHashingUtils::HashString("TOTAL_THROUGHPUT_CAPACITY");
        static constexpr uint32_t TOTAL_STORAGE_HASH = ConstExprHashingUtils::HashString("TOTAL_STORAGE");
        static constexpr uint32_t TOTAL_USER_INITIATED_BACKUPS_HASH = ConstExprHashingUtils::HashString("TOTAL_USER_INITIATED_BACKUPS");
        static constexpr uint32_t TOTAL_USER_TAGS_HASH = ConstExprHashingUtils::HashString("TOTAL_USER_TAGS");
        static constexpr uint32_t TOTAL_IN_PROGRESS_COPY_BACKUPS_HASH = ConstExprHashingUtils::HashString("TOTAL_IN_PROGRESS_COPY_BACKUPS");
        static constexpr uint32_t STORAGE_VIRTUAL_MACHINES_PER_FILE_SYSTEM_HASH = ConstExprHashingUtils::HashString("STORAGE_VIRTUAL_MACHINES_PER_FILE_SYSTEM");
        static constexpr uint32_t VOLUMES_PER_FILE_SYSTEM_HASH = ConstExprHashingUtils::HashString("VOLUMES_PER_FILE_SYSTEM");
        static constexpr uint32_t TOTAL_SSD_IOPS_HASH = ConstExprHashingUtils::HashString("TOTAL_SSD_IOPS");
        static constexpr uint32_t FILE_CACHE_COUNT_HASH = ConstExprHashingUtils::HashString("FILE_CACHE_COUNT");


        ServiceLimit GetServiceLimitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILE_SYSTEM_COUNT_HASH)
          {
            return ServiceLimit::FILE_SYSTEM_COUNT;
          }
          else if (hashCode == TOTAL_THROUGHPUT_CAPACITY_HASH)
          {
            return ServiceLimit::TOTAL_THROUGHPUT_CAPACITY;
          }
          else if (hashCode == TOTAL_STORAGE_HASH)
          {
            return ServiceLimit::TOTAL_STORAGE;
          }
          else if (hashCode == TOTAL_USER_INITIATED_BACKUPS_HASH)
          {
            return ServiceLimit::TOTAL_USER_INITIATED_BACKUPS;
          }
          else if (hashCode == TOTAL_USER_TAGS_HASH)
          {
            return ServiceLimit::TOTAL_USER_TAGS;
          }
          else if (hashCode == TOTAL_IN_PROGRESS_COPY_BACKUPS_HASH)
          {
            return ServiceLimit::TOTAL_IN_PROGRESS_COPY_BACKUPS;
          }
          else if (hashCode == STORAGE_VIRTUAL_MACHINES_PER_FILE_SYSTEM_HASH)
          {
            return ServiceLimit::STORAGE_VIRTUAL_MACHINES_PER_FILE_SYSTEM;
          }
          else if (hashCode == VOLUMES_PER_FILE_SYSTEM_HASH)
          {
            return ServiceLimit::VOLUMES_PER_FILE_SYSTEM;
          }
          else if (hashCode == TOTAL_SSD_IOPS_HASH)
          {
            return ServiceLimit::TOTAL_SSD_IOPS;
          }
          else if (hashCode == FILE_CACHE_COUNT_HASH)
          {
            return ServiceLimit::FILE_CACHE_COUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceLimit>(hashCode);
          }

          return ServiceLimit::NOT_SET;
        }

        Aws::String GetNameForServiceLimit(ServiceLimit enumValue)
        {
          switch(enumValue)
          {
          case ServiceLimit::NOT_SET:
            return {};
          case ServiceLimit::FILE_SYSTEM_COUNT:
            return "FILE_SYSTEM_COUNT";
          case ServiceLimit::TOTAL_THROUGHPUT_CAPACITY:
            return "TOTAL_THROUGHPUT_CAPACITY";
          case ServiceLimit::TOTAL_STORAGE:
            return "TOTAL_STORAGE";
          case ServiceLimit::TOTAL_USER_INITIATED_BACKUPS:
            return "TOTAL_USER_INITIATED_BACKUPS";
          case ServiceLimit::TOTAL_USER_TAGS:
            return "TOTAL_USER_TAGS";
          case ServiceLimit::TOTAL_IN_PROGRESS_COPY_BACKUPS:
            return "TOTAL_IN_PROGRESS_COPY_BACKUPS";
          case ServiceLimit::STORAGE_VIRTUAL_MACHINES_PER_FILE_SYSTEM:
            return "STORAGE_VIRTUAL_MACHINES_PER_FILE_SYSTEM";
          case ServiceLimit::VOLUMES_PER_FILE_SYSTEM:
            return "VOLUMES_PER_FILE_SYSTEM";
          case ServiceLimit::TOTAL_SSD_IOPS:
            return "TOTAL_SSD_IOPS";
          case ServiceLimit::FILE_CACHE_COUNT:
            return "FILE_CACHE_COUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceLimitMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
