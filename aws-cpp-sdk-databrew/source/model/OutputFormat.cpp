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

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");
        static const int GLUEPARQUET_HASH = HashingUtils::HashString("GLUEPARQUET");
        static const int AVRO_HASH = HashingUtils::HashString("AVRO");
        static const int ORC_HASH = HashingUtils::HashString("ORC");
        static const int XML_HASH = HashingUtils::HashString("XML");


        OutputFormat GetOutputFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
