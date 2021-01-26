/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/EventAggregateField.h>
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
      namespace EventAggregateFieldMapper
      {

        static const int eventTypeCategory_HASH = HashingUtils::HashString("eventTypeCategory");


        EventAggregateField GetEventAggregateFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == eventTypeCategory_HASH)
          {
            return EventAggregateField::eventTypeCategory;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventAggregateField>(hashCode);
          }

          return EventAggregateField::NOT_SET;
        }

        Aws::String GetNameForEventAggregateField(EventAggregateField enumValue)
        {
          switch(enumValue)
          {
          case EventAggregateField::eventTypeCategory:
            return "eventTypeCategory";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventAggregateFieldMapper
    } // namespace Model
  } // namespace Health
} // namespace Aws
