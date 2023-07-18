/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/AggregationPeriod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruProfiler
  {
    namespace Model
    {
      namespace AggregationPeriodMapper
      {

        static const int PT5M_HASH = HashingUtils::HashString("PT5M");
        static const int PT1H_HASH = HashingUtils::HashString("PT1H");
        static const int P1D_HASH = HashingUtils::HashString("P1D");


        AggregationPeriod GetAggregationPeriodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PT5M_HASH)
          {
            return AggregationPeriod::PT5M;
          }
          else if (hashCode == PT1H_HASH)
          {
            return AggregationPeriod::PT1H;
          }
          else if (hashCode == P1D_HASH)
          {
            return AggregationPeriod::P1D;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregationPeriod>(hashCode);
          }

          return AggregationPeriod::NOT_SET;
        }

        Aws::String GetNameForAggregationPeriod(AggregationPeriod enumValue)
        {
          switch(enumValue)
          {
          case AggregationPeriod::PT5M:
            return "PT5M";
          case AggregationPeriod::PT1H:
            return "PT1H";
          case AggregationPeriod::P1D:
            return "P1D";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregationPeriodMapper
    } // namespace Model
  } // namespace CodeGuruProfiler
} // namespace Aws
