/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AggregationFunction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutMetrics
  {
    namespace Model
    {
      namespace AggregationFunctionMapper
      {

        static const int AVG_HASH = HashingUtils::HashString("AVG");
        static const int SUM_HASH = HashingUtils::HashString("SUM");


        AggregationFunction GetAggregationFunctionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVG_HASH)
          {
            return AggregationFunction::AVG;
          }
          else if (hashCode == SUM_HASH)
          {
            return AggregationFunction::SUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregationFunction>(hashCode);
          }

          return AggregationFunction::NOT_SET;
        }

        Aws::String GetNameForAggregationFunction(AggregationFunction enumValue)
        {
          switch(enumValue)
          {
          case AggregationFunction::NOT_SET:
            return {};
          case AggregationFunction::AVG:
            return "AVG";
          case AggregationFunction::SUM:
            return "SUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregationFunctionMapper
    } // namespace Model
  } // namespace LookoutMetrics
} // namespace Aws
