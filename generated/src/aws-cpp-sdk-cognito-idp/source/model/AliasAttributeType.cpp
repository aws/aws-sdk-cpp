/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AliasAttributeType.h>
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
      namespace AliasAttributeTypeMapper
      {

        static const int phone_number_HASH = HashingUtils::HashString("phone_number");
        static const int email_HASH = HashingUtils::HashString("email");
        static const int preferred_username_HASH = HashingUtils::HashString("preferred_username");


        AliasAttributeType GetAliasAttributeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == phone_number_HASH)
          {
            return AliasAttributeType::phone_number;
          }
          else if (hashCode == email_HASH)
          {
            return AliasAttributeType::email;
          }
          else if (hashCode == preferred_username_HASH)
          {
            return AliasAttributeType::preferred_username;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AliasAttributeType>(hashCode);
          }

          return AliasAttributeType::NOT_SET;
        }

        Aws::String GetNameForAliasAttributeType(AliasAttributeType enumValue)
        {
          switch(enumValue)
          {
          case AliasAttributeType::phone_number:
            return "phone_number";
          case AliasAttributeType::email:
            return "email";
          case AliasAttributeType::preferred_username:
            return "preferred_username";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AliasAttributeTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
