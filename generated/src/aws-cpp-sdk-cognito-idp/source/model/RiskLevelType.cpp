/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/RiskLevelType.h>
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
      namespace RiskLevelTypeMapper
      {

        static const int Low_HASH = HashingUtils::HashString("Low");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int High_HASH = HashingUtils::HashString("High");


        RiskLevelType GetRiskLevelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Low_HASH)
          {
            return RiskLevelType::Low;
          }
          else if (hashCode == Medium_HASH)
          {
            return RiskLevelType::Medium;
          }
          else if (hashCode == High_HASH)
          {
            return RiskLevelType::High;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RiskLevelType>(hashCode);
          }

          return RiskLevelType::NOT_SET;
        }

        Aws::String GetNameForRiskLevelType(RiskLevelType enumValue)
        {
          switch(enumValue)
          {
          case RiskLevelType::Low:
            return "Low";
          case RiskLevelType::Medium:
            return "Medium";
          case RiskLevelType::High:
            return "High";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RiskLevelTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
