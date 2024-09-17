/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSDBMetricStatistic.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace RDSDBMetricStatisticMapper
      {

        static const int Maximum_HASH = HashingUtils::HashString("Maximum");
        static const int Minimum_HASH = HashingUtils::HashString("Minimum");
        static const int Average_HASH = HashingUtils::HashString("Average");


        RDSDBMetricStatistic GetRDSDBMetricStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Maximum_HASH)
          {
            return RDSDBMetricStatistic::Maximum;
          }
          else if (hashCode == Minimum_HASH)
          {
            return RDSDBMetricStatistic::Minimum;
          }
          else if (hashCode == Average_HASH)
          {
            return RDSDBMetricStatistic::Average;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RDSDBMetricStatistic>(hashCode);
          }

          return RDSDBMetricStatistic::NOT_SET;
        }

        Aws::String GetNameForRDSDBMetricStatistic(RDSDBMetricStatistic enumValue)
        {
          switch(enumValue)
          {
          case RDSDBMetricStatistic::NOT_SET:
            return {};
          case RDSDBMetricStatistic::Maximum:
            return "Maximum";
          case RDSDBMetricStatistic::Minimum:
            return "Minimum";
          case RDSDBMetricStatistic::Average:
            return "Average";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RDSDBMetricStatisticMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
