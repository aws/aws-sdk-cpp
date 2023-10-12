/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/LogLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace LogLevelMapper
      {

        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");
        static constexpr uint32_t BASIC_HASH = ConstExprHashingUtils::HashString("BASIC");
        static constexpr uint32_t TRANSFER_HASH = ConstExprHashingUtils::HashString("TRANSFER");


        LogLevel GetLogLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return LogLevel::OFF;
          }
          else if (hashCode == BASIC_HASH)
          {
            return LogLevel::BASIC;
          }
          else if (hashCode == TRANSFER_HASH)
          {
            return LogLevel::TRANSFER;
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
          case LogLevel::NOT_SET:
            return {};
          case LogLevel::OFF:
            return "OFF";
          case LogLevel::BASIC:
            return "BASIC";
          case LogLevel::TRANSFER:
            return "TRANSFER";
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
  } // namespace DataSync
} // namespace Aws
