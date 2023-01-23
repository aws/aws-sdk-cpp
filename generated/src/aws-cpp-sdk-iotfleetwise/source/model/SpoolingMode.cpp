/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/SpoolingMode.h>
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
      namespace SpoolingModeMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int TO_DISK_HASH = HashingUtils::HashString("TO_DISK");


        SpoolingMode GetSpoolingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return SpoolingMode::OFF;
          }
          else if (hashCode == TO_DISK_HASH)
          {
            return SpoolingMode::TO_DISK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpoolingMode>(hashCode);
          }

          return SpoolingMode::NOT_SET;
        }

        Aws::String GetNameForSpoolingMode(SpoolingMode enumValue)
        {
          switch(enumValue)
          {
          case SpoolingMode::OFF:
            return "OFF";
          case SpoolingMode::TO_DISK:
            return "TO_DISK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpoolingModeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
