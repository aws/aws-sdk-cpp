/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DifferentialPrivacyAggregationType.h>
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
      namespace DifferentialPrivacyAggregationTypeMapper
      {

        static const int AVG_HASH = HashingUtils::HashString("AVG");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int COUNT_DISTINCT_HASH = HashingUtils::HashString("COUNT_DISTINCT");
        static const int SUM_HASH = HashingUtils::HashString("SUM");
        static const int STDDEV_HASH = HashingUtils::HashString("STDDEV");


        DifferentialPrivacyAggregationType GetDifferentialPrivacyAggregationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVG_HASH)
          {
            return DifferentialPrivacyAggregationType::AVG;
          }
          else if (hashCode == COUNT_HASH)
          {
            return DifferentialPrivacyAggregationType::COUNT;
          }
          else if (hashCode == COUNT_DISTINCT_HASH)
          {
            return DifferentialPrivacyAggregationType::COUNT_DISTINCT;
          }
          else if (hashCode == SUM_HASH)
          {
            return DifferentialPrivacyAggregationType::SUM;
          }
          else if (hashCode == STDDEV_HASH)
          {
            return DifferentialPrivacyAggregationType::STDDEV;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DifferentialPrivacyAggregationType>(hashCode);
          }

          return DifferentialPrivacyAggregationType::NOT_SET;
        }

        Aws::String GetNameForDifferentialPrivacyAggregationType(DifferentialPrivacyAggregationType enumValue)
        {
          switch(enumValue)
          {
          case DifferentialPrivacyAggregationType::NOT_SET:
            return {};
          case DifferentialPrivacyAggregationType::AVG:
            return "AVG";
          case DifferentialPrivacyAggregationType::COUNT:
            return "COUNT";
          case DifferentialPrivacyAggregationType::COUNT_DISTINCT:
            return "COUNT_DISTINCT";
          case DifferentialPrivacyAggregationType::SUM:
            return "SUM";
          case DifferentialPrivacyAggregationType::STDDEV:
            return "STDDEV";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DifferentialPrivacyAggregationTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
