/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int TRACE_HASH = HashingUtils::HashString("TRACE");
        static const int DEBUG__HASH = HashingUtils::HashString("DEBUG");
        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int WARN_HASH = HashingUtils::HashString("WARN");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int FATAL_HASH = HashingUtils::HashString("FATAL");


        EventSeverity GetEventSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace EventSeverityMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
