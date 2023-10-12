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

        static constexpr uint32_t CSV_HASH = ConstExprHashingUtils::HashString("CSV");
        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");
        static constexpr uint32_t PARQUET_HASH = ConstExprHashingUtils::HashString("PARQUET");


        FileType GetFileTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case FileType::NOT_SET:
            return {};
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
