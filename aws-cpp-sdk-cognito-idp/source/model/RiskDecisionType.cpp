/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
