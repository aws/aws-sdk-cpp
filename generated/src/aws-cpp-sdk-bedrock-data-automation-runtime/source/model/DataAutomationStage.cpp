/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/DataAutomationStage.h>
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
      namespace DataAutomationStageMapper
      {

        static const int LIVE_HASH = HashingUtils::HashString("LIVE");
        static const int DEVELOPMENT_HASH = HashingUtils::HashString("DEVELOPMENT");


        DataAutomationStage GetDataAutomationStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIVE_HASH)
          {
            return DataAutomationStage::LIVE;
          }
          else if (hashCode == DEVELOPMENT_HASH)
          {
            return DataAutomationStage::DEVELOPMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataAutomationStage>(hashCode);
          }

          return DataAutomationStage::NOT_SET;
        }

        Aws::String GetNameForDataAutomationStage(DataAutomationStage enumValue)
        {
          switch(enumValue)
          {
          case DataAutomationStage::NOT_SET:
            return {};
          case DataAutomationStage::LIVE:
            return "LIVE";
          case DataAutomationStage::DEVELOPMENT:
            return "DEVELOPMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataAutomationStageMapper
    } // namespace Model
  } // namespace BedrockDataAutomationRuntime
} // namespace Aws
