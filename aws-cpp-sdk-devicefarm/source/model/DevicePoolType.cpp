/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/model/DevicePoolType.h>
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
      namespace DevicePoolTypeMapper
      {

        static const int CURATED_HASH = HashingUtils::HashString("CURATED");
        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");


        DevicePoolType GetDevicePoolTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CURATED_HASH)
          {
            return DevicePoolType::CURATED;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return DevicePoolType::PRIVATE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DevicePoolType>(hashCode);
          }

          return DevicePoolType::NOT_SET;
        }

        Aws::String GetNameForDevicePoolType(DevicePoolType enumValue)
        {
          switch(enumValue)
          {
          case DevicePoolType::CURATED:
            return "CURATED";
          case DevicePoolType::PRIVATE_:
            return "PRIVATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DevicePoolTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
