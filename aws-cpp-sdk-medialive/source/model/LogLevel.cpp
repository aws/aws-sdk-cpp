/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/LogLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace LogLevelMapper
      {

        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int WARNING_HASH = HashingUtils::HashString("WARNING");
        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int DEBUG__HASH = HashingUtils::HashString("DEBUG");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        LogLevel GetLogLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ERROR__HASH)
          {
            return LogLevel::ERROR_;
          }
          else if (hashCode == WARNING_HASH)
          {
            return LogLevel::WARNING;
          }
          else if (hashCode == INFO_HASH)
          {
            return LogLevel::INFO;
          }
          else if (hashCode == DEBUG__HASH)
          {
            return LogLevel::DEBUG_;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return LogLevel::DISABLED;
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
          case LogLevel::ERROR_:
            return "ERROR";
          case LogLevel::WARNING:
            return "WARNING";
          case LogLevel::INFO:
            return "INFO";
          case LogLevel::DEBUG_:
            return "DEBUG";
          case LogLevel::DISABLED:
            return "DISABLED";
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
  } // namespace MediaLive
} // namespace Aws
