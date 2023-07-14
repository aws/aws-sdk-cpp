/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/DeviceFormFactor.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace DeviceFormFactorMapper
      {

        static const int PHONE_HASH = HashingUtils::HashString("PHONE");
        static const int TABLET_HASH = HashingUtils::HashString("TABLET");


        DeviceFormFactor GetDeviceFormFactorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PHONE_HASH)
          {
            return DeviceFormFactor::PHONE;
          }
          else if (hashCode == TABLET_HASH)
          {
            return DeviceFormFactor::TABLET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceFormFactor>(hashCode);
          }

          return DeviceFormFactor::NOT_SET;
        }

        Aws::String GetNameForDeviceFormFactor(DeviceFormFactor enumValue)
        {
          switch(enumValue)
          {
          case DeviceFormFactor::PHONE:
            return "PHONE";
          case DeviceFormFactor::TABLET:
            return "TABLET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceFormFactorMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
