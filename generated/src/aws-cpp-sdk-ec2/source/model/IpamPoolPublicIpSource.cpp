/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPoolPublicIpSource.h>
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
      namespace IpamPoolPublicIpSourceMapper
      {

        static const int amazon_HASH = HashingUtils::HashString("amazon");
        static const int byoip_HASH = HashingUtils::HashString("byoip");


        IpamPoolPublicIpSource GetIpamPoolPublicIpSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == amazon_HASH)
          {
            return IpamPoolPublicIpSource::amazon;
          }
          else if (hashCode == byoip_HASH)
          {
            return IpamPoolPublicIpSource::byoip;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamPoolPublicIpSource>(hashCode);
          }

          return IpamPoolPublicIpSource::NOT_SET;
        }

        Aws::String GetNameForIpamPoolPublicIpSource(IpamPoolPublicIpSource enumValue)
        {
          switch(enumValue)
          {
          case IpamPoolPublicIpSource::NOT_SET:
            return {};
          case IpamPoolPublicIpSource::amazon:
            return "amazon";
          case IpamPoolPublicIpSource::byoip:
            return "byoip";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamPoolPublicIpSourceMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
