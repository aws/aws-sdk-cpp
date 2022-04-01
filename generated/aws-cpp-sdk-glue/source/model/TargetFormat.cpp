/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TargetFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace TargetFormatMapper
      {

        static const int json_HASH = HashingUtils::HashString("json");
        static const int csv_HASH = HashingUtils::HashString("csv");
        static const int avro_HASH = HashingUtils::HashString("avro");
        static const int orc_HASH = HashingUtils::HashString("orc");
        static const int parquet_HASH = HashingUtils::HashString("parquet");


        TargetFormat GetTargetFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == json_HASH)
          {
            return TargetFormat::json;
          }
          else if (hashCode == csv_HASH)
          {
            return TargetFormat::csv;
          }
          else if (hashCode == avro_HASH)
          {
            return TargetFormat::avro;
          }
          else if (hashCode == orc_HASH)
          {
            return TargetFormat::orc;
          }
          else if (hashCode == parquet_HASH)
          {
            return TargetFormat::parquet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetFormat>(hashCode);
          }

          return TargetFormat::NOT_SET;
        }

        Aws::String GetNameForTargetFormat(TargetFormat enumValue)
        {
          switch(enumValue)
          {
          case TargetFormat::json:
            return "json";
          case TargetFormat::csv:
            return "csv";
          case TargetFormat::avro:
            return "avro";
          case TargetFormat::orc:
            return "orc";
          case TargetFormat::parquet:
            return "parquet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetFormatMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
