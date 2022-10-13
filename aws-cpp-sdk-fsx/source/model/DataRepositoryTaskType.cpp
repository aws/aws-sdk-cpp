/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DataRepositoryTaskType.h>
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
      namespace DataRepositoryTaskTypeMapper
      {

        static const int EXPORT_TO_REPOSITORY_HASH = HashingUtils::HashString("EXPORT_TO_REPOSITORY");
        static const int IMPORT_METADATA_FROM_REPOSITORY_HASH = HashingUtils::HashString("IMPORT_METADATA_FROM_REPOSITORY");
        static const int RELEASE_DATA_FROM_FILESYSTEM_HASH = HashingUtils::HashString("RELEASE_DATA_FROM_FILESYSTEM");
        static const int AUTO_RELEASE_DATA_HASH = HashingUtils::HashString("AUTO_RELEASE_DATA");


        DataRepositoryTaskType GetDataRepositoryTaskTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXPORT_TO_REPOSITORY_HASH)
          {
            return DataRepositoryTaskType::EXPORT_TO_REPOSITORY;
          }
          else if (hashCode == IMPORT_METADATA_FROM_REPOSITORY_HASH)
          {
            return DataRepositoryTaskType::IMPORT_METADATA_FROM_REPOSITORY;
          }
          else if (hashCode == RELEASE_DATA_FROM_FILESYSTEM_HASH)
          {
            return DataRepositoryTaskType::RELEASE_DATA_FROM_FILESYSTEM;
          }
          else if (hashCode == AUTO_RELEASE_DATA_HASH)
          {
            return DataRepositoryTaskType::AUTO_RELEASE_DATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataRepositoryTaskType>(hashCode);
          }

          return DataRepositoryTaskType::NOT_SET;
        }

        Aws::String GetNameForDataRepositoryTaskType(DataRepositoryTaskType enumValue)
        {
          switch(enumValue)
          {
          case DataRepositoryTaskType::EXPORT_TO_REPOSITORY:
            return "EXPORT_TO_REPOSITORY";
          case DataRepositoryTaskType::IMPORT_METADATA_FROM_REPOSITORY:
            return "IMPORT_METADATA_FROM_REPOSITORY";
          case DataRepositoryTaskType::RELEASE_DATA_FROM_FILESYSTEM:
            return "RELEASE_DATA_FROM_FILESYSTEM";
          case DataRepositoryTaskType::AUTO_RELEASE_DATA:
            return "AUTO_RELEASE_DATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataRepositoryTaskTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
