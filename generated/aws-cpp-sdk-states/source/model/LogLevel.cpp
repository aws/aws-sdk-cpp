/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/LogLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace LogLevelMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int FATAL_HASH = HashingUtils::HashString("FATAL");
        static const int OFF_HASH = HashingUtils::HashString("OFF");


        LogLevel GetLogLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return LogLevel::ALL;
          }
          else if (hashCode == ERROR__HASH)
          {
            return LogLevel::ERROR_;
          }
          else if (hashCode == FATAL_HASH)
          {
            return LogLevel::FATAL;
          }
          else if (hashCode == OFF_HASH)
          {
            return LogLevel::OFF;
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
          case LogLevel::ALL:
            return "ALL";
          case LogLevel::ERROR_:
            return "ERROR";
          case LogLevel::FATAL:
            return "FATAL";
          case LogLevel::OFF:
            return "OFF";
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
  } // namespace SFN
} // namespace Aws
