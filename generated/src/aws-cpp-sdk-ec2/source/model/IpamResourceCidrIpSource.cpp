/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamResourceCidrIpSource.h>
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
      namespace IpamResourceCidrIpSourceMapper
      {

        static const int amazon_HASH = HashingUtils::HashString("amazon");
        static const int byoip_HASH = HashingUtils::HashString("byoip");
        static const int none_HASH = HashingUtils::HashString("none");


        IpamResourceCidrIpSource GetIpamResourceCidrIpSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == amazon_HASH)
          {
            return IpamResourceCidrIpSource::amazon;
          }
          else if (hashCode == byoip_HASH)
          {
            return IpamResourceCidrIpSource::byoip;
          }
          else if (hashCode == none_HASH)
          {
            return IpamResourceCidrIpSource::none;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamResourceCidrIpSource>(hashCode);
          }

          return IpamResourceCidrIpSource::NOT_SET;
        }

        Aws::String GetNameForIpamResourceCidrIpSource(IpamResourceCidrIpSource enumValue)
        {
          switch(enumValue)
          {
          case IpamResourceCidrIpSource::NOT_SET:
            return {};
          case IpamResourceCidrIpSource::amazon:
            return "amazon";
          case IpamResourceCidrIpSource::byoip:
            return "byoip";
          case IpamResourceCidrIpSource::none:
            return "none";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamResourceCidrIpSourceMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
