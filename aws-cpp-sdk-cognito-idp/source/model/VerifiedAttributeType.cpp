/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/VerifiedAttributeType.h>
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
      namespace VerifiedAttributeTypeMapper
      {

        static const int phone_number_HASH = HashingUtils::HashString("phone_number");
        static const int email_HASH = HashingUtils::HashString("email");


        VerifiedAttributeType GetVerifiedAttributeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == phone_number_HASH)
          {
            return VerifiedAttributeType::phone_number;
          }
          else if (hashCode == email_HASH)
          {
            return VerifiedAttributeType::email;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerifiedAttributeType>(hashCode);
          }

          return VerifiedAttributeType::NOT_SET;
        }

        Aws::String GetNameForVerifiedAttributeType(VerifiedAttributeType enumValue)
        {
          switch(enumValue)
          {
          case VerifiedAttributeType::phone_number:
            return "phone_number";
          case VerifiedAttributeType::email:
            return "email";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerifiedAttributeTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
