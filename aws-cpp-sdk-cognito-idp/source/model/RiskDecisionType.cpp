/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/RiskDecisionType.h>
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
      namespace RiskDecisionTypeMapper
      {

        static const int NoRisk_HASH = HashingUtils::HashString("NoRisk");
        static const int AccountTakeover_HASH = HashingUtils::HashString("AccountTakeover");
        static const int Block_HASH = HashingUtils::HashString("Block");


        RiskDecisionType GetRiskDecisionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NoRisk_HASH)
          {
            return RiskDecisionType::NoRisk;
          }
          else if (hashCode == AccountTakeover_HASH)
          {
            return RiskDecisionType::AccountTakeover;
          }
          else if (hashCode == Block_HASH)
          {
            return RiskDecisionType::Block;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RiskDecisionType>(hashCode);
          }

          return RiskDecisionType::NOT_SET;
        }

        Aws::String GetNameForRiskDecisionType(RiskDecisionType enumValue)
        {
          switch(enumValue)
          {
          case RiskDecisionType::NoRisk:
            return "NoRisk";
          case RiskDecisionType::AccountTakeover:
            return "AccountTakeover";
          case RiskDecisionType::Block:
            return "Block";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RiskDecisionTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
