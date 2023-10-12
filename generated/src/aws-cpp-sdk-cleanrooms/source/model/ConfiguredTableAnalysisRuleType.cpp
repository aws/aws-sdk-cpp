/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ConfiguredTableAnalysisRuleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace ConfiguredTableAnalysisRuleTypeMapper
      {

        static constexpr uint32_t AGGREGATION_HASH = ConstExprHashingUtils::HashString("AGGREGATION");
        static constexpr uint32_t LIST_HASH = ConstExprHashingUtils::HashString("LIST");
        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");


        ConfiguredTableAnalysisRuleType GetConfiguredTableAnalysisRuleTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGGREGATION_HASH)
          {
            return ConfiguredTableAnalysisRuleType::AGGREGATION;
          }
          else if (hashCode == LIST_HASH)
          {
            return ConfiguredTableAnalysisRuleType::LIST;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ConfiguredTableAnalysisRuleType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfiguredTableAnalysisRuleType>(hashCode);
          }

          return ConfiguredTableAnalysisRuleType::NOT_SET;
        }

        Aws::String GetNameForConfiguredTableAnalysisRuleType(ConfiguredTableAnalysisRuleType enumValue)
        {
          switch(enumValue)
          {
          case ConfiguredTableAnalysisRuleType::NOT_SET:
            return {};
          case ConfiguredTableAnalysisRuleType::AGGREGATION:
            return "AGGREGATION";
          case ConfiguredTableAnalysisRuleType::LIST:
            return "LIST";
          case ConfiguredTableAnalysisRuleType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfiguredTableAnalysisRuleTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
