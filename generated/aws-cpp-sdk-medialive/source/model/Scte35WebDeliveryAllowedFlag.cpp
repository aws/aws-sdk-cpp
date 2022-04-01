/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35WebDeliveryAllowedFlag.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace Scte35WebDeliveryAllowedFlagMapper
      {

        static const int WEB_DELIVERY_NOT_ALLOWED_HASH = HashingUtils::HashString("WEB_DELIVERY_NOT_ALLOWED");
        static const int WEB_DELIVERY_ALLOWED_HASH = HashingUtils::HashString("WEB_DELIVERY_ALLOWED");


        Scte35WebDeliveryAllowedFlag GetScte35WebDeliveryAllowedFlagForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WEB_DELIVERY_NOT_ALLOWED_HASH)
          {
            return Scte35WebDeliveryAllowedFlag::WEB_DELIVERY_NOT_ALLOWED;
          }
          else if (hashCode == WEB_DELIVERY_ALLOWED_HASH)
          {
            return Scte35WebDeliveryAllowedFlag::WEB_DELIVERY_ALLOWED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte35WebDeliveryAllowedFlag>(hashCode);
          }

          return Scte35WebDeliveryAllowedFlag::NOT_SET;
        }

        Aws::String GetNameForScte35WebDeliveryAllowedFlag(Scte35WebDeliveryAllowedFlag enumValue)
        {
          switch(enumValue)
          {
          case Scte35WebDeliveryAllowedFlag::WEB_DELIVERY_NOT_ALLOWED:
            return "WEB_DELIVERY_NOT_ALLOWED";
          case Scte35WebDeliveryAllowedFlag::WEB_DELIVERY_ALLOWED:
            return "WEB_DELIVERY_ALLOWED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Scte35WebDeliveryAllowedFlagMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
