/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/EmailSendingAccountType.h>
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
      namespace EmailSendingAccountTypeMapper
      {

        static constexpr uint32_t COGNITO_DEFAULT_HASH = ConstExprHashingUtils::HashString("COGNITO_DEFAULT");
        static constexpr uint32_t DEVELOPER_HASH = ConstExprHashingUtils::HashString("DEVELOPER");


        EmailSendingAccountType GetEmailSendingAccountTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COGNITO_DEFAULT_HASH)
          {
            return EmailSendingAccountType::COGNITO_DEFAULT;
          }
          else if (hashCode == DEVELOPER_HASH)
          {
            return EmailSendingAccountType::DEVELOPER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmailSendingAccountType>(hashCode);
          }

          return EmailSendingAccountType::NOT_SET;
        }

        Aws::String GetNameForEmailSendingAccountType(EmailSendingAccountType enumValue)
        {
          switch(enumValue)
          {
          case EmailSendingAccountType::NOT_SET:
            return {};
          case EmailSendingAccountType::COGNITO_DEFAULT:
            return "COGNITO_DEFAULT";
          case EmailSendingAccountType::DEVELOPER:
            return "DEVELOPER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmailSendingAccountTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
