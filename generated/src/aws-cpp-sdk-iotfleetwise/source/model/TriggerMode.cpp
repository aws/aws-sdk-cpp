/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/TriggerMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace TriggerModeMapper
      {

        static const int ALWAYS_HASH = HashingUtils::HashString("ALWAYS");
        static const int RISING_EDGE_HASH = HashingUtils::HashString("RISING_EDGE");


        TriggerMode GetTriggerModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALWAYS_HASH)
          {
            return TriggerMode::ALWAYS;
          }
          else if (hashCode == RISING_EDGE_HASH)
          {
            return TriggerMode::RISING_EDGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TriggerMode>(hashCode);
          }

          return TriggerMode::NOT_SET;
        }

        Aws::String GetNameForTriggerMode(TriggerMode enumValue)
        {
          switch(enumValue)
          {
          case TriggerMode::ALWAYS:
            return "ALWAYS";
          case TriggerMode::RISING_EDGE:
            return "RISING_EDGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TriggerModeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
