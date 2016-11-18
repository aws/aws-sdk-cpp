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
#include <aws/devicefarm/model/DevicePlatform.h>
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
      namespace DevicePlatformMapper
      {

        static const int ANDROID__HASH = HashingUtils::HashString("ANDROID");
        static const int IOS_HASH = HashingUtils::HashString("IOS");


        DevicePlatform GetDevicePlatformForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANDROID__HASH)
          {
            return DevicePlatform::ANDROID_;
          }
          else if (hashCode == IOS_HASH)
          {
            return DevicePlatform::IOS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DevicePlatform>(hashCode);
          }

          return DevicePlatform::NOT_SET;
        }

        Aws::String GetNameForDevicePlatform(DevicePlatform enumValue)
        {
          switch(enumValue)
          {
          case DevicePlatform::ANDROID_:
            return "ANDROID";
          case DevicePlatform::IOS:
            return "IOS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DevicePlatformMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
