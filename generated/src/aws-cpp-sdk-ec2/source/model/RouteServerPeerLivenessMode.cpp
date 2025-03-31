/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerPeerLivenessMode.h>
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
      namespace RouteServerPeerLivenessModeMapper
      {

        static const int bfd_HASH = HashingUtils::HashString("bfd");
        static const int bgp_keepalive_HASH = HashingUtils::HashString("bgp-keepalive");


        RouteServerPeerLivenessMode GetRouteServerPeerLivenessModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == bfd_HASH)
          {
            return RouteServerPeerLivenessMode::bfd;
          }
          else if (hashCode == bgp_keepalive_HASH)
          {
            return RouteServerPeerLivenessMode::bgp_keepalive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteServerPeerLivenessMode>(hashCode);
          }

          return RouteServerPeerLivenessMode::NOT_SET;
        }

        Aws::String GetNameForRouteServerPeerLivenessMode(RouteServerPeerLivenessMode enumValue)
        {
          switch(enumValue)
          {
          case RouteServerPeerLivenessMode::NOT_SET:
            return {};
          case RouteServerPeerLivenessMode::bfd:
            return "bfd";
          case RouteServerPeerLivenessMode::bgp_keepalive:
            return "bgp-keepalive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteServerPeerLivenessModeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
