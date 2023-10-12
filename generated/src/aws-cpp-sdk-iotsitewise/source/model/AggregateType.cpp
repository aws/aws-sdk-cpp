/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AggregateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace AggregateTypeMapper
      {

        static constexpr uint32_t AVERAGE_HASH = ConstExprHashingUtils::HashString("AVERAGE");
        static constexpr uint32_t COUNT_HASH = ConstExprHashingUtils::HashString("COUNT");
        static constexpr uint32_t MAXIMUM_HASH = ConstExprHashingUtils::HashString("MAXIMUM");
        static constexpr uint32_t MINIMUM_HASH = ConstExprHashingUtils::HashString("MINIMUM");
        static constexpr uint32_t SUM_HASH = ConstExprHashingUtils::HashString("SUM");
        static constexpr uint32_t STANDARD_DEVIATION_HASH = ConstExprHashingUtils::HashString("STANDARD_DEVIATION");


        AggregateType GetAggregateTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVERAGE_HASH)
          {
            return AggregateType::AVERAGE;
          }
          else if (hashCode == COUNT_HASH)
          {
            return AggregateType::COUNT;
          }
          else if (hashCode == MAXIMUM_HASH)
          {
            return AggregateType::MAXIMUM;
          }
          else if (hashCode == MINIMUM_HASH)
          {
            return AggregateType::MINIMUM;
          }
          else if (hashCode == SUM_HASH)
          {
            return AggregateType::SUM;
          }
          else if (hashCode == STANDARD_DEVIATION_HASH)
          {
            return AggregateType::STANDARD_DEVIATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregateType>(hashCode);
          }

          return AggregateType::NOT_SET;
        }

        Aws::String GetNameForAggregateType(AggregateType enumValue)
        {
          switch(enumValue)
          {
          case AggregateType::NOT_SET:
            return {};
          case AggregateType::AVERAGE:
            return "AVERAGE";
          case AggregateType::COUNT:
            return "COUNT";
          case AggregateType::MAXIMUM:
            return "MAXIMUM";
          case AggregateType::MINIMUM:
            return "MINIMUM";
          case AggregateType::SUM:
            return "SUM";
          case AggregateType::STANDARD_DEVIATION:
            return "STANDARD_DEVIATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregateTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
