/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerBgpState.h>
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
      namespace RouteServerBgpStateMapper
      {

        static const int up_HASH = HashingUtils::HashString("up");
        static const int down_HASH = HashingUtils::HashString("down");


        RouteServerBgpState GetRouteServerBgpStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == up_HASH)
          {
            return RouteServerBgpState::up;
          }
          else if (hashCode == down_HASH)
          {
            return RouteServerBgpState::down;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteServerBgpState>(hashCode);
          }

          return RouteServerBgpState::NOT_SET;
        }

        Aws::String GetNameForRouteServerBgpState(RouteServerBgpState enumValue)
        {
          switch(enumValue)
          {
          case RouteServerBgpState::NOT_SET:
            return {};
          case RouteServerBgpState::up:
            return "up";
          case RouteServerBgpState::down:
            return "down";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteServerBgpStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
