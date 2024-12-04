/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/BlueprintStage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockDataAutomationRuntime
  {
    namespace Model
    {
      namespace BlueprintStageMapper
      {

        static const int DEVELOPMENT_HASH = HashingUtils::HashString("DEVELOPMENT");
        static const int LIVE_HASH = HashingUtils::HashString("LIVE");


        BlueprintStage GetBlueprintStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVELOPMENT_HASH)
          {
            return BlueprintStage::DEVELOPMENT;
          }
          else if (hashCode == LIVE_HASH)
          {
            return BlueprintStage::LIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlueprintStage>(hashCode);
          }

          return BlueprintStage::NOT_SET;
        }

        Aws::String GetNameForBlueprintStage(BlueprintStage enumValue)
        {
          switch(enumValue)
          {
          case BlueprintStage::NOT_SET:
            return {};
          case BlueprintStage::DEVELOPMENT:
            return "DEVELOPMENT";
          case BlueprintStage::LIVE:
            return "LIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlueprintStageMapper
    } // namespace Model
  } // namespace BedrockDataAutomationRuntime
} // namespace Aws
