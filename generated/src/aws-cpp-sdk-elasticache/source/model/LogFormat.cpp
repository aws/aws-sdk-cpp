/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/LogFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace LogFormatMapper
      {

        static const int text_HASH = HashingUtils::HashString("text");
        static const int json_HASH = HashingUtils::HashString("json");


        LogFormat GetLogFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == text_HASH)
          {
            return LogFormat::text;
          }
          else if (hashCode == json_HASH)
          {
            return LogFormat::json;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogFormat>(hashCode);
          }

          return LogFormat::NOT_SET;
        }

        Aws::String GetNameForLogFormat(LogFormat enumValue)
        {
          switch(enumValue)
          {
          case LogFormat::NOT_SET:
            return {};
          case LogFormat::text:
            return "text";
          case LogFormat::json:
            return "json";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogFormatMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
