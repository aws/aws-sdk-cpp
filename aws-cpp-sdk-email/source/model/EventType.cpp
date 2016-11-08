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
#include <aws/email/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static const int send_HASH = HashingUtils::HashString("send");
        static const int reject_HASH = HashingUtils::HashString("reject");
        static const int bounce_HASH = HashingUtils::HashString("bounce");
        static const int complaint_HASH = HashingUtils::HashString("complaint");
        static const int delivery_HASH = HashingUtils::HashString("delivery");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == send_HASH)
          {
            return EventType::send;
          }
          else if (hashCode == reject_HASH)
          {
            return EventType::reject;
          }
          else if (hashCode == bounce_HASH)
          {
            return EventType::bounce;
          }
          else if (hashCode == complaint_HASH)
          {
            return EventType::complaint;
          }
          else if (hashCode == delivery_HASH)
          {
            return EventType::delivery;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventType>(hashCode);
          }

          return EventType::NOT_SET;
        }

        Aws::String GetNameForEventType(EventType enumValue)
        {
          switch(enumValue)
          {
          case EventType::send:
            return "send";
          case EventType::reject:
            return "reject";
          case EventType::bounce:
            return "bounce";
          case EventType::complaint:
            return "complaint";
          case EventType::delivery:
            return "delivery";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws
