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

#include <aws/waf/model/WafRuleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAF
  {
    namespace Model
    {
      namespace WafRuleTypeMapper
      {

        static const int REGULAR_HASH = HashingUtils::HashString("REGULAR");
        static const int RATE_BASED_HASH = HashingUtils::HashString("RATE_BASED");
        static const int GROUP_HASH = HashingUtils::HashString("GROUP");


        WafRuleType GetWafRuleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGULAR_HASH)
          {
            return WafRuleType::REGULAR;
          }
          else if (hashCode == RATE_BASED_HASH)
          {
            return WafRuleType::RATE_BASED;
          }
          else if (hashCode == GROUP_HASH)
          {
            return WafRuleType::GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WafRuleType>(hashCode);
          }

          return WafRuleType::NOT_SET;
        }

        Aws::String GetNameForWafRuleType(WafRuleType enumValue)
        {
          switch(enumValue)
          {
          case WafRuleType::REGULAR:
            return "REGULAR";
          case WafRuleType::RATE_BASED:
            return "RATE_BASED";
          case WafRuleType::GROUP:
            return "GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WafRuleTypeMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws
