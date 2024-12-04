/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/BlueprintStageFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockDataAutomation
  {
    namespace Model
    {
      namespace BlueprintStageFilterMapper
      {

        static const int DEVELOPMENT_HASH = HashingUtils::HashString("DEVELOPMENT");
        static const int LIVE_HASH = HashingUtils::HashString("LIVE");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        BlueprintStageFilter GetBlueprintStageFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVELOPMENT_HASH)
          {
            return BlueprintStageFilter::DEVELOPMENT;
          }
          else if (hashCode == LIVE_HASH)
          {
            return BlueprintStageFilter::LIVE;
          }
          else if (hashCode == ALL_HASH)
          {
            return BlueprintStageFilter::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlueprintStageFilter>(hashCode);
          }

          return BlueprintStageFilter::NOT_SET;
        }

        Aws::String GetNameForBlueprintStageFilter(BlueprintStageFilter enumValue)
        {
          switch(enumValue)
          {
          case BlueprintStageFilter::NOT_SET:
            return {};
          case BlueprintStageFilter::DEVELOPMENT:
            return "DEVELOPMENT";
          case BlueprintStageFilter::LIVE:
            return "LIVE";
          case BlueprintStageFilter::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlueprintStageFilterMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
