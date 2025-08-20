/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/TermsSourceType.h>
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
      namespace TermsSourceTypeMapper
      {

        static const int LINK_HASH = HashingUtils::HashString("LINK");


        TermsSourceType GetTermsSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINK_HASH)
          {
            return TermsSourceType::LINK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TermsSourceType>(hashCode);
          }

          return TermsSourceType::NOT_SET;
        }

        Aws::String GetNameForTermsSourceType(TermsSourceType enumValue)
        {
          switch(enumValue)
          {
          case TermsSourceType::NOT_SET:
            return {};
          case TermsSourceType::LINK:
            return "LINK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TermsSourceTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
