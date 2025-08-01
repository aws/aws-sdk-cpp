/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/RoutingControlStateChange.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace RoutingControlStateChangeMapper
      {

        static const int On_HASH = HashingUtils::HashString("On");
        static const int Off_HASH = HashingUtils::HashString("Off");


        RoutingControlStateChange GetRoutingControlStateChangeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == On_HASH)
          {
            return RoutingControlStateChange::On;
          }
          else if (hashCode == Off_HASH)
          {
            return RoutingControlStateChange::Off;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoutingControlStateChange>(hashCode);
          }

          return RoutingControlStateChange::NOT_SET;
        }

        Aws::String GetNameForRoutingControlStateChange(RoutingControlStateChange enumValue)
        {
          switch(enumValue)
          {
          case RoutingControlStateChange::NOT_SET:
            return {};
          case RoutingControlStateChange::On:
            return "On";
          case RoutingControlStateChange::Off:
            return "Off";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoutingControlStateChangeMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
