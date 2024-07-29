/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRuleType.h>
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
      namespace ConfiguredTableAssociationAnalysisRuleTypeMapper
      {

        static const int AGGREGATION_HASH = HashingUtils::HashString("AGGREGATION");
        static const int LIST_HASH = HashingUtils::HashString("LIST");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        ConfiguredTableAssociationAnalysisRuleType GetConfiguredTableAssociationAnalysisRuleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGGREGATION_HASH)
          {
            return ConfiguredTableAssociationAnalysisRuleType::AGGREGATION;
          }
          else if (hashCode == LIST_HASH)
          {
            return ConfiguredTableAssociationAnalysisRuleType::LIST;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ConfiguredTableAssociationAnalysisRuleType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfiguredTableAssociationAnalysisRuleType>(hashCode);
          }

          return ConfiguredTableAssociationAnalysisRuleType::NOT_SET;
        }

        Aws::String GetNameForConfiguredTableAssociationAnalysisRuleType(ConfiguredTableAssociationAnalysisRuleType enumValue)
        {
          switch(enumValue)
          {
          case ConfiguredTableAssociationAnalysisRuleType::NOT_SET:
            return {};
          case ConfiguredTableAssociationAnalysisRuleType::AGGREGATION:
            return "AGGREGATION";
          case ConfiguredTableAssociationAnalysisRuleType::LIST:
            return "LIST";
          case ConfiguredTableAssociationAnalysisRuleType::CUSTOM:
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

      } // namespace ConfiguredTableAssociationAnalysisRuleTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
