/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/alexaforbusiness/model/DeviceStatusDetailCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace DeviceStatusDetailCodeMapper
      {

        static const int DEVICE_SOFTWARE_UPDATE_NEEDED_HASH = HashingUtils::HashString("DEVICE_SOFTWARE_UPDATE_NEEDED");
        static const int DEVICE_WAS_OFFLINE_HASH = HashingUtils::HashString("DEVICE_WAS_OFFLINE");


        DeviceStatusDetailCode GetDeviceStatusDetailCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVICE_SOFTWARE_UPDATE_NEEDED_HASH)
          {
            return DeviceStatusDetailCode::DEVICE_SOFTWARE_UPDATE_NEEDED;
          }
          else if (hashCode == DEVICE_WAS_OFFLINE_HASH)
          {
            return DeviceStatusDetailCode::DEVICE_WAS_OFFLINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceStatusDetailCode>(hashCode);
          }

          return DeviceStatusDetailCode::NOT_SET;
        }

        Aws::String GetNameForDeviceStatusDetailCode(DeviceStatusDetailCode enumValue)
        {
          switch(enumValue)
          {
          case DeviceStatusDetailCode::DEVICE_SOFTWARE_UPDATE_NEEDED:
            return "DEVICE_SOFTWARE_UPDATE_NEEDED";
          case DeviceStatusDetailCode::DEVICE_WAS_OFFLINE:
            return "DEVICE_WAS_OFFLINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceStatusDetailCodeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
