/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/DataFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace DataFormatMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int JSONL_HASH = HashingUtils::HashString("JSONL");
        static const int ORC_HASH = HashingUtils::HashString("ORC");


        DataFormat GetDataFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return DataFormat::CSV;
          }
          else if (hashCode == JSONL_HASH)
          {
            return DataFormat::JSONL;
          }
          else if (hashCode == ORC_HASH)
          {
            return DataFormat::ORC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataFormat>(hashCode);
          }

          return DataFormat::NOT_SET;
        }

        Aws::String GetNameForDataFormat(DataFormat enumValue)
        {
          switch(enumValue)
          {
          case DataFormat::NOT_SET:
            return {};
          case DataFormat::CSV:
            return "CSV";
          case DataFormat::JSONL:
            return "JSONL";
          case DataFormat::ORC:
            return "ORC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataFormatMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
