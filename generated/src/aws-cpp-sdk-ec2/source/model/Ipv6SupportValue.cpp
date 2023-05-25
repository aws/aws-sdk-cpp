/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Ipv6SupportValue.h>
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
      namespace Ipv6SupportValueMapper
      {

        static const int enable_HASH = HashingUtils::HashString("enable");
        static const int disable_HASH = HashingUtils::HashString("disable");


        Ipv6SupportValue GetIpv6SupportValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return Ipv6SupportValue::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return Ipv6SupportValue::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ipv6SupportValue>(hashCode);
          }

          return Ipv6SupportValue::NOT_SET;
        }

        Aws::String GetNameForIpv6SupportValue(Ipv6SupportValue enumValue)
        {
          switch(enumValue)
          {
          case Ipv6SupportValue::enable:
            return "enable";
          case Ipv6SupportValue::disable:
            return "disable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ipv6SupportValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
