/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FunnelChartMeasureDataLabelStyle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace FunnelChartMeasureDataLabelStyleMapper
      {

        static const int VALUE_ONLY_HASH = HashingUtils::HashString("VALUE_ONLY");
        static const int PERCENTAGE_BY_FIRST_STAGE_HASH = HashingUtils::HashString("PERCENTAGE_BY_FIRST_STAGE");
        static const int PERCENTAGE_BY_PREVIOUS_STAGE_HASH = HashingUtils::HashString("PERCENTAGE_BY_PREVIOUS_STAGE");
        static const int VALUE_AND_PERCENTAGE_BY_FIRST_STAGE_HASH = HashingUtils::HashString("VALUE_AND_PERCENTAGE_BY_FIRST_STAGE");
        static const int VALUE_AND_PERCENTAGE_BY_PREVIOUS_STAGE_HASH = HashingUtils::HashString("VALUE_AND_PERCENTAGE_BY_PREVIOUS_STAGE");


        FunnelChartMeasureDataLabelStyle GetFunnelChartMeasureDataLabelStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALUE_ONLY_HASH)
          {
            return FunnelChartMeasureDataLabelStyle::VALUE_ONLY;
          }
          else if (hashCode == PERCENTAGE_BY_FIRST_STAGE_HASH)
          {
            return FunnelChartMeasureDataLabelStyle::PERCENTAGE_BY_FIRST_STAGE;
          }
          else if (hashCode == PERCENTAGE_BY_PREVIOUS_STAGE_HASH)
          {
            return FunnelChartMeasureDataLabelStyle::PERCENTAGE_BY_PREVIOUS_STAGE;
          }
          else if (hashCode == VALUE_AND_PERCENTAGE_BY_FIRST_STAGE_HASH)
          {
            return FunnelChartMeasureDataLabelStyle::VALUE_AND_PERCENTAGE_BY_FIRST_STAGE;
          }
          else if (hashCode == VALUE_AND_PERCENTAGE_BY_PREVIOUS_STAGE_HASH)
          {
            return FunnelChartMeasureDataLabelStyle::VALUE_AND_PERCENTAGE_BY_PREVIOUS_STAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FunnelChartMeasureDataLabelStyle>(hashCode);
          }

          return FunnelChartMeasureDataLabelStyle::NOT_SET;
        }

        Aws::String GetNameForFunnelChartMeasureDataLabelStyle(FunnelChartMeasureDataLabelStyle enumValue)
        {
          switch(enumValue)
          {
          case FunnelChartMeasureDataLabelStyle::VALUE_ONLY:
            return "VALUE_ONLY";
          case FunnelChartMeasureDataLabelStyle::PERCENTAGE_BY_FIRST_STAGE:
            return "PERCENTAGE_BY_FIRST_STAGE";
          case FunnelChartMeasureDataLabelStyle::PERCENTAGE_BY_PREVIOUS_STAGE:
            return "PERCENTAGE_BY_PREVIOUS_STAGE";
          case FunnelChartMeasureDataLabelStyle::VALUE_AND_PERCENTAGE_BY_FIRST_STAGE:
            return "VALUE_AND_PERCENTAGE_BY_FIRST_STAGE";
          case FunnelChartMeasureDataLabelStyle::VALUE_AND_PERCENTAGE_BY_PREVIOUS_STAGE:
            return "VALUE_AND_PERCENTAGE_BY_PREVIOUS_STAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FunnelChartMeasureDataLabelStyleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
