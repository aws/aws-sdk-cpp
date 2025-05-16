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
        static const int hudi_HASH = HashingUtils::HashString("hudi");
        static const int delta_HASH = HashingUtils::HashString("delta");
        static const int iceberg_HASH = HashingUtils::HashString("iceberg");
        static const int hyper_HASH = HashingUtils::HashString("hyper");
        static const int xml_HASH = HashingUtils::HashString("xml");


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
          else if (hashCode == hudi_HASH)
          {
            return TargetFormat::hudi;
          }
          else if (hashCode == delta_HASH)
          {
            return TargetFormat::delta;
          }
          else if (hashCode == iceberg_HASH)
          {
            return TargetFormat::iceberg;
          }
          else if (hashCode == hyper_HASH)
          {
            return TargetFormat::hyper;
          }
          else if (hashCode == xml_HASH)
          {
            return TargetFormat::xml;
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
          case TargetFormat::iceberg:
            return "iceberg";
          case TargetFormat::hyper:
            return "hyper";
          case TargetFormat::xml:
            return "xml";
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
