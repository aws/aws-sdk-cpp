/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DataRepositoryTaskFilterName.h>
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
      namespace DataRepositoryTaskFilterNameMapper
      {

        static const int file_system_id_HASH = HashingUtils::HashString("file-system-id");
        static const int task_lifecycle_HASH = HashingUtils::HashString("task-lifecycle");
        static const int data_repository_association_id_HASH = HashingUtils::HashString("data-repository-association-id");
        static const int file_cache_id_HASH = HashingUtils::HashString("file-cache-id");


        DataRepositoryTaskFilterName GetDataRepositoryTaskFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == file_system_id_HASH)
          {
            return DataRepositoryTaskFilterName::file_system_id;
          }
          else if (hashCode == task_lifecycle_HASH)
          {
            return DataRepositoryTaskFilterName::task_lifecycle;
          }
          else if (hashCode == data_repository_association_id_HASH)
          {
            return DataRepositoryTaskFilterName::data_repository_association_id;
          }
          else if (hashCode == file_cache_id_HASH)
          {
            return DataRepositoryTaskFilterName::file_cache_id;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataRepositoryTaskFilterName>(hashCode);
          }

          return DataRepositoryTaskFilterName::NOT_SET;
        }

        Aws::String GetNameForDataRepositoryTaskFilterName(DataRepositoryTaskFilterName enumValue)
        {
          switch(enumValue)
          {
          case DataRepositoryTaskFilterName::file_system_id:
            return "file-system-id";
          case DataRepositoryTaskFilterName::task_lifecycle:
            return "task-lifecycle";
          case DataRepositoryTaskFilterName::data_repository_association_id:
            return "data-repository-association-id";
          case DataRepositoryTaskFilterName::file_cache_id:
            return "file-cache-id";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataRepositoryTaskFilterNameMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
