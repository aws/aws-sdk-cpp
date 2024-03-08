/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/LogType.h>
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
      namespace LogTypeMapper
      {

        static const int slow_log_HASH = HashingUtils::HashString("slow-log");
        static const int engine_log_HASH = HashingUtils::HashString("engine-log");


        LogType GetLogTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == slow_log_HASH)
          {
            return LogType::slow_log;
          }
          else if (hashCode == engine_log_HASH)
          {
            return LogType::engine_log;
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
          case LogType::slow_log:
            return "slow-log";
          case LogType::engine_log:
            return "engine-log";
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
  } // namespace ElastiCache
} // namespace Aws
