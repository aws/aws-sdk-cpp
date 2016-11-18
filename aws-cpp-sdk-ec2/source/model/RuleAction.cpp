/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/RuleAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace RuleActionMapper
      {

        static const int allow_HASH = HashingUtils::HashString("allow");
        static const int deny_HASH = HashingUtils::HashString("deny");


        RuleAction GetRuleActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == allow_HASH)
          {
            return RuleAction::allow;
          }
          else if (hashCode == deny_HASH)
          {
            return RuleAction::deny;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleAction>(hashCode);
          }

          return RuleAction::NOT_SET;
        }

        Aws::String GetNameForRuleAction(RuleAction enumValue)
        {
          switch(enumValue)
          {
          case RuleAction::allow:
            return "allow";
          case RuleAction::deny:
            return "deny";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RuleActionMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
