/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DataAutomationProjectStageFilter.h>
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
      namespace DataAutomationProjectStageFilterMapper
      {

        static const int DEVELOPMENT_HASH = HashingUtils::HashString("DEVELOPMENT");
        static const int LIVE_HASH = HashingUtils::HashString("LIVE");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        DataAutomationProjectStageFilter GetDataAutomationProjectStageFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVELOPMENT_HASH)
          {
            return DataAutomationProjectStageFilter::DEVELOPMENT;
          }
          else if (hashCode == LIVE_HASH)
          {
            return DataAutomationProjectStageFilter::LIVE;
          }
          else if (hashCode == ALL_HASH)
          {
            return DataAutomationProjectStageFilter::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataAutomationProjectStageFilter>(hashCode);
          }

          return DataAutomationProjectStageFilter::NOT_SET;
        }

        Aws::String GetNameForDataAutomationProjectStageFilter(DataAutomationProjectStageFilter enumValue)
        {
          switch(enumValue)
          {
          case DataAutomationProjectStageFilter::NOT_SET:
            return {};
          case DataAutomationProjectStageFilter::DEVELOPMENT:
            return "DEVELOPMENT";
          case DataAutomationProjectStageFilter::LIVE:
            return "LIVE";
          case DataAutomationProjectStageFilter::ALL:
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

      } // namespace DataAutomationProjectStageFilterMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
