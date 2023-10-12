/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FilterName.h>
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
      namespace FilterNameMapper
      {

        static constexpr uint32_t file_system_id_HASH = ConstExprHashingUtils::HashString("file-system-id");
        static constexpr uint32_t backup_type_HASH = ConstExprHashingUtils::HashString("backup-type");
        static constexpr uint32_t file_system_type_HASH = ConstExprHashingUtils::HashString("file-system-type");
        static constexpr uint32_t volume_id_HASH = ConstExprHashingUtils::HashString("volume-id");
        static constexpr uint32_t data_repository_type_HASH = ConstExprHashingUtils::HashString("data-repository-type");
        static constexpr uint32_t file_cache_id_HASH = ConstExprHashingUtils::HashString("file-cache-id");
        static constexpr uint32_t file_cache_type_HASH = ConstExprHashingUtils::HashString("file-cache-type");


        FilterName GetFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == file_system_id_HASH)
          {
            return FilterName::file_system_id;
          }
          else if (hashCode == backup_type_HASH)
          {
            return FilterName::backup_type;
          }
          else if (hashCode == file_system_type_HASH)
          {
            return FilterName::file_system_type;
          }
          else if (hashCode == volume_id_HASH)
          {
            return FilterName::volume_id;
          }
          else if (hashCode == data_repository_type_HASH)
          {
            return FilterName::data_repository_type;
          }
          else if (hashCode == file_cache_id_HASH)
          {
            return FilterName::file_cache_id;
          }
          else if (hashCode == file_cache_type_HASH)
          {
            return FilterName::file_cache_type;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterName>(hashCode);
          }

          return FilterName::NOT_SET;
        }

        Aws::String GetNameForFilterName(FilterName enumValue)
        {
          switch(enumValue)
          {
          case FilterName::NOT_SET:
            return {};
          case FilterName::file_system_id:
            return "file-system-id";
          case FilterName::backup_type:
            return "backup-type";
          case FilterName::file_system_type:
            return "file-system-type";
          case FilterName::volume_id:
            return "volume-id";
          case FilterName::data_repository_type:
            return "data-repository-type";
          case FilterName::file_cache_id:
            return "file-cache-id";
          case FilterName::file_cache_type:
            return "file-cache-type";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterNameMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
