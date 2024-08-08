/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpSource.h>
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
      namespace IpSourceMapper
      {

        static const int amazon_HASH = HashingUtils::HashString("amazon");
        static const int byoip_HASH = HashingUtils::HashString("byoip");
        static const int none_HASH = HashingUtils::HashString("none");


        IpSource GetIpSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == amazon_HASH)
          {
            return IpSource::amazon;
          }
          else if (hashCode == byoip_HASH)
          {
            return IpSource::byoip;
          }
          else if (hashCode == none_HASH)
          {
            return IpSource::none;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpSource>(hashCode);
          }

          return IpSource::NOT_SET;
        }

        Aws::String GetNameForIpSource(IpSource enumValue)
        {
          switch(enumValue)
          {
          case IpSource::NOT_SET:
            return {};
          case IpSource::amazon:
            return "amazon";
          case IpSource::byoip:
            return "byoip";
          case IpSource::none:
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

      } // namespace IpSourceMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
