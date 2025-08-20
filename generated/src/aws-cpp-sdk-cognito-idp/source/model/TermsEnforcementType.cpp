/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/TermsEnforcementType.h>
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
      namespace TermsEnforcementTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");


        TermsEnforcementType GetTermsEnforcementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return TermsEnforcementType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TermsEnforcementType>(hashCode);
          }

          return TermsEnforcementType::NOT_SET;
        }

        Aws::String GetNameForTermsEnforcementType(TermsEnforcementType enumValue)
        {
          switch(enumValue)
          {
          case TermsEnforcementType::NOT_SET:
            return {};
          case TermsEnforcementType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TermsEnforcementTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
