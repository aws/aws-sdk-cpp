/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AggregationTypeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace AggregationTypeNameMapper
      {

        static const int Statistics_HASH = HashingUtils::HashString("Statistics");
        static const int Percentiles_HASH = HashingUtils::HashString("Percentiles");
        static const int Cardinality_HASH = HashingUtils::HashString("Cardinality");


        AggregationTypeName GetAggregationTypeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Statistics_HASH)
          {
            return AggregationTypeName::Statistics;
          }
          else if (hashCode == Percentiles_HASH)
          {
            return AggregationTypeName::Percentiles;
          }
          else if (hashCode == Cardinality_HASH)
          {
            return AggregationTypeName::Cardinality;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregationTypeName>(hashCode);
          }

          return AggregationTypeName::NOT_SET;
        }

        Aws::String GetNameForAggregationTypeName(AggregationTypeName enumValue)
        {
          switch(enumValue)
          {
          case AggregationTypeName::NOT_SET:
            return {};
          case AggregationTypeName::Statistics:
            return "Statistics";
          case AggregationTypeName::Percentiles:
            return "Percentiles";
          case AggregationTypeName::Cardinality:
            return "Cardinality";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregationTypeNameMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
