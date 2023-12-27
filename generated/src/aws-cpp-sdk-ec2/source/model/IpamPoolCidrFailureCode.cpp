/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPoolCidrFailureCode.h>
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
      namespace IpamPoolCidrFailureCodeMapper
      {

        static const int cidr_not_available_HASH = HashingUtils::HashString("cidr-not-available");
        static const int limit_exceeded_HASH = HashingUtils::HashString("limit-exceeded");


        IpamPoolCidrFailureCode GetIpamPoolCidrFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cidr_not_available_HASH)
          {
            return IpamPoolCidrFailureCode::cidr_not_available;
          }
          else if (hashCode == limit_exceeded_HASH)
          {
            return IpamPoolCidrFailureCode::limit_exceeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamPoolCidrFailureCode>(hashCode);
          }

          return IpamPoolCidrFailureCode::NOT_SET;
        }

        Aws::String GetNameForIpamPoolCidrFailureCode(IpamPoolCidrFailureCode enumValue)
        {
          switch(enumValue)
          {
          case IpamPoolCidrFailureCode::NOT_SET:
            return {};
          case IpamPoolCidrFailureCode::cidr_not_available:
            return "cidr-not-available";
          case IpamPoolCidrFailureCode::limit_exceeded:
            return "limit-exceeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamPoolCidrFailureCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
