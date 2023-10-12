/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/Event.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace EventMapper
      {

        static constexpr uint32_t discovered_HASH = ConstExprHashingUtils::HashString("discovered");
        static constexpr uint32_t lost_HASH = ConstExprHashingUtils::HashString("lost");
        static constexpr uint32_t ack_HASH = ConstExprHashingUtils::HashString("ack");
        static constexpr uint32_t nack_HASH = ConstExprHashingUtils::HashString("nack");
        static constexpr uint32_t passthrough_HASH = ConstExprHashingUtils::HashString("passthrough");


        Event GetEventForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == discovered_HASH)
          {
            return Event::discovered;
          }
          else if (hashCode == lost_HASH)
          {
            return Event::lost;
          }
          else if (hashCode == ack_HASH)
          {
            return Event::ack;
          }
          else if (hashCode == nack_HASH)
          {
            return Event::nack;
          }
          else if (hashCode == passthrough_HASH)
          {
            return Event::passthrough;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Event>(hashCode);
          }

          return Event::NOT_SET;
        }

        Aws::String GetNameForEvent(Event enumValue)
        {
          switch(enumValue)
          {
          case Event::NOT_SET:
            return {};
          case Event::discovered:
            return "discovered";
          case Event::lost:
            return "lost";
          case Event::ack:
            return "ack";
          case Event::nack:
            return "nack";
          case Event::passthrough:
            return "passthrough";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
