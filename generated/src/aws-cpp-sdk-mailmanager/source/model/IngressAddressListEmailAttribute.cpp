/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressAddressListEmailAttribute.h>
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
      namespace IngressAddressListEmailAttributeMapper
      {

        static const int RECIPIENT_HASH = HashingUtils::HashString("RECIPIENT");


        IngressAddressListEmailAttribute GetIngressAddressListEmailAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECIPIENT_HASH)
          {
            return IngressAddressListEmailAttribute::RECIPIENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngressAddressListEmailAttribute>(hashCode);
          }

          return IngressAddressListEmailAttribute::NOT_SET;
        }

        Aws::String GetNameForIngressAddressListEmailAttribute(IngressAddressListEmailAttribute enumValue)
        {
          switch(enumValue)
          {
          case IngressAddressListEmailAttribute::NOT_SET:
            return {};
          case IngressAddressListEmailAttribute::RECIPIENT:
            return "RECIPIENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngressAddressListEmailAttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
