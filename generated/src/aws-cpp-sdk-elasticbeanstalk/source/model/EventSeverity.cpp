/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/EventSeverity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticBeanstalk
  {
    namespace Model
    {
      namespace EventSeverityMapper
      {

        static constexpr uint32_t TRACE_HASH = ConstExprHashingUtils::HashString("TRACE");
        static constexpr uint32_t DEBUG__HASH = ConstExprHashingUtils::HashString("DEBUG");
        static constexpr uint32_t INFO_HASH = ConstExprHashingUtils::HashString("INFO");
        static constexpr uint32_t WARN_HASH = ConstExprHashingUtils::HashString("WARN");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t FATAL_HASH = ConstExprHashingUtils::HashString("FATAL");


        EventSeverity GetEventSeverityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRACE_HASH)
          {
            return EventSeverity::TRACE;
          }
          else if (hashCode == DEBUG__HASH)
          {
            return EventSeverity::DEBUG_;
          }
          else if (hashCode == INFO_HASH)
          {
            return EventSeverity::INFO;
          }
          else if (hashCode == WARN_HASH)
          {
            return EventSeverity::WARN;
          }
          else if (hashCode == ERROR__HASH)
          {
            return EventSeverity::ERROR_;
          }
          else if (hashCode == FATAL_HASH)
          {
            return EventSeverity::FATAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventSeverity>(hashCode);
          }

          return EventSeverity::NOT_SET;
        }

        Aws::String GetNameForEventSeverity(EventSeverity enumValue)
        {
          switch(enumValue)
          {
          case EventSeverity::NOT_SET:
            return {};
          case EventSeverity::TRACE:
            return "TRACE";
          case EventSeverity::DEBUG_:
            return "DEBUG";
          case EventSeverity::INFO:
            return "INFO";
          case EventSeverity::WARN:
            return "WARN";
          case EventSeverity::ERROR_:
            return "ERROR";
          case EventSeverity::FATAL:
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

      } // namespace EventSeverityMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
