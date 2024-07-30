/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RuleOwner.h>
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
      namespace RuleOwnerMapper
      {

        static const int AWS_HASH = HashingUtils::HashString("AWS");


        RuleOwner GetRuleOwnerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_HASH)
          {
            return RuleOwner::AWS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleOwner>(hashCode);
          }

          return RuleOwner::NOT_SET;
        }

        Aws::String GetNameForRuleOwner(RuleOwner enumValue)
        {
          switch(enumValue)
          {
          case RuleOwner::NOT_SET:
            return {};
          case RuleOwner::AWS:
            return "AWS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleOwnerMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
