/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/Level.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EventBridge
  {
    namespace Model
    {
      namespace LevelMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int TRACE_HASH = HashingUtils::HashString("TRACE");


        Level GetLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return Level::OFF;
          }
          else if (hashCode == ERROR__HASH)
          {
            return Level::ERROR_;
          }
          else if (hashCode == INFO_HASH)
          {
            return Level::INFO;
          }
          else if (hashCode == TRACE_HASH)
          {
            return Level::TRACE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Level>(hashCode);
          }

          return Level::NOT_SET;
        }

        Aws::String GetNameForLevel(Level enumValue)
        {
          switch(enumValue)
          {
          case Level::NOT_SET:
            return {};
          case Level::OFF:
            return "OFF";
          case Level::ERROR_:
            return "ERROR";
          case Level::INFO:
            return "INFO";
          case Level::TRACE:
            return "TRACE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LevelMapper
    } // namespace Model
  } // namespace EventBridge
} // namespace Aws
