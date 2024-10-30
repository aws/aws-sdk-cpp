/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoadSnapNoticeCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoRoutes
  {
    namespace Model
    {
      namespace RoadSnapNoticeCodeMapper
      {

        static const int TracePointsHeadingIgnored_HASH = HashingUtils::HashString("TracePointsHeadingIgnored");
        static const int TracePointsIgnored_HASH = HashingUtils::HashString("TracePointsIgnored");
        static const int TracePointsMovedByLargeDistance_HASH = HashingUtils::HashString("TracePointsMovedByLargeDistance");
        static const int TracePointsNotMatched_HASH = HashingUtils::HashString("TracePointsNotMatched");
        static const int TracePointsOutOfSequence_HASH = HashingUtils::HashString("TracePointsOutOfSequence");
        static const int TracePointsSpeedEstimated_HASH = HashingUtils::HashString("TracePointsSpeedEstimated");
        static const int TracePointsSpeedIgnored_HASH = HashingUtils::HashString("TracePointsSpeedIgnored");


        RoadSnapNoticeCode GetRoadSnapNoticeCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TracePointsHeadingIgnored_HASH)
          {
            return RoadSnapNoticeCode::TracePointsHeadingIgnored;
          }
          else if (hashCode == TracePointsIgnored_HASH)
          {
            return RoadSnapNoticeCode::TracePointsIgnored;
          }
          else if (hashCode == TracePointsMovedByLargeDistance_HASH)
          {
            return RoadSnapNoticeCode::TracePointsMovedByLargeDistance;
          }
          else if (hashCode == TracePointsNotMatched_HASH)
          {
            return RoadSnapNoticeCode::TracePointsNotMatched;
          }
          else if (hashCode == TracePointsOutOfSequence_HASH)
          {
            return RoadSnapNoticeCode::TracePointsOutOfSequence;
          }
          else if (hashCode == TracePointsSpeedEstimated_HASH)
          {
            return RoadSnapNoticeCode::TracePointsSpeedEstimated;
          }
          else if (hashCode == TracePointsSpeedIgnored_HASH)
          {
            return RoadSnapNoticeCode::TracePointsSpeedIgnored;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoadSnapNoticeCode>(hashCode);
          }

          return RoadSnapNoticeCode::NOT_SET;
        }

        Aws::String GetNameForRoadSnapNoticeCode(RoadSnapNoticeCode enumValue)
        {
          switch(enumValue)
          {
          case RoadSnapNoticeCode::NOT_SET:
            return {};
          case RoadSnapNoticeCode::TracePointsHeadingIgnored:
            return "TracePointsHeadingIgnored";
          case RoadSnapNoticeCode::TracePointsIgnored:
            return "TracePointsIgnored";
          case RoadSnapNoticeCode::TracePointsMovedByLargeDistance:
            return "TracePointsMovedByLargeDistance";
          case RoadSnapNoticeCode::TracePointsNotMatched:
            return "TracePointsNotMatched";
          case RoadSnapNoticeCode::TracePointsOutOfSequence:
            return "TracePointsOutOfSequence";
          case RoadSnapNoticeCode::TracePointsSpeedEstimated:
            return "TracePointsSpeedEstimated";
          case RoadSnapNoticeCode::TracePointsSpeedIgnored:
            return "TracePointsSpeedIgnored";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoadSnapNoticeCodeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
