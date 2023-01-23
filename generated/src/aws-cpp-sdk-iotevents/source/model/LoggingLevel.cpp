/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/LoggingLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEvents
  {
    namespace Model
    {
      namespace LoggingLevelMapper
      {

        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int DEBUG__HASH = HashingUtils::HashString("DEBUG");


        LoggingLevel GetLoggingLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ERROR__HASH)
          {
            return LoggingLevel::ERROR_;
          }
          else if (hashCode == INFO_HASH)
          {
            return LoggingLevel::INFO;
          }
          else if (hashCode == DEBUG__HASH)
          {
            return LoggingLevel::DEBUG_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoggingLevel>(hashCode);
          }

          return LoggingLevel::NOT_SET;
        }

        Aws::String GetNameForLoggingLevel(LoggingLevel enumValue)
        {
          switch(enumValue)
          {
          case LoggingLevel::ERROR_:
            return "ERROR";
          case LoggingLevel::INFO:
            return "INFO";
          case LoggingLevel::DEBUG_:
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

      } // namespace LoggingLevelMapper
    } // namespace Model
  } // namespace IoTEvents
} // namespace Aws
