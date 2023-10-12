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

        static constexpr uint32_t json_HASH = ConstExprHashingUtils::HashString("json");
        static constexpr uint32_t csv_HASH = ConstExprHashingUtils::HashString("csv");
        static constexpr uint32_t avro_HASH = ConstExprHashingUtils::HashString("avro");
        static constexpr uint32_t orc_HASH = ConstExprHashingUtils::HashString("orc");
        static constexpr uint32_t parquet_HASH = ConstExprHashingUtils::HashString("parquet");
        static constexpr uint32_t hudi_HASH = ConstExprHashingUtils::HashString("hudi");
        static constexpr uint32_t delta_HASH = ConstExprHashingUtils::HashString("delta");


        TargetFormat GetTargetFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == hudi_HASH)
          {
            return TargetFormat::hudi;
          }
          else if (hashCode == delta_HASH)
          {
            return TargetFormat::delta;
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
          case TargetFormat::NOT_SET:
            return {};
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
          case TargetFormat::hudi:
            return "hudi";
          case TargetFormat::delta:
            return "delta";
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
