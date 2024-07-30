/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RuleCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace RuleCategoryMapper
      {

        static const int Rule_HASH = HashingUtils::HashString("Rule");


        RuleCategory GetRuleCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Rule_HASH)
          {
            return RuleCategory::Rule;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleCategory>(hashCode);
          }

          return RuleCategory::NOT_SET;
        }

        Aws::String GetNameForRuleCategory(RuleCategory enumValue)
        {
          switch(enumValue)
          {
          case RuleCategory::NOT_SET:
            return {};
          case RuleCategory::Rule:
            return "Rule";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleCategoryMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
