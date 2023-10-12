/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/OutputFormat.h>
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
      namespace OutputFormatMapper
      {

        static constexpr uint32_t CSV_HASH = ConstExprHashingUtils::HashString("CSV");
        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");
        static constexpr uint32_t PARQUET_HASH = ConstExprHashingUtils::HashString("PARQUET");
        static constexpr uint32_t GLUEPARQUET_HASH = ConstExprHashingUtils::HashString("GLUEPARQUET");
        static constexpr uint32_t AVRO_HASH = ConstExprHashingUtils::HashString("AVRO");
        static constexpr uint32_t ORC_HASH = ConstExprHashingUtils::HashString("ORC");
        static constexpr uint32_t XML_HASH = ConstExprHashingUtils::HashString("XML");
        static constexpr uint32_t TABLEAUHYPER_HASH = ConstExprHashingUtils::HashString("TABLEAUHYPER");


        OutputFormat GetOutputFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return OutputFormat::CSV;
          }
          else if (hashCode == JSON_HASH)
          {
            return OutputFormat::JSON;
          }
          else if (hashCode == PARQUET_HASH)
          {
            return OutputFormat::PARQUET;
          }
          else if (hashCode == GLUEPARQUET_HASH)
          {
            return OutputFormat::GLUEPARQUET;
          }
          else if (hashCode == AVRO_HASH)
          {
            return OutputFormat::AVRO;
          }
          else if (hashCode == ORC_HASH)
          {
            return OutputFormat::ORC;
          }
          else if (hashCode == XML_HASH)
          {
            return OutputFormat::XML;
          }
          else if (hashCode == TABLEAUHYPER_HASH)
          {
            return OutputFormat::TABLEAUHYPER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputFormat>(hashCode);
          }

          return OutputFormat::NOT_SET;
        }

        Aws::String GetNameForOutputFormat(OutputFormat enumValue)
        {
          switch(enumValue)
          {
          case OutputFormat::NOT_SET:
            return {};
          case OutputFormat::CSV:
            return "CSV";
          case OutputFormat::JSON:
            return "JSON";
          case OutputFormat::PARQUET:
            return "PARQUET";
          case OutputFormat::GLUEPARQUET:
            return "GLUEPARQUET";
          case OutputFormat::AVRO:
            return "AVRO";
          case OutputFormat::ORC:
            return "ORC";
          case OutputFormat::XML:
            return "XML";
          case OutputFormat::TABLEAUHYPER:
            return "TABLEAUHYPER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputFormatMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
