/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/RecoveryOptionNameType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace RecoveryOptionNameTypeMapper
      {

        static const int verified_email_HASH = HashingUtils::HashString("verified_email");
        static const int verified_phone_number_HASH = HashingUtils::HashString("verified_phone_number");
        static const int admin_only_HASH = HashingUtils::HashString("admin_only");


        RecoveryOptionNameType GetRecoveryOptionNameTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == verified_email_HASH)
          {
            return RecoveryOptionNameType::verified_email;
          }
          else if (hashCode == verified_phone_number_HASH)
          {
            return RecoveryOptionNameType::verified_phone_number;
          }
          else if (hashCode == admin_only_HASH)
          {
            return RecoveryOptionNameType::admin_only;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecoveryOptionNameType>(hashCode);
          }

          return RecoveryOptionNameType::NOT_SET;
        }

        Aws::String GetNameForRecoveryOptionNameType(RecoveryOptionNameType enumValue)
        {
          switch(enumValue)
          {
          case RecoveryOptionNameType::verified_email:
            return "verified_email";
          case RecoveryOptionNameType::verified_phone_number:
            return "verified_phone_number";
          case RecoveryOptionNameType::admin_only:
            return "admin_only";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecoveryOptionNameTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
