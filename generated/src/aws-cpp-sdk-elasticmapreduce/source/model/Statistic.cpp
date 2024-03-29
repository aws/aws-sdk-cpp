﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/Statistic.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace StatisticMapper
      {

        static const int SAMPLE_COUNT_HASH = HashingUtils::HashString("SAMPLE_COUNT");
        static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");
        static const int SUM_HASH = HashingUtils::HashString("SUM");
        static const int MINIMUM_HASH = HashingUtils::HashString("MINIMUM");
        static const int MAXIMUM_HASH = HashingUtils::HashString("MAXIMUM");


        Statistic GetStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAMPLE_COUNT_HASH)
          {
            return Statistic::SAMPLE_COUNT;
          }
          else if (hashCode == AVERAGE_HASH)
          {
            return Statistic::AVERAGE;
          }
          else if (hashCode == SUM_HASH)
          {
            return Statistic::SUM;
          }
          else if (hashCode == MINIMUM_HASH)
          {
            return Statistic::MINIMUM;
          }
          else if (hashCode == MAXIMUM_HASH)
          {
            return Statistic::MAXIMUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Statistic>(hashCode);
          }

          return Statistic::NOT_SET;
        }

        Aws::String GetNameForStatistic(Statistic enumValue)
        {
          switch(enumValue)
          {
          case Statistic::NOT_SET:
            return {};
          case Statistic::SAMPLE_COUNT:
            return "SAMPLE_COUNT";
          case Statistic::AVERAGE:
            return "AVERAGE";
          case Statistic::SUM:
            return "SUM";
          case Statistic::MINIMUM:
            return "MINIMUM";
          case Statistic::MAXIMUM:
            return "MAXIMUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatisticMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
