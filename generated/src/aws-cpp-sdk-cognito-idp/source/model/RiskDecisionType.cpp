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

        static constexpr uint32_t NoRisk_HASH = ConstExprHashingUtils::HashString("NoRisk");
        static constexpr uint32_t AccountTakeover_HASH = ConstExprHashingUtils::HashString("AccountTakeover");
        static constexpr uint32_t Block_HASH = ConstExprHashingUtils::HashString("Block");


        RiskDecisionType GetRiskDecisionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case RiskDecisionType::NOT_SET:
            return {};
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
