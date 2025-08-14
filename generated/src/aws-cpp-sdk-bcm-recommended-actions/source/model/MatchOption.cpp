/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-recommended-actions/model/MatchOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMRecommendedActions
  {
    namespace Model
    {
      namespace MatchOptionMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");


        MatchOption GetMatchOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return MatchOption::EQUALS;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return MatchOption::NOT_EQUALS;
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
          case MatchOption::NOT_EQUALS:
            return "NOT_EQUALS";
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
  } // namespace BCMRecommendedActions
} // namespace Aws
