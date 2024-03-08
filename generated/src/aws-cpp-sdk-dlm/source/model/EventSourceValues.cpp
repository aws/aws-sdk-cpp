/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/EventSourceValues.h>
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
      namespace EventSourceValuesMapper
      {

        static const int MANAGED_CWE_HASH = HashingUtils::HashString("MANAGED_CWE");


        EventSourceValues GetEventSourceValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANAGED_CWE_HASH)
          {
            return EventSourceValues::MANAGED_CWE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventSourceValues>(hashCode);
          }

          return EventSourceValues::NOT_SET;
        }

        Aws::String GetNameForEventSourceValues(EventSourceValues enumValue)
        {
          switch(enumValue)
          {
          case EventSourceValues::NOT_SET:
            return {};
          case EventSourceValues::MANAGED_CWE:
            return "MANAGED_CWE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventSourceValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
