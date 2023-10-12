/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/LogType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace LogTypeMapper
      {

        static constexpr uint32_t INDEX_SLOW_LOGS_HASH = ConstExprHashingUtils::HashString("INDEX_SLOW_LOGS");
        static constexpr uint32_t SEARCH_SLOW_LOGS_HASH = ConstExprHashingUtils::HashString("SEARCH_SLOW_LOGS");
        static constexpr uint32_t ES_APPLICATION_LOGS_HASH = ConstExprHashingUtils::HashString("ES_APPLICATION_LOGS");
        static constexpr uint32_t AUDIT_LOGS_HASH = ConstExprHashingUtils::HashString("AUDIT_LOGS");


        LogType GetLogTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INDEX_SLOW_LOGS_HASH)
          {
            return LogType::INDEX_SLOW_LOGS;
          }
          else if (hashCode == SEARCH_SLOW_LOGS_HASH)
          {
            return LogType::SEARCH_SLOW_LOGS;
          }
          else if (hashCode == ES_APPLICATION_LOGS_HASH)
          {
            return LogType::ES_APPLICATION_LOGS;
          }
          else if (hashCode == AUDIT_LOGS_HASH)
          {
            return LogType::AUDIT_LOGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogType>(hashCode);
          }

          return LogType::NOT_SET;
        }

        Aws::String GetNameForLogType(LogType enumValue)
        {
          switch(enumValue)
          {
          case LogType::NOT_SET:
            return {};
          case LogType::INDEX_SLOW_LOGS:
            return "INDEX_SLOW_LOGS";
          case LogType::SEARCH_SLOW_LOGS:
            return "SEARCH_SLOW_LOGS";
          case LogType::ES_APPLICATION_LOGS:
            return "ES_APPLICATION_LOGS";
          case LogType::AUDIT_LOGS:
            return "AUDIT_LOGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogTypeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
