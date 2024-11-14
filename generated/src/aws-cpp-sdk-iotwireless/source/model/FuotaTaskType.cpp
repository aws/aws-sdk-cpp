/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/FuotaTaskType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace FuotaTaskTypeMapper
      {

        static const int LoRaWAN_HASH = HashingUtils::HashString("LoRaWAN");


        FuotaTaskType GetFuotaTaskTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LoRaWAN_HASH)
          {
            return FuotaTaskType::LoRaWAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FuotaTaskType>(hashCode);
          }

          return FuotaTaskType::NOT_SET;
        }

        Aws::String GetNameForFuotaTaskType(FuotaTaskType enumValue)
        {
          switch(enumValue)
          {
          case FuotaTaskType::NOT_SET:
            return {};
          case FuotaTaskType::LoRaWAN:
            return "LoRaWAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FuotaTaskTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
