/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/MatchType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace MatchTypeMapper
      {

        static const int RULE_BASED_MATCHING_HASH = HashingUtils::HashString("RULE_BASED_MATCHING");
        static const int ML_BASED_MATCHING_HASH = HashingUtils::HashString("ML_BASED_MATCHING");


        MatchType GetMatchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RULE_BASED_MATCHING_HASH)
          {
            return MatchType::RULE_BASED_MATCHING;
          }
          else if (hashCode == ML_BASED_MATCHING_HASH)
          {
            return MatchType::ML_BASED_MATCHING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MatchType>(hashCode);
          }

          return MatchType::NOT_SET;
        }

        Aws::String GetNameForMatchType(MatchType enumValue)
        {
          switch(enumValue)
          {
          case MatchType::NOT_SET:
            return {};
          case MatchType::RULE_BASED_MATCHING:
            return "RULE_BASED_MATCHING";
          case MatchType::ML_BASED_MATCHING:
            return "ML_BASED_MATCHING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MatchTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
