/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/TimePointGranularity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace TimePointGranularityMapper
      {

        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");
        static constexpr uint32_t SPECIFIC_HASH = ConstExprHashingUtils::HashString("SPECIFIC");


        TimePointGranularity GetTimePointGranularityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return TimePointGranularity::ALL;
          }
          else if (hashCode == SPECIFIC_HASH)
          {
            return TimePointGranularity::SPECIFIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimePointGranularity>(hashCode);
          }

          return TimePointGranularity::NOT_SET;
        }

        Aws::String GetNameForTimePointGranularity(TimePointGranularity enumValue)
        {
          switch(enumValue)
          {
          case TimePointGranularity::NOT_SET:
            return {};
          case TimePointGranularity::ALL:
            return "ALL";
          case TimePointGranularity::SPECIFIC:
            return "SPECIFIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimePointGranularityMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
