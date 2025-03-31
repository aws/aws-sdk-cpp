/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerBfdState.h>
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
      namespace RouteServerBfdStateMapper
      {

        static const int up_HASH = HashingUtils::HashString("up");
        static const int down_HASH = HashingUtils::HashString("down");


        RouteServerBfdState GetRouteServerBfdStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == up_HASH)
          {
            return RouteServerBfdState::up;
          }
          else if (hashCode == down_HASH)
          {
            return RouteServerBfdState::down;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteServerBfdState>(hashCode);
          }

          return RouteServerBfdState::NOT_SET;
        }

        Aws::String GetNameForRouteServerBfdState(RouteServerBfdState enumValue)
        {
          switch(enumValue)
          {
          case RouteServerBfdState::NOT_SET:
            return {};
          case RouteServerBfdState::up:
            return "up";
          case RouteServerBfdState::down:
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

      } // namespace RouteServerBfdStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
