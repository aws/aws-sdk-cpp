/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContactProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace ContactProtocolMapper
      {

        static constexpr uint32_t Email_HASH = ConstExprHashingUtils::HashString("Email");
        static constexpr uint32_t SMS_HASH = ConstExprHashingUtils::HashString("SMS");


        ContactProtocol GetContactProtocolForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Email_HASH)
          {
            return ContactProtocol::Email;
          }
          else if (hashCode == SMS_HASH)
          {
            return ContactProtocol::SMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactProtocol>(hashCode);
          }

          return ContactProtocol::NOT_SET;
        }

        Aws::String GetNameForContactProtocol(ContactProtocol enumValue)
        {
          switch(enumValue)
          {
          case ContactProtocol::NOT_SET:
            return {};
          case ContactProtocol::Email:
            return "Email";
          case ContactProtocol::SMS:
            return "SMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactProtocolMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
