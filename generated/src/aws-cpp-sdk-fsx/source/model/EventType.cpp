/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static constexpr uint32_t NEW__HASH = ConstExprHashingUtils::HashString("NEW");
        static constexpr uint32_t CHANGED_HASH = ConstExprHashingUtils::HashString("CHANGED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW__HASH)
          {
            return EventType::NEW_;
          }
          else if (hashCode == CHANGED_HASH)
          {
            return EventType::CHANGED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return EventType::DELETED;
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
          case EventType::NEW_:
            return "NEW";
          case EventType::CHANGED:
            return "CHANGED";
          case EventType::DELETED:
            return "DELETED";
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
  } // namespace FSx
} // namespace Aws
