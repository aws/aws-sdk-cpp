/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BlackoutSlateNetworkEndBlackout.h>
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
      namespace BlackoutSlateNetworkEndBlackoutMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        BlackoutSlateNetworkEndBlackout GetBlackoutSlateNetworkEndBlackoutForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return BlackoutSlateNetworkEndBlackout::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return BlackoutSlateNetworkEndBlackout::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlackoutSlateNetworkEndBlackout>(hashCode);
          }

          return BlackoutSlateNetworkEndBlackout::NOT_SET;
        }

        Aws::String GetNameForBlackoutSlateNetworkEndBlackout(BlackoutSlateNetworkEndBlackout enumValue)
        {
          switch(enumValue)
          {
          case BlackoutSlateNetworkEndBlackout::DISABLED:
            return "DISABLED";
          case BlackoutSlateNetworkEndBlackout::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlackoutSlateNetworkEndBlackoutMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
