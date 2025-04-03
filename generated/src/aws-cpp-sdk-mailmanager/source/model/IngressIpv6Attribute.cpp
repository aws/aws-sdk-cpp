/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressIpv6Attribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace IngressIpv6AttributeMapper
      {

        static const int SENDER_IPV6_HASH = HashingUtils::HashString("SENDER_IPV6");


        IngressIpv6Attribute GetIngressIpv6AttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SENDER_IPV6_HASH)
          {
            return IngressIpv6Attribute::SENDER_IPV6;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngressIpv6Attribute>(hashCode);
          }

          return IngressIpv6Attribute::NOT_SET;
        }

        Aws::String GetNameForIngressIpv6Attribute(IngressIpv6Attribute enumValue)
        {
          switch(enumValue)
          {
          case IngressIpv6Attribute::NOT_SET:
            return {};
          case IngressIpv6Attribute::SENDER_IPV6:
            return "SENDER_IPV6";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngressIpv6AttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
