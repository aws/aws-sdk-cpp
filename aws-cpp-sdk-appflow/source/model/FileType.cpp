/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/FileType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace FileTypeMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");


        FileType GetFileTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return FileType::CSV;
          }
          else if (hashCode == JSON_HASH)
          {
            return FileType::JSON;
          }
          else if (hashCode == PARQUET_HASH)
          {
            return FileType::PARQUET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileType>(hashCode);
          }

          return FileType::NOT_SET;
        }

        Aws::String GetNameForFileType(FileType enumValue)
        {
          switch(enumValue)
          {
          case FileType::CSV:
            return "CSV";
          case FileType::JSON:
            return "JSON";
          case FileType::PARQUET:
            return "PARQUET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
