/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DataAutomationProjectStage.h>
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
      namespace DataAutomationProjectStageMapper
      {

        static const int DEVELOPMENT_HASH = HashingUtils::HashString("DEVELOPMENT");
        static const int LIVE_HASH = HashingUtils::HashString("LIVE");


        DataAutomationProjectStage GetDataAutomationProjectStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVELOPMENT_HASH)
          {
            return DataAutomationProjectStage::DEVELOPMENT;
          }
          else if (hashCode == LIVE_HASH)
          {
            return DataAutomationProjectStage::LIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataAutomationProjectStage>(hashCode);
          }

          return DataAutomationProjectStage::NOT_SET;
        }

        Aws::String GetNameForDataAutomationProjectStage(DataAutomationProjectStage enumValue)
        {
          switch(enumValue)
          {
          case DataAutomationProjectStage::NOT_SET:
            return {};
          case DataAutomationProjectStage::DEVELOPMENT:
            return "DEVELOPMENT";
          case DataAutomationProjectStage::LIVE:
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

      } // namespace DataAutomationProjectStageMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
