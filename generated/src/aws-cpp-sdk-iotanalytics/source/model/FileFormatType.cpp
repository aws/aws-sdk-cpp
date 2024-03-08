/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/FileFormatType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTAnalytics
  {
    namespace Model
    {
      namespace FileFormatTypeMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");


        FileFormatType GetFileFormatTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return FileFormatType::JSON;
          }
          else if (hashCode == PARQUET_HASH)
          {
            return FileFormatType::PARQUET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileFormatType>(hashCode);
          }

          return FileFormatType::NOT_SET;
        }

        Aws::String GetNameForFileFormatType(FileFormatType enumValue)
        {
          switch(enumValue)
          {
          case FileFormatType::NOT_SET:
            return {};
          case FileFormatType::JSON:
            return "JSON";
          case FileFormatType::PARQUET:
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

      } // namespace FileFormatTypeMapper
    } // namespace Model
  } // namespace IoTAnalytics
} // namespace Aws
