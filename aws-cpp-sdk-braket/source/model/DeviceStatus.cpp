/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/DeviceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Braket
  {
    namespace Model
    {
      namespace DeviceStatusMapper
      {

        static const int QPU_HASH = HashingUtils::HashString("QPU");
        static const int SIMULATOR_HASH = HashingUtils::HashString("SIMULATOR");


        DeviceStatus GetDeviceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QPU_HASH)
          {
            return DeviceStatus::QPU;
          }
          else if (hashCode == SIMULATOR_HASH)
          {
            return DeviceStatus::SIMULATOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceStatus>(hashCode);
          }

          return DeviceStatus::NOT_SET;
        }

        Aws::String GetNameForDeviceStatus(DeviceStatus enumValue)
        {
          switch(enumValue)
          {
          case DeviceStatus::QPU:
            return "QPU";
          case DeviceStatus::SIMULATOR:
            return "SIMULATOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceStatusMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
