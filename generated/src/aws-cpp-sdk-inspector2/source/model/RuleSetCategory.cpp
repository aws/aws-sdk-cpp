/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/RuleSetCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace RuleSetCategoryMapper
      {

        static const int SAST_HASH = HashingUtils::HashString("SAST");
        static const int IAC_HASH = HashingUtils::HashString("IAC");
        static const int SCA_HASH = HashingUtils::HashString("SCA");


        RuleSetCategory GetRuleSetCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAST_HASH)
          {
            return RuleSetCategory::SAST;
          }
          else if (hashCode == IAC_HASH)
          {
            return RuleSetCategory::IAC;
          }
          else if (hashCode == SCA_HASH)
          {
            return RuleSetCategory::SCA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleSetCategory>(hashCode);
          }

          return RuleSetCategory::NOT_SET;
        }

        Aws::String GetNameForRuleSetCategory(RuleSetCategory enumValue)
        {
          switch(enumValue)
          {
          case RuleSetCategory::NOT_SET:
            return {};
          case RuleSetCategory::SAST:
            return "SAST";
          case RuleSetCategory::IAC:
            return "IAC";
          case RuleSetCategory::SCA:
            return "SCA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleSetCategoryMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
