/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/EventTriggerLogicalOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace EventTriggerLogicalOperatorMapper
      {

        static const int ANY_HASH = HashingUtils::HashString("ANY");
        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        EventTriggerLogicalOperator GetEventTriggerLogicalOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANY_HASH)
          {
            return EventTriggerLogicalOperator::ANY;
          }
          else if (hashCode == ALL_HASH)
          {
            return EventTriggerLogicalOperator::ALL;
          }
          else if (hashCode == NONE_HASH)
          {
            return EventTriggerLogicalOperator::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventTriggerLogicalOperator>(hashCode);
          }

          return EventTriggerLogicalOperator::NOT_SET;
        }

        Aws::String GetNameForEventTriggerLogicalOperator(EventTriggerLogicalOperator enumValue)
        {
          switch(enumValue)
          {
          case EventTriggerLogicalOperator::NOT_SET:
            return {};
          case EventTriggerLogicalOperator::ANY:
            return "ANY";
          case EventTriggerLogicalOperator::ALL:
            return "ALL";
          case EventTriggerLogicalOperator::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTriggerLogicalOperatorMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
