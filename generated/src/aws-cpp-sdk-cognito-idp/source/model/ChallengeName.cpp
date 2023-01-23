/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ChallengeName.h>
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
      namespace ChallengeNameMapper
      {

        static const int Password_HASH = HashingUtils::HashString("Password");
        static const int Mfa_HASH = HashingUtils::HashString("Mfa");


        ChallengeName GetChallengeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Password_HASH)
          {
            return ChallengeName::Password;
          }
          else if (hashCode == Mfa_HASH)
          {
            return ChallengeName::Mfa;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChallengeName>(hashCode);
          }

          return ChallengeName::NOT_SET;
        }

        Aws::String GetNameForChallengeName(ChallengeName enumValue)
        {
          switch(enumValue)
          {
          case ChallengeName::Password:
            return "Password";
          case ChallengeName::Mfa:
            return "Mfa";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChallengeNameMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
