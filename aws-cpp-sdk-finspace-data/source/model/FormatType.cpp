/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/FormatType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace FormatTypeMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");
        static const int XML_HASH = HashingUtils::HashString("XML");


        FormatType GetFormatTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return FormatType::CSV;
          }
          else if (hashCode == JSON_HASH)
          {
            return FormatType::JSON;
          }
          else if (hashCode == PARQUET_HASH)
          {
            return FormatType::PARQUET;
          }
          else if (hashCode == XML_HASH)
          {
            return FormatType::XML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FormatType>(hashCode);
          }

          return FormatType::NOT_SET;
        }

        Aws::String GetNameForFormatType(FormatType enumValue)
        {
          switch(enumValue)
          {
          case FormatType::CSV:
            return "CSV";
          case FormatType::JSON:
            return "JSON";
          case FormatType::PARQUET:
            return "PARQUET";
          case FormatType::XML:
            return "XML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormatTypeMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
