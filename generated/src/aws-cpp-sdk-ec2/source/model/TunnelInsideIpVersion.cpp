/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TunnelInsideIpVersion.h>
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
      namespace TunnelInsideIpVersionMapper
      {

        static const int ipv4_HASH = HashingUtils::HashString("ipv4");
        static const int ipv6_HASH = HashingUtils::HashString("ipv6");


        TunnelInsideIpVersion GetTunnelInsideIpVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return TunnelInsideIpVersion::ipv4;
          }
          else if (hashCode == ipv6_HASH)
          {
            return TunnelInsideIpVersion::ipv6;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TunnelInsideIpVersion>(hashCode);
          }

          return TunnelInsideIpVersion::NOT_SET;
        }

        Aws::String GetNameForTunnelInsideIpVersion(TunnelInsideIpVersion enumValue)
        {
          switch(enumValue)
          {
          case TunnelInsideIpVersion::ipv4:
            return "ipv4";
          case TunnelInsideIpVersion::ipv6:
            return "ipv6";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TunnelInsideIpVersionMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
