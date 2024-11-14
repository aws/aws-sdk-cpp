/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/FuotaTaskEvent.h>
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
      namespace FuotaTaskEventMapper
      {

        static const int Fuota_HASH = HashingUtils::HashString("Fuota");


        FuotaTaskEvent GetFuotaTaskEventForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Fuota_HASH)
          {
            return FuotaTaskEvent::Fuota;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FuotaTaskEvent>(hashCode);
          }

          return FuotaTaskEvent::NOT_SET;
        }

        Aws::String GetNameForFuotaTaskEvent(FuotaTaskEvent enumValue)
        {
          switch(enumValue)
          {
          case FuotaTaskEvent::NOT_SET:
            return {};
          case FuotaTaskEvent::Fuota:
            return "Fuota";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FuotaTaskEventMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
