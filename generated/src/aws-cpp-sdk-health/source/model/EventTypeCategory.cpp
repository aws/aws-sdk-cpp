/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/EventTypeCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Health
  {
    namespace Model
    {
      namespace EventTypeCategoryMapper
      {

        static constexpr uint32_t issue_HASH = ConstExprHashingUtils::HashString("issue");
        static constexpr uint32_t accountNotification_HASH = ConstExprHashingUtils::HashString("accountNotification");
        static constexpr uint32_t scheduledChange_HASH = ConstExprHashingUtils::HashString("scheduledChange");
        static constexpr uint32_t investigation_HASH = ConstExprHashingUtils::HashString("investigation");


        EventTypeCategory GetEventTypeCategoryForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == issue_HASH)
          {
            return EventTypeCategory::issue;
          }
          else if (hashCode == accountNotification_HASH)
          {
            return EventTypeCategory::accountNotification;
          }
          else if (hashCode == scheduledChange_HASH)
          {
            return EventTypeCategory::scheduledChange;
          }
          else if (hashCode == investigation_HASH)
          {
            return EventTypeCategory::investigation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventTypeCategory>(hashCode);
          }

          return EventTypeCategory::NOT_SET;
        }

        Aws::String GetNameForEventTypeCategory(EventTypeCategory enumValue)
        {
          switch(enumValue)
          {
          case EventTypeCategory::NOT_SET:
            return {};
          case EventTypeCategory::issue:
            return "issue";
          case EventTypeCategory::accountNotification:
            return "accountNotification";
          case EventTypeCategory::scheduledChange:
            return "scheduledChange";
          case EventTypeCategory::investigation:
            return "investigation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeCategoryMapper
    } // namespace Model
  } // namespace Health
} // namespace Aws
