/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/RuleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCases
  {
    namespace Model
    {
      namespace RuleTypeMapper
      {

        static const int Required_HASH = HashingUtils::HashString("Required");


        RuleType GetRuleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Required_HASH)
          {
            return RuleType::Required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleType>(hashCode);
          }

          return RuleType::NOT_SET;
        }

        Aws::String GetNameForRuleType(RuleType enumValue)
        {
          switch(enumValue)
          {
          case RuleType::NOT_SET:
            return {};
          case RuleType::Required:
            return "Required";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleTypeMapper
    } // namespace Model
  } // namespace ConnectCases
} // namespace Aws
