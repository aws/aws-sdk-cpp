/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisRuleType.h>
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
      namespace AnalysisRuleTypeMapper
      {

        static const int AGGREGATION_HASH = HashingUtils::HashString("AGGREGATION");
        static const int LIST_HASH = HashingUtils::HashString("LIST");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int ID_MAPPING_TABLE_HASH = HashingUtils::HashString("ID_MAPPING_TABLE");


        AnalysisRuleType GetAnalysisRuleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGGREGATION_HASH)
          {
            return AnalysisRuleType::AGGREGATION;
          }
          else if (hashCode == LIST_HASH)
          {
            return AnalysisRuleType::LIST;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return AnalysisRuleType::CUSTOM;
          }
          else if (hashCode == ID_MAPPING_TABLE_HASH)
          {
            return AnalysisRuleType::ID_MAPPING_TABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisRuleType>(hashCode);
          }

          return AnalysisRuleType::NOT_SET;
        }

        Aws::String GetNameForAnalysisRuleType(AnalysisRuleType enumValue)
        {
          switch(enumValue)
          {
          case AnalysisRuleType::NOT_SET:
            return {};
          case AnalysisRuleType::AGGREGATION:
            return "AGGREGATION";
          case AnalysisRuleType::LIST:
            return "LIST";
          case AnalysisRuleType::CUSTOM:
            return "CUSTOM";
          case AnalysisRuleType::ID_MAPPING_TABLE:
            return "ID_MAPPING_TABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalysisRuleTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
