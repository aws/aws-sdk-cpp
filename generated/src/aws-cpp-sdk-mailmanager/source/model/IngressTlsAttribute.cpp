/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressTlsAttribute.h>
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
      namespace IngressTlsAttributeMapper
      {

        static const int TLS_PROTOCOL_HASH = HashingUtils::HashString("TLS_PROTOCOL");


        IngressTlsAttribute GetIngressTlsAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TLS_PROTOCOL_HASH)
          {
            return IngressTlsAttribute::TLS_PROTOCOL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngressTlsAttribute>(hashCode);
          }

          return IngressTlsAttribute::NOT_SET;
        }

        Aws::String GetNameForIngressTlsAttribute(IngressTlsAttribute enumValue)
        {
          switch(enumValue)
          {
          case IngressTlsAttribute::NOT_SET:
            return {};
          case IngressTlsAttribute::TLS_PROTOCOL:
            return "TLS_PROTOCOL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngressTlsAttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
