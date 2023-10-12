/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/InputFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace InputFormatMapper
      {

        static constexpr uint32_t CSV_HASH = ConstExprHashingUtils::HashString("CSV");
        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");
        static constexpr uint32_t PARQUET_HASH = ConstExprHashingUtils::HashString("PARQUET");
        static constexpr uint32_t EXCEL_HASH = ConstExprHashingUtils::HashString("EXCEL");
        static constexpr uint32_t ORC_HASH = ConstExprHashingUtils::HashString("ORC");


        InputFormat GetInputFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return InputFormat::CSV;
          }
          else if (hashCode == JSON_HASH)
          {
            return InputFormat::JSON;
          }
          else if (hashCode == PARQUET_HASH)
          {
            return InputFormat::PARQUET;
          }
          else if (hashCode == EXCEL_HASH)
          {
            return InputFormat::EXCEL;
          }
          else if (hashCode == ORC_HASH)
          {
            return InputFormat::ORC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputFormat>(hashCode);
          }

          return InputFormat::NOT_SET;
        }

        Aws::String GetNameForInputFormat(InputFormat enumValue)
        {
          switch(enumValue)
          {
          case InputFormat::NOT_SET:
            return {};
          case InputFormat::CSV:
            return "CSV";
          case InputFormat::JSON:
            return "JSON";
          case InputFormat::PARQUET:
            return "PARQUET";
          case InputFormat::EXCEL:
            return "EXCEL";
          case InputFormat::ORC:
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

      } // namespace InputFormatMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
