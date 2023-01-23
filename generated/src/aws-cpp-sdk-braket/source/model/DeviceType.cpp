/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/DeviceType.h>
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
      namespace DeviceTypeMapper
      {

        static const int QPU_HASH = HashingUtils::HashString("QPU");
        static const int SIMULATOR_HASH = HashingUtils::HashString("SIMULATOR");


        DeviceType GetDeviceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QPU_HASH)
          {
            return DeviceType::QPU;
          }
          else if (hashCode == SIMULATOR_HASH)
          {
            return DeviceType::SIMULATOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceType>(hashCode);
          }

          return DeviceType::NOT_SET;
        }

        Aws::String GetNameForDeviceType(DeviceType enumValue)
        {
          switch(enumValue)
          {
          case DeviceType::QPU:
            return "QPU";
          case DeviceType::SIMULATOR:
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

      } // namespace DeviceTypeMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
