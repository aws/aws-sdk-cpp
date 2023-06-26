/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DeviceUsageType.h>
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
      namespace DeviceUsageTypeMapper
      {

        static const int VOICE_HASH = HashingUtils::HashString("VOICE");


        DeviceUsageType GetDeviceUsageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VOICE_HASH)
          {
            return DeviceUsageType::VOICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceUsageType>(hashCode);
          }

          return DeviceUsageType::NOT_SET;
        }

        Aws::String GetNameForDeviceUsageType(DeviceUsageType enumValue)
        {
          switch(enumValue)
          {
          case DeviceUsageType::VOICE:
            return "VOICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceUsageTypeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
