/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerRouteStatus.h>
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
      namespace RouteServerRouteStatusMapper
      {

        static const int in_rib_HASH = HashingUtils::HashString("in-rib");
        static const int in_fib_HASH = HashingUtils::HashString("in-fib");


        RouteServerRouteStatus GetRouteServerRouteStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == in_rib_HASH)
          {
            return RouteServerRouteStatus::in_rib;
          }
          else if (hashCode == in_fib_HASH)
          {
            return RouteServerRouteStatus::in_fib;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteServerRouteStatus>(hashCode);
          }

          return RouteServerRouteStatus::NOT_SET;
        }

        Aws::String GetNameForRouteServerRouteStatus(RouteServerRouteStatus enumValue)
        {
          switch(enumValue)
          {
          case RouteServerRouteStatus::NOT_SET:
            return {};
          case RouteServerRouteStatus::in_rib:
            return "in-rib";
          case RouteServerRouteStatus::in_fib:
            return "in-fib";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteServerRouteStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
