/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/LogLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace LogLevelMapper
      {

        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int WARN_HASH = HashingUtils::HashString("WARN");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int DEBUG__HASH = HashingUtils::HashString("DEBUG");


        LogLevel GetLogLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFO_HASH)
          {
            return LogLevel::INFO;
          }
          else if (hashCode == WARN_HASH)
          {
            return LogLevel::WARN;
          }
          else if (hashCode == ERROR__HASH)
          {
            return LogLevel::ERROR_;
          }
          else if (hashCode == DEBUG__HASH)
          {
            return LogLevel::DEBUG_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogLevel>(hashCode);
          }

          return LogLevel::NOT_SET;
        }

        Aws::String GetNameForLogLevel(LogLevel enumValue)
        {
          switch(enumValue)
          {
          case LogLevel::INFO:
            return "INFO";
          case LogLevel::WARN:
            return "WARN";
          case LogLevel::ERROR_:
            return "ERROR";
          case LogLevel::DEBUG_:
            return "DEBUG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogLevelMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
