/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/MatchOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace MatchOptionMapper
      {

        static constexpr uint32_t EQUALS_HASH = ConstExprHashingUtils::HashString("EQUALS");
        static constexpr uint32_t ABSENT_HASH = ConstExprHashingUtils::HashString("ABSENT");
        static constexpr uint32_t STARTS_WITH_HASH = ConstExprHashingUtils::HashString("STARTS_WITH");
        static constexpr uint32_t ENDS_WITH_HASH = ConstExprHashingUtils::HashString("ENDS_WITH");
        static constexpr uint32_t CONTAINS_HASH = ConstExprHashingUtils::HashString("CONTAINS");
        static constexpr uint32_t CASE_SENSITIVE_HASH = ConstExprHashingUtils::HashString("CASE_SENSITIVE");
        static constexpr uint32_t CASE_INSENSITIVE_HASH = ConstExprHashingUtils::HashString("CASE_INSENSITIVE");
        static constexpr uint32_t GREATER_THAN_OR_EQUAL_HASH = ConstExprHashingUtils::HashString("GREATER_THAN_OR_EQUAL");


        MatchOption GetMatchOptionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return MatchOption::EQUALS;
          }
          else if (hashCode == ABSENT_HASH)
          {
            return MatchOption::ABSENT;
          }
          else if (hashCode == STARTS_WITH_HASH)
          {
            return MatchOption::STARTS_WITH;
          }
          else if (hashCode == ENDS_WITH_HASH)
          {
            return MatchOption::ENDS_WITH;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return MatchOption::CONTAINS;
          }
          else if (hashCode == CASE_SENSITIVE_HASH)
          {
            return MatchOption::CASE_SENSITIVE;
          }
          else if (hashCode == CASE_INSENSITIVE_HASH)
          {
            return MatchOption::CASE_INSENSITIVE;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_HASH)
          {
            return MatchOption::GREATER_THAN_OR_EQUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MatchOption>(hashCode);
          }

          return MatchOption::NOT_SET;
        }

        Aws::String GetNameForMatchOption(MatchOption enumValue)
        {
          switch(enumValue)
          {
          case MatchOption::NOT_SET:
            return {};
          case MatchOption::EQUALS:
            return "EQUALS";
          case MatchOption::ABSENT:
            return "ABSENT";
          case MatchOption::STARTS_WITH:
            return "STARTS_WITH";
          case MatchOption::ENDS_WITH:
            return "ENDS_WITH";
          case MatchOption::CONTAINS:
            return "CONTAINS";
          case MatchOption::CASE_SENSITIVE:
            return "CASE_SENSITIVE";
          case MatchOption::CASE_INSENSITIVE:
            return "CASE_INSENSITIVE";
          case MatchOption::GREATER_THAN_OR_EQUAL:
            return "GREATER_THAN_OR_EQUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MatchOptionMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
