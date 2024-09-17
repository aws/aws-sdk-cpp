/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressTlsProtocolAttribute.h>
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
      namespace IngressTlsProtocolAttributeMapper
      {

        static const int TLS1_2_HASH = HashingUtils::HashString("TLS1_2");
        static const int TLS1_3_HASH = HashingUtils::HashString("TLS1_3");


        IngressTlsProtocolAttribute GetIngressTlsProtocolAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TLS1_2_HASH)
          {
            return IngressTlsProtocolAttribute::TLS1_2;
          }
          else if (hashCode == TLS1_3_HASH)
          {
            return IngressTlsProtocolAttribute::TLS1_3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngressTlsProtocolAttribute>(hashCode);
          }

          return IngressTlsProtocolAttribute::NOT_SET;
        }

        Aws::String GetNameForIngressTlsProtocolAttribute(IngressTlsProtocolAttribute enumValue)
        {
          switch(enumValue)
          {
          case IngressTlsProtocolAttribute::NOT_SET:
            return {};
          case IngressTlsProtocolAttribute::TLS1_2:
            return "TLS1_2";
          case IngressTlsProtocolAttribute::TLS1_3:
            return "TLS1_3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngressTlsProtocolAttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
