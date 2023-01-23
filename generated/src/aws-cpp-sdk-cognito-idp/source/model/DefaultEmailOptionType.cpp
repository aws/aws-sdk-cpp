/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/DefaultEmailOptionType.h>
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
      namespace DefaultEmailOptionTypeMapper
      {

        static const int CONFIRM_WITH_LINK_HASH = HashingUtils::HashString("CONFIRM_WITH_LINK");
        static const int CONFIRM_WITH_CODE_HASH = HashingUtils::HashString("CONFIRM_WITH_CODE");


        DefaultEmailOptionType GetDefaultEmailOptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONFIRM_WITH_LINK_HASH)
          {
            return DefaultEmailOptionType::CONFIRM_WITH_LINK;
          }
          else if (hashCode == CONFIRM_WITH_CODE_HASH)
          {
            return DefaultEmailOptionType::CONFIRM_WITH_CODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultEmailOptionType>(hashCode);
          }

          return DefaultEmailOptionType::NOT_SET;
        }

        Aws::String GetNameForDefaultEmailOptionType(DefaultEmailOptionType enumValue)
        {
          switch(enumValue)
          {
          case DefaultEmailOptionType::CONFIRM_WITH_LINK:
            return "CONFIRM_WITH_LINK";
          case DefaultEmailOptionType::CONFIRM_WITH_CODE:
            return "CONFIRM_WITH_CODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefaultEmailOptionTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
