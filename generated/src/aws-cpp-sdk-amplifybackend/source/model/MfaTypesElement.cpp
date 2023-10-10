/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/MfaTypesElement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyBackend
  {
    namespace Model
    {
      namespace MfaTypesElementMapper
      {

        static const int SMS_HASH = HashingUtils::HashString("SMS");
        static const int TOTP_HASH = HashingUtils::HashString("TOTP");


        MfaTypesElement GetMfaTypesElementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMS_HASH)
          {
            return MfaTypesElement::SMS;
          }
          else if (hashCode == TOTP_HASH)
          {
            return MfaTypesElement::TOTP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MfaTypesElement>(hashCode);
          }

          return MfaTypesElement::NOT_SET;
        }

        Aws::String GetNameForMfaTypesElement(MfaTypesElement enumValue)
        {
          switch(enumValue)
          {
          case MfaTypesElement::NOT_SET:
            return {};
          case MfaTypesElement::SMS:
            return "SMS";
          case MfaTypesElement::TOTP:
            return "TOTP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MfaTypesElementMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
