/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdvancedSecurityModeType.h>
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
      namespace AdvancedSecurityModeTypeMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int AUDIT_HASH = HashingUtils::HashString("AUDIT");
        static const int ENFORCED_HASH = HashingUtils::HashString("ENFORCED");


        AdvancedSecurityModeType GetAdvancedSecurityModeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return AdvancedSecurityModeType::OFF;
          }
          else if (hashCode == AUDIT_HASH)
          {
            return AdvancedSecurityModeType::AUDIT;
          }
          else if (hashCode == ENFORCED_HASH)
          {
            return AdvancedSecurityModeType::ENFORCED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdvancedSecurityModeType>(hashCode);
          }

          return AdvancedSecurityModeType::NOT_SET;
        }

        Aws::String GetNameForAdvancedSecurityModeType(AdvancedSecurityModeType enumValue)
        {
          switch(enumValue)
          {
          case AdvancedSecurityModeType::OFF:
            return "OFF";
          case AdvancedSecurityModeType::AUDIT:
            return "AUDIT";
          case AdvancedSecurityModeType::ENFORCED:
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

      } // namespace AdvancedSecurityModeTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
