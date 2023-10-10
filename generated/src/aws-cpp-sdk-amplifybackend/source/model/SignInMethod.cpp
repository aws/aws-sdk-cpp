/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/SignInMethod.h>
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
      namespace SignInMethodMapper
      {

        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int EMAIL_AND_PHONE_NUMBER_HASH = HashingUtils::HashString("EMAIL_AND_PHONE_NUMBER");
        static const int PHONE_NUMBER_HASH = HashingUtils::HashString("PHONE_NUMBER");
        static const int USERNAME_HASH = HashingUtils::HashString("USERNAME");


        SignInMethod GetSignInMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMAIL_HASH)
          {
            return SignInMethod::EMAIL;
          }
          else if (hashCode == EMAIL_AND_PHONE_NUMBER_HASH)
          {
            return SignInMethod::EMAIL_AND_PHONE_NUMBER;
          }
          else if (hashCode == PHONE_NUMBER_HASH)
          {
            return SignInMethod::PHONE_NUMBER;
          }
          else if (hashCode == USERNAME_HASH)
          {
            return SignInMethod::USERNAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SignInMethod>(hashCode);
          }

          return SignInMethod::NOT_SET;
        }

        Aws::String GetNameForSignInMethod(SignInMethod enumValue)
        {
          switch(enumValue)
          {
          case SignInMethod::NOT_SET:
            return {};
          case SignInMethod::EMAIL:
            return "EMAIL";
          case SignInMethod::EMAIL_AND_PHONE_NUMBER:
            return "EMAIL_AND_PHONE_NUMBER";
          case SignInMethod::PHONE_NUMBER:
            return "PHONE_NUMBER";
          case SignInMethod::USERNAME:
            return "USERNAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SignInMethodMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
