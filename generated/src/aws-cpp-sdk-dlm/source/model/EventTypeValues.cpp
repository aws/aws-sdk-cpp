/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/EventTypeValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace EventTypeValuesMapper
      {

        static constexpr uint32_t shareSnapshot_HASH = ConstExprHashingUtils::HashString("shareSnapshot");


        EventTypeValues GetEventTypeValuesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == shareSnapshot_HASH)
          {
            return EventTypeValues::shareSnapshot;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventTypeValues>(hashCode);
          }

          return EventTypeValues::NOT_SET;
        }

        Aws::String GetNameForEventTypeValues(EventTypeValues enumValue)
        {
          switch(enumValue)
          {
          case EventTypeValues::NOT_SET:
            return {};
          case EventTypeValues::shareSnapshot:
            return "shareSnapshot";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
