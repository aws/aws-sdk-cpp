/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/LoggerLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace LoggerLevelMapper
      {

        static constexpr uint32_t DEBUG__HASH = ConstExprHashingUtils::HashString("DEBUG");
        static constexpr uint32_t INFO_HASH = ConstExprHashingUtils::HashString("INFO");
        static constexpr uint32_t WARN_HASH = ConstExprHashingUtils::HashString("WARN");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t FATAL_HASH = ConstExprHashingUtils::HashString("FATAL");


        LoggerLevel GetLoggerLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEBUG__HASH)
          {
            return LoggerLevel::DEBUG_;
          }
          else if (hashCode == INFO_HASH)
          {
            return LoggerLevel::INFO;
          }
          else if (hashCode == WARN_HASH)
          {
            return LoggerLevel::WARN;
          }
          else if (hashCode == ERROR__HASH)
          {
            return LoggerLevel::ERROR_;
          }
          else if (hashCode == FATAL_HASH)
          {
            return LoggerLevel::FATAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoggerLevel>(hashCode);
          }

          return LoggerLevel::NOT_SET;
        }

        Aws::String GetNameForLoggerLevel(LoggerLevel enumValue)
        {
          switch(enumValue)
          {
          case LoggerLevel::NOT_SET:
            return {};
          case LoggerLevel::DEBUG_:
            return "DEBUG";
          case LoggerLevel::INFO:
            return "INFO";
          case LoggerLevel::WARN:
            return "WARN";
          case LoggerLevel::ERROR_:
            return "ERROR";
          case LoggerLevel::FATAL:
            return "FATAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoggerLevelMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
