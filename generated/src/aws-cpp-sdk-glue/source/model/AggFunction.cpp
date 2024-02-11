/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/AggFunction.h>
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
      namespace AggFunctionMapper
      {

        static const int avg_HASH = HashingUtils::HashString("avg");
        static const int countDistinct_HASH = HashingUtils::HashString("countDistinct");
        static const int count_HASH = HashingUtils::HashString("count");
        static const int first_HASH = HashingUtils::HashString("first");
        static const int last_HASH = HashingUtils::HashString("last");
        static const int kurtosis_HASH = HashingUtils::HashString("kurtosis");
        static const int max_HASH = HashingUtils::HashString("max");
        static const int min_HASH = HashingUtils::HashString("min");
        static const int skewness_HASH = HashingUtils::HashString("skewness");
        static const int stddev_samp_HASH = HashingUtils::HashString("stddev_samp");
        static const int stddev_pop_HASH = HashingUtils::HashString("stddev_pop");
        static const int sum_HASH = HashingUtils::HashString("sum");
        static const int sumDistinct_HASH = HashingUtils::HashString("sumDistinct");
        static const int var_samp_HASH = HashingUtils::HashString("var_samp");
        static const int var_pop_HASH = HashingUtils::HashString("var_pop");


        AggFunction GetAggFunctionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == avg_HASH)
          {
            return AggFunction::avg;
          }
          else if (hashCode == countDistinct_HASH)
          {
            return AggFunction::countDistinct;
          }
          else if (hashCode == count_HASH)
          {
            return AggFunction::count;
          }
          else if (hashCode == first_HASH)
          {
            return AggFunction::first;
          }
          else if (hashCode == last_HASH)
          {
            return AggFunction::last;
          }
          else if (hashCode == kurtosis_HASH)
          {
            return AggFunction::kurtosis;
          }
          else if (hashCode == max_HASH)
          {
            return AggFunction::max;
          }
          else if (hashCode == min_HASH)
          {
            return AggFunction::min;
          }
          else if (hashCode == skewness_HASH)
          {
            return AggFunction::skewness;
          }
          else if (hashCode == stddev_samp_HASH)
          {
            return AggFunction::stddev_samp;
          }
          else if (hashCode == stddev_pop_HASH)
          {
            return AggFunction::stddev_pop;
          }
          else if (hashCode == sum_HASH)
          {
            return AggFunction::sum;
          }
          else if (hashCode == sumDistinct_HASH)
          {
            return AggFunction::sumDistinct;
          }
          else if (hashCode == var_samp_HASH)
          {
            return AggFunction::var_samp;
          }
          else if (hashCode == var_pop_HASH)
          {
            return AggFunction::var_pop;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggFunction>(hashCode);
          }

          return AggFunction::NOT_SET;
        }

        Aws::String GetNameForAggFunction(AggFunction enumValue)
        {
          switch(enumValue)
          {
          case AggFunction::NOT_SET:
            return {};
          case AggFunction::avg:
            return "avg";
          case AggFunction::countDistinct:
            return "countDistinct";
          case AggFunction::count:
            return "count";
          case AggFunction::first:
            return "first";
          case AggFunction::last:
            return "last";
          case AggFunction::kurtosis:
            return "kurtosis";
          case AggFunction::max:
            return "max";
          case AggFunction::min:
            return "min";
          case AggFunction::skewness:
            return "skewness";
          case AggFunction::stddev_samp:
            return "stddev_samp";
          case AggFunction::stddev_pop:
            return "stddev_pop";
          case AggFunction::sum:
            return "sum";
          case AggFunction::sumDistinct:
            return "sumDistinct";
          case AggFunction::var_samp:
            return "var_samp";
          case AggFunction::var_pop:
            return "var_pop";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggFunctionMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
