/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Ipv6AddressAttribute.h>
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
      namespace Ipv6AddressAttributeMapper
      {

        static const int public__HASH = HashingUtils::HashString("public");
        static const int private__HASH = HashingUtils::HashString("private");


        Ipv6AddressAttribute GetIpv6AddressAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == public__HASH)
          {
            return Ipv6AddressAttribute::public_;
          }
          else if (hashCode == private__HASH)
          {
            return Ipv6AddressAttribute::private_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ipv6AddressAttribute>(hashCode);
          }

          return Ipv6AddressAttribute::NOT_SET;
        }

        Aws::String GetNameForIpv6AddressAttribute(Ipv6AddressAttribute enumValue)
        {
          switch(enumValue)
          {
          case Ipv6AddressAttribute::NOT_SET:
            return {};
          case Ipv6AddressAttribute::public_:
            return "public";
          case Ipv6AddressAttribute::private_:
            return "private";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ipv6AddressAttributeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
