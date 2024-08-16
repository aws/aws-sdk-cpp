/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdvancedSecurityEnabledModeType.h>
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
      namespace AdvancedSecurityEnabledModeTypeMapper
      {

        static const int AUDIT_HASH = HashingUtils::HashString("AUDIT");
        static const int ENFORCED_HASH = HashingUtils::HashString("ENFORCED");


        AdvancedSecurityEnabledModeType GetAdvancedSecurityEnabledModeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUDIT_HASH)
          {
            return AdvancedSecurityEnabledModeType::AUDIT;
          }
          else if (hashCode == ENFORCED_HASH)
          {
            return AdvancedSecurityEnabledModeType::ENFORCED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdvancedSecurityEnabledModeType>(hashCode);
          }

          return AdvancedSecurityEnabledModeType::NOT_SET;
        }

        Aws::String GetNameForAdvancedSecurityEnabledModeType(AdvancedSecurityEnabledModeType enumValue)
        {
          switch(enumValue)
          {
          case AdvancedSecurityEnabledModeType::NOT_SET:
            return {};
          case AdvancedSecurityEnabledModeType::AUDIT:
            return "AUDIT";
          case AdvancedSecurityEnabledModeType::ENFORCED:
            return "ENFORCED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdvancedSecurityEnabledModeTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
