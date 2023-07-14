/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

            return {};
          }
        }

      } // namespace DevicePlatformMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
