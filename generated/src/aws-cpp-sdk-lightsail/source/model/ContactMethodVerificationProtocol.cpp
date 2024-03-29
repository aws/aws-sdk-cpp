﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContactMethodVerificationProtocol.h>
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
      namespace ContactMethodVerificationProtocolMapper
      {

        static const int Email_HASH = HashingUtils::HashString("Email");


        ContactMethodVerificationProtocol GetContactMethodVerificationProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Email_HASH)
          {
            return ContactMethodVerificationProtocol::Email;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactMethodVerificationProtocol>(hashCode);
          }

          return ContactMethodVerificationProtocol::NOT_SET;
        }

        Aws::String GetNameForContactMethodVerificationProtocol(ContactMethodVerificationProtocol enumValue)
        {
          switch(enumValue)
          {
          case ContactMethodVerificationProtocol::NOT_SET:
            return {};
          case ContactMethodVerificationProtocol::Email:
            return "Email";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactMethodVerificationProtocolMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
