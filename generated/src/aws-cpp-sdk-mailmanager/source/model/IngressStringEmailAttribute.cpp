/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressStringEmailAttribute.h>
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
      namespace IngressStringEmailAttributeMapper
      {

        static const int RECIPIENT_HASH = HashingUtils::HashString("RECIPIENT");


        IngressStringEmailAttribute GetIngressStringEmailAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECIPIENT_HASH)
          {
            return IngressStringEmailAttribute::RECIPIENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngressStringEmailAttribute>(hashCode);
          }

          return IngressStringEmailAttribute::NOT_SET;
        }

        Aws::String GetNameForIngressStringEmailAttribute(IngressStringEmailAttribute enumValue)
        {
          switch(enumValue)
          {
          case IngressStringEmailAttribute::NOT_SET:
            return {};
          case IngressStringEmailAttribute::RECIPIENT:
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

      } // namespace IngressStringEmailAttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
