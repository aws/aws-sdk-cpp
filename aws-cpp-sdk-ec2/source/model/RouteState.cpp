/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace RouteStateMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int blackhole_HASH = HashingUtils::HashString("blackhole");


        RouteState GetRouteStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return RouteState::active;
          }
          else if (hashCode == blackhole_HASH)
          {
            return RouteState::blackhole;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteState>(hashCode);
          }

          return RouteState::NOT_SET;
        }

        Aws::String GetNameForRouteState(RouteState enumValue)
        {
          switch(enumValue)
          {
          case RouteState::active:
            return "active";
          case RouteState::blackhole:
            return "blackhole";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
