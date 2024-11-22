/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserVerificationType.h>
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
      namespace UserVerificationTypeMapper
      {

        static const int required_HASH = HashingUtils::HashString("required");
        static const int preferred_HASH = HashingUtils::HashString("preferred");


        UserVerificationType GetUserVerificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == required_HASH)
          {
            return UserVerificationType::required;
          }
          else if (hashCode == preferred_HASH)
          {
            return UserVerificationType::preferred;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserVerificationType>(hashCode);
          }

          return UserVerificationType::NOT_SET;
        }

        Aws::String GetNameForUserVerificationType(UserVerificationType enumValue)
        {
          switch(enumValue)
          {
          case UserVerificationType::NOT_SET:
            return {};
          case UserVerificationType::required:
            return "required";
          case UserVerificationType::preferred:
            return "preferred";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserVerificationTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
