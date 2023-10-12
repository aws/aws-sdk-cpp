/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/EventSourcePosition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace EventSourcePositionMapper
      {

        static constexpr uint32_t TRIM_HORIZON_HASH = ConstExprHashingUtils::HashString("TRIM_HORIZON");
        static constexpr uint32_t LATEST_HASH = ConstExprHashingUtils::HashString("LATEST");
        static constexpr uint32_t AT_TIMESTAMP_HASH = ConstExprHashingUtils::HashString("AT_TIMESTAMP");


        EventSourcePosition GetEventSourcePositionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRIM_HORIZON_HASH)
          {
            return EventSourcePosition::TRIM_HORIZON;
          }
          else if (hashCode == LATEST_HASH)
          {
            return EventSourcePosition::LATEST;
          }
          else if (hashCode == AT_TIMESTAMP_HASH)
          {
            return EventSourcePosition::AT_TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventSourcePosition>(hashCode);
          }

          return EventSourcePosition::NOT_SET;
        }

        Aws::String GetNameForEventSourcePosition(EventSourcePosition enumValue)
        {
          switch(enumValue)
          {
          case EventSourcePosition::NOT_SET:
            return {};
          case EventSourcePosition::TRIM_HORIZON:
            return "TRIM_HORIZON";
          case EventSourcePosition::LATEST:
            return "LATEST";
          case EventSourcePosition::AT_TIMESTAMP:
            return "AT_TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventSourcePositionMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
