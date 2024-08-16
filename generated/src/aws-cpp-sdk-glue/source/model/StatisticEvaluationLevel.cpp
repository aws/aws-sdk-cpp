/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StatisticEvaluationLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace StatisticEvaluationLevelMapper
      {

        static const int Dataset_HASH = HashingUtils::HashString("Dataset");
        static const int Column_HASH = HashingUtils::HashString("Column");
        static const int Multicolumn_HASH = HashingUtils::HashString("Multicolumn");


        StatisticEvaluationLevel GetStatisticEvaluationLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Dataset_HASH)
          {
            return StatisticEvaluationLevel::Dataset;
          }
          else if (hashCode == Column_HASH)
          {
            return StatisticEvaluationLevel::Column;
          }
          else if (hashCode == Multicolumn_HASH)
          {
            return StatisticEvaluationLevel::Multicolumn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatisticEvaluationLevel>(hashCode);
          }

          return StatisticEvaluationLevel::NOT_SET;
        }

        Aws::String GetNameForStatisticEvaluationLevel(StatisticEvaluationLevel enumValue)
        {
          switch(enumValue)
          {
          case StatisticEvaluationLevel::NOT_SET:
            return {};
          case StatisticEvaluationLevel::Dataset:
            return "Dataset";
          case StatisticEvaluationLevel::Column:
            return "Column";
          case StatisticEvaluationLevel::Multicolumn:
            return "Multicolumn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatisticEvaluationLevelMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
