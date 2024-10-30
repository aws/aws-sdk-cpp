/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/EventLogLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace EventLogLevelMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int DEBUG__HASH = HashingUtils::HashString("DEBUG");


        EventLogLevel GetEventLogLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return EventLogLevel::NONE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return EventLogLevel::ERROR_;
          }
          else if (hashCode == ALL_HASH)
          {
            return EventLogLevel::ALL;
          }
          else if (hashCode == INFO_HASH)
          {
            return EventLogLevel::INFO;
          }
          else if (hashCode == DEBUG__HASH)
          {
            return EventLogLevel::DEBUG_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventLogLevel>(hashCode);
          }

          return EventLogLevel::NOT_SET;
        }

        Aws::String GetNameForEventLogLevel(EventLogLevel enumValue)
        {
          switch(enumValue)
          {
          case EventLogLevel::NOT_SET:
            return {};
          case EventLogLevel::NONE:
            return "NONE";
          case EventLogLevel::ERROR_:
            return "ERROR";
          case EventLogLevel::ALL:
            return "ALL";
          case EventLogLevel::INFO:
            return "INFO";
          case EventLogLevel::DEBUG_:
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

      } // namespace EventLogLevelMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
