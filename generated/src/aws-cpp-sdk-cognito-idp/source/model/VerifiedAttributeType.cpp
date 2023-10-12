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

        static constexpr uint32_t phone_number_HASH = ConstExprHashingUtils::HashString("phone_number");
        static constexpr uint32_t email_HASH = ConstExprHashingUtils::HashString("email");


        VerifiedAttributeType GetVerifiedAttributeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case VerifiedAttributeType::NOT_SET:
            return {};
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
