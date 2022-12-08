/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/StrategyRecommendation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace StrategyRecommendationMapper
      {

        static const int recommended_HASH = HashingUtils::HashString("recommended");
        static const int viableOption_HASH = HashingUtils::HashString("viableOption");
        static const int notRecommended_HASH = HashingUtils::HashString("notRecommended");
        static const int potential_HASH = HashingUtils::HashString("potential");


        StrategyRecommendation GetStrategyRecommendationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == recommended_HASH)
          {
            return StrategyRecommendation::recommended;
          }
          else if (hashCode == viableOption_HASH)
          {
            return StrategyRecommendation::viableOption;
          }
          else if (hashCode == notRecommended_HASH)
          {
            return StrategyRecommendation::notRecommended;
          }
          else if (hashCode == potential_HASH)
          {
            return StrategyRecommendation::potential;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StrategyRecommendation>(hashCode);
          }

          return StrategyRecommendation::NOT_SET;
        }

        Aws::String GetNameForStrategyRecommendation(StrategyRecommendation enumValue)
        {
          switch(enumValue)
          {
          case StrategyRecommendation::recommended:
            return "recommended";
          case StrategyRecommendation::viableOption:
            return "viableOption";
          case StrategyRecommendation::notRecommended:
            return "notRecommended";
          case StrategyRecommendation::potential:
            return "potential";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StrategyRecommendationMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
