/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserPoolTierType.h>
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
      namespace UserPoolTierTypeMapper
      {

        static const int LITE_HASH = HashingUtils::HashString("LITE");
        static const int ESSENTIALS_HASH = HashingUtils::HashString("ESSENTIALS");
        static const int PLUS_HASH = HashingUtils::HashString("PLUS");


        UserPoolTierType GetUserPoolTierTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LITE_HASH)
          {
            return UserPoolTierType::LITE;
          }
          else if (hashCode == ESSENTIALS_HASH)
          {
            return UserPoolTierType::ESSENTIALS;
          }
          else if (hashCode == PLUS_HASH)
          {
            return UserPoolTierType::PLUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserPoolTierType>(hashCode);
          }

          return UserPoolTierType::NOT_SET;
        }

        Aws::String GetNameForUserPoolTierType(UserPoolTierType enumValue)
        {
          switch(enumValue)
          {
          case UserPoolTierType::NOT_SET:
            return {};
          case UserPoolTierType::LITE:
            return "LITE";
          case UserPoolTierType::ESSENTIALS:
            return "ESSENTIALS";
          case UserPoolTierType::PLUS:
            return "PLUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserPoolTierTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
