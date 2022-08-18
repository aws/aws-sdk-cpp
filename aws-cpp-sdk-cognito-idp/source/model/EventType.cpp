/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/EventType.h>
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
      namespace EventTypeMapper
      {

        static const int SignIn_HASH = HashingUtils::HashString("SignIn");
        static const int SignUp_HASH = HashingUtils::HashString("SignUp");
        static const int ForgotPassword_HASH = HashingUtils::HashString("ForgotPassword");
        static const int PasswordChange_HASH = HashingUtils::HashString("PasswordChange");
        static const int ResendCode_HASH = HashingUtils::HashString("ResendCode");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SignIn_HASH)
          {
            return EventType::SignIn;
          }
          else if (hashCode == SignUp_HASH)
          {
            return EventType::SignUp;
          }
          else if (hashCode == ForgotPassword_HASH)
          {
            return EventType::ForgotPassword;
          }
          else if (hashCode == PasswordChange_HASH)
          {
            return EventType::PasswordChange;
          }
          else if (hashCode == ResendCode_HASH)
          {
            return EventType::ResendCode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventType>(hashCode);
          }

          return EventType::NOT_SET;
        }

        Aws::String GetNameForEventType(EventType enumValue)
        {
          switch(enumValue)
          {
          case EventType::SignIn:
            return "SignIn";
          case EventType::SignUp:
            return "SignUp";
          case EventType::ForgotPassword:
            return "ForgotPassword";
          case EventType::PasswordChange:
            return "PasswordChange";
          case EventType::ResendCode:
            return "ResendCode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
