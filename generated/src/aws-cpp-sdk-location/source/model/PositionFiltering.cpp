/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/PositionFiltering.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LocationService
  {
    namespace Model
    {
      namespace PositionFilteringMapper
      {

        static constexpr uint32_t TimeBased_HASH = ConstExprHashingUtils::HashString("TimeBased");
        static constexpr uint32_t DistanceBased_HASH = ConstExprHashingUtils::HashString("DistanceBased");
        static constexpr uint32_t AccuracyBased_HASH = ConstExprHashingUtils::HashString("AccuracyBased");


        PositionFiltering GetPositionFilteringForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TimeBased_HASH)
          {
            return PositionFiltering::TimeBased;
          }
          else if (hashCode == DistanceBased_HASH)
          {
            return PositionFiltering::DistanceBased;
          }
          else if (hashCode == AccuracyBased_HASH)
          {
            return PositionFiltering::AccuracyBased;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PositionFiltering>(hashCode);
          }

          return PositionFiltering::NOT_SET;
        }

        Aws::String GetNameForPositionFiltering(PositionFiltering enumValue)
        {
          switch(enumValue)
          {
          case PositionFiltering::NOT_SET:
            return {};
          case PositionFiltering::TimeBased:
            return "TimeBased";
          case PositionFiltering::DistanceBased:
            return "DistanceBased";
          case PositionFiltering::AccuracyBased:
            return "AccuracyBased";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PositionFilteringMapper
    } // namespace Model
  } // namespace LocationService
} // namespace Aws
