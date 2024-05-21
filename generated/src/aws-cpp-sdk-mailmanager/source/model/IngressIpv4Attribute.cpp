/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressIpv4Attribute.h>
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
      namespace IngressIpv4AttributeMapper
      {

        static const int SENDER_IP_HASH = HashingUtils::HashString("SENDER_IP");


        IngressIpv4Attribute GetIngressIpv4AttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SENDER_IP_HASH)
          {
            return IngressIpv4Attribute::SENDER_IP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngressIpv4Attribute>(hashCode);
          }

          return IngressIpv4Attribute::NOT_SET;
        }

        Aws::String GetNameForIngressIpv4Attribute(IngressIpv4Attribute enumValue)
        {
          switch(enumValue)
          {
          case IngressIpv4Attribute::NOT_SET:
            return {};
          case IngressIpv4Attribute::SENDER_IP:
            return "SENDER_IP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngressIpv4AttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
