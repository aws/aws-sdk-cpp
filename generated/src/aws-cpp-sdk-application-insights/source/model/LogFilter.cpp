/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/LogFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace LogFilterMapper
      {

        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t WARN_HASH = ConstExprHashingUtils::HashString("WARN");
        static constexpr uint32_t INFO_HASH = ConstExprHashingUtils::HashString("INFO");


        LogFilter GetLogFilterForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ERROR__HASH)
          {
            return LogFilter::ERROR_;
          }
          else if (hashCode == WARN_HASH)
          {
            return LogFilter::WARN;
          }
          else if (hashCode == INFO_HASH)
          {
            return LogFilter::INFO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogFilter>(hashCode);
          }

          return LogFilter::NOT_SET;
        }

        Aws::String GetNameForLogFilter(LogFilter enumValue)
        {
          switch(enumValue)
          {
          case LogFilter::NOT_SET:
            return {};
          case LogFilter::ERROR_:
            return "ERROR";
          case LogFilter::WARN:
            return "WARN";
          case LogFilter::INFO:
            return "INFO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogFilterMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
