/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/LoggingLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTAnalytics
  {
    namespace Model
    {
      namespace LoggingLevelMapper
      {

        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        LoggingLevel GetLoggingLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ERROR__HASH)
          {
            return LoggingLevel::ERROR_;
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
          case LoggingLevel::NOT_SET:
            return {};
          case LoggingLevel::ERROR_:
            return "ERROR";
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
  } // namespace IoTAnalytics
} // namespace Aws
