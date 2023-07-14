/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35AposWebDeliveryAllowedBehavior.h>
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
      namespace Scte35AposWebDeliveryAllowedBehaviorMapper
      {

        static const int FOLLOW_HASH = HashingUtils::HashString("FOLLOW");
        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");


        Scte35AposWebDeliveryAllowedBehavior GetScte35AposWebDeliveryAllowedBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_HASH)
          {
            return Scte35AposWebDeliveryAllowedBehavior::FOLLOW;
          }
          else if (hashCode == IGNORE_HASH)
          {
            return Scte35AposWebDeliveryAllowedBehavior::IGNORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte35AposWebDeliveryAllowedBehavior>(hashCode);
          }

          return Scte35AposWebDeliveryAllowedBehavior::NOT_SET;
        }

        Aws::String GetNameForScte35AposWebDeliveryAllowedBehavior(Scte35AposWebDeliveryAllowedBehavior enumValue)
        {
          switch(enumValue)
          {
          case Scte35AposWebDeliveryAllowedBehavior::FOLLOW:
            return "FOLLOW";
          case Scte35AposWebDeliveryAllowedBehavior::IGNORE:
            return "IGNORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Scte35AposWebDeliveryAllowedBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
