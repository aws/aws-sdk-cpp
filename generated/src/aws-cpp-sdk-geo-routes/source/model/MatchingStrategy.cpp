/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/MatchingStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoRoutes
  {
    namespace Model
    {
      namespace MatchingStrategyMapper
      {

        static const int MatchAny_HASH = HashingUtils::HashString("MatchAny");
        static const int MatchMostSignificantRoad_HASH = HashingUtils::HashString("MatchMostSignificantRoad");


        MatchingStrategy GetMatchingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MatchAny_HASH)
          {
            return MatchingStrategy::MatchAny;
          }
          else if (hashCode == MatchMostSignificantRoad_HASH)
          {
            return MatchingStrategy::MatchMostSignificantRoad;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MatchingStrategy>(hashCode);
          }

          return MatchingStrategy::NOT_SET;
        }

        Aws::String GetNameForMatchingStrategy(MatchingStrategy enumValue)
        {
          switch(enumValue)
          {
          case MatchingStrategy::NOT_SET:
            return {};
          case MatchingStrategy::MatchAny:
            return "MatchAny";
          case MatchingStrategy::MatchMostSignificantRoad:
            return "MatchMostSignificantRoad";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MatchingStrategyMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
