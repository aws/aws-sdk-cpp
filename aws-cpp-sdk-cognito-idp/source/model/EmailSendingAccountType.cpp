/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int COGNITO_DEFAULT_HASH = HashingUtils::HashString("COGNITO_DEFAULT");
        static const int DEVELOPER_HASH = HashingUtils::HashString("DEVELOPER");


        EmailSendingAccountType GetEmailSendingAccountTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
