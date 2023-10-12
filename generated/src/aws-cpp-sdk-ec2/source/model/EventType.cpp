/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static constexpr uint32_t instanceChange_HASH = ConstExprHashingUtils::HashString("instanceChange");
        static constexpr uint32_t fleetRequestChange_HASH = ConstExprHashingUtils::HashString("fleetRequestChange");
        static constexpr uint32_t error_HASH = ConstExprHashingUtils::HashString("error");
        static constexpr uint32_t information_HASH = ConstExprHashingUtils::HashString("information");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == instanceChange_HASH)
          {
            return EventType::instanceChange;
          }
          else if (hashCode == fleetRequestChange_HASH)
          {
            return EventType::fleetRequestChange;
          }
          else if (hashCode == error_HASH)
          {
            return EventType::error;
          }
          else if (hashCode == information_HASH)
          {
            return EventType::information;
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
          case EventType::NOT_SET:
            return {};
          case EventType::instanceChange:
            return "instanceChange";
          case EventType::fleetRequestChange:
            return "fleetRequestChange";
          case EventType::error:
            return "error";
          case EventType::information:
            return "information";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
