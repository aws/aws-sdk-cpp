/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/OutputFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace OutputFormatMapper
      {

        static const int json_HASH = HashingUtils::HashString("json");
        static const int plain_HASH = HashingUtils::HashString("plain");
        static const int w3c_HASH = HashingUtils::HashString("w3c");
        static const int raw_HASH = HashingUtils::HashString("raw");
        static const int parquet_HASH = HashingUtils::HashString("parquet");


        OutputFormat GetOutputFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == json_HASH)
          {
            return OutputFormat::json;
          }
          else if (hashCode == plain_HASH)
          {
            return OutputFormat::plain;
          }
          else if (hashCode == w3c_HASH)
          {
            return OutputFormat::w3c;
          }
          else if (hashCode == raw_HASH)
          {
            return OutputFormat::raw;
          }
          else if (hashCode == parquet_HASH)
          {
            return OutputFormat::parquet;
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
          case OutputFormat::json:
            return "json";
          case OutputFormat::plain:
            return "plain";
          case OutputFormat::w3c:
            return "w3c";
          case OutputFormat::raw:
            return "raw";
          case OutputFormat::parquet:
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

      } // namespace OutputFormatMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
