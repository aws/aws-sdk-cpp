/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserPoolMfaType.h>
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
      namespace UserPoolMfaTypeMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int ON_HASH = HashingUtils::HashString("ON");
        static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");


        UserPoolMfaType GetUserPoolMfaTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return UserPoolMfaType::OFF;
          }
          else if (hashCode == ON_HASH)
          {
            return UserPoolMfaType::ON;
          }
          else if (hashCode == OPTIONAL_HASH)
          {
            return UserPoolMfaType::OPTIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserPoolMfaType>(hashCode);
          }

          return UserPoolMfaType::NOT_SET;
        }

        Aws::String GetNameForUserPoolMfaType(UserPoolMfaType enumValue)
        {
          switch(enumValue)
          {
          case UserPoolMfaType::OFF:
            return "OFF";
          case UserPoolMfaType::ON:
            return "ON";
          case UserPoolMfaType::OPTIONAL:
            return "OPTIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserPoolMfaTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
