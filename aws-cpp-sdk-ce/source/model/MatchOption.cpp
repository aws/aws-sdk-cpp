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

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int ABSENT_HASH = HashingUtils::HashString("ABSENT");
        static const int STARTS_WITH_HASH = HashingUtils::HashString("STARTS_WITH");
        static const int ENDS_WITH_HASH = HashingUtils::HashString("ENDS_WITH");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int CASE_SENSITIVE_HASH = HashingUtils::HashString("CASE_SENSITIVE");
        static const int CASE_INSENSITIVE_HASH = HashingUtils::HashString("CASE_INSENSITIVE");
        static const int GREATER_THAN_OR_EQUAL_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL");


        MatchOption GetMatchOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
