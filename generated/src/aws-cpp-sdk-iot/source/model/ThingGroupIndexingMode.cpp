/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ThingGroupIndexingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace ThingGroupIndexingModeMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int ON_HASH = HashingUtils::HashString("ON");


        ThingGroupIndexingMode GetThingGroupIndexingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return ThingGroupIndexingMode::OFF;
          }
          else if (hashCode == ON_HASH)
          {
            return ThingGroupIndexingMode::ON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThingGroupIndexingMode>(hashCode);
          }

          return ThingGroupIndexingMode::NOT_SET;
        }

        Aws::String GetNameForThingGroupIndexingMode(ThingGroupIndexingMode enumValue)
        {
          switch(enumValue)
          {
          case ThingGroupIndexingMode::OFF:
            return "OFF";
          case ThingGroupIndexingMode::ON:
            return "ON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThingGroupIndexingModeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
